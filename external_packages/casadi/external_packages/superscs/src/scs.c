/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
 *                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
 *                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
 * Copyright (c) 2012 Brendan O'Donoghue (bodonoghue85@gmail.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 */
#include "scs.h"
#include "normalize.h"
#include "directions.h"
#include "linsys/amatrix.h"
#include <time.h>

/* if verbose print summary output every this num iterations */
#define SCS_PRINT_INTERVAL 100
/* check for convergence every this num iterations */
#define SCS_CONVERGED_INTERVAL 1

/* tolerance at which we declare problem indeterminate */
#define SCS_INDETERMINATE_TOL 1e-9

/**
 *  \brief Structure to hold residual information (unnormalized) 
 */
struct scs_residuals {
    /**
     * \brief The last iteration when the residuals were updated.
     */
    scs_int last_iter;
    /**
     * \brief Dual residual
     * 
     * \f[
     * \text{resdual} = \frac{E(A'y + \tau c)}{\tau(1+\|c\|)\cdot \text{scale}_c\cdot \text{scale}}
     * \f]
     */
    scs_float res_dual;
    /**
     * \brief Primal residual
     * 
     * \f[
     *  \text{respri} = \frac{\|D(Ax+s-\tau b)\|}{\tau(1+\|b\|)(\text{scale}_b\cdot \text{scale})}
     * \f]
     */
    scs_float res_pri;
    /**
     * \brief Infeasibility residual
     * 
     * \f[
     *  \text{infres} = -\frac{\|Db\| \|EA'y\|}{b'y \cdot \text{scale}}
     * \f]
     */
    scs_float res_infeas;
    /**
     * \brief Unboundedness
     * 
     * \f[
     * \text{unbdd} = -\frac{\|Ec\| \|D(Ax+s)}{c'x\cdot \text{scale}}
     * \f]
     */
    scs_float res_unbdd;
    /**
     * \brief Relative duality gap defined as 
     * 
     * \f[
     *  \text{relgap} = \frac{c'x + b'y}{1+|c'x|+|b'y|}
     * \f]
     */
    scs_float rel_gap;
    scs_float cTx_by_tau; /* not divided by tau */
    scs_float bTy_by_tau; /* not divided by tau */
    /**
     * Variable \f$\tau\f$ (\f$\bar{\tau}\f$ in SuperSCS)
     */
    scs_float tau; /* for superSCS it's tau_b */
    /**
     * Variable \f$\kappa\f$ (\f$\bar{\kappa}\f$ in SuperSCS)
     */
    scs_float kap; /* for superSCS it's kap_b */
};
/* printing header */
static const char *SCS_HEADER[] = {
    " Iter ", " pri res ", " dua res ", " rel gap ",
    " pri obj ", " dua obj ", " kap/tau ", "   FPR   ", " time (s)"
};
static const scs_int scs_hspace = 9;
static const scs_int scs_header_length = 9;
static const scs_int scs_header_line_length = 87;

static scs_int scs_isnan(scs_float x) {
    return (isnan(x)); /* `isnan` works both for `float` and `double` types */
}

static ScsDirectionCache * scs_init_direction_cache(scs_int memory, scs_int l, scs_int print_mode, ScsDirectionType dir_type) {
    ScsDirectionCache * RESTRICT cache = scs_calloc(1, sizeof (*cache));
    scs_int length_S = 0, length_U = 0, length_S_minus_U = 0, length_t = 0, length_ws = 0;


    if (cache == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: allocating YSCache failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }

    cache->ls_wspace_length = 0;
    cache->current_mem = 0;

    switch (dir_type) {
        case restarted_broyden:
            /* we allocate one extra memory position because it's needed */
            length_S = (1 + memory) * l;
            length_U = (1 + memory) * l;
            break;
        case anderson_acceleration:
            length_S = memory * l;
            length_U = memory * l;
            length_S_minus_U = memory * l;
            /* -----------------------------------------------------------------
             * Although t is a vector of dimension 'memory', we allocate space
             * of length 'l' because we first need to store the residual 'R'
             * therein (see directions.c: scs_compute_dir_anderson).
             * Note: we give some additional space because the BLAS documentation
             * says that we should give **at least** this much memory.
             * ----------------------------------------------------------------- */
            length_t = l;
#ifdef SVD_ACTIVATED
            cache->ls_wspace_length = 1000 + scs_svd_workspace_size(l, memory);
            /* -----------------------------------------------------------------
             * In Anderson's acceleration, we solve a least squares problem
             * using lapack's SVD-based 'sgelss' (see svdls). This requires a
             * workspace whose size is given by 'cache->ls_wspace_length' (above).
             * To that we add another 'memory' memory positions to store the
             * singular values of the LHS matrix and another 'l*memory'
             * memory positions to make a copy of the Y-cache; this is
             * because 'sgelss' modified the LHS (i.e., the Y-cache).
             * ----------------------------------------------------------------- */
            length_ws = (cache->ls_wspace_length) + memory * (1 + l);
#else
            cache->ls_wspace_length = 1000 + scs_qr_workspace_size(l, memory);
            /* -----------------------------------------------------------------
             * In Anderson's acceleration, we solve a least squares problem
             * using lapack's SVD-based 'sgelss' (see svdls). This requires a
             * workspace whose size is given by 'cache->ls_wspace_length' (above).
             * To that we add another 'l*memory'
             * memory positions to make a copy of the Y-cache; this is
             * because 'sgelss' modified the LHS (i.e., the Y-cache).
             * ----------------------------------------------------------------- */
            length_ws = (cache->ls_wspace_length) + memory * l;
#endif
            break;
        default:
            break;
    }

    cache->S = scs_malloc(length_S * sizeof (scs_float));
    cache->U = scs_malloc(length_U * sizeof (scs_float));
    cache->S_minus_Y = scs_malloc(length_S_minus_U * sizeof (scs_float));
    cache->t = scs_malloc(length_t * sizeof (scs_float));
    cache->ls_wspace = scs_malloc(length_ws * sizeof (scs_float));

    /* the cache must know its memory length */
    cache->mem = memory;

    /* initial active memory is 0 */
    scs_reset_direction_cache(cache);
    return cache;
}

static void scs_free_direction_cache(ScsDirectionCache * RESTRICT cache) {
    if (cache == SCS_NULL)
        return;
    scs_free(cache->S);
    scs_free(cache->U);
    scs_free(cache->S_minus_Y);
    scs_free(cache->t);
    scs_free(cache->ls_wspace);
    scs_free(cache);
}

static void scs_free_work(ScsWork * RESTRICT work) {
    if (work == SCS_NULL) return;
    scs_free(work->u);
    scs_free(work->v);
    scs_free(work->u_t);
    scs_free(work->u_prev);
    scs_free(work->h);
    scs_free(work->g);
    scs_free(work->b);
    scs_free(work->c);
    scs_free(work->pr);
    scs_free(work->dr);
    if (work->scal != SCS_NULL) {
        scs_free(work->scal->D);
        scs_free(work->scal->E);
        scs_free(work->scal);
    }
    scs_free(work->u_b);

    if (work->stgs->do_super_scs == 1) {
        scs_free(work->R);
        scs_free(work->R_prev);
        scs_free(work->dir);
        scs_free(work->dut);
        scs_free(work->Sk);
        scs_free(work->Yk);
        scs_free(work->wu);
        scs_free(work->wu_t);
        scs_free(work->wu_b);
        scs_free(work->Rwu);
        scs_free_direction_cache(work->direction_cache);
        scs_free(work->s_b);
        scs_free(work->H);
    }
    scs_free(work);
}

/* LCOV_EXCL_START */
static void scs_print_init_header(
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone) {
    scs_int i;
    ScsSettings * RESTRICT stgs = data->stgs;
    char *RESTRICT coneStr = scs_get_cone_header(cone);
    char *RESTRICT linSysMethod = scs_get_linsys_method(data->A, data->stgs);
    FILE * RESTRICT stream = stgs->output_stream;
    scs_int print_mode = stgs->do_override_streams;
    for (i = 0; i < scs_header_line_length; ++i) {
        scs_special_print(print_mode, stream, "-");
    }
    scs_special_print(print_mode, stream, "\n\tSCS v%s - Superlinear Splitting Conic Solver (SuperSCS)\n\t"
            "Web: https://kul-forbes.github.io/scs\n\t"
            "(c) P. Sopasakis, K. Menounou, P. Patrinos, KU Leuven, 2017-8\n\t"
            "(c) Brendan O'Donoghue, Stanford University, 2012-2016\n",
            scs_version());
    for (i = 0; i < scs_header_line_length; ++i) {
        scs_special_print(print_mode, stream, "-");
    }
    scs_special_print(print_mode, stream, "\n");
    if (linSysMethod) {
        scs_special_print(print_mode, stream, "Lin-sys: %s\n", linSysMethod);
        scs_free(linSysMethod);
    }
    if (stgs->normalize) {
        scs_special_print(print_mode, stream, "eps = %.2e, alpha = %.2f, max_iters = %i, normalize = %i, "
                "scale = %2.2f\n",
                stgs->eps, stgs->alpha, (int) stgs->max_iters,
                (int) stgs->normalize, stgs->scale);
    } else {
        scs_special_print(print_mode, stream, "eps = %.2e, alpha = %.2f, max_iters = %i, normalize = %i\n",
                stgs->eps, stgs->alpha, (int) stgs->max_iters,
                (int) stgs->normalize);
    }
    scs_special_print(print_mode, stream, "do_super_scs = %i, direction = %i, "
            "memory = %i\n", (int) stgs->do_super_scs, (int) stgs->direction,
            (int) stgs->memory);
    scs_special_print(print_mode, stream, "Variables n = %i, constraints m = %i\n", (int) data->n, (int) data->m);
    scs_special_print(print_mode, stream, "%s", coneStr);
    scs_free(coneStr);
#ifdef MATLAB_MEX_FILE
    mexEvalString("drawnow;");
#endif
}

/* LCOV_EXCL_STOP */

static void scs_populate_on_failure(
        scs_int m,
        scs_int n,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info,
        scs_int statusVal,
        const char *RESTRICT msg) {
    if (info) {
        info->relGap = NAN;
        info->resPri = NAN;
        info->resDual = NAN;
        info->pobj = NAN;
        info->dobj = NAN;
        info->iter = -1;
        info->statusVal = statusVal;
        info->solveTime = NAN;
        strncpy(info->status, msg, SCS_INFO_STATUS_MSG_LENGTH);
    }
    if (sol) {
        if (n > 0) {
            if (sol->x == SCS_NULL)
                sol->x = scs_malloc(sizeof (scs_float) * n);
            scs_scale_array(sol->x, NAN, n);
        }
        if (m > 0) {
            if (sol->y == SCS_NULL)
                sol->y = scs_malloc(sizeof (scs_float) * m);
            scs_scale_array(sol->y, NAN, m);
            if (sol->s == SCS_NULL)
                sol->s = scs_malloc(sizeof (scs_float) * m);
            scs_scale_array(sol->s, NAN, m);
        }
    }
}

static scs_int scs_failure(
        ScsWork * RESTRICT work,
        scs_int m,
        scs_int n,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info,
        scs_int stint,
        const char *RESTRICT msg,
        const char *RESTRICT ststr,
        scs_int print_mode) {
    scs_int status = stint;
    scs_populate_on_failure(m, n, sol, info, status, ststr);
    scs_special_print(print_mode, stderr, "Failure:%s\n", msg);
    endInterruptListener();
    return status;
}

static void scs_warm_start_vars(
        ScsWork * RESTRICT work,
        const ScsSolution * RESTRICT sol) {
    scs_int i;
    scs_int n = work->n;
    scs_int m = work->m;
    scs_float * RESTRICT Ax = SCS_NULL;
    scs_float * RESTRICT ATy = SCS_NULL;

    if (work->stgs->do_super_scs == 0) {
        memset(work->v, 0, n * sizeof (scs_float));
        memcpy(work->u, sol->x, n * sizeof (scs_float));
        memcpy(&(work->u[n]), sol->y, m * sizeof (scs_float));
        memcpy(&(work->v[n]), sol->s, m * sizeof (scs_float));
        work->v[n + m] = 0.0;
        work->u[n + m] = 1.0;
    } else {
        memcpy(work->u_t, sol->x, n * sizeof (scs_float));
        memcpy(&(work->u_t[n]), sol->y, m * sizeof (scs_float));
        work->u_t[n + m] = 1.0;
    }
#ifndef NOVALIDATE
    if (work->stgs->do_super_scs == 0) {
        for (i = 0; i < n + m + 1; ++i) {
            if (scs_isnan(work->u[i])) {
                work->u[i] = 0;
            }
            if (scs_isnan(work->v[i])) {
                work->v[i] = 0;
            }
        }
    } else {
        for (i = 0; i < n + m + 1; ++i) {
            if (scs_isnan(work->u_t[i])) {
                work->u_t[i] = 0;
            }
        }
    }
#endif
    if (work->stgs->normalize) {
        scs_normalize_warm_start(work);
    }
    if (work->stgs->do_super_scs) {
        Ax = scs_calloc(m, sizeof (scs_float));
        ATy = scs_calloc(n, sizeof (scs_float));

        scs_accum_by_a(work->A, work->p, work->u_t, Ax); /* Ax_t = A*x_t */
        scs_accum_by_a_trans(work->A, work->p, &(work->u_t[n]), ATy); /* ATy_t = AT*y_t */
        for (i = 0; i < n; ++i) {
            /* rho_x*x_t  + ATy_t + c*tau_t */
            work->u[i] = work->u_t[i] + ATy[i] + work->c[i] * work->u_t[n + m];
        }
        for (i = 0; i < m; ++i) {
            /* -Ax_t  + y_t + b*tau_t */
            work->u[i + n] = -Ax[i] + work->u_t[i + n] + work->b[i] * work->u_t[n + m];
        }
        /* -cTx_t - BTy_t + tau_t */
        work->u[n + m] = -scs_inner_product(work->c, work->u_t, work->n)
                - scs_inner_product(work->b, &(work->u_t[n]), work->m)
                + work->u_t[n + m];
    }
    if (Ax != SCS_NULL) {
        scs_free(Ax);
    }
    if (ATy != SCS_NULL) {
        scs_free(ATy);
    }
}

static scs_float scs_calc_primal_resid(
        ScsWork * RESTRICT work,
        const scs_float * RESTRICT x,
        const scs_float * RESTRICT s,
        const scs_float tau,
        scs_float * RESTRICT nmAxs) {
    scs_int i;
    scs_float pres = 0, scale, *RESTRICT pr = work->pr;
    *nmAxs = 0;
    memset(pr, 0, work->m * sizeof (scs_float));
    scs_accum_by_a(work->A, work->p, x, pr);
    scs_add_scaled_array(pr, s, work->m, 1.0); /* pr = Ax + s */
    for (i = 0; i < work->m; ++i) {
        scale =
                work->stgs->normalize ? work->scal->D[i] / (work->sc_b * work->stgs->scale) : 1;
        scale = scale * scale;
        *nmAxs += (pr[i] * pr[i]) * scale;
        pres += (pr[i] - work->b[i] * tau) * (pr[i] - work->b[i] * tau) * scale;
    }
    *nmAxs = SQRTF(*nmAxs);
    return SQRTF(pres); /* norm(Ax + s - b * tau), for superSCS: norm(Ax_b + s_b - b * tau_b) */
}

static scs_float scs_calc_dual_resid(
        ScsWork * RESTRICT work,
        const scs_float * RESTRICT y,
        const scs_float tau,
        scs_float * RESTRICT nmATy) {
    scs_int i;
    scs_float dres = 0, scale, *dr = work->dr;
    *nmATy = 0;
    memset(dr, 0, work->n * sizeof (scs_float));
    scs_accum_by_a_trans(work->A, work->p, y, dr); /* dr = A'y */
    for (i = 0; i < work->n; ++i) {
        scale =
                work->stgs->normalize ? (work->scal->E[i] / (work->sc_c * work->stgs->scale)) : 1;
        scale = scale * scale;
        *nmATy += (dr[i] * dr[i]) * scale;
        dres += (dr[i] + work->c[i] * tau) * (dr[i] + work->c[i] * tau) * scale;
    }
    *nmATy = SQRTF(*nmATy);
    return SQRTF(dres); /* norm(A'y + c * tau), for superSCS: norm(A'y_b + c * tau_b)*/
}

/* calculates un-normalized quantities */
static void scs_calc_residuals(
        ScsWork * RESTRICT work,
        struct scs_residuals * RESTRICT res,
        scs_int iter) {
    scs_float * RESTRICT x;
    scs_float * RESTRICT y;
    scs_float * RESTRICT s;
    scs_float nmpr_tau;
    scs_float nmdr_tau;
    scs_float nmAxs_tau;
    scs_float nmATy_tau;
    scs_float cTx, bTy;
    scs_int n = work->n, m = work->m;

    /* checks if the residuals are unchanged by checking iteration */
    if (res->last_iter == iter) {
        return;
    }
    res->last_iter = iter;

    s = &(work->v[work->n]);
    x = work->u;
    y = &(work->u[work->n]);

    res->tau = ABS(work->u[n + m]);
    res->kap = ABS(work->v[n + m]) /
            (work->stgs->normalize ? (work->stgs->scale * work->sc_c * work->sc_b) : 1);

    nmpr_tau = scs_calc_primal_resid(work, x, s, res->tau, &nmAxs_tau);
    nmdr_tau = scs_calc_dual_resid(work, y, res->tau, &nmATy_tau);

    res->bTy_by_tau =
            scs_inner_product(y, work->b, m) /
            (work->stgs->normalize ? (work->stgs->scale * work->sc_c * work->sc_b) : 1);
    res->cTx_by_tau =
            scs_inner_product(x, work->c, n) /
            (work->stgs->normalize ? (work->stgs->scale * work->sc_c * work->sc_b) : 1);

    res->res_infeas =
            res->bTy_by_tau < 0 ? work->nm_b * nmATy_tau / -res->bTy_by_tau : NAN;
    res->res_unbdd =
            res->cTx_by_tau < 0 ? work->nm_c * nmAxs_tau / -res->cTx_by_tau : NAN;

    bTy = res->bTy_by_tau / res->tau;
    cTx = res->cTx_by_tau / res->tau;

    res->res_pri = nmpr_tau / (1 + work->nm_b) / res->tau;
    res->res_dual = nmdr_tau / (1 + work->nm_c) / res->tau;
    res->rel_gap = ABS(cTx + bTy) / (1 + ABS(cTx) + ABS(bTy));
}

static void scs_calc_residuals_superscs(
        ScsWork * RESTRICT work,
        struct scs_residuals * RESTRICT residuals,
        scs_int iter) {
    scs_float * RESTRICT xb;
    scs_float * RESTRICT yb;
    scs_float * RESTRICT sb;
    scs_float cTx;
    scs_float bTy;
    scs_float * RESTRICT pr = work->pr;
    scs_float * RESTRICT dr = work->dr;
    scs_int n = work->n;
    scs_int m = work->m;
    scs_int i;
    scs_float norm_D_A_x_plus_s; /* norm of D*(Ax+s), intermediate variable */
    scs_float norm_E_Atran_yb; /* norm of E*A'*y,   intermediate variable */
    scs_float tmp__c_times_x; /* c'x */
    scs_float tmp__b_times_yb; /* b'y */
    const scs_float temp1 = work->sc_b * work->stgs->scale; /* auxiliary variable #1 */
    const scs_float temp2 = work->sc_c * temp1; /* auxiliary variable #2 */
    const scs_float temp3 = work->sc_c * work->stgs->scale; /* auxiliary variable #3 */


    /* checks if the residuals are unchanged by checking iteration */
    if (residuals->last_iter == iter) {
        return;
    }
    residuals->last_iter = iter;

    sb = work->s_b;
    xb = work->u_b;
    yb = &(work->u_b[n]);

    residuals->kap = work->kap_b;
    residuals->tau = work->u_b[n + m]; /* it's actually tau_b */
    memset(pr, 0, work->m * sizeof (scs_float)); /* pr = 0 */
    memset(dr, 0, work->n * sizeof (scs_float)); /* dr = 0 */

    scs_accum_by_a(work->A, work->p, xb, pr); /* pr = A xb */
    scs_add_scaled_array(pr, sb, work->m, 1.0); /* pr = A xb + sb */
    /* --- compute ||D(Ax + s)|| --- */
    norm_D_A_x_plus_s = 0;
    if (work->stgs->normalize) {
        for (i = 0; i < m; ++i) {
            scs_float tmp = work->scal->D[i] * pr[i];
            norm_D_A_x_plus_s += tmp * tmp;
        }
    } else {
        norm_D_A_x_plus_s = scs_norm_squared(pr, m);
    }
    norm_D_A_x_plus_s = SQRTF(norm_D_A_x_plus_s);
    scs_add_scaled_array(pr, work->b, m, -residuals->tau); /* pr = A xb + sb - b taub */

    scs_accum_by_a_trans(work->A, work->p, yb, dr); /* dr = A' yb */


    /* --- compute ||E A' yb|| --- */
    norm_E_Atran_yb = 0.0;
    if (work->stgs->normalize) {
        for (i = 0; i < n; ++i) {
            scs_float tmp = work->scal->E[i] * dr[i];
            norm_E_Atran_yb += tmp * tmp;
        }
    } else {
        norm_E_Atran_yb = scs_norm_squared(dr, n);
    }
    norm_E_Atran_yb = SQRTF(norm_E_Atran_yb);
    scs_add_scaled_array(dr, work->c, work->n, residuals->tau); /* dr = A' yb + c taub */

    /*
     * bTy_by_tau = b'yb / (scale*sc_c*sc_b)
     * cTx_by_tau = c'xb / (scale*sc_c*sc_b)
     */
    tmp__b_times_yb = scs_inner_product(yb, work->b, m);
    residuals->bTy_by_tau = tmp__b_times_yb / (work->stgs->normalize ? (temp2) : 1);
    tmp__c_times_x = scs_inner_product(xb, work->c, n);
    residuals->cTx_by_tau = tmp__c_times_x / (work->stgs->normalize ? (temp2) : 1);

    /*
     * bTy = b'yb / (scale*sc_c*sc_b) / taub
     * cTx = c'xb / (scale*sc_c*sc_b) / taub
     */
    bTy = residuals->bTy_by_tau / residuals->tau;
    cTx = residuals->cTx_by_tau / residuals->tau;

    /* PRIMAL RESIDUAL */
    if (work->stgs->normalize) {
        residuals->res_pri = 0;
        for (i = 0; i < m; ++i) {
            scs_float tmp = work->scal->D[i] * pr[i];
            residuals->res_pri += (tmp * tmp);
        }
        residuals->res_pri = SQRTF(residuals->res_pri) / residuals->tau;
        residuals->res_pri /= ((1 + work->nm_b) * temp1);
    } else {
        residuals->res_pri = scs_norm(pr, m) / residuals->tau;
        residuals->res_pri /= (1 + work->nm_b);
    }

    /* DUAL RESIDUAL */
    if (work->stgs->normalize) {
        residuals->res_dual = 0;
        for (i = 0; i < n; ++i) {
            scs_float tmp = work->scal->E[i] * dr[i];
            residuals->res_dual += (tmp * tmp);
        }
        residuals->res_dual = SQRTF(residuals->res_dual) / residuals->tau;
        residuals->res_dual /= ((1 + work->nm_c) * temp3);
    } else {
        residuals->res_dual = scs_norm(dr, n) / residuals->tau;
        residuals->res_dual /= (1 + work->nm_c);
    }

    /* UNBOUNDEDNESS */
    if (tmp__c_times_x < 0) {
        scs_float norm_Ec = 0;
        if (work->stgs->normalize) {
            for (i = 0; i < n; ++i) {
                scs_float tmp = work->scal->E[i] * work->c[i];
                norm_Ec += (tmp * tmp);
            }
        } else {
            norm_Ec += scs_norm_squared(work->c, n);
        }
        residuals->res_unbdd = -SQRTF(norm_Ec) * norm_D_A_x_plus_s / tmp__c_times_x;
        residuals->res_unbdd /= (work->stgs->normalize ? work->stgs->scale : 1);
    } else {
        residuals->res_unbdd = NAN; /* not unbounded */
    }


    /* INFEASIBILITY */
    if (tmp__b_times_yb < 0) {
        scs_float norm_Db_squared = 0;
        if (work->stgs->normalize) {
            for (i = 0; i < m; ++i) {
                scs_float tmp = work->scal->D[i] * work->b[i];
                norm_Db_squared += (tmp * tmp);
            }
        } else {
            norm_Db_squared += scs_norm_squared(work->b, m);
        }
        residuals->res_infeas = -SQRTF(norm_Db_squared) * norm_E_Atran_yb / tmp__b_times_yb;
        residuals->res_infeas /= (work->stgs->normalize ? work->stgs->scale : 1);
    } else {
        residuals->res_infeas = NAN; /* not infeasible */
    }
    residuals->rel_gap = ABS(cTx + bTy) / (1 + ABS(cTx) + ABS(bTy));
}

static void scs_cold_start_vars(ScsWork * RESTRICT work) {
    scs_int l = work->l;
    memset(work->u, 0, l * sizeof (scs_float));
    work->u[l - 1] = SQRTF((scs_float) l);
    if (work->stgs->do_super_scs == 0) {
        memset(work->v, 0, l * sizeof (scs_float));
        work->v[l - 1] = SQRTF((scs_float) l);
    }
}

/* status < 0 indicates failure */
static scs_int scs_project_lin_sys(
        ScsWork * RESTRICT work,
        scs_int iter) {
    /* ut = u + v */
    scs_int n = work->n, m = work->m, l = n + m + 1, status;
    memcpy(work->u_t, work->u, l * sizeof (scs_float));
    scs_add_scaled_array(work->u_t, work->v, l, 1.0);

    scs_scale_array(work->u_t, work->stgs->rho_x, n);

    scs_add_scaled_array(work->u_t, work->h, l - 1, -work->u_t[l - 1]);
    scs_add_scaled_array(work->u_t, work->h, l - 1,
            -scs_inner_product(work->u_t, work->g, l - 1) / (work->gTh + 1));
    scs_scale_array(&(work->u_t[n]), -1, m);

    status = scs_solve_lin_sys(work->A, work->stgs, work->p, work->u_t, work->u, iter);

    work->u_t[l - 1] += scs_inner_product(work->u_t, work->h, l - 1);

    return status;
}

/* status < 0 indicates failure */
static scs_int superscs_project_lin_sys(
        scs_float * RESTRICT u_t,
        scs_float * RESTRICT u,
        ScsWork * RESTRICT work,
        scs_int iter) {
    scs_int status;
    const scs_int l = work->l;

    /* x_t = rho_x * x_t */
    memcpy(u_t + work->n, u + work->n, (work->m + 1) * sizeof (scs_float));
    scs_set_as_scaled_array(u_t, u, work->stgs->rho_x, work->n);

    /* (x_t, y_t) -= tau_t * h                   */
    scs_add_scaled_array(u_t, work->h, l - 1, -u_t[l - 1]);

    /* u_t -= scalar * h                         */
    scs_add_scaled_array(u_t, work->h, l - 1,
            -scs_inner_product(u_t, work->g, l - 1) / (work->gTh + 1));

    /* y_t *= (-1)                               */
    scs_scale_array(u_t + work->n, -1, work->m);

    /* call `scs_solve_lin_sys` to update (x_t, y_t)   */
    status = scs_solve_lin_sys(work->A, work->stgs, work->p, u_t, u, iter);

    /* tau_t += h'*(x_t, y_t)                    */
    u_t[l - 1] += scs_inner_product(u_t, work->h, l - 1);

    return status;
}

/* LCOV_EXCL_START */
void scs_print_sol(
        ScsWork * RESTRICT work,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info) {
    scs_int i;
    FILE * RESTRICT stream = work->stgs->output_stream;
    scs_int print_mode = work->stgs->do_override_streams;
    scs_special_print(print_mode, stream, "%s\n", info->status);
    if (sol->x != SCS_NULL) {
        for (i = 0; i < work->n; ++i) {
            scs_special_print(print_mode, stream, "x[%i] = %4f\n", (int) i, sol->x[i]);
        }
    }
    if (sol->y != SCS_NULL) {
        for (i = 0; i < work->m; ++i) {
            scs_special_print(print_mode, stream, "y[%i] = %4f\n", (int) i, sol->y[i]);
        }
    }
}

/* LCOV_EXCL_STOP */

static void scs_update_dual_vars(ScsWork * RESTRICT work) {
    scs_int n = work->n, l = n + work->m + 1;
    /* this does not relax 'x' variable */
    scs_add_array(work->v, work->u, l);
    scs_add_scaled_array(work->v, work->u_t, l, -work->stgs->alpha);
    scs_add_scaled_array(work->v, work->u_prev, l, -1.0 + work->stgs->alpha);
}

/* Calculates the fixed point residual R */
static void scs_calc_FPR(
        scs_float * RESTRICT fpr,
        scs_float * RESTRICT u_t,
        scs_float * RESTRICT u_b,
        scs_int l) {
    scs_axpy(fpr, u_t, u_b, 1.0, -1.0, l);
}

/* status < 0 indicates failure */
static scs_int scs_project_cones(
        ScsWork * RESTRICT work,
        const ScsCone * RESTRICT cone,
        scs_int iter) {
    scs_int i, n = work->n, l = n + work->m + 1, status;
    /* this does not relax 'x' variable */
    for (i = 0; i < n; ++i) {
        work->u[i] = work->u_t[i] - work->v[i];
    }
    for (i = n; i < l; ++i) {
        work->u[i] = work->stgs->alpha * work->u_t[i] +
                (1 - work->stgs->alpha) * work->u_prev[i] - work->v[i];
    }
    /* u = [x;y;tau] */
    status = scs_project_dual_cone(&(work->u[n]), cone, work->coneWork, &(work->u_prev[n]), iter);
    if (work->u[l - 1] < 0.0)
        work->u[l - 1] = 0.0;

    return status;
}

/* status < 0 indicates failure */
static scs_int superscs_project_cones(
        scs_float * RESTRICT u_b,
        scs_float * RESTRICT u_t,
        scs_float * RESTRICT u,
        ScsWork * RESTRICT work,
        const ScsCone * RESTRICT cone,
        scs_int iter) {
    scs_int n = work->n;
    scs_int l = n + work->m + 1;
    scs_int status;
    /* this does not relax 'x' variable */
    scs_axpy(u_b, u_t, u, 2.0, -1.0, l);

    /* u = [x;y;tau] */
    status = scs_project_dual_cone(&(u_b[n]), cone, work->coneWork, &(work->u_prev[n]), iter);
    if (u_b[l - 1] < 0.0) {
        u_b[l - 1] = 0.0;
    }
    return status;
}

/* LCOV_EXCL_START */
static scs_int scs_indeterminate(
        ScsWork * RESTRICT w,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info) {
    strncpy(info->status, "Indeterminate", SCS_INFO_STATUS_MSG_LENGTH);
    scs_scale_array(sol->x, NAN, w->n);
    scs_scale_array(sol->y, NAN, w->m);
    scs_scale_array(sol->s, NAN, w->m);
    return SCS_INDETERMINATE;
}

/* LCOV_EXCL_STOP */

static scs_int scs_solved(
        ScsWork * RESTRICT work,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info,
        scs_float tau) {
    scs_scale_array(sol->x, 1.0 / tau, work->n);
    scs_scale_array(sol->y, 1.0 / tau, work->m);
    scs_scale_array(sol->s, 1.0 / tau, work->m);
    if (info->statusVal == 0) {
        strncpy(info->status, "Solved/Inaccurate", SCS_INFO_STATUS_MSG_LENGTH);
        return SCS_SOLVED_INACCURATE;
    }
    strncpy(info->status, "Solved", SCS_INFO_STATUS_MSG_LENGTH);
    return SCS_SOLVED;
}

static scs_int scs_infeasible(
        ScsWork * RESTRICT work,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info,
        scs_float bTy) {
    scs_scale_array(sol->y, -1 / bTy, work->m);
    scs_scale_array(sol->x, NAN, work->n);
    scs_scale_array(sol->s, NAN, work->m);
    if (info->statusVal == 0) {
        strncpy(info->status, "Infeasible/Inaccurate", SCS_INFO_STATUS_MSG_LENGTH);
        return SCS_INFEASIBLE_INACCURATE;
    }
    strncpy(info->status, "Infeasible", SCS_INFO_STATUS_MSG_LENGTH);
    return SCS_INFEASIBLE;
}

static scs_int scs_unbounded(
        ScsWork * RESTRICT work,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info,
        scs_float cTx) {
    scs_scale_array(sol->x, -1 / cTx, work->n);
    scs_scale_array(sol->s, -1 / cTx, work->m);
    scs_scale_array(sol->y, NAN, work->m);
    if (info->statusVal == 0) {
        strncpy(info->status, "Unbounded/Inaccurate", SCS_INFO_STATUS_MSG_LENGTH);
        return SCS_UNBOUNDED_INACCURATE;
    }
    strncpy(info->status, "Unbounded", SCS_INFO_STATUS_MSG_LENGTH);
    return SCS_UNBOUNDED;
}

static void scs_set_y(ScsWork * RESTRICT work, ScsSolution * RESTRICT sol) {
    if (sol->y == SCS_NULL) {
        sol->y = scs_malloc(sizeof (scs_float) * work->m);
    }
    if (work->stgs->do_super_scs == 0) {
        memcpy(sol->y, &(work->u[work->n]), work->m * sizeof (scs_float));
    } else {
        memcpy(sol->y, &(work->u_b[work->n]), work->m * sizeof (scs_float));
    }
}

static void scs_set_s(ScsWork * RESTRICT work, ScsSolution * RESTRICT sol) {
    if (sol->s == SCS_NULL) {
        sol->s = scs_malloc(sizeof (scs_float) * work->m);
    }
    if (work->stgs->do_super_scs == 0) {
        memcpy(sol->s, &(work->v[work->n]), work->m * sizeof (scs_float));
    } else {
        memcpy(sol->s, work->s_b, work->m * sizeof (scs_float));
    }
}

static void scs_set_x(ScsWork * RESTRICT work, ScsSolution * RESTRICT sol) {
    if (sol->x == SCS_NULL)
        sol->x = scs_malloc(sizeof (scs_float) * work->n);
    if (work->stgs->do_super_scs == 0) {
        memcpy(sol->x, work->u, work->n * sizeof (scs_float));
    } else {
        memcpy(sol->x, work->u_b, work->n * sizeof (scs_float));
    }
}

scs_int scs_is_solved_status(scs_int status) {
    return status == SCS_SOLVED || status == SCS_SOLVED_INACCURATE;
}

scs_int scs_is_infeasible_status(scs_int status) {
    return status == SCS_INFEASIBLE || status == SCS_INFEASIBLE_INACCURATE;
}

scs_int scs_is_unbounded_status(scs_int status) {
    return status == SCS_UNBOUNDED || status == SCS_UNBOUNDED_INACCURATE;
}

static void scs_get_info(
        ScsWork * RESTRICT work,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info,
        struct scs_residuals * RESTRICT residuals,
        scs_int iter) {
    info->iter = iter;
    info->resInfeas = residuals->res_infeas;
    info->resUnbdd = residuals->res_unbdd;
    if (scs_is_solved_status(info->statusVal)) {
        info->relGap = residuals->rel_gap;
        info->resPri = residuals->res_pri;
        info->resDual = residuals->res_dual;
        info->pobj = residuals->cTx_by_tau / residuals->tau;
        info->dobj = -residuals->bTy_by_tau / residuals->tau;
    } else if (scs_is_unbounded_status(info->statusVal)) {
        info->relGap = NAN;
        info->resPri = NAN;
        info->resDual = NAN;
        info->pobj = -INFINITY;
        info->dobj = -INFINITY;
    } else if (scs_is_infeasible_status(info->statusVal)) {
        info->relGap = NAN;
        info->resPri = NAN;
        info->resDual = NAN;
        info->pobj = INFINITY;
        info->dobj = INFINITY;
    }
}

/* sets solutions, re-scales by inner prods if infeasible or unbounded */
static void scs_get_solution(
        ScsWork * RESTRICT work,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info,
        struct scs_residuals * RESTRICT r,
        scs_int iter) {
    scs_int l = work->l;
    if (work->stgs->do_super_scs == 0) {
        scs_calc_residuals(work, r, iter);
    } else {
        scs_calc_residuals_superscs(work, r, iter);
        r->kap = ABS(work->kap_b) /
                (work->stgs->normalize ? (work->stgs->scale * work->sc_c * work->sc_b) : 1.0);
    }
    scs_set_x(work, sol);
    scs_set_y(work, sol);
    scs_set_s(work, sol);
    if (info->statusVal == SCS_UNFINISHED) {
        /* not yet converged, take best guess */
        if (r->tau > SCS_INDETERMINATE_TOL && r->tau > r->kap) {
            info->statusVal = scs_solved(work, sol, info, r->tau);
        } else if (scs_norm(work->u, l) <
                SCS_INDETERMINATE_TOL * SQRTF((scs_float) l)) {
            info->statusVal = scs_indeterminate(work, sol, info);
        } else if (r->bTy_by_tau < r->cTx_by_tau) {
            info->statusVal = scs_infeasible(work, sol, info, r->bTy_by_tau);
        } else {
            info->statusVal = scs_unbounded(work, sol, info, r->cTx_by_tau);
        }
    } else if (scs_is_solved_status(info->statusVal)) {
        info->statusVal = scs_solved(work, sol, info, r->tau);
    } else if (scs_is_infeasible_status(info->statusVal)) {
        info->statusVal = scs_infeasible(work, sol, info, r->bTy_by_tau);
    } else {
        info->statusVal = scs_unbounded(work, sol, info, r->cTx_by_tau);
    }
    if (work->stgs->normalize) {
        scs_unnormalize_sol(work, sol);
    }
    scs_get_info(work, sol, info, r, iter);
}

/* LCOV_EXCL_START */
static void scs_print_summary(
        ScsWork * RESTRICT work,
        scs_int i,
        struct scs_residuals * RESTRICT residuals,
        ScsTimer * RESTRICT solveTimer) {
    FILE * RESTRICT stream = work->stgs->output_stream;
    scs_int print_mode = work->stgs->do_override_streams;
    scs_special_print(print_mode, stream, "%*i|", (int) strlen(SCS_HEADER[0]), (int) i);
    scs_special_print(print_mode, stream, "%*.2e ", (int) scs_hspace, residuals->res_pri);
    scs_special_print(print_mode, stream, "%*.2e ", (int) scs_hspace, residuals->res_dual);
    scs_special_print(print_mode, stream, "%*.2e ", (int) scs_hspace, residuals->rel_gap);
    scs_special_print(print_mode, stream, "%*.2e ", (int) scs_hspace, residuals->cTx_by_tau / residuals->tau);
    scs_special_print(print_mode, stream, "%*.2e ", (int) scs_hspace, -residuals->bTy_by_tau / residuals->tau);
    scs_special_print(print_mode, stream, "%*.2e ", (int) scs_hspace, residuals->kap / residuals->tau);
    if (work->stgs->do_super_scs) {
        scs_special_print(print_mode, stream, "%*.2e ", (int) scs_hspace, work->nrmR_con);
    }
    scs_special_print(print_mode, stream, "%*.2e ", (int) scs_hspace, scs_toc_quiet(solveTimer) / 1e3);
    scs_special_print(print_mode, stream, "\n");

#ifdef MATLAB_MEX_FILE
    mexEvalString("drawnow;");
#endif
}

static void scs_print_header(
        ScsWork * RESTRICT work,
        const ScsCone * RESTRICT cone) {
    scs_int i;
    FILE * RESTRICT stream = work->stgs->output_stream;
    scs_int print_mode = work->stgs->do_override_streams;
    if (work->stgs->warm_start)
        scs_special_print(print_mode, stream, "SCS using variable warm-starting\n");
    for (i = 0; i < scs_header_line_length; ++i) {
        scs_special_print(print_mode, stream, "-");
    }
    scs_special_print(print_mode, stream, "\n");
    for (i = 0; i < scs_header_length - 2; ++i) {
        scs_special_print(print_mode, stream, "%s|", SCS_HEADER[i]);
    }
    if (work->stgs->do_super_scs) {
        scs_special_print(print_mode, stream, "%s|", SCS_HEADER[scs_header_length - 2]);
    }
    scs_special_print(print_mode, stream, "%s\n", SCS_HEADER[scs_header_length - 1]);
    for (i = 0; i < scs_header_line_length; ++i) {
        scs_special_print(print_mode, stream, "-");
    }
    scs_special_print(print_mode, stream, "\n");
#ifdef MATLAB_MEX_FILE
    mexEvalString("drawnow;");
#endif
}

/* LCOV_EXCL_STOP */

scs_float scs_get_dual_cone_dist(
        const scs_float * RESTRICT y,
        const ScsCone * RESTRICT k,
        ScsConeWork * RESTRICT cone_workspace,
        scs_int m) {
    scs_float dist;
    scs_float * RESTRICT t = scs_malloc(sizeof (scs_float) * m);
    memcpy(t, y, m * sizeof (scs_float));
    scs_project_dual_cone(t, k, cone_workspace, SCS_NULL, -1);
    dist = scs_norm_infinity_difference(t, y, m);
    scs_free(t);
    return dist;
}

/* via moreau */
scs_float scs_get_primal_cone_dist(
        const scs_float * RESTRICT s,
        const ScsCone * RESTRICT cone,
        ScsConeWork * RESTRICT cone_workspace,
        scs_int m) {
    scs_float dist;
    scs_float * RESTRICT t = scs_malloc(sizeof (scs_float) * m);
    memcpy(t, s, m * sizeof (scs_float));
    scs_scale_array(t, -1.0, m);
    scs_project_dual_cone(t, cone, cone_workspace, SCS_NULL, -1);
    dist = scs_norm_infinity(t, m); /* ||s - Pi_c(s)|| = ||Pi_c*(-s)|| */
    scs_free(t);
    return dist;
}

void scs_millis_to_time(scs_float time,
        scs_int * hours,
        scs_int * minutes,
        scs_int * secs,
        scs_float * sec_rest) {
    scs_float integral;
    scs_float time_seconds = time / 1e3;
    *sec_rest = (scs_float) modf((double) time_seconds, &integral);
    *secs = (scs_int) time_seconds;
    *minutes = *secs / 60;
    *secs %= 60;
    if (*minutes >= 60) {
        *hours = *minutes / 60;
        *minutes %= 60;
    } else {
        *hours = 0;
    }
}

/* LCOV_EXCL_START */
static void scs_print_footer(
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone,
        ScsSolution * RESTRICT sol,
        ScsWork * RESTRICT work,
        ScsInfo * RESTRICT info) {
    scs_int i;
    scs_int hours, minutes, seconds;
    scs_float millis;

    char *linSysStr = scs_get_linsys_summary(work->p, info);
    char *coneStr = scs_get_cone_summary(info, work->coneWork);
    FILE * stream = work->stgs->output_stream;
    scs_int print_mode = work->stgs->do_override_streams;
    for (i = 0; i < scs_header_line_length; ++i) {
        scs_special_print(print_mode, stream, "-");
    }
    scs_special_print(print_mode, stream, "\nStatus: %s\n", info->status);
    if (info->iter == work->stgs->max_iters) {
        scs_special_print(print_mode, stream, "Hit max_iters, solution may be inaccurate\n");
    }

    scs_millis_to_time(info->solveTime, &hours, &minutes, &seconds, &millis);
    scs_special_print(print_mode, stream, "Timing: Solve time: %02d:%02d:%02d.%d\n",
            hours, minutes, seconds, (scs_int) round(1e4 * millis) / 10);

    if (linSysStr) {
        scs_special_print(print_mode, stream, "%s", linSysStr);
        scs_free(linSysStr);
    }

    if (coneStr) {
        scs_special_print(print_mode, stream, "%s", coneStr);
        scs_free(coneStr);
    }

    for (i = 0; i < scs_header_line_length; ++i) {
        scs_special_print(print_mode, stream, "-");
    }
    scs_special_print(print_mode, stream, "\n");

    if (scs_is_infeasible_status(info->statusVal)) {
        scs_special_print(print_mode, stream, "Certificate of primal infeasibility:\n");
        scs_special_print(print_mode, stream, "dist(y, K*) = %.4e\n",
                scs_get_dual_cone_dist(sol->y, cone, work->coneWork, data->m));
        scs_special_print(print_mode, stream, "|A'y|_2 * |b|_2 = %.4e\n", info->resInfeas);
        scs_special_print(print_mode, stream, "b'y = %.4f\n", scs_inner_product(data->b, sol->y, data->m));
    } else if (scs_is_unbounded_status(info->statusVal)) {
        scs_special_print(print_mode, stream, "Certificate of dual infeasibility:\n");
        scs_special_print(print_mode, stream, "dist(s, K) = %.4e\n",
                scs_get_primal_cone_dist(sol->s, cone, work->coneWork, data->m));
        scs_special_print(print_mode, stream, "|Ax + s|_2 * |c|_2 = %.4e\n", info->resUnbdd);
        scs_special_print(print_mode, stream, "c'x = %.4f\n", scs_inner_product(data->c, sol->x, data->n));
    } else {
        scs_special_print(print_mode, stream, "Error metrics:\n");
        scs_special_print(print_mode, stream, "dist(s, K) = %.4e, dist(y, K*) = %.4e, s'y/|s||y| = %.4e\n",
                scs_get_primal_cone_dist(sol->s, cone, work->coneWork, data->m),
                scs_get_dual_cone_dist(sol->y, cone, work->coneWork, data->m),
                scs_inner_product(sol->s, sol->y, data->m) / scs_norm(sol->s, data->m) /
                scs_norm(sol->y, data->m));
        scs_special_print(print_mode, stream, "|Ax + s - b|_2 / (1 + |b|_2) = %.4e\n", info->resPri);
        scs_special_print(print_mode, stream, "|A'y + c|_2 / (1 + |c|_2) = %.4e\n", info->resDual);
        scs_special_print(print_mode, stream, "|c'x + b'y| / (1 + |c'x| + |b'y|) = %.4e\n", info->relGap);
        for (i = 0; i < scs_header_line_length; ++i) {
            scs_special_print(print_mode, stream, "-");
        }
        scs_special_print(print_mode, stream, "\n");
        scs_special_print(print_mode, stream, "c'x = %.4f, -b'y = %.4f\n", info->pobj, info->dobj);
    }
    for (i = 0; i < scs_header_line_length; ++i) {
        scs_special_print(print_mode, stream, "=");
    }
    scs_special_print(print_mode, stream, "\n");
#ifdef MATLAB_MEX_FILE
    mexEvalString("drawnow;");
#endif
}

/* LCOV_EXCL_STOP */

static scs_int scs_has_converged(
        ScsWork * RESTRICT work,
        struct scs_residuals * RESTRICT residuals,
        scs_int iter) {
    scs_float eps = work->stgs->eps;
    if (residuals->res_pri < eps && residuals->res_dual < eps && residuals->rel_gap < eps) {
        return SCS_SOLVED;
    }
    if (residuals->res_unbdd < eps) {
        return SCS_UNBOUNDED;
    }
    if (residuals->res_infeas < eps) {
        return SCS_INFEASIBLE;
    }
    return 0;
}

static scs_int scs_validate_superscs_settings(const ScsData *data) {
    ScsSettings * stgs = data->stgs;
    scs_int print_mode = stgs->do_override_streams;

    if (stgs->do_super_scs == 0) return 0;

    if (stgs->thetabar < 0 || stgs->thetabar > 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameters `thetabar` must "
                "be a scalar between 0 and 1 (thetabar=%g)\n", stgs->thetabar);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if ((stgs->direction == restarted_broyden
            || stgs->direction == anderson_acceleration)
            && stgs->memory <= 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Quasi-Newton memory length "
                "(mem=%ld) is too low; choose an integer at least equal to 2.\n",
                (long) stgs->memory);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->direction == anderson_acceleration && stgs->memory > data->m + data->n + 1) {
        scs_special_print(print_mode, stderr, "Quasi-Newton memory length (mem=%ld) "
                "is too high for Anderson's method (l=%d).\n",
                (long) stgs->memory, data->m + data->n + 1);
        return SCS_FAILED;
    }
    if (stgs->beta >= 1 || stgs->beta <= 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Stepsize reduction factor (beta=%g) out of bounds.\n", stgs->beta);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->ls < 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Illegal maximum number of line search iterations (ls=%ld).\n", (long) stgs->ls);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->ls >= 40) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "WARNING! The value ls=%ld is too high. The maximum allowed "
                "number of line search iteration is 40. We recommend a value about 10.\n", (long) stgs->ls);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->ls > 10) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "WARNING! The value ls=%ld is too high. We highly recommend"
                "the maximum number of line search iterations to be at most 10.\n", (long) stgs->ls);
        /* LCOV_EXCL_STOP */
    }
    if (stgs->sigma < 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameter sigma of the line search (sigma=%g) cannot be negative.\n", stgs->sigma);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->c_bl < 0 || stgs->c_bl >= 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameter (c_0=%g) for blind updates out of bounds.\n", stgs->c_bl);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->c1 < 0 || stgs->c1 >= 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameter (c1=%g) for step K1 out of bounds.\n", stgs->c1);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->sse < 0 || stgs->sse >= 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameter (sse=%g) for step K1 out of bounds.\n", stgs->sse);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->k0 != 0 && stgs->k0 != 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameter (k0=%d) can be eiter 0 (k0: off) or 1 (k0: on).\n", (int) stgs->k0);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->k1 != 0 && stgs->k1 != 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameter (k1=%d) can be eiter 0 (k1: off) or 1 (k1: on).\n", (int) stgs->k1);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->k2 != 0 && stgs->k2 != 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameter (k2=%d) can be eiter 0 (k2: off) or 1 (k2: on).\n", (int) stgs->k2);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->direction != restarted_broyden
            && stgs->direction != fixed_point_residual
            && stgs->direction != anderson_acceleration
            && stgs->direction != full_broyden) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Invalid direction (%ld).\n",
                (long) stgs->direction);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    return 0;
}

static scs_int scs_validate_general_settings(const ScsData *data) {
    ScsSettings * stgs = data->stgs;
    scs_int print_mode = stgs->do_override_streams;
    if (stgs->max_iters <= 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "max_iters must be positive (max_iters=%ld)\n", (long) stgs->max_iters);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->eps <= 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "eps tolerance must be positive (eps=%g)\n", stgs->eps);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->alpha <= 0 || stgs->alpha >= 2) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "alpha must be in (0,2) (alpha=%g)\n", stgs->alpha);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->rho_x <= 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "rho_x must be positive (1e-3 works well) (rho_x=%g).\n", stgs->rho_x);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->scale <= 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Parameter `scale` must be positive (1 works well).\n");
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (stgs->do_super_scs != 0 && stgs->do_super_scs != 1) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "do_super_scs (=%d) can be either 0 or 1.\n", (int) stgs->do_super_scs);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }

    return 0;
}

static scs_int scs_validate(
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone) {
    ScsSettings *stgs = data->stgs;
    scs_int print_mode = stgs->do_override_streams;
    if (data->m <= 0 || data->n <= 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "m and n must both be greater than 0; m = %li, n = %li\n",
                (long) data->m, (long) data->n);
        return -1;
        /* LCOV_EXCL_STOP */
    }
    if (data->m < data->n) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "WARN: m less than n, problem likely degenerate\n");
        /* LCOV_EXCL_STOP */
    }
    if (scs_validate_linsys(data->A) < 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "invalid linear system input data\n");
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    if (scs_validate_cones(data, cone) < 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "cone validation error\n");
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }

    if (scs_validate_general_settings(data) != 0
            || scs_validate_superscs_settings(data) != 0)
        return SCS_FAILED;

    return 0;
}

static ScsWork * scs_init_work(
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone) {
    ScsWork *work = scs_calloc(1, sizeof (*work));
    const scs_int l = data->n + data->m + 1;
    scs_int print_mode = data->stgs->do_override_streams;
    if (data->stgs->verbose) {
        scs_print_init_header(data, cone);
    }
    if (work == SCS_NULL) {
        scs_special_print(print_mode, stderr, "ERROR: allocating work failure\n");
        return SCS_NULL;
    }

    /* get settings and dims from data struct */
    work->stgs = data->stgs;
    work->m = data->m;
    work->n = data->n;
    work->l = l; /* total dimension */

    /* -------------------------------------
     * Workspace allocation:
     *
     * After every call to scs_malloc or scs_calloc
     * we check whether the allocation has been
     * successful.
     * ------------------------------------- */
    work->u = scs_calloc(l, sizeof (scs_float));
    if (work->u == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `u` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->u_b = scs_calloc(l, sizeof (scs_float));
    if (work->u_b == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `u_b` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    if (work->stgs->do_super_scs == 0) {
        work->v = scs_calloc(l, sizeof (scs_float));
        if (work->v == SCS_NULL) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: `v` memory allocation failure\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }
    }
    work->u_t = scs_malloc(l * sizeof (scs_float));
    if (work->u_t == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `u_t` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->u_prev = scs_malloc(l * sizeof (scs_float));
    if (work->u_prev == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `u_prev` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->h = scs_malloc((l - 1) * sizeof (scs_float));
    if (work->h == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `h` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->g = scs_malloc((l - 1) * sizeof (scs_float));
    if (work->g == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `g` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->pr = scs_malloc(data->m * sizeof (scs_float));
    if (work->pr == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `pr` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->dr = scs_malloc(data->n * sizeof (scs_float));
    if (work->dr == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `dr` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->b = scs_malloc(data->m * sizeof (scs_float));
    if (work->b == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `b` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->c = scs_malloc(data->n * sizeof (scs_float));
    if (work->c == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: `c` memory allocation failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }



    if (work->stgs->do_super_scs == 1) {
        /* -------------------------------------
         * Additional memory needs to be allocated
         * in SuperSCS
         * ------------------------------------- */
        work->R = scs_calloc(l, sizeof (scs_float));
        if (work->R == SCS_NULL) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: `R` memory allocation failure\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }
        work->R_prev = scs_calloc(l, sizeof (scs_float));
        if (work->R_prev == SCS_NULL) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: `R_prev` memory allocation failure\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }
        work->dir = scs_malloc(l * sizeof (scs_float));
        if (work->dir == SCS_NULL) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: `dir` memory allocation failure\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }
        work->dut = scs_malloc(l * sizeof (scs_float));
        if (work->dut == SCS_NULL) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: `dut` memory allocation failure\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }
        work->s_b = scs_malloc(data->m * sizeof (scs_float));
        if (work->s_b == SCS_NULL) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: `s_b` memory allocation failure\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }

        work->stepsize = 1.0;

        /* -------------------------------------
         * Restarted Broyden requires the allocation
         * of an (S,U)-cache.
         * ------------------------------------- */
        if ((work->stgs->direction == restarted_broyden
                || work->stgs->direction == anderson_acceleration)
                && work->stgs->memory > 0) {
            work->direction_cache = scs_init_direction_cache(work->stgs->memory, l, print_mode, work->stgs->direction);
            if (work->direction_cache == SCS_NULL) {
                /* LCOV_EXCL_START */
                scs_special_print(print_mode, stderr,
                        "ERROR: `direction_cache` memory allocation failure\n");
                return SCS_NULL;
                /* LCOV_EXCL_STOP */
            }
        } else {
            work->direction_cache = SCS_NULL;
        }

        /* -------------------------------------
         * Allocate memory for the full Broyden
         * method
         * ------------------------------------- */
        if (work->stgs->direction == full_broyden) {
            scs_int i;
            work->H = scs_malloc(l * l * sizeof (scs_float));
            if (work->H == SCS_NULL) {
                /* LCOV_EXCL_START */
                scs_special_print(print_mode, stderr, "ERROR: `H` memory allocation failure\n");
                return SCS_NULL;
                /* LCOV_EXCL_STOP */
            }
            /* H = I */
            for (i = 0; i < l; ++i) {
                work->H[i * (l + 1)] = 1.0;
            }
        } else {
            work->H = SCS_NULL;
        }

        work->Sk = scs_malloc(l * sizeof (scs_float));
        if (work->Sk == SCS_NULL) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: `Sk` memory allocation failure\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }
        work->Yk = scs_malloc(l * sizeof (scs_float));
        if (work->Yk == SCS_NULL) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: `Yk` memory allocation failure\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }

        if (work->stgs->ls > 0) {
            work->wu = scs_malloc(l * sizeof (scs_float));
            if (work->wu == SCS_NULL) {
                /* LCOV_EXCL_START */
                scs_special_print(print_mode, stderr, "ERROR: `wu` memory allocation failure\n");
                return SCS_NULL;
                /* LCOV_EXCL_STOP */
            }
            work->Rwu = scs_malloc(l * sizeof (scs_float));
            if (work->Rwu == SCS_NULL) {
                /* LCOV_EXCL_START */
                scs_special_print(print_mode, stderr, "ERROR: `Rwu` memory allocation failure\n");
                return SCS_NULL;
                /* LCOV_EXCL_STOP */
            }
            work->wu_t = scs_malloc(l * sizeof (scs_float));
            if (work->wu_t == SCS_NULL) {
                /* LCOV_EXCL_START */
                scs_special_print(print_mode, stderr, "ERROR: `wu_t` memory allocation failure\n");
                return SCS_NULL;
                /* LCOV_EXCL_STOP */
            }
            work->wu_b = scs_malloc(l * sizeof (scs_float));
            if (work->wu_b == SCS_NULL) {
                /* LCOV_EXCL_START */
                scs_special_print(print_mode, stderr, "ERROR: `wu_b` memory allocation failure\n");
                return SCS_NULL;
                /* LCOV_EXCL_STOP */
            }
        }
    } else {
        /* -------------------------------------
         * In SCS, the pointers which correspond to
         * SuperSCS are set to SCS_NULL and are
         * inactive.
         * ------------------------------------- */
        work->R = SCS_NULL;
        work->R_prev = SCS_NULL;
        work->dir = SCS_NULL;
        work->dut = SCS_NULL;
        work->s_b = SCS_NULL;
        work->direction_cache = SCS_NULL;
        work->Yk = SCS_NULL;
        work->Sk = SCS_NULL;
        work->wu = SCS_NULL;
        work->Rwu = SCS_NULL;
        work->wu_t = SCS_NULL;
        work->wu_b = SCS_NULL;
    }

    work->A = data->A;
    if (work->stgs->normalize) {
#ifdef COPYAMATRIX
        if (scs_copy_a_matrix(&(work->A), data->A) == 0) {
            /* LCOV_EXCL_START */
            scs_special_print(print_mode, stderr, "ERROR: copy A matrix failed\n");
            return SCS_NULL;
            /* LCOV_EXCL_STOP */
        }
#endif
        work->scal = scs_malloc(sizeof (ScsScaling));
        scs_normalize_a(work->A, work->stgs, cone, work->scal);
    } else {
        work->scal = SCS_NULL;
    }
    if ((work->coneWork = scs_init_conework(cone)) == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: initCone failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    work->p = scs_init_priv(work->A, work->stgs);
    if (work->p == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "ERROR: scs_init_priv failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    return work;
}

static scs_int scs_update_work(
        const ScsData * RESTRICT data,
        ScsWork * RESTRICT work,
        const ScsSolution * RESTRICT sol) {
    /* before normalization */
    scs_int n = data->n;
    scs_int m = data->m;

    work->nm_b = scs_norm(data->b, m);
    work->nm_c = scs_norm(data->c, n);
    memcpy(work->b, data->b, data->m * sizeof (scs_float));
    memcpy(work->c, data->c, data->n * sizeof (scs_float));

    if (work->stgs->normalize) {
        scs_normalize_bc(work);
    }
    if (work->stgs->warm_start) {
        scs_warm_start_vars(work, sol);
    } else {
        scs_cold_start_vars(work);
    }
    memcpy(work->h, work->c, n * sizeof (scs_float));
    memcpy(&(work->h[n]), work->b, m * sizeof (scs_float));
    memcpy(work->g, work->h, (n + m) * sizeof (scs_float));
    scs_solve_lin_sys(work->A, work->stgs, work->p, work->g, SCS_NULL, -1);
    scs_scale_array(&(work->g[n]), -1, m);
    work->gTh = scs_inner_product(work->h, work->g, n + m);
    return 0;
}

static scs_int scs_validate_solve_input(
        const ScsWork * RESTRICT work,
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone,
        const ScsSolution * RESTRICT sol,
        const ScsInfo * RESTRICT info) {
    return ((data == SCS_NULL
            || cone == SCS_NULL
            || sol == SCS_NULL
            || info == SCS_NULL
            || work == SCS_NULL
            || data->b == SCS_NULL
            || data->c == SCS_NULL));
}

static scs_int scs_init_progress_data(
        ScsInfo * RESTRICT info,
        ScsWork * RESTRICT work) {
    /* --------------------------------------------------------------
     * As the might be successive calls to superSCS (superscs_solve)
     * with different values of `do_record_progress`, we nee to make
     * sure that we neither allocate memory for the same array twice,
     * nor do we set any arrays to SCS_NULL unnecessarily. Note that,
     * provided that `info` has  been initialized with scs_init_info (this
     * is highly recommended), all pointers are initially set to SCS_NULL.
     * -------------------------------------------------------------- */
    if (work->stgs->do_record_progress) {
        const scs_int max_history_alloc = work->stgs->max_iters;

        /* ----------------------------------------
         * If a pointer is SCS_NULL, it means that
         * no memory has been allocated for that
         * previously.
         * ---------------------------------------- */
        if (info->progress_relgap == SCS_NULL) {
            info->progress_relgap = scs_malloc(sizeof (scs_float) * max_history_alloc);
            if (info->progress_relgap == SCS_NULL) return -1;
        }
        if (info->progress_respri == SCS_NULL) {
            info->progress_respri = scs_malloc(sizeof (scs_float) * max_history_alloc);
            if (info->progress_respri == SCS_NULL) return -2;
        }
        if (info->progress_resdual == SCS_NULL) {
            info->progress_resdual = scs_malloc(sizeof (scs_float) * max_history_alloc);
            if (info->progress_resdual == SCS_NULL) return -3;
        }
        if (info->progress_pcost == SCS_NULL) {
            info->progress_pcost = scs_malloc(sizeof (scs_float) * max_history_alloc);
            if (info->progress_pcost == SCS_NULL) return -4;
        }
        if (info->progress_dcost == SCS_NULL) {
            info->progress_dcost = scs_malloc(sizeof (scs_float) * max_history_alloc);
            if (info->progress_dcost == SCS_NULL) return -5;
        }
        if (info->progress_iter == SCS_NULL) {
            info->progress_iter = scs_malloc(sizeof (scs_int) * max_history_alloc);
            if (info->progress_iter == SCS_NULL) return -6;
        }
        if (info->progress_norm_fpr == SCS_NULL) {
            info->progress_norm_fpr = scs_malloc(sizeof (scs_float) * max_history_alloc);
            if (info->progress_norm_fpr == SCS_NULL) return -7;
        }
        if (info->progress_time == SCS_NULL) {
            info->progress_time = scs_malloc(sizeof (scs_float) * max_history_alloc);
            if (info->progress_time == SCS_NULL) return -8;
        }
        if (info->progress_mode == SCS_NULL) {
            info->progress_mode = scs_malloc(sizeof (scs_int) * max_history_alloc);
            if (info->progress_mode == SCS_NULL) return -9;
        }
        if (info->progress_ls == SCS_NULL) {
            info->progress_ls = scs_malloc(sizeof (scs_int) * max_history_alloc);
            if (info->progress_ls == SCS_NULL) return -10;
        }

        /* ---------------------------------------------------------
         * If `do_record_progress` is true, and there has
         * been a previous allocation, but now the maximum
         * number of iterations has increased
         *
         * Note: if the current `max_iters` is smaller than
         * the previous value, it means that more than adequate
         * memory space has been allocated for the progress arrays.
         * However, we will not use `realloc` to size it down.
         * --------------------------------------------------------- */
        if (work->stgs->previous_max_iters != -1
                && max_history_alloc > work->stgs->previous_max_iters) {
            /* ------------------------------------
             * We don't check for NULL values here
             * because `realloc` on NULL pointers
             * behaves like `malloc`
             * ------------------------------------
             */
            info->progress_relgap = realloc(info->progress_relgap, sizeof (scs_float) * max_history_alloc);
            if (info->progress_relgap == SCS_NULL) return -100;

            info->progress_respri = realloc(info->progress_respri, sizeof (scs_float) * max_history_alloc);
            if (info->progress_respri == SCS_NULL) return -101;

            info->progress_resdual = realloc(info->progress_resdual, sizeof (scs_float) * max_history_alloc);
            if (info->progress_resdual == SCS_NULL) return -102;

            info->progress_pcost = realloc(info->progress_pcost, sizeof (scs_float) * max_history_alloc);
            if (info->progress_pcost == SCS_NULL) return -103;

            info->progress_dcost = realloc(info->progress_dcost, sizeof (scs_float) * max_history_alloc);
            if (info->progress_dcost == SCS_NULL) return -104;

            info->progress_iter = realloc(info->progress_iter, sizeof (scs_int) * max_history_alloc);
            if (info->progress_iter == SCS_NULL) return -105;

            info->progress_norm_fpr = realloc(info->progress_norm_fpr, sizeof (scs_float) * max_history_alloc);
            if (info->progress_norm_fpr == SCS_NULL) return -106;

            info->progress_time = realloc(info->progress_time, sizeof (scs_float) * max_history_alloc);
            if (info->progress_time == SCS_NULL) return -107;

            info->progress_mode = realloc(info->progress_mode, sizeof (scs_int) * max_history_alloc);
            if (info->progress_mode == SCS_NULL) return -108;

            info->progress_ls = realloc(info->progress_ls, sizeof (scs_int) * max_history_alloc);
            if (info->progress_ls == SCS_NULL) return -109;
        }
    }
    return 0;
}

static void scs_record_progress_data(
        ScsInfo * info,
        struct scs_residuals * res,
        const ScsWork * work,
        ScsTimer * solveTimer,
        scs_int iter) {
    scs_int idx_progress = iter / SCS_CONVERGED_INTERVAL;
    info->progress_iter[idx_progress] = iter;
    info->progress_relgap[idx_progress] = res->rel_gap;
    info->progress_respri[idx_progress] = res->res_pri;
    info->progress_resdual[idx_progress] = res->res_dual;
    info->progress_pcost[idx_progress] = res->cTx_by_tau / res->tau;
    info->progress_dcost[idx_progress] = -res->bTy_by_tau / res->tau;
    info->progress_norm_fpr[idx_progress] = work->nrmR_con;
    info->progress_time[idx_progress] = scs_toc_quiet(solveTimer);
}

scs_int scs_solve(
        ScsWork * RESTRICT work,
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info) {
    scs_int i;
    ScsTimer solveTimer;
    struct scs_residuals r;
    scs_int print_mode = work->stgs->do_override_streams;
    const scs_float max_runtime_millis = work->stgs->max_time_milliseconds;

    if ((i = scs_init_progress_data(info, work)) < 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Memory allocation error (progress arrays), code: %d\n", (int) i);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }

    if (scs_validate_solve_input(work, data, cone, sol, info)) {
        scs_special_print(print_mode, stderr, "ERROR: SCS_NULL input\n");
        return SCS_FAILED;
    }
    /* initialize ctrl-c support */
    startInterruptListener();
    scs_tic(&solveTimer);
    info->statusVal = SCS_UNFINISHED; /* not yet converged */
    r.last_iter = -1;
    scs_update_work(data, work, sol);

    if (work->stgs->verbose)
        scs_print_header(work, cone);
    /* scs: */
    for (i = 0; i < work->stgs->max_iters && scs_toc_quiet(&solveTimer) < max_runtime_millis; ++i) {
        memcpy(work->u_prev, work->u, work->l * sizeof (scs_float));

        if (scs_project_lin_sys(work, i) < 0) {
            return scs_failure(work, work->m, work->n, sol, info, SCS_FAILED,
                    "error in projectLinSys", "Failure", print_mode);
        }
        if (scs_project_cones(work, cone, i) < 0) {
            return scs_failure(work, work->m, work->n, sol, info, SCS_FAILED,
                    "error in projectCones", "Failure", print_mode);
        }

        scs_update_dual_vars(work);

        if (isInterrupted()) {
            return scs_failure(work, work->m, work->n, sol, info, SCS_SIGINT, "Interrupted",
                    "Interrupted", print_mode);
        }
        if (i % SCS_CONVERGED_INTERVAL == 0) {
            scs_calc_residuals(work, &r, i);
            if (work->stgs->do_record_progress) scs_record_progress_data(info, &r, work, &solveTimer, i);
            if ((info->statusVal = scs_has_converged(work, &r, i)) != 0) break;
        }

        if (work->stgs->verbose && i % SCS_PRINT_INTERVAL == 0) {
            scs_calc_residuals(work, &r, i);
            scs_print_summary(work, i, &r, &solveTimer);
        }
    }
    if (work->stgs->verbose) {
        scs_calc_residuals(work, &r, i);
        scs_print_summary(work, i, &r, &solveTimer);
    }
    /* populate solution vectors (unnormalized) and info */
    scs_get_solution(work, sol, info, &r, i);
    info->solveTime = scs_toc_quiet(&solveTimer);

    if (work->stgs->verbose)
        scs_print_footer(data, cone, sol, work, info); /* LCOV_EXCL_LINE */
    endInterruptListener();
    info->history_length = i / SCS_CONVERGED_INTERVAL;

    return info->statusVal;
}

static void scs_compute_sb_kapb(
        ScsWork * RESTRICT work) {
    scs_axpy(work->s_b, work->u_b + work->n, work->u_t + work->n, 1.0, -2.0, work->m);
    scs_add_array(work->s_b, work->u + work->n, work->m);
    work->kap_b = work->u_b[work->l - 1] - 2.0 * work->u_t[work->l - 1] + work->u[work->l - 1];
}

static void scs_step_k1(
        ScsWork * RESTRICT work,
        scs_float nrmRw_con_current,
        scs_float * r_safe,
        scs_float q_to_power_iter_times_nrm_R_init,
        scs_int * how) {
    memcpy(work->u, work->wu, work->l * sizeof (scs_float)); /* u   = wu   */
    memcpy(work->u_t, work->wu_t, work->l * sizeof (scs_float)); /* u_t = wu_t */
    memcpy(work->u_b, work->wu_b, work->l * sizeof (scs_float)); /* u_b = wu_b */
    memcpy(work->R, work->Rwu, work->l * sizeof (scs_float)); /* R   = Rw   */
    scs_compute_sb_kapb(work);
    work->nrmR_con = nrmRw_con_current;
    *r_safe = work->nrmR_con + q_to_power_iter_times_nrm_R_init;
    *how = (scs_int) 1;
}

static scs_int scs_step_k2(
        ScsWork * RESTRICT work,
        scs_float nrmRw_con,
        scs_int * how) {

    scs_int do_break_loop = 0;
    scs_float slack;
    scs_float rhs;
    slack = nrmRw_con * nrmRw_con - work->stepsize * (
            scs_inner_product(work->dir + work->n, work->Rwu + work->n, work->m + 1)
            + work->stgs->rho_x * scs_inner_product(work->dir, work->Rwu, work->n));
    rhs = work->stgs->sigma * work->nrmR_con * nrmRw_con;
    if (slack >= rhs) {
        scs_float stepsize2;
        stepsize2 = (work->stgs->alpha * (slack / (nrmRw_con * nrmRw_con)));
        scs_add_scaled_array(work->u, work->Rwu, work->l, -stepsize2);
        *how = 2;
        do_break_loop = 1;
    }
    return do_break_loop;
}

static void scs_update_caches(
        ScsWork * RESTRICT work,
        scs_float sqrt_rhox,
        scs_int how) {
    if (how == 0 || work->stgs->ls == 0) {
        scs_axpy(work->Sk, work->u, work->u_prev, 1.0, -1.0, work->l); /* Sk = u - u_prev */
        scs_axpy(work->Yk, work->R, work->R_prev, sqrt_rhox, -1.0, work->n); /* Yk = sqrt_rhox * R - R_prev */
        scs_axpy(work->Yk + work->n, work->R + work->n, work->R_prev + work->n, 1.0, -1.0, work->m + 1);
        scs_scale_array(work->Sk, sqrt_rhox, work->n); /* Sk *= sqrt_rhox */
    } else {
        scs_axpy(work->Sk, work->wu, work->u_prev, sqrt_rhox, -sqrt_rhox, work->n);
        scs_axpy(work->Sk + work->n, work->wu + work->n, work->u_prev + work->n, 1.0, -1.0, work->m + 1);
        scs_axpy(work->Yk, work->Rwu, work->R_prev, sqrt_rhox, -1.0, work->n);
        scs_axpy(work->Yk + work->n, work->Rwu + work->n, work->R_prev + work->n, 1.0, -1.0, work->m + 1);
    }
}

static scs_int scs_exit_loop_without_k1(
        ScsWork * RESTRICT work,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info,
        const ScsCone * RESTRICT cone,
        scs_int i,
        scs_int print_mode) {
    if (superscs_project_lin_sys(work->u_t, work->u, work, i) < 0) {
        return scs_failure(work, work->m, work->n, sol, info, SCS_FAILED,
                "error in projectLinSysv2", "Failure", print_mode);
    }
    /* u_bar = proj_C(2u_t - u) */
    if (superscs_project_cones(work->u_b, work->u_t, work->u, work, cone, i) < 0) {
        return scs_failure(work, work->m, work->n, sol, info, SCS_FAILED,
                "error in projectConesv2", "Failure", print_mode);
    }
    scs_compute_sb_kapb(work);
    scs_calc_FPR(work->R, work->u_t, work->u_b, work->l);
    work->nrmR_con = SQRTF(
            work->stgs->rho_x * scs_norm_squared(work->R, work->n)
            + scs_norm_squared(work->R + work->n, work->m + 1)
            );
    return 0;
}

scs_int superscs_solve(
        ScsWork * RESTRICT work,
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info) {
    scs_int i; /* i indexes the (outer) iterations */
    scs_int how = 0; /* -1:unsuccessful backtracking, 0:K0, 1:K1, 2:K2 */
    scs_float eta;
    scs_float nrm_R_0;
    scs_float r_safe;
    scs_float nrmRw_con; /* norm of FP res at line-search */
    scs_float nrmR_con_old; /* keeps previous FP res */
    scs_float q_to_power_iter_times_nrmR0 = work->stgs->sse; /* sse^(iter) */
    const scs_float rhox = work->stgs->rho_x;
    const scs_float sqrt_rhox = SQRTF(rhox);
    const scs_float q0 = work->stgs->sse;
    const scs_int n = work->n;
    const scs_int m = work->m;
    const scs_int l = work->l;
    ScsTimer solveTimer;
    struct scs_residuals r;
    scs_int print_mode = work->stgs->do_override_streams;
    /* ------------------------------------
     * Store some pointers in function-scope
     * variables for performance.
     * ------------------------------------ */
    ScsSettings * RESTRICT settings = work->stgs;
    scs_float alpha = settings->alpha;
    scs_float * RESTRICT dir = work->dir;
    scs_float * RESTRICT R = work->R;
    scs_float * RESTRICT R_prev = work->R_prev;
    scs_float * RESTRICT Rwu = work->Rwu;
    scs_float * RESTRICT u = work->u;
    scs_float * RESTRICT u_t = work->u_t;
    scs_float * RESTRICT u_b = work->u_b;
    scs_float * RESTRICT u_prev = work->u_prev;
    scs_float * RESTRICT wu = work->wu;
    scs_float * RESTRICT wu_t = work->wu_t;
    scs_float * RESTRICT wu_b = work->wu_b;
    scs_float * RESTRICT dut = work->dut;

    if ((i = scs_init_progress_data(info, work)) < 0) {
        /* LCOV_EXCL_START */
        scs_special_print(print_mode, stderr, "Memory allocation error (progress arrays), code: %d\n", (int) i);
        return SCS_FAILED;
        /* LCOV_EXCL_STOP */
    }
    settings->previous_max_iters = settings->max_iters;

    if (scs_validate_solve_input(work, data, cone, sol, info)) {
        scs_special_print(print_mode, stderr, "ERROR: SCS_NULL input\n");
        return SCS_FAILED;
    }

    /* initialize ctrl-c support */
    startInterruptListener();
    scs_tic(&solveTimer);
    info->statusVal = SCS_UNFINISHED; /* not yet converged */
    r.last_iter = -1;
    scs_update_work(data, work, sol);

    if (settings->verbose > 0) scs_print_header(work, cone);

    /* Initialize: */
    i = 0; /* Needed for the next two functions */
    if (superscs_project_lin_sys(u_t, u, work, i) < 0) { /* u_t = (I+Q)^{-1} u*/
        return scs_failure(work, m, n, sol, info, SCS_FAILED,
                "error in projectLinSysv2", "Failure", print_mode);
    }
    if (superscs_project_cones(u_b, u_t, u, work, cone, i) < 0) { /* u_bar = proj_C(2u_t - u) */
        return scs_failure(work, m, n, sol, info, SCS_FAILED,
                "error in projectConesv2", "Failure", print_mode);
    }
    scs_compute_sb_kapb(work); /* compute s_b and kappa_b */
    scs_calc_FPR(R, u_t, u_b, l); /* compute Ru */
    /* initialize eta = |Ru^0| (norm of R using rho_x)... */
    eta = SQRTF(rhox * scs_norm_squared(R, n) + scs_norm_squared(R + n, m + 1));
    r_safe = eta;
    work->nrmR_con = eta;
    nrm_R_0 = MIN(1.0, eta);
    q_to_power_iter_times_nrmR0 *= nrm_R_0;

    /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
     * 
     * MAIN SUPER SCS LOOP 
     * 
     * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
    for (i = 0; i < settings->max_iters
            && scs_toc_quiet(&solveTimer) < work->stgs->max_time_milliseconds; ++i) {
        scs_int j_iter_ls = 0; /* j indexes the line search iterations */

        if (isInterrupted()) {
            return scs_failure(work, m, n, sol, info, SCS_SIGINT, "Interrupted",
                    "Interrupted", print_mode);
        }

        /* Convergence checks */
        if (i % SCS_CONVERGED_INTERVAL == 0) {
            scs_calc_residuals_superscs(work, &r, i);
            if (settings->do_record_progress) scs_record_progress_data(info, &r, work, &solveTimer, i);
            if ((info->statusVal = scs_has_converged(work, &r, i)) != 0) break;
        }

        /* Prints results every PRINT_INTERVAL iterations */
        if (settings->verbose && i % SCS_PRINT_INTERVAL == 0) {
            scs_calc_residuals_superscs(work, &r, i);
            scs_print_summary(work, i, &r, &solveTimer);
        }

        if (settings->ls > 0 || settings->k0 == 1) {
            q_to_power_iter_times_nrmR0 *= q0; /* q = q0^i = sse^i */
            if (i == 0) {
                /* -------------------------------------------
                 * At i=0, the direction is defined using the
                 * FPR: dir^0 = -R
                 * -------------------------------------------- */
                scs_set_as_scaled_array(dir, R, -sqrt_rhox, n);
                scs_set_as_scaled_array(dir + n, R + n, -1, m + 1);

            } else {
                scs_update_caches(work, sqrt_rhox, how);
                scs_scale_array(R, sqrt_rhox, n); /* R *= sqrt_rhox */
                if (scs_compute_direction(work, i) < 0) { /* compute direction */
                    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                     * Function `scs_compute_direction` is invoked at iterations i>=1.
                     * At i=1, the first pair (S,Y) has been computed (see work).
                     *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
                    return scs_failure(work, m, n, sol, info, SCS_FAILED,
                            "error in scs_compute_direction", "Failure", print_mode);
                }
                scs_scale_array(R, 1 / sqrt_rhox, n); /* R = R/sqrt_rhox */
            }
            /* -------------------------------------------
             * Scale the x-part of dir using sqrt_rhox
             * -------------------------------------------- */
            scs_scale_array(dir, 1 / sqrt_rhox, n);
        }

        memcpy(u_prev, u, l * sizeof (scs_float)); /* u_prev = u */
        memcpy(R_prev, R, l * sizeof (scs_float)); /* R_prev = R */
        scs_scale_array(R_prev, sqrt_rhox, n);
        how = -1; /* no backtracking (yet) */
        nrmR_con_old = work->nrmR_con;

        if (i >= settings->warm_start) {
            /* ------------------------------------------------
             *   Blind updates (K0)
             * ------------------------------------------------ */
            if (settings->k0 == 1 && work->nrmR_con <= settings->c_bl * eta) {
                scs_add_array(u, dir, l); /* u += dir */
                how = 0;
                eta = work->nrmR_con;
                work->stepsize = 1.0;
            } else if (settings->ls > 0) {
                if (superscs_project_lin_sys(dut, dir, work, i) < 0) {
                    return scs_failure(work, m, n, sol, info, SCS_FAILED, "error in superscs_project_lin_sys", "Failure", print_mode);
                }
                work->stepsize = 2.0;

                /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
                 *   Line search 
                 *   Main computational burden: 1 projection
                 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
                for (j_iter_ls = 0; j_iter_ls < settings->ls; ++j_iter_ls) {
                    work->stepsize *= settings->beta;
                    scs_axpy(wu, u, dir, 1.0, work->stepsize, l); /* wu = u + step * dir */
                    scs_axpy(wu_t, u_t, dut, 1.0, work->stepsize, l); /* wut = u_t + step * dut */

                    if (superscs_project_cones(wu_b, wu_t, wu, work, cone, i) < 0) {
                        return scs_failure(work, m, n, sol, info, SCS_FAILED, "error in superscs_project_cones", "Failure", print_mode);
                    }
                    scs_calc_FPR(Rwu, wu_t, wu_b, l); /* calculate FPR on scaled vectors */

                    nrmRw_con = SQRTF(scs_norm_squared(Rwu + n, m + 1) + rhox * scs_norm_squared(Rwu, n));

                    /* K1 */
                    if (settings->k1
                            && nrmRw_con <= settings->c1 * nrmR_con_old
                            && work->nrmR_con <= r_safe) {
                        scs_step_k1(work, nrmRw_con, &r_safe, q_to_power_iter_times_nrmR0, &how);
                        break;
                    }

                    /* K2 */
                    if (settings->k2 && scs_step_k2(work, nrmRw_con, &how)) break;
                } /* end of line-search */
                j_iter_ls++; /* to get the number of LS iterations */
            } /* end of `else if` block (when !K1 OR no blind update) */
        } /* IF-block: iterated after warm start */

        if (how == -1) { /* means that R didn't change */
            /* x -= alpha*Rx */
            scs_add_scaled_array(u, R, l, -alpha);
        } /* how == -1 */
        if (how != 1) { /* exited with other than K1 */
            scs_int status = scs_exit_loop_without_k1(work, sol, info, cone, i, print_mode);
            if (status < 0)
                return status;
        } /* how != 1 */

        /* -------------------------------------------
         * Record some more progress information
         * -------------------------------------------*/
        if (settings->do_record_progress && i % SCS_CONVERGED_INTERVAL == 0) {
            scs_int idx_progress = i / SCS_CONVERGED_INTERVAL;
            info->progress_mode[idx_progress] = how;
            info->progress_ls[idx_progress] = j_iter_ls;
        }

    } /* main for loop */


    info->cg_total_iters = scs_linsys_total_cg_iters(work->p);
    info->linsys_total_solve_time_ms = scs_linsys_total_solve_time_ms(work->p);

    scs_calc_residuals_superscs(work, &r, i);

    /* prints summary of last iteration */
    if (settings->verbose) scs_print_summary(work, i, &r, &solveTimer);

    /* populate solution vectors (unnormalized) and info */
    /* update u, denormalize, etc */
    scs_get_solution(work, sol, info, &r, i);
    info->iter = i;
    info->solveTime = scs_toc_quiet(&solveTimer);
    info->history_length = i / SCS_CONVERGED_INTERVAL;

    if (settings->verbose)
        scs_print_footer(data, cone, sol, work, info); /* LCOV_EXCL_LINE */
    endInterruptListener();

    return info->statusVal;
}

void scs_finish(ScsWork * RESTRICT w) {
    if (w != SCS_NULL) {
        scs_finish_cone(w->coneWork);
        if (w->stgs != SCS_NULL && w->stgs->normalize != 0) {
#ifndef COPYAMATRIX
            scs_unnormalize_a(w->A, w->stgs, w->scal);
#else
            scs_free_a_matrix(w->A);
#endif
        }
        if (w->p != SCS_NULL)
            scs_free_priv(w->p);
        scs_free_work(w);
    }
}

ScsWork * scs_init(
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone,
        ScsInfo * RESTRICT info) {
    ScsWork * RESTRICT work;
    ScsTimer initTimer;
    startInterruptListener();
    if (data == SCS_NULL
            || cone == SCS_NULL
            || info == SCS_NULL) {
        /* LCOV_EXCL_START */
        scs_special_print(data->stgs->do_override_streams, stderr, "ERROR: Missing Data, Cone or Info input\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
#ifndef NOVALIDATE
    if (scs_validate(data, cone) < 0) {
        scs_special_print(data->stgs->do_override_streams, stderr, "ERROR: Validation returned failure\n");
        return SCS_NULL;
    }
#endif
    scs_tic(&initTimer);
    work = scs_init_work(data, cone);
    /* strtoc("init", &initTimer); */
    info->setupTime = scs_toc_quiet(&initTimer);
    if (data->stgs->verbose) {
        scs_special_print(work->stgs->do_override_streams,
                work->stgs->output_stream, "Setup time: %1.2es\n", info->setupTime / 1e3);
    }
    endInterruptListener();
    return work;
}

static void scs_compute_allocated_memory(
        const ScsWork * RESTRICT work,
        const ScsCone * RESTRICT k,
        const ScsData * RESTRICT data,
        ScsInfo * RESTRICT info) {
    blasint temp_n_max = 0;
    unsigned long long allocated_memory;
    size_t i;
    size_t float_size = (scs_int) sizeof (scs_float);
    size_t int_size = (scs_int) sizeof (scs_int);
    size_t l = data->m + data->n + 1;
    long mem = work->stgs->memory;

    for (i = 0; i < k->ssize; ++i) {
        if (k->s[i] > temp_n_max) {
            temp_n_max = (blasint) k->s[i];
        }
    }

    allocated_memory =
            float_size * (2 * data->A->p[data->A->n]
            + 6 * data->m
            + 9 * data->n
            + k->qsize
            + k->psize
            + k->ssize
            + 2 * temp_n_max * temp_n_max
            + temp_n_max
            + work->coneWork->lwork
            + 10 * l)
            + int_size * (2 * data->A->p[data->A->n]
            + data->n
            + work->coneWork->liwork
            + data->m + 2);

    if (work->stgs->ls > 0) {
        allocated_memory += float_size * 4 * l;
    }
    if (work->stgs->direction == restarted_broyden && mem > 0) {
        allocated_memory += float_size * 2 * l * (mem + 1);
    }
    if (work->stgs->direction == anderson_acceleration) {
        allocated_memory += float_size * (4 * l * mem + l
                + mem + scs_svd_workspace_size(l, mem));
    }

    if (work->stgs->normalize) {
        allocated_memory += float_size * (data->m + data->n);
    }
    info->allocated_memory = allocated_memory;
}

#define SCS_BYTE_UNIT_STR_LEN 3

static void scs_units_allocated_mem(
        const ScsInfo * RESTRICT info,
        scs_float * memory,
        char *unit_of_measurement) {
    if (info->allocated_memory > 1e9) {
        strncpy(unit_of_measurement, "GB", SCS_BYTE_UNIT_STR_LEN);
        *memory = info->allocated_memory / 1e9;
    } else if (info->allocated_memory > 1e6) {
        strncpy(unit_of_measurement, "MB", SCS_BYTE_UNIT_STR_LEN);
        *memory = info->allocated_memory / 1e6;
    } else if (info->allocated_memory > 1e3) {
        strncpy(unit_of_measurement, "kB", SCS_BYTE_UNIT_STR_LEN);
        *memory = info->allocated_memory / 1e3;
    } else {
        strncpy(unit_of_measurement, "B", SCS_BYTE_UNIT_STR_LEN);
        *memory = info->allocated_memory;
    }
    unit_of_measurement[SCS_BYTE_UNIT_STR_LEN - 1] = '\0';
}

#define SCS_DIRECTION_STRING_LENGTH 24

static void scs_print_parameter_details(const ScsData * RESTRICT data) {
    scs_int print_mode = data->stgs->do_override_streams;
    FILE * stream = data->stgs->output_stream;
    char dir_string[SCS_DIRECTION_STRING_LENGTH];
    switch (data->stgs->direction) {
        case anderson_acceleration:
            strncpy(dir_string, "anderson", SCS_DIRECTION_STRING_LENGTH);
            break;
        case restarted_broyden:
            strncpy(dir_string, "restarted broyden", SCS_DIRECTION_STRING_LENGTH);
            break;
        case fixed_point_residual:
            strncpy(dir_string, "fixed point residual", SCS_DIRECTION_STRING_LENGTH);
            break;
        case full_broyden:
            strncpy(dir_string, "full broyden", SCS_DIRECTION_STRING_LENGTH);
            break;
        default:
            strncpy(dir_string, "unknown", SCS_DIRECTION_STRING_LENGTH);
    }
    scs_special_print(
            print_mode,
            stream,
            "\nSettings:\n"
            ".....................................................................\n"
            "alpha          : %2.1f\t\t"
            "beta           : %2.1f\n"
            "c1             : %2.1f\t\t"
            "c_bl           : %g\n"
            "cg_rate        : %g\t\t"
            "dir            : %s\n"
            "superscs       : %s\t\t"
            "eps            : %g\n"
            "(k0, k1, k2)   : (%d, %d, %d)\t"
            "ls             : %d\n"
            "max_iters      : %d\t\t"
            "max_time (min) : %g\n"
            "memory         : %d\t\t"
            "normalize      : %d\n"
            "rho_x          : %g\t\t"
            "scale          : %g\n"
            "sigma          : %g\t\t"
            "sse            : %g\n"
            "thetabar       : %g\t\t"
            "warm_start     : %d\n"
            ".....................................................................\n\n",
            (double) data->stgs->alpha,
            (double) data->stgs->beta,
            (double) data->stgs->c1,
            (double) data->stgs->c_bl,
            (double) data->stgs->cg_rate,
            dir_string,
            data->stgs->do_super_scs == 1 ? "yes" : "no",
            (double) data->stgs->eps,
            (int) data->stgs->k0,
            (int) data->stgs->k1,
            (int) data->stgs->k2,
            (int) data->stgs->ls,
            (int) data->stgs->max_iters,
            (double) data->stgs->max_time_milliseconds / 60000,
            (int) data->stgs->memory,
            (int) data->stgs->normalize,
            (double) data->stgs->rho_x,
            (double) data->stgs->scale,
            (double) data->stgs->sigma,
            (double) data->stgs->sse,
            (double) data->stgs->thetabar,
            (int) data->stgs->warm_start);
}

static void scs_print_allocated_memory(
        const ScsData * RESTRICT data,
        const ScsInfo * RESTRICT info) {
    scs_int print_mode = data->stgs->do_override_streams;
    FILE * stream = data->stgs->output_stream;
    scs_float mem = 0;
    char unit_mem[SCS_BYTE_UNIT_STR_LEN];
    scs_units_allocated_mem(info, &mem, unit_mem);
    scs_special_print(print_mode, stream, "Allocated Memory: %5.2f%s\n", (double) mem, unit_mem);
}

/* this just calls scs_init, scs_solve, and scs_finish */
scs_int scs(
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone,
        ScsSolution * RESTRICT sol,
        ScsInfo * RESTRICT info) {
    scs_int status;
    /* --------------------------------------------------
     * Create a Work object. It may happen that scs_init
     * returns SCS_NULL (e.g., if some parameter is out
     * of range, or memory could not be allocated).
     * -------------------------------------------------- */
    if (data->stgs->verbose >= 2) scs_print_parameter_details(data);
    ScsWork *work = scs_init(data, cone, info);
    scs_int print_mode = data->stgs->do_override_streams;
    FILE * stream = data->stgs->output_stream;

    if (work != SCS_NULL) {
        if (work->stgs->do_super_scs) {
            /* solve with SuperSCS*/
            if (work->stgs->verbose > 0) {
                scs_special_print(print_mode, stream, "\nRunning SuperSCS...\n");
                scs_compute_allocated_memory(work, cone, data, info);
                scs_print_allocated_memory(data, info);
            }
            superscs_solve(work, data, cone, sol, info);
        } else {
            /* solve with SCS */
            if (work->stgs->verbose > 0)
                scs_special_print(print_mode, stream, "Running Standard SCS...\n");
            scs_solve(work, data, cone, sol, info);
        }
        status = info->statusVal;
    } else {
        status = scs_failure(SCS_NULL, data ? data->m : -1, data ? data->n : -1, sol, info,
                SCS_FAILED, "could not initialize work", "Failure", print_mode);
    }
    scs_finish(work);
    return status;
}

ScsSolution * scs_init_sol() {
    ScsSolution * RESTRICT sol = scs_calloc(1, sizeof (* sol));
    if (sol == SCS_NULL) {
        /* LCOV_EXCL_START */
        printf("ERROR: allocating sol failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    sol->s = SCS_NULL;
    sol->x = SCS_NULL;
    sol->y = SCS_NULL;
    return sol;
}

ScsInfo * scs_init_info() {
    ScsInfo * RESTRICT info = scs_calloc(1, sizeof (*info));
    if (info == SCS_NULL) {
        /* LCOV_EXCL_START */
        printf("ERROR: allocating info failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }
    info->pobj = NAN;
    info->dobj = NAN;
    info->iter = -1;
    info->cg_total_iters = -1;
    info->linsys_total_solve_time_ms = -1;
    info->relGap = NAN;
    info->resDual = NAN;
    info->resInfeas = NAN;
    info->resPri = NAN;
    info->resUnbdd = NAN;
    info->setupTime = NAN;
    info->solveTime = NAN;
    info->statusVal = SCS_INDETERMINATE;
    info->progress_iter = SCS_NULL;
    info->progress_dcost = SCS_NULL;
    info->progress_pcost = SCS_NULL;
    info->progress_relgap = SCS_NULL;
    info->progress_resdual = SCS_NULL;
    info->progress_respri = SCS_NULL;
    info->progress_norm_fpr = SCS_NULL;
    info->progress_time = SCS_NULL;
    info->progress_mode = SCS_NULL;
    info->progress_ls = SCS_NULL;
    return info;
}

ScsData * scs_init_data() {
    ScsData * RESTRICT data = scs_malloc(sizeof (*data));

    if (data == SCS_NULL) {
        /* LCOV_EXCL_START */
        printf("ERROR: allocating data failure\n");
        return SCS_NULL;
        /* LCOV_EXCL_STOP */
    }

    data->A = SCS_NULL;
    data->b = SCS_NULL;
    data->c = SCS_NULL;
    data->m = 0;
    data->n = 0;

    data->stgs = scs_malloc(sizeof (ScsSettings));
    scs_set_default_settings(data);

    return data;
}

