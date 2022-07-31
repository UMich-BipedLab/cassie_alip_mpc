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

#include "common.h"
/* contains routines common to direct and indirect sparse solvers */

#define SCS_MIN_SCALE (1e-3)
#define SCS_MAX_SCALE (1e3)
#define SCS_NUM_SCALE_PASSES 1 /* additional passes don't help much */

scs_int scs_copy_a_matrix(ScsAMatrix **dstp, const ScsAMatrix *src) {
    scs_int Anz = src->p[src->n];
    ScsAMatrix *A = scs_calloc(1, sizeof (ScsAMatrix));
    if (A == SCS_NULL) return 0;
    A->n = src->n;
    A->m = src->m;
    A->x = scs_malloc(sizeof (scs_float) * Anz); /* A values, size: NNZ A */
    A->i = scs_malloc(sizeof (scs_int) * Anz); /* A row index, size: NNZ A */
    A->p = scs_malloc(sizeof (scs_int) *
            (src->n + 1)); /* A column pointer, size: n+1 */
    if (A->x == SCS_NULL || A->i == SCS_NULL || A->p == SCS_NULL) return 0;
    memcpy(A->x, src->x, sizeof (scs_float) * Anz);
    memcpy(A->i, src->i, sizeof (scs_int) * Anz);
    memcpy(A->p, src->p, sizeof (scs_int) * (src->n + 1));
    *dstp = A;
    return 1;
}

scs_int scs_validate_linsys(const ScsAMatrix *A) {
    scs_int i, rMax, Anz;
    if (A->x == SCS_NULL || A->i == SCS_NULL || A->p == SCS_NULL)  {
        scs_printf("data incompletely specified\n");
        return -1;
    }
    /* detects some errors in A col ptrs: */
    for (i = 0; i < A->n; ++i) {
        if (A->p[i] == A->p[i + 1]) {
#ifndef SILENCE_AMATRIX_WARNING
            scs_printf("WARN: A->p (column pointers) not strictly increasing, "
                    "column %li empty\n",
                    (long) i);
#endif
        } else if (A->p[i] > A->p[i + 1]) {
            scs_printf("ERROR: A->p (column pointers) decreasing\n");
            return -1;
        }
    }
    Anz = A->p[A->n];
    if (((scs_float) Anz / A->m > A->n) || (Anz <= 0)) {
        scs_printf("Anz (nonzeros in A) = %li, outside of valid range\n",
                (long) Anz);
        return -1;
    }
    rMax = 0;
    for (i = 0; i < Anz; ++i) {
        if (A->i[i] > rMax)
            rMax = A->i[i];
    }
    if (rMax > A->m - 1) {
        scs_printf("number of rows in A inconsistent with input dimension\n");
        return -1;
    }
    return 0;
}

void scs_free_a_matrix(ScsAMatrix *A) {
    scs_free(A->x);
    scs_free(A->i);
    scs_free(A->p);
    scs_free(A);
}

void scs_print_a_matrix(const ScsAMatrix *A) {
    scs_int i, j;
    /* TODO: this is to prevent clogging stdout */
    if (A->p[A->n] < 2500) {
        scs_printf("\n");
        for (i = 0; i < A->n; ++i) {
            scs_printf("Col %li: ", (long) i);
            for (j = A->p[i]; j < A->p[i + 1]; j++) {
                scs_printf("A[%li,%li] = %4f, ", (long) A->i[j], (long) i,
                        A->x[j]);
            }
            scs_printf("norm col = %4f\n",
                    scs_norm(&(A->x[A->p[i]]), A->p[i + 1] - A->p[i]));
        }
        scs_printf("norm A = %4f\n", scs_norm(A->x, A->p[A->n]));
    }
}

void scs_normalize_a(ScsAMatrix *A, const ScsSettings *stgs, const ScsCone *k,
        ScsScaling *scal) {
    scs_float *D = scs_malloc(A->m * sizeof (scs_float));
    scs_float *E = scs_malloc(A->n * sizeof (scs_float));
    scs_float *Dt = scs_malloc(A->m * sizeof (scs_float));
    scs_float *Et = scs_malloc(A->n * sizeof (scs_float));
    scs_float *nms = scs_calloc(A->m, sizeof (scs_float));
    scs_float minRowScale = SCS_MIN_SCALE * SQRTF((scs_float) A->n),
            maxRowScale = SCS_MAX_SCALE * SQRTF((scs_float) A->n);
    scs_float minColScale = SCS_MIN_SCALE * SQRTF((scs_float) A->m),
            maxColScale = SCS_MAX_SCALE * SQRTF((scs_float) A->m);
    scs_int i, j, l, count, delta, *boundaries, c1, c2;
    scs_float wrk, e;
    scs_int numBoundaries = scs_get_cone_boundaries(k, &boundaries);


    for (l = 0; l < SCS_NUM_SCALE_PASSES; ++l) {
        memset(D, 0, A->m * sizeof (scs_float));
        memset(E, 0, A->n * sizeof (scs_float));
        /* calculate row norms */
        for (i = 0; i < A->n; ++i) {
            c1 = A->p[i];
            c2 = A->p[i + 1];
            for (j = c1; j < c2; ++j) {
                wrk = A->x[j];
                D[A->i[j]] += wrk * wrk;
            }
        }
        for (i = 0; i < A->m; ++i) {
            D[i] = SQRTF(D[i]); /* just the norms */
        }

        /* mean of norms of rows across each cone  */
        count = boundaries[0];
        for (i = 1; i < numBoundaries; ++i) {
            wrk = 0;
            delta = boundaries[i];
            for (j = count; j < count + delta; ++j) {
                wrk += D[j];
            }
            wrk /= delta;
            for (j = count; j < count + delta; ++j) {
                D[j] = wrk;
            }
            count += delta;
        }

        for (i = 0; i < A->m; ++i) {
            if (D[i] < minRowScale)
                D[i] = 1;
            else if (D[i] > maxRowScale)
                D[i] = maxRowScale;
        }

        /* scale the rows with D */
        for (i = 0; i < A->n; ++i) {
            for (j = A->p[i]; j < A->p[i + 1]; ++j) {
                A->x[j] /= D[A->i[j]];
            }
        }
        /* calculate and scale by col norms, E */
        for (i = 0; i < A->n; ++i) {
            c1 = A->p[i + 1] - A->p[i];
            e = scs_norm(&(A->x[A->p[i]]), c1);
            if (e < minColScale)
                e = 1;
            else if (e > maxColScale)
                e = maxColScale;
            scs_scale_array(&(A->x[A->p[i]]), 1.0 / e, c1);
            E[i] = e;
        }

        for (i = 0; i < A->m; ++i) {
            Dt[i] = (l == 0) ? D[i] : Dt[i] * D[i];
        }
        for (i = 0; i < A->n; ++i) {
            Et[i] = (l == 0) ? E[i] : Et[i] * E[i];
        }
    }
    scs_free(boundaries);
    scs_free(D);
    scs_free(E);

    /* calculate mean of row norms of A */
    for (i = 0; i < A->n; ++i) {
        for (j = A->p[i]; j < A->p[i + 1]; ++j) {
            wrk = A->x[j];
            nms[A->i[j]] += wrk * wrk;
        }
    }
    scal->meanNormRowA = 0.0;
    for (i = 0; i < A->m; ++i) {
        scal->meanNormRowA += SQRTF(nms[i]) / A->m;
    }
    scs_free(nms);

    /* calculate mean of col norms of A */
    scal->meanNormColA = 0.0;
    for (i = 0; i < A->n; ++i) {
        c1 = A->p[i + 1] - A->p[i];
        scal->meanNormColA += scs_norm(&(A->x[A->p[i]]), c1) / A->n;
    }

    /* scale up by d->SCALE if not equal to 1 */
    if (stgs->scale != 1) {
        scs_scale_array(A->x, stgs->scale, A->p[A->n]);
    }

    scal->D = Dt;
    scal->E = Et;

}

void scs_unnormalize_a(ScsAMatrix *A, const ScsSettings *stgs, const ScsScaling *scal) {
    scs_int i, j;
    scs_float *D = scal->D;
    scs_float *E = scal->E;
    for (i = 0; i < A->n; ++i) {
        scs_scale_array(&(A->x[A->p[i]]), E[i] / stgs->scale, A->p[i + 1] - A->p[i]);
    }
    for (i = 0; i < A->n; ++i) {
        for (j = A->p[i]; j < A->p[i + 1]; ++j) {
            A->x[j] *= D[A->i[j]];
        }
    }
}

void scs_accum_by_a_trans__(scs_int n, scs_float *Ax, scs_int *Ai, scs_int *Ap,
        const scs_float *x, scs_float *y) {
    /* y += A'*x
       A in column compressed format
       parallelizes over columns (rows of A')
     */
    scs_int p, j;
    scs_int c1, c2;
    scs_float yj;

#ifdef _OPENMP
#pragma omp parallel for private(p, c1, c2, yj)
#endif
    for (j = 0; j < n; j++) {
        yj = y[j];
        c1 = Ap[j];
        c2 = Ap[j + 1];
        for (p = c1; p < c2; p++) {
            yj += Ax[p] * x[Ai[p]];
        }
        y[j] = yj;
    }

}

void scs_accum_by_a__(scs_int n, scs_float *Ax, scs_int *Ai, scs_int *Ap,
        const scs_float *x, scs_float *y) {
    /*y += A*x
      A in column compressed format
      this parallelizes over columns and uses
      pragma atomic to prevent concurrent writes to y
     */
    scs_int p, j;
    scs_int c1, c2;
    scs_float xj;

    /*#pragma omp parallel for private(p,c1,c2,xj)  */
    for (j = 0; j < n; j++) {
        xj = x[j];
        c1 = Ap[j];
        c2 = Ap[j + 1];
        for (p = c1; p < c2; p++) {
            /*#pragma omp atomic */
            y[Ai[p]] += Ax[p] * xj;
        }
    }

}
