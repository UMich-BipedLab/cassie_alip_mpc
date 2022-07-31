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
#include <time.h> /* to seed random */

/*
 create data for problem:

 minimize 	    c'*x
 subject to 	Ax <=_K b

 where K is a product of zero, linear, and second-order cones. A is a sparse
 matrix in
 CSC format. A is 3n by n with about sqrt(n) nonzeros per column.

 Construct data in such a way that the problem is primal and dual
 feasible and thus bounded.
 */

int main(int argc, char **argv) {
    scs_int n, m, col_nnz, nnz, i, q_total, q_num_rows, max_q;
    ScsCone *k;
    ScsData *d;
    ScsSolution *sol, *opt_sol;
    ScsInfo * info = scs_init_info();
    scs_float p_f, p_l;
    int seed = 0;

    /* default parameters */
    p_f = 0.1;
    p_l = 0.3;
    seed = time(SCS_NULL);

    switch (argc) {
    case 5:
        seed = atoi(argv[4]);
    /* no break */
    case 4:
        p_f = atof(argv[2]);
        p_l = atof(argv[3]);
    /* no break */
    case 2:
        n = atoi(argv[1]);
        break;
    default:
        scs_printf("usage:\t%s n p_f p_l s\n"
                   "\tcreates an SOCP with n variables where p_f fraction of "
                   "rows correspond\n"
                   "\tto equality constraints, p_l fraction of rows correspond "
                   "to LP constraints,\n"
                   "\tand the remaining percentage of rows are involved in "
                   "second-order\n"
                   "\tcone constraints. the random number generator is seeded "
                   "with s.\n"
                   "\tnote that p_f + p_l should be less than or equal to 1, "
                   "and that\n"
                   "\tp_f should be less than .33, since that corresponds to "
                   "as many equality\n"
                   "\tconstraints as variables.\n",
                   argv[0]);
        scs_printf("\nusage:\t%s n p_f p_l\n"
                   "\tdefaults the seed to the system time\n",
                   argv[0]);
        scs_printf("\nusage:\t%s n\n"
                   "\tdefaults to using p_f = 0.1 and p_l = 0.3\n",
                   argv[0]);
        return 0;
    }
    srand(seed);
    scs_printf("seed : %i\n", seed);

    k = scs_calloc(1, sizeof(ScsCone));
    d = scs_calloc(1, sizeof(ScsData));
    d->stgs = scs_calloc(1, sizeof(ScsSettings));
    sol = scs_calloc(1, sizeof(ScsSolution));
    opt_sol = scs_calloc(1, sizeof(ScsSolution));

    m = 3 * n;
    col_nnz = (int)ceil(sqrt(n));
    nnz = n * col_nnz;

    max_q = (scs_int)ceil(3 * n / log(3 * n));

    if (p_f + p_l > 1.0) {
        printf("error: p_f + p_l > 1.0!\n");
        return 1;
    }

    k->f = (scs_int)floor(3 * n * p_f);
    k->l = (scs_int)floor(3 * n * p_l);

    k->qsize = 0;
    q_num_rows = 3 * n - k->f - k->l;
    k->q = scs_malloc(q_num_rows * sizeof(scs_int));

    while (q_num_rows > max_q) {
        int size;
        size = (rand() % max_q) + 1;
        k->q[k->qsize] = size;
        k->qsize++;
        q_num_rows -= size;
    }
    if (q_num_rows > 0) {
        k->q[k->qsize] = q_num_rows;
        k->qsize++;
    }

    q_total = 0;
    for (i = 0; i < k->qsize; i++) {
        q_total += k->q[i];
    }

    k->s = SCS_NULL;
    k->ssize = 0;
    k->ep = 0;
    k->ed = 0;

    scs_printf("\nA is %ld by %ld, with %ld nonzeros per column.\n", (long)m,
               (long)n, (long)col_nnz);
    scs_printf("A has %ld nonzeros (%f%% dense).\n", (long)nnz,
               100 * (scs_float)col_nnz / m);
    scs_printf("Nonzeros of A take %f GB of storage.\n",
               ((scs_float)nnz * sizeof(scs_float)) / POWF(2, 30));
    scs_printf("Row idxs of A take %f GB of storage.\n",
               ((scs_float)nnz * sizeof(scs_int)) / POWF(2, 30));
    scs_printf("Col ptrs of A take %f GB of storage.\n\n",
               ((scs_float)n * sizeof(scs_int)) / POWF(2, 30));

    printf("Cone information:\n");
    printf("Zero cone rows: %ld\n", (long)k->f);
    printf("LP cone rows: %ld\n", (long)k->l);
    printf(
        "Number of second-order cones: %ld, covering %ld rows, with sizes\n[",
        (long)k->qsize, (long)q_total);
    for (i = 0; i < k->qsize; i++) {
        printf("%ld, ", (long)k->q[i]);
    }
    printf("]\n");
    printf("Number of rows covered is %ld out of %ld.\n\n",
           (long)(q_total + k->f + k->l), (long)m);

    /* set up SCS structures */
    d->m = m;
    d->n = n;
    genRandomProbData(nnz, col_nnz, d, k, opt_sol);
    scs_set_default_settings(d);

    scs_printf("true pri opt = %4f\n", scs_inner_product(d->c, opt_sol->x, d->n));
    scs_printf("true dua opt = %4f\n", -scs_inner_product(d->b, opt_sol->y, d->m));
    /* solve! */
    d->stgs->eps = 1e-7;
    d->stgs->do_super_scs = 1;
    d->stgs->verbose = 2;
    d->stgs->direction = anderson_acceleration;
    d->stgs->memory = 15;
    scs(d, k, sol, info);
    d->stgs->direction = restarted_broyden;
    d->stgs->memory = 80;
    scs(d, k, sol, info);
    scs_printf("true pri opt = %4f\n", scs_inner_product(d->c, opt_sol->x, d->n));
    scs_printf("true dua opt = %4f\n", -scs_inner_product(d->b, opt_sol->y, d->m));

    if (sol->x) {
        scs_printf("scs pri obj= %4f\n", scs_inner_product(d->c, sol->x, d->n));
    }
    if (sol->y) {
        scs_printf("scs dua obj = %4f\n", -scs_inner_product(d->b, sol->y, d->m));
    }

    scs_free_data_cone(d, k);
    scs_free_sol(sol);
    scs_free_sol(opt_sol);
    scs_free_info(info);
    
    return 0;
}
