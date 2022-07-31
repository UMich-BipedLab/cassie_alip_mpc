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
#include "scs_blas.h" /* contains BLAS(X) macros and type info */

#define CONE_RATE (2)
#define CONE_TOL (1e-8)
#define CONE_THRESH (1e-6)
#define EXP_CONE_MAX_ITERS (100)
#define POW_CONE_MAX_ITERS (20)

#ifdef LAPACK_LIB_FOUND
extern void BLAS(syevr)(const char *jobz, const char *range, const char *uplo,
        blasint *n, scs_float *a, blasint *lda, scs_float *vl,
        scs_float *vu, blasint *il, blasint *iu, scs_float *abstol,
        blasint *m, scs_float *w, scs_float *z, blasint *ldz,
        blasint *isuppz, scs_float *work, blasint *lwork,
        blasint *iwork, blasint *liwork, blasint *info);
extern void BLAS(syr)(const char *uplo, const blasint *n, const scs_float *alpha,
        const scs_float *x, const blasint *incx, scs_float *a,
        const blasint *lda);
extern void BLAS(scal)(const blasint *n, const scs_float *sa, scs_float *sx,
        const blasint *incx);
extern scs_float BLAS(nrm2)(const blasint *n, scs_float *x, const blasint *incx);
#endif

static scs_int getSdConeSize(scs_int s) {
    return (s * (s + 1)) / 2;
}

/*
 * boundaries will contain array of indices of rows of A corresponding to
 * cone boundaries, boundaries[0] is starting index for cones of size strictly
 * larger than 1
 * returns length of boundaries array, boundaries malloc-ed here so should be
 * freed
 */
scs_int scs_get_cone_boundaries(
        const ScsCone * RESTRICT k,
        scs_int * * RESTRICT boundaries) {
    scs_int i, count = 0;
    scs_int len = 1 + k->qsize + k->ssize + k->ed + k->ep + k->psize;
    scs_int *RESTRICT b = scs_malloc(sizeof (scs_int) * len);
    b[count] = k->f + k->l;
    count += 1;
    if (k->qsize > 0) {
        memcpy(&b[count], k->q, k->qsize * sizeof (scs_int));
    }
    count += k->qsize;
    for (i = 0; i < k->ssize; ++i) {
        b[count + i] = getSdConeSize(k->s[i]);
    }
    count += k->ssize;
    for (i = 0; i < k->ep + k->ed; ++i) {
        b[count + i] = 3;
    }
    count += k->ep + k->ed;
    for (i = 0; i < k->psize; ++i) {
        b[count + i] = 3;
    }
    /* count += k->psize; */
    *boundaries = b;
    return len;
}

static scs_int getFullConeDims(const ScsCone *RESTRICT k) {
    scs_int i, c = 0;
    if (k->f)
        c += k->f;
    if (k->l)
        c += k->l;
    if (k->qsize && k->q) {
        for (i = 0; i < k->qsize; ++i) {
            c += k->q[i];
        }
    }
    if (k->ssize && k->s) {
        for (i = 0; i < k->ssize; ++i) {
            c += getSdConeSize(k->s[i]);
        }
    }
    if (k->ed)
        c += 3 * k->ed;
    if (k->ep)
        c += 3 * k->ep;
    if (k->p)
        c += 3 * k->psize;
    return c;
}

scs_int scs_validate_cones(const ScsData * RESTRICT d, const ScsCone * RESTRICT k) {
    scs_int i;
    if (getFullConeDims(k) != d->m) {
        scs_printf("cone dimensions %li not equal to num rows in A = m = %li\n",
                (long) getFullConeDims(k), (long) d->m);
        return -1;
    }
    if (k->f && k->f < 0) {
        scs_printf("free cone error\n");
        return -1;
    }
    if (k->l && k->l < 0) {
        scs_printf("lp cone error\n");
        return -1;
    }
    if (k->qsize && k->q) {
        if (k->qsize < 0) {
            scs_printf("soc cone error\n");
            return -1;
        }
        for (i = 0; i < k->qsize; ++i) {
            if (k->q[i] < 0) {
                scs_printf("soc cone error\n");
                return -1;
            }
        }
    }
    if (k->ssize && k->s) {
        if (k->ssize < 0) {
            scs_printf("sd cone error\n");
            return -1;
        }
        for (i = 0; i < k->ssize; ++i) {
            if (k->s[i] < 0) {
                scs_printf("sd cone error\n");
                return -1;
            }
        }
    }
    if (k->ed && k->ed < 0) {
        scs_printf("ep cone error\n");
        return -1;
    }
    if (k->ep && k->ep < 0) {
        scs_printf("ed cone error\n");
        return -1;
    }
    if (k->psize && k->p) {
        if (k->psize < 0) {
            scs_printf("power cone error\n");
            return -1;
        }
        for (i = 0; i < k->psize; ++i) {
            if (k->p[i] < -1 || k->p[i] > 1) {
                scs_printf("power cone error, values must be in [-1,1]\n");
                return -1;
            }
        }
    }
    return 0;
}

char *scs_get_cone_summary(const ScsInfo * RESTRICT info, ScsConeWork * RESTRICT c) {
    char *str = scs_malloc(sizeof (char) * 64);
    sprintf(str, "\tCones: avg projection time: %1.2es\n",
            c->total_cone_time / (info->iter + 1) / 1e3);
    c->total_cone_time = 0.0;
    return str;
}

void scs_finish_cone(ScsConeWork * RESTRICT c) {
#ifdef LAPACK_LIB_FOUND
    scs_free(c->Xs);
    scs_free(c->Z);
    scs_free(c->e);
    scs_free(c->work);
    scs_free(c->iwork);
#endif
    scs_free(c);
}

char *scs_get_cone_header(const ScsCone * RESTRICT k) {
    char *tmp = scs_malloc(sizeof (char) * 512);
    scs_int i, socVars, socBlks, sdVars, sdBlks;
    sprintf(tmp, "Cones:");
    if (k->f) {
        sprintf(tmp + strlen(tmp), "\tprimal zero / dual free vars: %li\n",
                (long) k->f);
    }
    if (k->l) {
        sprintf(tmp + strlen(tmp), "\tlinear vars: %li\n", (long) k->l);
    }
    socVars = 0;
    socBlks = 0;
    if (k->qsize && k->q) {
        socBlks = k->qsize;
        for (i = 0; i < k->qsize; i++) {
            socVars += k->q[i];
        }
        sprintf(tmp + strlen(tmp), "\tsoc vars: %li, soc blks: %li\n",
                (long) socVars, (long) socBlks);
    }
    sdVars = 0;
    sdBlks = 0;
    if (k->ssize && k->s) {
        sdBlks = k->ssize;
        for (i = 0; i < k->ssize; i++) {
            sdVars += getSdConeSize(k->s[i]);
        }
        sprintf(tmp + strlen(tmp), "\tsd vars: %li, sd blks: %li\n",
                (long) sdVars, (long) sdBlks);
    }
    if (k->ep || k->ed) {
        sprintf(tmp + strlen(tmp), "\texp vars: %li, dual exp vars: %li\n",
                (long) 3 * k->ep, (long) 3 * k->ed);
    }
    if (k->psize && k->p) {
        sprintf(tmp + strlen(tmp), "\tprimal + dual power vars: %li\n",
                (long) 3 * k->psize);
    }
    return tmp;
}

static scs_int isSimpleSemiDefiniteCone(scs_int * RESTRICT s, scs_int ssize) {
    scs_int i;
    for (i = 0; i < ssize; i++) {
        if (s[i] > 2) {
            return 0; /* false */
        }
    }
    return 1; /* true */
}

static scs_float expNewtonOneD(scs_float rho, scs_float y_hat, scs_float z_hat) {
    scs_float t = MAX(-z_hat, 1e-6);
    scs_float f, fp;
    scs_int i;
    for (i = 0; i < EXP_CONE_MAX_ITERS; ++i) {
        f = t * (t + z_hat) / rho / rho - y_hat / rho + log(t / rho) + 1;
        fp = (2 * t + z_hat) / rho / rho + 1 / t;

        t = t - f / fp;

        if (t <= -z_hat) {
            return 0;
        } else if (t <= 0) {
            return z_hat;
        } else if (ABS(f) < CONE_TOL) {
            break;
        }
    }
    return t + z_hat;
}

static void expSolveForXWithRho(scs_float * RESTRICT v, scs_float * RESTRICT x, scs_float rho) {
    x[2] = expNewtonOneD(rho, v[1], v[2]);
    x[1] = (x[2] - v[2]) * x[2] / rho;
    x[0] = v[0] - rho;
}

static scs_float expCalcGrad(scs_float * RESTRICT v, scs_float * RESTRICT x, scs_float rho) {
    expSolveForXWithRho(v, x, rho);
    if (x[1] <= 1e-12) {
        return x[0];
    }
    return x[0] + x[1] * log(x[1] / x[2]);
}

static void expGetRhoUb(scs_float * RESTRICT v, scs_float * RESTRICT x, scs_float * RESTRICT ub, scs_float *lb) {
    *lb = 0;
    *ub = 0.125;
    while (expCalcGrad(v, x, *ub) > 0) {
        *lb = *ub;
        (*ub) *= 2;
    }
}

/* project onto the exponential cone, v has dimension *exactly* 3 */
static scs_int projExpCone(scs_float * RESTRICT v, scs_int iter) {
    scs_int i;
    scs_float ub, lb, rho, g, x[3];
    scs_float r = v[0], s = v[1], t = v[2];
    scs_float tol = CONE_TOL; /* iter < 0 ? CONE_TOL : MAX(CONE_TOL, 1 /
                                 POWF((iter + 1), CONE_RATE)); */

    /* v in cl(Kexp) */
    if ((s > 0 && s * exp(r / s) - t <= CONE_THRESH) ||
            (r <= 0 && s == 0 && t >= 0)) {
        return 0;
    }

    /* -v in Kexp^* */
    if ((-r < 0 && r * exp(s / r) + exp(1) * t <= CONE_THRESH) ||
            (-r == 0 && -s >= 0 && -t >= 0)) {
        memset(v, 0, 3 * sizeof (scs_float));
        return 0;
    }

    /* special case with analytical solution */
    if (r < 0 && s < 0) {
        v[1] = 0.0;
        v[2] = MAX(v[2], 0);
        return 0;
    }

    /* iterative procedure to find projection, bisects on dual variable: */
    expGetRhoUb(v, x, &ub, &lb); /* get starting upper and lower bounds */
    for (i = 0; i < EXP_CONE_MAX_ITERS; ++i) {
        rho = (ub + lb) / 2; /* halfway between upper and lower bounds */
        g = expCalcGrad(v, x, rho); /* calculates gradient wrt dual var */
        if (g > 0) {
            lb = rho;
        } else {
            ub = rho;
        }
        if (ub - lb < tol) {
            break;
        }
    }
    v[0] = x[0];
    v[1] = x[1];
    v[2] = x[2];
    return 0;
}

static scs_int setUpSdScsConeWorkSpace(ScsConeWork * RESTRICT c, const ScsCone * RESTRICT k) {
#ifdef LAPACK_LIB_FOUND
    scs_int i;
    blasint nMax = 0;
    scs_float eigTol = 1e-8;
    blasint negOne = -1;
    blasint m = 0;
    blasint info;
    scs_float wkopt;

    /* eigenvector decomp workspace */
    for (i = 0; i < k->ssize; ++i) {
        if (k->s[i] > nMax) {
            nMax = (blasint) k->s[i];
        }
    }
    c->Xs = scs_calloc(nMax * nMax, sizeof (scs_float));
    c->Z = scs_calloc(nMax * nMax, sizeof (scs_float));
    c->e = scs_calloc(nMax, sizeof (scs_float));

    BLAS(syevr)("Vectors", "All", "Lower", &nMax, c->Xs, &nMax, SCS_NULL,
            SCS_NULL, SCS_NULL, SCS_NULL, &eigTol, &m, c->e, c->Z, &nMax,
            SCS_NULL, &wkopt, &negOne, &(c->liwork), &negOne, &info);

    if (info != 0) {
        scs_printf("FATAL: syevr failure, info = %li\n", (long) info);
        return -1;
    }
    c->lwork = (blasint) (wkopt + 0.01); /* 0.01 for int casting safety */
    c->work = scs_malloc(c->lwork * sizeof (scs_float));
    c->iwork = scs_malloc(c->liwork * sizeof (blasint));

    if (c->Xs == SCS_NULL || c->Z == SCS_NULL
            || c->e == SCS_NULL || c->work == SCS_NULL
            || c->iwork == SCS_NULL) {
        return -1;
    }
    return 0;
#else
    scs_printf("FATAL: Cannot solve SDPs with > 2x2 matrices without linked "
            "blas+lapack libraries\n");
    scs_printf("Install blas+lapack and re-compile SCS with blas+lapack libray "
            "locations\n");
    return -1;
#endif
}

ScsConeWork *scs_init_conework(const ScsCone * RESTRICT k) {
    ScsConeWork * RESTRICT coneWork = scs_calloc(1, sizeof (ScsConeWork));
    coneWork->total_cone_time = 0.0;
    if (k->ssize && k->s) {
        if (isSimpleSemiDefiniteCone(k->s, k->ssize) == 0 &&
                setUpSdScsConeWorkSpace(coneWork, k) < 0) {
            scs_finish_cone(coneWork);
            return SCS_NULL;
        }
    }
    return coneWork;
}

scs_int project2By2Sdc(scs_float *X) {
    scs_float a, b, d, l1, l2, x1, x2, rad;
    scs_float sqrt2 = SQRTF(2.0);
    a = X[0];
    b = X[1] / sqrt2;
    d = X[2];

    if (ABS(b) < 1e-6) { /* diagonal matrix */
        X[0] = MAX(a, 0);
        X[1] = 0;
        X[2] = MAX(d, 0);
        return 0;
    }

    rad = SQRTF((a - d) * (a - d) + 4 * b * b);
    /* l1 >= l2 always, since rad >= 0 */
    l1 = 0.5 * (a + d + rad);
    l2 = 0.5 * (a + d - rad);


    if (l2 >= 0) { /* both eigs positive already */
        return 0;
    }
    if (l1 <= 0) { /* both eigs negative, set to 0 */
        X[0] = 0;
        X[1] = 0;
        X[2] = 0;
        return 0;
    }

    /* l1 pos, l2 neg */
    x1 = 1 / SQRTF(1 + (l1 - a) * (l1 - a) / b / b);
    x2 = x1 * (l1 - a) / b;

    X[0] = l1 * x1 * x1;
    X[1] = (l1 * x1 * x2) * sqrt2;
    X[2] = l1 * x2 * x2;
    return 0;
}

/* size of X is getSdConeSize(n) */
static scs_int projSemiDefiniteCone(
        scs_float * RESTRICT X,
        const scs_int n,
        ScsConeWork * RESTRICT c,
        const scs_int iter) {
    /* project onto the positive semi-definite cone */
#ifdef LAPACK_LIB_FOUND
    scs_int i;
    blasint one = 1;
    blasint m = 0;
    blasint nb = (blasint) n;
    blasint nbPlusOne = (blasint) (n + 1);
    blasint coneSz = (blasint) (getSdConeSize(n));

    scs_float sqrt2 = SQRTF(2.0);
    scs_float sqrt2Inv = 1.0 / sqrt2;
    scs_float *RESTRICT Xs = c->Xs;
    scs_float *RESTRICT Z = c->Z;
    scs_float *RESTRICT e = c->e;
    scs_float *RESTRICT work = c->work;
    blasint *RESTRICT iwork = c->iwork;
    blasint lwork = c->lwork;
    blasint liwork = c->liwork;

    scs_float eigTol = CONE_TOL; /* iter < 0 ? CONE_TOL : MAX(CONE_TOL, 1 /
                                    POWF(iter + 1, CONE_RATE)); */
    scs_float zero = 0.0;
    blasint info;
    scs_float vupper;
#endif /* LAPACK_LIB_FOUND */
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        if (X[0] < 0.0) {
            X[0] = 0.0;
        }
        return 0;
    }
    if (n == 2) {
        return project2By2Sdc(X);
    }
#ifdef LAPACK_LIB_FOUND
    /* expand lower triangular matrix to full matrix */
    for (i = 0; i < n; ++i) {
        memcpy(&(Xs[i * (n + 1)]), &(X[i * n - ((i - 1) * i) / 2]),
                (n - i) * sizeof (scs_float));
    }
    /*
       rescale so projection works, and matrix norm preserved
       see http://www.seas.ucla.edu/~vandenbe/publications/mlbook.pdf pg 3
     */
    /* scale diags by sqrt(2) */
    BLAS(scal)(&nb, &sqrt2, Xs, &nbPlusOne); /* not nSquared */

    /* max-eig upper bounded by frobenius norm */
    vupper = 1.1 * sqrt2 *
            BLAS(nrm2)(&coneSz, X,
            &one); /* mult by factor to make sure is upper bound */
    vupper = MAX(vupper, 0.01);

    /* Solve eigenproblem, reuse workspaces */
    BLAS(syevr)("Vectors", "VInterval", "Lower", &nb, Xs, &nb, &zero, &vupper,
            SCS_NULL, SCS_NULL, &eigTol, &m, e, Z, &nb, SCS_NULL, work,
            &lwork, iwork, &liwork, &info);

    if (info < 0)
        return -1;

    memset(Xs, 0, n * n * sizeof (scs_float));
    for (i = 0; i < m; ++i) {
        scs_float a = e[i];
        BLAS(syr)("Lower", &nb, &a, &(Z[i * n]), &one, Xs, &nb);
    }
    /* scale diags by 1/sqrt(2) */
    BLAS(scal)(&nb, &sqrt2Inv, Xs, &nbPlusOne); /* not nSquared */
    /* extract just lower triangular matrix */
    for (i = 0; i < n; ++i) {
        memcpy(&(X[i * n - ((i - 1) * i) / 2]), &(Xs[i * (n + 1)]),
                (n - i) * sizeof (scs_float));
    }

#else /* LAPACK_LIB_FOUND */
    scs_printf("FAILURE: solving SDP with > 2x2 matrices, but no blas/lapack "
            "libraries were linked!\n");
    scs_printf("SCS will return nonsense!\n");
    scs_scale_array(X, NAN, n);
    return -1;
#endif /* LAPACK_LIB_FOUND */
    return 0;
}

static scs_float powCalcX(scs_float r, scs_float xh, scs_float rh, scs_float a) {
    scs_float x = 0.5 * (xh + SQRTF(xh * xh + 4 * a * (rh - r) * r));
    return MAX(x, 1e-12);
}

static scs_float powCalcdxdr(scs_float x, scs_float xh, scs_float rh, scs_float r,
        scs_float a) {
    return a * (rh - 2 * r) / (2 * x - xh);
}

static scs_float powCalcF(scs_float x, scs_float y, scs_float r, scs_float a) {
    return POWF(x, a) * POWF(y, (1 - a)) - r;
}

static scs_float powCalcFp(scs_float x, scs_float y, scs_float dxdr, scs_float dydr,
        scs_float a) {
    return POWF(x, a) * POWF(y, (1 - a)) * (a * dxdr / x + (1 - a) * dydr / y) -
            1;
}

static void projPowerCone(scs_float *RESTRICT v, scs_float a) {
    scs_float xh = v[0], yh = v[1], rh = ABS(v[2]);
    scs_float x, y, r;
    scs_int i;
    /* v in K_a */
    if (xh >= 0 && yh >= 0 &&
            CONE_THRESH + POWF(xh, a) * POWF(yh, (1 - a)) >= rh)
        return;

    /* -v in K_a^* */
    if (xh <= 0 && yh <= 0 &&
            CONE_THRESH + POWF(-xh, a) * POWF(-yh, 1 - a) >=
            rh * POWF(a, a) * POWF(1 - a, 1 - a)) {
        v[0] = v[1] = v[2] = 0;
        return;
    }

    r = rh / 2;
    for (i = 0; i < POW_CONE_MAX_ITERS; ++i) {
        scs_float f, fp, dxdr, dydr;
        x = powCalcX(r, xh, rh, a);
        y = powCalcX(r, yh, rh, 1 - a);

        f = powCalcF(x, y, r, a);
        if (ABS(f) < CONE_TOL)
            break;

        dxdr = powCalcdxdr(x, xh, rh, r, a);
        dydr = powCalcdxdr(y, yh, rh, r, (1 - a));
        fp = powCalcFp(x, y, dxdr, dydr, a);

        r = MAX(r - f / fp, 0);
        r = MIN(r, rh);
    }
    v[0] = x;
    v[1] = y;
    v[2] = (v[2] < 0) ? -(r) : (r);
}

/* outward facing cone projection routine, iter is outer algorithm iteration, if
   iter < 0 then iter is ignored
    warm_start contains guess of projection (can be set to SCS_NULL) */
scs_int scs_project_dual_cone(
        scs_float * RESTRICT x,
        const ScsCone * RESTRICT k,
        ScsConeWork * RESTRICT c,
        const scs_float * RESTRICT warm_start,
        scs_int iter) {
    scs_int i;
    scs_int count = (k->f ? k->f : 0);
    ScsTimer coneTimer;
    scs_tic(&coneTimer);

    if (k->l) {
        /* project onto positive orthant */
        for (i = count; i < count + k->l; ++i) {
            if (x[i] < 0.0)
                x[i] = 0.0;
            /* x[i] = (x[i] < 0.0) ? 0.0 : x[i]; */
        }
        count += k->l;
    }

    if (k->qsize && k->q) {
        /* project onto SOC */
        for (i = 0; i < k->qsize; ++i) {
            if (k->q[i] == 0) {
                continue;
            }
            if (k->q[i] == 1) {
                if (x[count] < 0.0)
                    x[count] = 0.0;
            } else {
                scs_float v1 = x[count];
                scs_float s = scs_norm(&(x[count + 1]), k->q[i] - 1);
                scs_float alpha = (s + v1) / 2.0;

                if (s <= v1) { /* do nothing */
                } else if (s <= -v1) {
                    memset(&(x[count]), 0, k->q[i] * sizeof (scs_float));
                } else {
                    x[count] = alpha;
                    scs_scale_array(&(x[count + 1]), alpha / s, k->q[i] - 1);
                }
            }
            count += k->q[i];
        }
    }

    if (k->ssize && k->s) {
        /* project onto PSD cone */
        for (i = 0; i < k->ssize; ++i) {
            if (k->s[i] == 0) {
                continue;
            }
            if (projSemiDefiniteCone(&(x[count]), k->s[i], c, iter) < 0)
                return -1;
            count += getSdConeSize(k->s[i]);
        }
    }

    if (k->ep) {
        scs_float r, s, t;
        scs_int idx;
        /*
         * exponential cone is not self dual, if s \in K
         * then y \in K^* and so if K is the primal cone
         * here we project onto K^*, via Moreau
         * \Pi_C^*(y) = y + \Pi_C(-y)
         */
        scs_scale_array(&(x[count]), -1, 3 * k->ep); /* x = -x; */
#ifdef _OPENMP
#pragma omp parallel for private(r, s, t, idx)
#endif
        for (i = 0; i < k->ep; ++i) {
            idx = count + 3 * i;
            r = x[idx];
            s = x[idx + 1];
            t = x[idx + 2];

            projExpCone(&(x[idx]), iter);

            x[idx] -= r;
            x[idx + 1] -= s;
            x[idx + 2] -= t;
        }
        count += 3 * k->ep;
    }

    if (k->ed) {
        /* exponential cone: */
#ifdef _OPENMP
#pragma omp parallel for
#endif
        for (i = 0; i < k->ed; ++i) {
            projExpCone(&(x[count + 3 * i]), iter);
        }
        count += 3 * k->ed;
    }

    if (k->psize && k->p) {
        scs_float v[3];
        scs_int idx;
        /* don't use openmp for power cone
        ifdef _OPENMP
        pragma omp parallel for private(v, idx)
        endif
         */
        for (i = 0; i < k->psize; ++i) {
            idx = count + 3 * i;
            if (k->p[i] <= 0) {
                /* dual power cone */
                projPowerCone(&(x[idx]), -k->p[i]);
            } else {
                /* primal power cone, using Moreau */
                v[0] = -x[idx];
                v[1] = -x[idx + 1];
                v[2] = -x[idx + 2];

                projPowerCone(v, k->p[i]);

                x[idx] += v[0];
                x[idx + 1] += v[1];
                x[idx + 2] += v[2];
            }
        }
        /* count += 3 * k->psize; */
    }
    /* project onto OTHER cones */
    if (c) {
        c->total_cone_time += scs_toc_quiet(&coneTimer);
    }
    return 0;
}
