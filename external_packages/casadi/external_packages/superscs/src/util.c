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
#include "util.h"
#include <float.h>
#include <stdio.h>

/* return milli-seconds */
#if (defined NOTIMER)

void scs_tic(ScsTimer *t) {
}

scs_float scs_toc_quiet(ScsTimer *t) {
    return NAN;
}

#elif(defined _WIN32 || _WIN64 || defined _WINDLL)

void scs_tic(ScsTimer *t) {
    QueryPerformanceFrequency(&t->freq);
    QueryPerformanceCounter(&t->tic);
}

scs_float scs_toc_quiet(ScsTimer *t) {
    QueryPerformanceCounter(&t->toc);
    return (1e3 * (t->toc.QuadPart - t->tic.QuadPart) /
            (scs_float) t->freq.QuadPart);
}
#elif(defined __APPLE__)

void scs_tic(ScsTimer *t) {
    /* read current clock cycles */
    t->tic = mach_absolute_time();
}

scs_float scs_toc_quiet(ScsTimer *t) {
    uint64_t duration; /* elapsed time in clock cycles*/

    t->toc = mach_absolute_time();
    duration = t->toc - t->tic;

    /*conversion from clock cycles to nanoseconds*/
    mach_timebase_info(&(t->tinfo));
    duration *= t->tinfo.numer;
    duration /= t->tinfo.denom;

    return (scs_float) duration / 1e6;
}
#else

void scs_tic(ScsTimer *t) {
    clock_gettime(CLOCK_MONOTONIC, &t->tic);
}

scs_float scs_toc_quiet(ScsTimer *t) {
    struct timespec temp;

    clock_gettime(CLOCK_MONOTONIC, &t->toc);

    if ((t->toc.tv_nsec - t->tic.tv_nsec) < 0) {
        temp.tv_sec = t->toc.tv_sec - t->tic.tv_sec - 1;
        temp.tv_nsec = 1e9 + t->toc.tv_nsec - t->tic.tv_nsec;
    } else {
        temp.tv_sec = t->toc.tv_sec - t->tic.tv_sec;
        temp.tv_nsec = t->toc.tv_nsec - t->tic.tv_nsec;
    }
    return (scs_float) temp.tv_sec * 1e3 + (scs_float) temp.tv_nsec / 1e6;
}
#endif

/* LCOV_EXCL_START */
scs_float scs_toc(ScsTimer *t) {
    scs_float time = scs_toc_quiet(t);
    scs_printf("time: %8.4f milli-seconds.\n", time);
    return time;
}

scs_float scs_strtoc(char *str, ScsTimer *t) {
    scs_float time = scs_toc_quiet(t);
    scs_printf("%s - time: %8.4f milli-seconds.\n", str, time);
    return time;
}

void scs_print_cone_data(const ScsCone *RESTRICT k) {
    scs_int i;
    scs_printf("num zeros = %i\n", (int) k->f);
    scs_printf("num LP = %i\n", (int) k->l);
    scs_printf("num SOCs = %i\n", (int) k->qsize);
    scs_printf("soc array:\n");
    for (i = 0; i < k->qsize; i++) {
        scs_printf("%i\n", (int) k->q[i]);
    }
    scs_printf("num SDCs = %i\n", (int) k->ssize);
    scs_printf("sdc array:\n");
    for (i = 0; i < k->ssize; i++) {
        scs_printf("%i\n", (int) k->s[i]);
    }
    scs_printf("num ep = %i\n", (int) k->ep);
    scs_printf("num ed = %i\n", (int) k->ed);
    scs_printf("num PCs = %i\n", (int) k->psize);
    scs_printf("pow array:\n");
    for (i = 0; i < k->psize; i++) {
        scs_printf("%4f\n", (double) k->p[i]);
    }
}

void scs_print_work(const ScsWork *w) {
    scs_int i, l = w->n + w->m;
    scs_printf("\n u_t is \n");
    for (i = 0; i < l; i++) {
        scs_printf("%f\n", w->u_t[i]);
    }
    scs_printf("\n u is \n");
    for (i = 0; i < l; i++) {
        scs_printf("%f\n", w->u[i]);
    }
    scs_printf("\n v is \n");
    for (i = 0; i < l; i++) {
        scs_printf("%f\n", w->v[i]);
    }
}

void scs_print_data(const ScsData *d) {
    scs_printf("m = %i\n", (int) d->m);
    scs_printf("n = %i\n", (int) d->n);

    scs_printf("max_iters = %i\n", (int) d->stgs->max_iters);
    scs_printf("verbose = %i\n", (int) d->stgs->verbose);
    scs_printf("normalize = %i\n", (int) d->stgs->normalize);
    scs_printf("warmStart = %i\n", (int) d->stgs->warm_start);
    scs_printf("eps = %4f\n", d->stgs->eps);
    scs_printf("alpha = %4f\n", d->stgs->alpha);
    scs_printf("rhoX = %4f\n", d->stgs->rho_x);
    scs_printf("cg_rate = %4f\n", d->stgs->cg_rate);
    scs_printf("scale = %4f\n", d->stgs->scale);
}

void scs_print_array(const scs_float *RESTRICT arr, scs_int n, const char *RESTRICT name) {
    scs_int i, j, k = 0;
    scs_int numOnOneLine = 1;
    const scs_int n_max = MAX(n, 1e5);

    scs_printf("\n");
    for (i = 0; i < n_max / numOnOneLine; ++i) {
        for (j = 0; j < numOnOneLine; ++j) {
            scs_printf("%s[%li] = %4f, ", name, (long) k, arr[(unsigned) k]);
            k++;
        }
        scs_printf("\n");
    }
    for (j = k; j < n_max; ++j) {
        scs_printf("%s[%li] = %4f, ", name, (long) j, arr[(unsigned) j]);
    }
    scs_printf("\n");
}

/* LCOV_EXCL_STOP */

void scs_free_data(ScsData *RESTRICT data) {
    if (data != SCS_NULL) {
        if (data->b != SCS_NULL)
            scs_free(data->b);
        if (data->c != SCS_NULL)
            scs_free(data->c);
        if (data->stgs != SCS_NULL)
            scs_free(data->stgs);
        if (data->A != SCS_NULL) {
            scs_free_a_matrix(data->A);
        }
        scs_free(data);
    }
}

void scs_free_cone(ScsCone *RESTRICT cone) {
    if (cone != SCS_NULL) {
        if (cone->q != SCS_NULL)
            scs_free(cone->q);
        if (cone->s != SCS_NULL)
            scs_free(cone->s);
        if (cone->p != SCS_NULL)
            scs_free(cone->p);
        scs_free(cone);
    }
}

void scs_free_data_cone(ScsData *RESTRICT data, ScsCone *RESTRICT cone) {
    scs_free_data(data);
    scs_free_cone(cone);
}

void scs_free_sol(ScsSolution *sol) {
    if (sol != SCS_NULL) {
        if (sol->x != SCS_NULL) {
            scs_free(sol->x);
        }
        if (sol->y != SCS_NULL) {
            scs_free(sol->y);
        }
        if (sol->s != SCS_NULL) {
            scs_free(sol->s);
        }
        scs_free(sol);
    }
}

void scs_free_info(ScsInfo *RESTRICT info) {
    if (info != SCS_NULL) {
        if (info->progress_iter != SCS_NULL) {
            scs_free(info->progress_iter);
        }
        if (info->progress_relgap != SCS_NULL) {
            scs_free(info->progress_relgap);
        }
        if (info->progress_resdual != SCS_NULL) {
            scs_free(info->progress_resdual);
        }
        if (info->progress_respri != SCS_NULL) {
            scs_free(info->progress_respri);
        }
        if (info->progress_pcost != SCS_NULL) {
            scs_free(info->progress_pcost);
        }
        if (info->progress_dcost != SCS_NULL) {
            scs_free(info->progress_dcost);
        }
        if (info->progress_norm_fpr != SCS_NULL) {
            scs_free(info->progress_norm_fpr);
        }
        if (info->progress_time != SCS_NULL) {
            scs_free(info->progress_time);
        }
        if (info->progress_mode != SCS_NULL) {
            scs_free(info->progress_mode);
        }
        if (info->progress_ls != SCS_NULL) {
            scs_free(info->progress_ls);
        }
        scs_free(info);
    }
}

/* assumes d->stgs already allocated memory */
void scs_set_default_settings(ScsData *RESTRICT d) {
    d->stgs->max_time_milliseconds = SCS_MAX_TIME_MILLISECONDS;
    d->stgs->max_iters = SCS_MAX_ITERS_DEFAULT; /* maximum iterations to take: 2500 */
    d->stgs->previous_max_iters = SCS_PMAXITER_DEFAULT; /* maximum iterations of previous invocation */
    d->stgs->eps = SCS_EPS_DEFAULT; /* convergence tolerance: 1e-3 */
    d->stgs->alpha = SCS_ALPHA_DEFAULT; /* relaxation parameter: 1.5 */
    d->stgs->rho_x = SCS_RHO_X_DEFAULT; /* parameter rho_x: 1e-3 */
    d->stgs->scale = SCS_SCALE_DEFAULT; /* if normalized, rescales by this factor: 1 */
    d->stgs->cg_rate = SCS_CG_RATE_DEFAULT; /* for indirect, tolerance goes down like (1/iter)^CG_RATE: 2 */
    d->stgs->verbose = SCS_VERBOSE_DEFAULT; /* int, 3 levels (0, 1, 2), write out progress: 1 */
    d->stgs->normalize = SCS_NORMALIZE_DEFAULT; /* boolean, heuristic data rescaling: 1 */
    d->stgs->warm_start = SCS_WARM_START_DEFAULT;

    /* -----------------------------
     * SuperSCS-specific parameters
     * ----------------------------- */
    d->stgs->beta = SCS_BETA_DEFAULT;
    d->stgs->c1 = SCS_C1_DEFAULT;
    d->stgs->c_bl = SCS_C_BL_DEFAULT;
    d->stgs->k0 = SCS_K0_DEFAULT;
    d->stgs->k1 = SCS_K1_DEFAULT;
    d->stgs->k2 = SCS_K2_DEFAULT;
    d->stgs->ls = SCS_LS_DEFAULT;
    d->stgs->sigma = SCS_SIGMA_DEFAULT;
    d->stgs->thetabar = SCS_THETABAR_DEFAULT;
    d->stgs->sse = SCS_SSE_DEFAULT;
    d->stgs->memory = SCS_MEMORY_DEFAULT;
    d->stgs->direction = SCS_DIRECTION_DEFAULT;
    d->stgs->do_super_scs = SCS_DO_SUPERSCS_DEFAULT; /* whether to run in SuperSCS mode (default: 1) */
    d->stgs->do_record_progress = SCS_DO_RECORD_PROGRESS_DEFAULT;
    d->stgs->do_override_streams = SCS_OVERRIDE_STREAMS_DEFAULT;
    d->stgs->output_stream = SCS_OUT_STREAM_DEFAULT;
    d->stgs->tRule = 1;
    d->stgs->broyden_init_scaling = SCS_BROYDEN_ISCS_SCALE_DEFAULT;
}

void scs_set_tolerance(ScsData * RESTRICT data, scs_float tolerance) {
    if (data == SCS_NULL || data->stgs == SCS_NULL) return;
    data->stgs->eps = MAX(tolerance, 10 * DBL_EPSILON);
}

void scs_set_memory(ScsData * RESTRICT data, scs_int memory) {
    if (data->stgs->direction == anderson_acceleration) {
        data->stgs->memory = MAX(2, MIN(data->m + data->n + 1, memory));
    } else {
        data->stgs->memory = MAX(2, memory);
    }
}

void scs_set_restarted_broyden_settings(ScsData * RESTRICT data, scs_int broyden_memory) {
    if (data == SCS_NULL || data->stgs == SCS_NULL) return;
    scs_set_default_settings(data);
    data->stgs->direction = restarted_broyden;
    scs_set_memory(data, broyden_memory);
    data->stgs->k0 = 0;
}

void scs_set_anderson_settings(ScsData * RESTRICT data, scs_int anderson_memory) {
    if (data == SCS_NULL || data->stgs == SCS_NULL) return;
    scs_set_default_settings(data);
    data->stgs->direction = anderson_acceleration;
    scs_set_memory(data, anderson_memory);
    data->stgs->k0 = 1;
}

int scs_special_print(
        scs_int print_mode,
        FILE *RESTRICT __stream,
        const char *RESTRICT __format, ...) {
    int status;
    va_list args; /* variable-lenth args */
    va_start(args, __format); /* The variable-lenth args start after __format */

    if (print_mode == 0) {
        /* -----------------------------------------------------
         * The reason we do the following is because MATLAB
         * redefines printf as mexPrintf. If we use vprintf, 
         * or any other function, such as fprintf, MATLAB will
         * not be able to show anything in the MATLAB console.
         * ----------------------------------------------------- */
        char message_buffer[4096];
        vsnprintf(message_buffer, 4096, __format, args);
        status = printf("%s", message_buffer);
    } else {
        status = vfprintf(__stream, __format, args);
    }
    va_end(args);
    return status;
}