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
#include "linsys/amatrix.h"
#include "problemUtils.h"

#define NUM_TRIALS (5)
#define RHOX (1e-3)
#define TEST_WARM_START (1)

scs_int readInData(FILE *fp, ScsData *d, ScsCone *k);
scs_int openFile(scs_int argc, char **argv, scs_int idx,
        const char *default_file, FILE **fb);
/* void printSol(Data * d, Sol * sol, Info * info); */

extern ScsWork * scs_init(const ScsData *d, const ScsCone *k, ScsInfo * info);
extern scs_int scs_solve(ScsWork *w, const ScsData *d, const ScsCone *k, ScsSolution *sol, ScsInfo *info);
extern void scs_finish(ScsWork * w);

int main(int argc, char **argv) {
    FILE *fp;
    ScsCone *k;
    ScsData *d = scs_init_data();
    ScsWork *w;
    ScsSolution *sol = scs_init_sol();
    ScsInfo * info = scs_init_info();
    scs_int i;

    if (openFile(argc, argv, 1, DEMO_PATH, &fp) < 0)
        return -1;

    k = scs_calloc(1, sizeof (ScsCone));

    if (readInData(fp, d, k) == -1) {
        printf("Error reading in data, aborting.\n");
        return -1;
    }
    fclose(fp);
    scs_printf("solve once using scs\n");

    scs(d, k, sol, info);


    if (TEST_WARM_START) {
        scs_printf("solve %i times with warm-start and (if applicable) "
                "factorization caching.\n",
                NUM_TRIALS);
        /* warm starts stored in Sol */
        w = scs_init(d, k, info);
        if (w) {
            for (i = 0; i < NUM_TRIALS; i++) {
                /* perturb b and c */
                perturbVector(d->b, d->m);
                perturbVector(d->c, d->n);
                d->stgs->warm_start = 1;
                d->stgs->cg_rate = 4;
                scs_solve(w, d, k, sol, info);
                d->stgs->warm_start = 0;
                d->stgs->cg_rate = 2;
                scs_solve(w, d, k, sol, info);
            }
        }
        scs_printf("finished\n");
        scs_finish(w);
    }

    scs_free_data_cone(d, k);
    scs_free_sol(sol);
    scs_free_info(info);
    return 0;
}

scs_int readInData(FILE *fp, ScsData *d, ScsCone *k) {
    /* MATRIX IN DATA FILE MUST BE IN COLUMN COMPRESSED FORMAT */
    scs_int i, Anz;
    ScsAMatrix *A;
    ScsSettings *stgs = scs_malloc(sizeof (ScsSettings));
    stgs->rho_x = RHOX;
    stgs->warm_start = 0;
    stgs->scale = 1;
    if (fscanf(fp, INTRW, &(d->n)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(d->m)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(k->f)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(k->l)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(k->qsize)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(k->ssize)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(k->ep)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(k->ed)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(k->psize)) != 1) {
        return -1;
    }

    if (fscanf(fp, INTRW, &(stgs->max_iters)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(stgs->verbose)) != 1) {
        return -1;
    }
    if (fscanf(fp, INTRW, &(stgs->normalize)) != 1) {
        return -1;
    }
    if (fscanf(fp, FLOATRW, &(stgs->alpha)) != 1) {
        return -1;
    }
    if (fscanf(fp, FLOATRW, &(stgs->eps)) != 1) {
        return -1;
    }
    if (fscanf(fp, FLOATRW, &(stgs->rho_x)) != 1) {
        return -1;
    }
    if (fscanf(fp, FLOATRW, &(stgs->scale)) != 1) {
        return -1;
    }
    if (fscanf(fp, FLOATRW, &(stgs->cg_rate)) != 1) {
        return -1;
    }
    k->q = malloc(sizeof (scs_int) * k->qsize);
    for (i = 0; i < k->qsize; i++) {
        if (fscanf(fp, INTRW, &k->q[i]) != 1) {
            return -1;
        }
    }
    k->s = malloc(sizeof (scs_int) * k->ssize);
    for (i = 0; i < k->ssize; i++) {
        if (fscanf(fp, INTRW, &k->s[i]) != 1) {
            return -1;
        }
    }
    k->p = malloc(sizeof (scs_float) * k->psize);
    for (i = 0; i < k->psize; i++) {
        if (fscanf(fp, FLOATRW, &k->p[i]) != 1) {
            return -1;
        }
    }
    d->b = malloc(sizeof (scs_float) * d->m);
    for (i = 0; i < d->m; i++) {
        if (fscanf(fp, FLOATRW, &d->b[i]) != 1) {
            return -1;
        }
    }
    d->c = malloc(sizeof (scs_float) * d->n);
    for (i = 0; i < d->n; i++) {
        if (fscanf(fp, FLOATRW, &d->c[i]) != 1) {
            return -1;
        }
    }
    A = malloc(sizeof (ScsAMatrix));
    A->p = malloc(sizeof (scs_int) * (d->n + 1));
    for (i = 0; i < d->n + 1; i++) {
        if (fscanf(fp, INTRW, &A->p[i]) != 1) {
            return -1;
        }
    }
    Anz = A->p[d->n];
    A->i = malloc(sizeof (scs_int) * Anz);
    for (i = 0; i < Anz; i++) {
        if (fscanf(fp, INTRW, &A->i[i]) != 1) {
            return -1;
        }
    }
    A->x = malloc(sizeof (scs_float) * Anz);
    for (i = 0; i < Anz; i++) {
        if (fscanf(fp, FLOATRW, &A->x[i]) != 1) {
            return -1;
        }
    }
    A->n = d->n;
    A->m = d->m;
    d->A = A;
    d->stgs = stgs;
    return 0;
}

scs_int openFile(scs_int argc, char **argv, scs_int idx,
        const char *default_file, FILE **fb) {
    if (argc < idx + 1) {
        printf("Not enough arguments supplied, using %s as default\n",
                default_file);
    } else {
        *fb = fopen(argv[idx], "r");
        if (*fb != SCS_NULL)
            return 0;
        else {
            printf("Couldn't open file %s, using %s as default\n", argv[idx],
                    default_file);
            fclose(*fb);
        }
    }
    *fb = fopen(default_file, "r");
    if (*fb == SCS_NULL) {
        printf("Couldn't open %s\n", default_file);
        return -1;
    }
    return 0;
}
