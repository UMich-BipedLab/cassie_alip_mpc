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
#include "test_superscs.h"
#include "linsys/amatrix.h"
#include "linsys/common.h"
#include <stdio.h>
#include "scs_parser.h"

static void prepare_data(ScsData ** data) {
    const scs_int n = 3;
    const scs_int m = 4;
    const scs_int nnz = 5;

    ScsAMatrix * A;

    *data = scs_init_data();
    (*data)->c = malloc(n * sizeof (scs_float));
    (*data)->c[0] = 1.0;
    (*data)->c[1] = -2.0;
    (*data)->c[2] = -3.0;
    (*data)->b = malloc(m * sizeof (scs_float));
    (*data)->b[0] = 0.2;
    (*data)->b[1] = 0.1;
    (*data)->b[2] = -0.1;
    (*data)->b[3] = 0.1;

    (*data)->m = m;
    (*data)->n = n;

    A = malloc(sizeof (ScsAMatrix));
    A->m = m;
    A->n = n;
    A->p = malloc((n + 1) * sizeof (scs_int));
    A->i = malloc(nnz * sizeof (scs_int));
    A->x = malloc(nnz * sizeof (scs_float));

    A->p[0] = 0;
    A->p[1] = 2;
    A->p[2] = 4;
    A->p[3] = 5;

    A->i[0] = 0;
    A->i[1] = 3;
    A->i[2] = 1;
    A->i[3] = 3;
    A->i[4] = 2;

    A->x[0] = 0.3;
    A->x[1] = -0.5;
    A->x[2] = 0.7;
    A->x[3] = 0.9;
    A->x[4] = 0.2;

    (*data)->A = A;
}

static void prepare_cone(ScsCone ** cone) {
    *cone = malloc(sizeof (ScsCone));
    (*cone)->ssize = 0;
    (*cone)->ed = 0;
    (*cone)->ep = 0;
    (*cone)->f = 0;
    (*cone)->l = 0;
    (*cone)->psize = 0;
    (*cone)->ssize = 0;
    (*cone)->qsize = 1;
    (*cone)->q = malloc(4 * sizeof (scs_int));
    (*cone)->q[0] = 4;
    (*cone)->p = SCS_NULL;
    (*cone)->s = SCS_NULL;
}

bool test_superscs_solve(char** str) {

    scs_int status;
    ScsSolution* sol;
    ScsData * data = SCS_NULL;
    ScsInfo * info;
    ScsCone * cone = SCS_NULL;

    prepare_data(&data);
    prepare_cone(&cone);

    data->stgs->eps = 1e-9;
    data->stgs->rho_x = 1.0;
    data->stgs->direction = (ScsDirectionType) restarted_broyden;
    data->stgs->verbose = 0;

    sol = scs_init_sol();
    info = scs_init_info();

    data->stgs->do_super_scs = 1;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "Problem not solved");

    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -16.874896969005714, 1e-6, str, "x_star[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -5.634341514927034, 1e-6, str, "x_star[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 3.589737499286473, 1e-6, str, "x_star[2] wrong");


    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[0], 96.506238327408525, 1e-6, str, "y_star[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[1], -74.161955281143605, 1e-6, str, "y_star[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[2], 15.000000000002315, 1e-6, str, "y_star[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[3], 59.903742996445253, 1e-6, str, "y_star[3] wrong");

    ASSERT_EQUAL_FLOAT_OR_FAIL(info->pobj, -16.375426437011065, 1e-7, str, "pobj wrong");

    ASSERT_EQUAL_FLOAT_OR_FAIL(info->pobj, info->dobj, 1e-4, str, "P not equal to D");
    ASSERT_TRUE_OR_FAIL(info->relGap < 1e-10, str, "relative gap too high");
    ASSERT_EQUAL_INT_OR_FAIL(strcmp(info->status, "Solved"), 0, str, "problem not 'Solved'");
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_superscs_with_anderson(char** str) {

    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;

    prepare_data(&data);
    prepare_cone(&cone);


    data->stgs->eps = 1e-8;
    data->stgs->alpha = 1.5;
    data->stgs->scale = 1.0;
    data->stgs->normalize = 1;
    data->stgs->direction = (ScsDirectionType) anderson_acceleration;
    data->stgs->beta = 0.5;
    data->stgs->c1 = 0.9999;
    data->stgs->c_bl = 0.999;
    data->stgs->k0 = 1;
    data->stgs->k1 = 1;
    data->stgs->k2 = 1;
    data->stgs->ls = 10;
    data->stgs->sigma = 1e-2;
    data->stgs->memory = 3;
    data->stgs->sse = 0.999;
    data->stgs->rho_x = 1e-5;
    data->stgs->verbose = 0;
    data->stgs->max_iters = 50;


    sol = scs_init_sol();
    info = scs_init_info();

    data->stgs->do_super_scs = 1;
    status = scs(data, cone, sol, info);

    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "Problem not solved");
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, 13, str, "wrong number of iterations");
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_superscs_000(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;

    prepare_data(&data);
    prepare_cone(&cone);

    data->stgs->sse = 0.5;
    data->stgs->eps = 1e-4;
    data->stgs->rho_x = 1.0;
    data->stgs->direction = (ScsDirectionType) restarted_broyden;
    data->stgs->verbose = 0;
    data->stgs->k0 = 0;
    data->stgs->k1 = 0;
    data->stgs->k2 = 0;
    data->stgs->ls = 0;
    data->stgs->max_iters = 1;
    data->stgs->do_super_scs = 1;

    sol = scs_init_sol();
    info = scs_init_info();

    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -0.109053491087962, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -0.003683620781908, 1e-10, str, "x[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 2.645438455229390, 1e-10, str, "x[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[0], 19.912548935347708, 1e-10, str, "y[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[1], 2.294092141293139, 1e-10, str, "y[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[2], 19.262127935028715, 1e-10, str, "y[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[3], 4.496351161159519, 1e-10, str, "y[3] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[0], 0.200927752555239, 1e-10, str, "s[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[1], -0.023148557203865, 1e-10, str, "s[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[2], -0.194364673652928, 1e-10, str, "s[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[3], -0.045370471477269, 1e-10, str, "s[3] wrong");

    data->stgs->max_iters = 2;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -1.261463537904218, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[2], 92.364496490679642, 1e-10, str, "y[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[3], -0.209261231033243, 1e-10, str, "s[3] wrong");

    data->stgs->max_iters = 10;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -2.232691713491094, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -0.590885686812609, 1e-10, str, "x[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[1], -21.635616132075267, 1e-10, str, "y[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[3], 20.962816440385115, 1e-10, str, "y[3] wrong");

    data->stgs->max_iters = 1000;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, 121, str, "Erroneous no. iter.");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -16.871782513122774, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -5.633253618312680, 1e-10, str, "x[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 3.589570393256817, 1e-10, str, "x[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[0], 96.497976811110945, 1e-10, str, "y[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[1], -74.155009946640732, 1e-10, str, "y[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[2], 15.000840046600869, 1e-10, str, "y[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[3], 59.898821577286611, 1e-10, str, "y[3] wrong");
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_superscs_001_fpr(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    scs_int i;

    prepare_data(&data);
    prepare_cone(&cone);

    data->stgs->sse = 0.5;
    data->stgs->eps = 1e-4;
    data->stgs->rho_x = 1.0;
    data->stgs->direction = (ScsDirectionType) fixed_point_residual;
    data->stgs->verbose = 0;
    data->stgs->k0 = 0;
    data->stgs->k1 = 0;
    data->stgs->k2 = 1;
    data->stgs->ls = 10;
    data->stgs->max_iters = 1;
    data->stgs->do_super_scs = 1;

    sol = scs_init_sol();
    info = scs_init_info();

    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_UNBOUNDED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_INT_OR_FAIL(strcmp(info->status, "Unbounded/Inaccurate"), 0,
            str, "problem not 'Unbounded/Inaccurate'");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], 0.274057420504456, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -0.058098186140208, 1e-10, str, "x[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 0.463417930928291, 1e-10, str, "x[2] wrong");
    for (i = 0; i < 4; ++i) {
        ASSERT_TRUE_OR_FAIL(isnan(sol->y[i]), str, "y should be nan");
    }
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[0], -0.191928792495329, 1e-10, str, "s[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[1], -0.047508022860835, 1e-10, str, "s[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[2], 0.182152982731530, 1e-10, str, "s[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[3], 0.037415772537480, 1e-10, str, "s[3] wrong");

    data->stgs->max_iters = 2;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -1.052622260714879, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[0], 23.429483256003490, 1e-10, str, "y[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[0], 0.402310583070969, 1e-10, str, "s[0] wrong");

    data->stgs->max_iters = 3;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -0.3708797830183899, 1e-10, str, "x[1] wrong");

    data->stgs->max_iters = 10;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[0], 34.954357266943035, 1e-10, str, "y[0] wrong");

    data->stgs->max_iters = 80;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free(info);

    SUCCEED(str);
}

bool test_superscs_001_rbroyden(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    scs_int i;

    prepare_data(&data);
    prepare_cone(&cone);

    data->stgs->sse = 0.5;
    data->stgs->eps = 1e-4;
    data->stgs->rho_x = 1.;
    data->stgs->direction = (ScsDirectionType) restarted_broyden;
    data->stgs->verbose = 0;
    data->stgs->k0 = 0;
    data->stgs->k1 = 0;
    data->stgs->k2 = 1;
    data->stgs->ls = 10;
    data->stgs->max_iters = 1;
    data->stgs->do_super_scs = 1;
    data->stgs->memory = 10;
    data->stgs->sigma = 1e-2;
    data->stgs->c1 = 1.0 - 1e-4;
    data->stgs->c_bl = 0.999;
    data->stgs->beta = 0.5;
    data->stgs->normalize = 1;
    data->stgs->scale = 1;
    data->stgs->alpha = 1.5;

    sol = scs_init_sol();
    info = scs_init_info();


    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_UNBOUNDED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], 0.274057420504456, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -0.058098186140208, 1e-10, str, "x[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 0.463417930928291, 1e-10, str, "x[2] wrong");
    for (i = 0; i < 4; ++i) {
        ASSERT_TRUE_OR_FAIL(isnan(sol->y[i]), str, "y should be nan");
    }
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[0], -0.191928792495329, 1e-10, str, "s[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[1], -0.047508022860835, 1e-10, str, "s[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[2], 0.182152982731530, 1e-10, str, "s[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[3], 0.037415772537480, 1e-10, str, "s[3] wrong");

    data->stgs->max_iters = 2;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -0.465406066728364, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -0.166978364590537, 1e-10, str, "x[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 1.116606860418411, 1e-10, str, "x[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[0], 7.224785302606174, 1e-10, str, "y[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[0], 0.326281791938008, 1e-10, str, "s[0] wrong");


    data->stgs->max_iters = 11;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_UNBOUNDED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -1.046552668150064, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -0.353299417556677, 1e-10, str, "x[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 0.220015388987763, 1e-10, str, "x[2] wrong");
    for (i = 0; i < 4; ++i) {
        ASSERT_TRUE_OR_FAIL(isnan(sol->y[i]), str, "y should be nan");
    }
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[0], 0.380569177488686, 1e-10, str, "s[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[1], 0.283386052682735, 1e-10, str, "s[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[2], -0.094498466741551, 1e-10, str, "s[2] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[3], -0.235786521630921, 1e-10, str, "s[3] wrong");

    data->stgs->max_iters = 40;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->iter, data->stgs->max_iters, str, "no iterations");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -18.660744885301725, 1e-10, str, "x[0] wrong");

    /*
     * Here I'm modifying the maximum number of iterations to make sure that  
     * those tricks with stgs->previous_max_iter indeed work.
     */

    data->stgs->max_iters = 1000;
    data->stgs->eps = 1e-4;
    data->stgs->rho_x = 0.5;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");
    ASSERT_TRUE_OR_FAIL(info->progress_dcost == SCS_NULL, str, "progress not NULL");
    ASSERT_TRUE_OR_FAIL(info->progress_pcost == SCS_NULL, str, "progress not NULL");
    ASSERT_TRUE_OR_FAIL(info->progress_relgap == SCS_NULL, str, "progress not NULL");
    ASSERT_TRUE_OR_FAIL(info->progress_respri == SCS_NULL, str, "progress not NULL");
    ASSERT_TRUE_OR_FAIL(info->progress_resdual == SCS_NULL, str, "progress not NULL");

    data->stgs->max_iters = 2000;
    data->stgs->do_record_progress = 1;
    data->stgs->rho_x = .1;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");
    ASSERT_TRUE_OR_FAIL(info->progress_dcost != SCS_NULL, str, "progress NULL");
    ASSERT_TRUE_OR_FAIL(info->progress_pcost != SCS_NULL, str, "progress NULL");
    ASSERT_TRUE_OR_FAIL(info->progress_relgap != SCS_NULL, str, "progress NULL");
    ASSERT_TRUE_OR_FAIL(info->progress_respri != SCS_NULL, str, "progress NULL");
    ASSERT_TRUE_OR_FAIL(info->progress_resdual != SCS_NULL, str, "progress NULL");
    ASSERT_EQUAL_INT_OR_FAIL(data->stgs->max_iters, 2000, str, "Wrong previous no. iter");
    ASSERT_EQUAL_INT_OR_FAIL(data->stgs->previous_max_iters, 2000, str, "Wrong previous no. iter");

    data->stgs->max_iters = 3000;
    data->stgs->rho_x = .01;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");

    data->stgs->max_iters = 2000;
    data->stgs->rho_x = .001;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");

    data->stgs->max_iters = 3100;
    data->stgs->rho_x = .0001;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");

    data->stgs->max_iters = 3200;
    data->stgs->rho_x = 10;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");

    data->stgs->max_iters = 3300;
    data->stgs->rho_x = 0.001;
    data->stgs->do_super_scs = 0;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(info->statusVal, SCS_SOLVED, str, "problem status not SCS_SOLVED");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_superscs_100_rbroyden(char** str) {

    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;

    prepare_data(&data);
    prepare_cone(&cone);

    data->stgs->eps = 1e-4;
    data->stgs->rho_x = 1.0;
    data->stgs->direction = (ScsDirectionType) restarted_broyden;
    data->stgs->verbose = 0;
    data->stgs->k0 = 1;
    data->stgs->k1 = 0;
    data->stgs->k2 = 0;
    data->stgs->ls = 10;

    data->stgs->verbose = 0;
    data->stgs->do_super_scs = 1;

    sol = scs_init_sol();
    info = scs_init_info();

    data->stgs->max_iters = 2;
    status = scs(data, cone, sol, info);

    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED_INACCURATE, str, "wrong status");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -0.349018320302040, 1e-10, str, "x[0] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], 0.015102755569314, 1e-10, str, "x[1] wrong");
    ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 1.778110351429428, 1e-10, str, "x[2] wrong");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_superscs_011_progress(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    scs_int mode_exp[20] = {1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    scs_int ls_exp[20] = {1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4};
    scs_float gap_exp[6] = {0.521136588669913, 0.452292411994033, 0.390774095584746, 0.084086837089436, 0.010215190495717, 0.737805654686660};
    scs_float pres_exp[6] = {5.651585413034721, 0.881043969782380, 0.271916642815964, 0.052153221225419, 0.045003598675170, 0.480719322491409};
    scs_float dres_exp[6] = {9.739130818329103, 5.430982744844291, 0.738951762380322, 0.262551525410492, 0.246763246541060, 0.634137521605225};
    scs_int i;

    prepare_data(&data);
    prepare_cone(&cone);

    data->stgs->eps = 1e-8;
    data->stgs->do_super_scs = 1;
    data->stgs->verbose = 0;
    data->stgs->direction = restarted_broyden;
    data->stgs->memory = 10;
    data->stgs->do_record_progress = 1;

    info = scs_init_info();
    sol = scs_init_sol();

    status = scs(data, cone, sol, info);

    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");
    for (i = 0; i < 20; ++i) {
        ASSERT_EQUAL_INT_OR_FAIL(info->progress_mode[i], mode_exp[i], str, "mode");
        ASSERT_EQUAL_INT_OR_FAIL(info->progress_ls[i], ls_exp[i], str, "ls");
    }
    for (i = 0; i < 6; ++i) {
        ASSERT_EQUAL_FLOAT_OR_FAIL(info->progress_relgap[i], gap_exp[i], 1e-10, str, "gap");
        ASSERT_EQUAL_FLOAT_OR_FAIL(info->progress_respri[i], pres_exp[i], 1e-10, str, "pres");
        ASSERT_EQUAL_FLOAT_OR_FAIL(info->progress_resdual[i], dres_exp[i], 1e-10, str, "dres");
    }

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_residuals(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;

    scs_float relgap_expected[12] = {
        0.0,
        0.641360567339623,
        0.258326003751872,
        0.427755914304124,
        0.070601296495286,
        0.136391692925419,
        0.110228818969576,
        0.116212468002787,
        0.100073649960616,
        0.037913746742520,
        0.031013566758557,
        0.031786667245133,
    };

    prepare_data(&data);
    prepare_cone(&cone);

    data->stgs->eps = 1e-8;
    data->stgs->k0 = 0;
    data->stgs->k1 = 1;
    data->stgs->k2 = 1;
    data->stgs->ls = 10;
    data->stgs->rho_x = 1.0;
    data->stgs->direction = restarted_broyden;
    data->stgs->memory = 10;
    data->stgs->sse = 0.999;
    data->stgs->sigma = 1e-2;
    data->stgs->c_bl = 0.999;
    data->stgs->c1 = 1.0 - 1e-4;
    data->stgs->beta = 0.5;
    data->stgs->normalize = 1;
    data->stgs->scale = 1;
    data->stgs->alpha = 1.5;
    data->stgs->do_super_scs = 1;
    data->stgs->verbose = 2;
    data->stgs->do_override_streams = 1;
    data->stgs->output_stream = stderr;
    data->stgs->do_record_progress = 1;
    data->stgs->max_iters = 120;

    sol = scs_init_sol();
    info = scs_init_info();

    status = scs(data, cone, sol, info);
    ASSERT_TRUE_OR_FAIL(isnan(info->progress_relgap[0]), str, "rel gap [0] not NAN");
    ASSERT_EQUAL_ARRAY_OR_FAIL(info->progress_relgap + 1, relgap_expected + 1, 
            11, 1e-13, str, "relative gap is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_rho_x(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    scs_int i, j, k, l;
    scs_float rho;

    prepare_data(&data);
    prepare_cone(&cone);

    data->stgs->eps = 1e-8;
    data->stgs->do_super_scs = 1;
    data->stgs->alpha = 1.5;
    data->stgs->scale = 1.0;
    data->stgs->verbose = 0;
    data->stgs->normalize = 1;
    data->stgs->direction = restarted_broyden;
    data->stgs->beta = 0.5;
    data->stgs->c1 = 0.9999;
    data->stgs->c_bl = 0.999;

    data->stgs->sigma = 1e-2;
    data->stgs->thetabar = 0.1;
    data->stgs->memory = 10;
    data->stgs->sse = 0.999;
    data->stgs->do_record_progress = 0;
    data->stgs->max_iters = 2000;


    sol = scs_init_sol();
    info = scs_init_info();

    /* Make sure it converges for different values of rho_x */
    data->stgs->rho_x = 0.2;
    for (i = 0; i <= 1; ++i) {
        for (j = 0; j <= 1; ++j) {
            for (k = 0; k <= 1; ++k) {
                for (l = 3; l <= 5; ++l) {
                    for (rho = 0.001; rho < 0.5; rho *= 1.8) {
                        /* Test for all possible choices of k0, k1, k2 */
                        data->stgs->k0 = i;
                        data->stgs->k1 = j;
                        data->stgs->k2 = k;
                        /* Test for different values of ls */
                        data->stgs->ls = l;
                        /* Test for different values of rho_x */
                        data->stgs->rho_x = rho;
                        status = scs(data, cone, sol, info);
                        ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");
                        /* verify that the residuals are lower than eps */
                        ASSERT_TRUE_OR_FAIL(info->resPri < data->stgs->eps, str, "primal residual too high");
                        ASSERT_TRUE_OR_FAIL(info->resDual < data->stgs->eps, str, "dual residual too high");
                        ASSERT_TRUE_OR_FAIL(info->relGap < data->stgs->eps, str, "duality gap too high");
                        ASSERT_TRUE_OR_FAIL(info->iter < data->stgs->max_iters, str, "too many iterations");
                        /* verify the solution */
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[0], -16.874896967418358, 1e-5, str, "x[0] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[1], -5.634341514381794, 1e-5, str, "x[1] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->x[2], 3.589737499067709, 1e-5, str, "x[2] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[0], 96.506238321412667, 1e-5, str, "y[0] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[1], -74.161955276422589, 1e-5, str, "y[1] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[2], 14.999999999635596, 1e-5, str, "y[2] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->y[3], 59.903742992722336, 1e-5, str, "y[3] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[0], 5.262469090219521, 1e-5, str, "s[0] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[1], 4.044039060072064, 1e-5, str, "s[1] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[2], -0.817947499813188, 1e-5, str, "s[2] wrong");
                        ASSERT_EQUAL_FLOAT_OR_FAIL(sol->s[3], -3.266541120769288, 1e-5, str, "s[3] wrong");
                    }
                }
            }
        }
    }

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_validation(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;

    prepare_data(&data);
    prepare_cone(&cone);
    sol = scs_init_sol();
    info = scs_init_info();

    data->stgs->do_override_streams = 1;
    data->stgs->k0 = 2;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "k0");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->k1 = -1;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "k1");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->k2 = 5;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "k2");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->alpha = -0.1;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "alpha < 0");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->alpha = 2.1;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "alpha > 2");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->beta = 1.01;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "beta>1");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->beta = 1;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "beta=1");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->ls = 40;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "ls=40");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->ls = -1;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "ls=-1");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->sigma = -0.0001;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "sigma < 0");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->c_bl = -1e-4;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "c_bl");
    scs_set_default_settings(data);

    data->stgs->do_override_streams = 1;
    data->stgs->c1 = -1e-4;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_FAILED, str, "c1");
    scs_set_default_settings(data);

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_no_normalization(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsSettings *s;

    prepare_data(&data);
    prepare_cone(&cone);
    sol = scs_init_sol();
    info = scs_init_info();

    s = data->stgs;

    s->normalize = 0;
    s->k0 = 1;
    s->do_super_scs = 1;
    s->eps = 1e-10;
    s->max_iters = 120;
    s->verbose = 1;
    s->do_override_streams = 1;
    s->output_stream = stderr;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "wrong status");
    ASSERT_TRUE_OR_FAIL(info->resPri < data->stgs->eps, str, "primal residual too high");
    ASSERT_TRUE_OR_FAIL(info->resDual < data->stgs->eps, str, "dual residual too high");
    ASSERT_TRUE_OR_FAIL(info->relGap < data->stgs->eps, str, "duality gap too high");
    ASSERT_TRUE_OR_FAIL(info->iter < data->stgs->max_iters, str, "too many iterations");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_warm_start(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsSettings *s;
    prepare_data(&data);
    prepare_cone(&cone);
    sol = scs_init_sol();
    info = scs_init_info();

    s = data->stgs;
    s->normalize = 0;
    s->k0 = 1;
    s->do_super_scs = 1;
    s->eps = 1e-5;
    s->max_iters = 1200;
    s->verbose = 0;
    s->do_override_streams = 1;
    s->output_stream = stderr;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "Problem not solved #1");
    s->warm_start = 1;
    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "Problem not solved #2");


    ASSERT_TRUE_OR_FAIL(info->iter < 2, str, "Many iterations on warm start");

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

bool test_scale(char** str) {
    scs_int status;
    ScsSolution* sol;
    ScsInfo * info;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsSettings *s;
    scs_float a;
    prepare_data(&data);
    prepare_cone(&cone);
    sol = scs_init_sol();
    info = scs_init_info();


    s = data->stgs;
    s->normalize = 1;
    s->k0 = 1;
    s->k1 = 1;
    s->k2 = 1;
    s->scale = 15;
    s->do_super_scs = 1;
    s->eps = 1e-7;
    s->max_iters = 2000;
    s->do_override_streams = 1;
    s->output_stream = stderr;
    s->direction = 100;
    s->ls = 10;
    s->do_record_progress = 0;
    s->sigma = 1e-2;
    s->c_bl = 0.999;
    s->rho_x = 1;
    s->verbose = 0;
    status = scs(data, cone, sol, info);
    ASSERT_TRUE_OR_FAIL(info->relGap <= s->eps, str, "High relative gap");
    ASSERT_TRUE_OR_FAIL(info->resDual <= s->eps, str, "High dual residual");
    ASSERT_TRUE_OR_FAIL(info->resPri <= s->eps, str, "High primal residual");

    s->max_iters = 1e4;
    for (a = 1e-2; a < 1000; a *= 1.5) {
        s->scale = a;
        status = scs(data, cone, sol, info);
        ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "Problem not solved");
    }

    scs_free_data_cone(data, cone);
    scs_free_sol(sol);
    scs_free_info(info);

    SUCCEED(str);
}

#define TEST_DATA_EQUALITY(data_loaded, data, str) \
    ASSERT_TRUE_OR_FAIL(data_loaded!=SCS_NULL, str, "Parsed `data_loaded` is null"); \
    ASSERT_EQUAL_INT_OR_FAIL(data_loaded->m, data->m, str, "Parsed `m` is wrong"); \
    ASSERT_EQUAL_INT_OR_FAIL(data_loaded->n, data->n, str, "Parsed `n` is wrong"); \
    ASSERT_TRUE_OR_FAIL(data_loaded->A!=SCS_NULL, str, "Parsed `A` is null"); \
    ASSERT_TRUE_OR_FAIL(data_loaded->A->i!=SCS_NULL, str, "Parsed `A->i` is null"); \
    ASSERT_TRUE_OR_FAIL(data_loaded->A->p!=SCS_NULL, str, "Parsed `A->p` is null"); \
    ASSERT_TRUE_OR_FAIL(data_loaded->A->x!=SCS_NULL, str, "Parsed `A->x` is null"); \
    ASSERT_EQUAL_INT_OR_FAIL(data_loaded->A->m, data->A->m, str, "Parsed `A->m` is wrong"); \
    ASSERT_EQUAL_INT_OR_FAIL(data_loaded->A->n, data->A->n, str, "Parsed `A->n` is wrong"); \
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(data_loaded->A->i, data->A->i, data->A->p[data->n], str, "Array `A->i` is wrong"); \
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(data_loaded->A->p, data->A->p, data->n + 1, str, "Array `A->p` is wrong"); \
    ASSERT_EQUAL_ARRAY_OR_FAIL(data_loaded->A->x, data->A->x, data->A->p[data->n], 1e-16, str, "Array `A->x is wrong"); \
    ASSERT_EQUAL_ARRAY_OR_FAIL(data_loaded->b, data->b, data->m, 1e-16, str, "Array `b is wrong"); \
    ASSERT_EQUAL_ARRAY_OR_FAIL(data_loaded->c, data->c, data->n, 1e-16, str, "Array `c` is wrong"); \
    
#define TEST_CONE_EQUALITY(cone_loaded, cone, str) \
    ASSERT_TRUE_OR_FAIL(cone_loaded!=SCS_NULL, str, "Parsed `cone_loaded` is null"); \
    ASSERT_EQUAL_INT_OR_FAIL(cone_loaded->ed, cone->ed, str, "Value of `cone->ed` is wrong"); \
    ASSERT_EQUAL_INT_OR_FAIL(cone_loaded->ep, cone->ep, str, "Value of `cone->ep` is wrong"); \
    ASSERT_EQUAL_INT_OR_FAIL(cone_loaded->f, cone->f, str, "Value of `cone->f` is wrong"); \
    ASSERT_EQUAL_INT_OR_FAIL(cone_loaded->l, cone->l, str, "Value of `cone->l` is wrong"); \
    ASSERT_EQUAL_INT_OR_FAIL(cone_loaded->psize, cone->psize, str, "Value of `cone->psize` is wrong"); \
    ASSERT_EQUAL_INT_OR_FAIL(cone_loaded->qsize, cone->qsize, str, "Value of `cone->qsize` is wrong"); \
    ASSERT_EQUAL_INT_OR_FAIL(cone_loaded->ssize, cone->ssize, str, "Value of `cone->ssize` is wrong"); \
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(cone_loaded->q, cone->q, cone->qsize, str, "Value of `cone->q` is wrong"); \
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(cone_loaded->s, cone->s, cone->ssize, str, "Value of `cone->s` is wrong"); \
    ASSERT_EQUAL_ARRAY_OR_FAIL(cone_loaded->p, cone->p, cone->psize, 1e-16, str, "Value of `cone->p` is wrong");

bool test_serialize_YAML(char** str) {
    const char * filepath = "tests/c/data/test-0.yml";
    const char * problemName = "test-0";
    scs_int status;
    ScsData * data = SCS_NULL;
    ScsData * data_loaded = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsCone * cone_loaded = SCS_NULL;
    ScsConicProblemMetadata * metadata;

    metadata = scs_init_conic_problem_metadata(problemName);
    ASSERT_TRUE_OR_FAIL(metadata != SCS_NULL, str, "`meta` is null");

    prepare_data(&data);
    prepare_cone(&cone);
    data->A->x[0] = SQRTF(2.);

    cone->psize = 1;
    cone->p = scs_malloc(sizeof (scs_float));
    cone->p[0] = 0.98;

    cone->ssize = 1;
    cone->s = scs_malloc(sizeof (scs_int));
    cone->s[0] = 3;

    status = scs_to_YAML(filepath, metadata, data, cone);
    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "Serialization failed");

    status = scs_from_YAML(filepath, &data_loaded, &cone_loaded);
    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "Parsing of test-0.yml failed");

    TEST_DATA_EQUALITY(data_loaded, data, str)
    TEST_CONE_EQUALITY(cone_loaded, cone, str)

    scs_free_data_cone(data, cone);
    scs_free_data_cone(data_loaded, cone_loaded);
    scs_free(metadata);

    SUCCEED(str);
}

bool test_serialize_YAML_no_metadata(char** str) {
    const char * filepath = "tests/c/data/test-0.yml";
    scs_int status;
    ScsData * data = SCS_NULL;
    ScsData * data2 = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsCone * cone2 = SCS_NULL;
    prepare_data(&data);
    prepare_cone(&cone);
    status = scs_to_YAML(filepath, SCS_NULL, data, cone);


    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "Serialization failed");

    status = scs_from_YAML(filepath, &data2, &cone2);
    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "Parsing failed");

    scs_free_data_cone(data, cone);
    scs_free_data_cone(data2, cone2);
    SUCCEED(str);
}

#define __COPY_YAML_BUFFER_SIZE 32

bool test_copy_YAML(char** str) {
    char filename_template[] = "tests/c/data/test-%d.yml";
    char filename_copy[] = "tests/c/data/temp-unit-testing.yml";
    const char problem_name_copy[] = "problem-copy";
    char filename[__COPY_YAML_BUFFER_SIZE];
    size_t i;
    scs_int status;
    ScsData * data_1 = SCS_NULL;
    ScsData * data_2 = SCS_NULL;
    ScsCone * cone_1 = SCS_NULL;
    ScsCone * cone_2 = SCS_NULL;
    ScsConicProblemMetadata * metadata;

    metadata = scs_init_conic_problem_metadata(problem_name_copy);

    for (i = 1; i <= 7; ++i) {
        snprintf(filename, __COPY_YAML_BUFFER_SIZE, filename_template, i);

        status = scs_from_YAML(filename, &data_1, &cone_1);
        ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "Parsing failed");

        status = scs_to_YAML(filename_copy, metadata, data_1, cone_1);
        ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "Saving copy failed");

        status = scs_from_YAML(filename_copy, &data_2, &cone_2);
        ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "Saving copy failed");

        TEST_DATA_EQUALITY(data_1, data_2, str)
        TEST_CONE_EQUALITY(cone_1, cone_2, str)

        scs_free_data_cone(data_1, cone_1);
        scs_free_data_cone(data_2, cone_2);
    }

    scs_free(metadata);

    FILE * file_pointer = fopen(filename_copy, "w");
    ASSERT_TRUE_OR_FAIL(file_pointer != NULL, str, "pointer to file was NULL");
    ASSERT_EQUAL_INT_OR_FAIL(fclose(file_pointer), 0, str, "closing stream failed");

    SUCCEED(str);
}

bool test_parse_YAML(char** str) {
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    const char * filepath = "tests/c/data/test-1.yml";
    const scs_float a_correct[] = {0.3, -0.5, 0.7, 0.9, 0.2};
    const scs_int col_idx_correct[] = {0, 2, 4, 5};
    const scs_int pos_correct[] = {0, 3, 1, 3, 2};
    const scs_float b_correct[] = {0.2, 0.1, -0.1, 0.1};
    const scs_float c_correct[] = {1.0, -2.0, -3.0};
    const scs_int m = 4;
    const scs_int n = 3;
    const scs_int nnz = 5;
    scs_int status;

    status = scs_from_YAML(filepath, &data, &cone);

    /* test success */
    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "status is not 0");

    /* test dimensions and NULLness */
    ASSERT_TRUE_OR_FAIL(data != SCS_NULL, str, "data should not be NULL");
    ASSERT_TRUE_OR_FAIL(cone != SCS_NULL, str, "cone should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->stgs != SCS_NULL, str, "data->stgs should not be NULL");
    ASSERT_EQUAL_INT_OR_FAIL(data->m, m, str, "wrong value of m");
    ASSERT_EQUAL_INT_OR_FAIL(data->n, n, str, "wrong value of n");
    ASSERT_EQUAL_INT_OR_FAIL(cone->qsize, 1, str, "wrong value of cone->qsize");
    ASSERT_EQUAL_INT_OR_FAIL(cone->psize, 0, str, "wrong value of cone->psize");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ssize, 0, str, "wrong value of cone->ssize");

    /* test `A`, `b` and `c` */
    ASSERT_TRUE_OR_FAIL(data->A != SCS_NULL, str, "A should not be NULL");
    ASSERT_EQUAL_INT_OR_FAIL(data->A->m, m, str, "A->m is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(data->A->n, n, str, "A->m is wrong");
    ASSERT_TRUE_OR_FAIL(data->A->i != SCS_NULL, str, "A->i should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->A->p != SCS_NULL, str, "A->p should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->A->x != SCS_NULL, str, "A->x should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->b != SCS_NULL, str, "b should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->c != SCS_NULL, str, "c should not be NULL");

    /* test correctness of data */
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(data->A->i, pos_correct, nnz, str, "A->i is wrong");
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(data->A->p, col_idx_correct, n + 1, str, "A->p is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->A->x, a_correct, nnz, 1e-12, str, "A->x is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->b, b_correct, m, 1e-12, str, "b is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->c, c_correct, n, 1e-12, str, "c is wrong");


    /* test cone */
    ASSERT_EQUAL_INT_OR_FAIL(cone->f, 0, str, "wrong value of cone->f");
    ASSERT_EQUAL_INT_OR_FAIL(cone->l, 0, str, "wrong value of cone->l");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ep, 0, str, "wrong value of cone->ep");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ed, 0, str, "wrong value of cone->ed");
    ASSERT_TRUE_OR_FAIL(cone->q != SCS_NULL, str, "cone->q should not be NULL");
    ASSERT_TRUE_OR_FAIL(cone->s == SCS_NULL, str, "cone->s should be NULL");
    ASSERT_TRUE_OR_FAIL(cone->p == SCS_NULL, str, "cone->p should be NULL");
    ASSERT_EQUAL_INT_OR_FAIL((cone->q)[0], 4, str, "wrong value of cone->q[0]");

    /* make sure the settings have been initialized */
    ASSERT_TRUE_OR_FAIL(data->stgs != SCS_NULL, str, "data->stgs should not be NULL");

    scs_free_data_cone(data, cone);

    SUCCEED(str);
}

bool test_parse_YAML_2(char** str) {
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    const char * filepath = "tests/c/data/test-2.yml";
    scs_int status;

    const scs_float a_correct[] = {0.1, -0.3, 1, -0.5, 0.1, 0.2, 0.2, 0.8, 1, 0.4, 0.9, -0.9, 0.1, -0.1, -0.2, -0.2};
    const scs_int col_idx_correct[] = {0, 3, 5, 9, 12, 16};
    const scs_int pos_correct[] = {0, 3, 5, 1, 4, 0, 2, 3, 5, 2, 3, 4, 1, 2, 3, 4};
    const scs_float b_correct[] = {1, 0.8, -1, 2, 1, 1};
    const scs_float c_correct[] = {0.1, 0.1, 0.2, 0.1, 0.6};
    const scs_int m = 6;
    const scs_int n = 5;
    const scs_int nnz = 16;


    /* parse YAML */
    status = scs_from_YAML(filepath, &data, &cone);

    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "status is not 0");

    ASSERT_TRUE_OR_FAIL(data != SCS_NULL, str, "data should not be NULL");
    ASSERT_TRUE_OR_FAIL(cone != SCS_NULL, str, "cone should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->stgs != SCS_NULL, str, "data->stgs should not be NULL");
    ASSERT_EQUAL_INT_OR_FAIL(data->m, m, str, "wrong value of m");
    ASSERT_EQUAL_INT_OR_FAIL(data->n, n, str, "wrong value of n");
    ASSERT_EQUAL_INT_OR_FAIL(cone->qsize, 2, str, "wrong value of cone->qsize");
    ASSERT_EQUAL_INT_OR_FAIL(cone->psize, 0, str, "wrong value of cone->psize");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ssize, 0, str, "wrong value of cone->ssize");

    ASSERT_TRUE_OR_FAIL(data->A != SCS_NULL, str, "A should not be NULL");
    ASSERT_EQUAL_INT_OR_FAIL(data->A->m, m, str, "A->m is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(data->A->n, n, str, "A->m is wrong");
    ASSERT_TRUE_OR_FAIL(data->A->i != SCS_NULL, str, "A->i should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->A->p != SCS_NULL, str, "A->p should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->A->x != SCS_NULL, str, "A->x should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->b != SCS_NULL, str, "b should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->c != SCS_NULL, str, "c should not be NULL");

    /* test correctness of data */
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(data->A->i, pos_correct, nnz, str, "A->i is wrong");
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(data->A->p, col_idx_correct, n + 1, str, "A->p is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->A->x, a_correct, nnz, 1e-12, str, "A->x is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->b, b_correct, m, 1e-12, str, "b is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->c, c_correct, n, 1e-12, str, "c is wrong");

    ASSERT_EQUAL_INT_OR_FAIL(cone->f, 1, str, "wrong value of cone->f");
    ASSERT_EQUAL_INT_OR_FAIL(cone->l, 1, str, "wrong value of cone->l");

    ASSERT_TRUE_OR_FAIL(cone->q != SCS_NULL, str, "cone->q should not be NULL");
    ASSERT_TRUE_OR_FAIL(cone->s == SCS_NULL, str, "cone->s should be NULL");
    ASSERT_TRUE_OR_FAIL(cone->p == SCS_NULL, str, "cone->p should be NULL");
    ASSERT_EQUAL_INT_OR_FAIL((cone->q)[0], 2, str, "wrong value of cone->q[0]");
    ASSERT_EQUAL_INT_OR_FAIL((cone->q)[1], 2, str, "wrong value of cone->q[1]");

    scs_free_data_cone(data, cone);

    SUCCEED(str);
}

bool test_parse_YAML_3(char** str) {
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    const char * filepath = "tests/c/data/test-3.yml";
    scs_int status;
    const scs_int m = 15;
    const scs_int n = 4;
    const scs_int nnz = 15;
    const scs_float a_correct[] = {0.252982, 0.386571, 0.600743, 0.545203, 0.375576, 0.623916, 0.972684, 0.216089, 0.408444, 0.401495, 0.197685, 0.163842, 0.436147, 0.866289, 0.521696};
    const scs_int col_idx_correct[] = {0, 5, 6, 10, 15};
    const scs_int pos_correct[] = {2, 5, 8, 11, 14, 13, 0, 1, 9, 12, 3, 4, 6, 7, 10};
    const scs_float b_correct[] = {0.602533, 0.786667, 0.35368, 0.654741, 0.724931, 0.995501, 0.462854, 0.737557, 0.291446, 0.597794, 0.282445, 1.01838, 0.531822, 0.930188, 0.516776};
    const scs_float c_correct[] = {0.904668, 0.404825, 0.331175, 0.572139};

    status = scs_from_YAML(filepath, &data, &cone);

    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "status is not 0");

    ASSERT_TRUE_OR_FAIL(data != SCS_NULL, str, "data should not be NULL");
    ASSERT_TRUE_OR_FAIL(cone != SCS_NULL, str, "cone should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->stgs != SCS_NULL, str, "data->stgs should not be NULL");
    ASSERT_EQUAL_INT_OR_FAIL(data->m, m, str, "wrong value of m");
    ASSERT_EQUAL_INT_OR_FAIL(data->n, n, str, "wrong value of n");
    ASSERT_EQUAL_INT_OR_FAIL(cone->q[0], 2, str, "wrong value of cone->q");
    ASSERT_EQUAL_INT_OR_FAIL(cone->l, 1, str, "wrong value of cone->l");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ed, 0, str, "wrong value of cone->ed");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ep, 1, str, "wrong value of cone->ep");
    ASSERT_EQUAL_INT_OR_FAIL(cone->f, 0, str, "wrong value of cone->f");
    ASSERT_EQUAL_INT_OR_FAIL(cone->qsize, 1, str, "wrong value of cone->qsize");
    ASSERT_EQUAL_INT_OR_FAIL(cone->psize, 0, str, "wrong value of cone->psize");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ssize, 2, str, "wrong value of cone->ssize");

    ASSERT_TRUE_OR_FAIL(data->A != SCS_NULL, str, "A should not be NULL");
    ASSERT_EQUAL_INT_OR_FAIL(data->A->m, m, str, "A->m is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(data->A->n, n, str, "A->m is wrong");
    ASSERT_TRUE_OR_FAIL(data->A->i != SCS_NULL, str, "A->i should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->A->p != SCS_NULL, str, "A->p should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->A->x != SCS_NULL, str, "A->x should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->b != SCS_NULL, str, "b should not be NULL");
    ASSERT_TRUE_OR_FAIL(data->c != SCS_NULL, str, "c should not be NULL");

    /* test correctness of data */
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(data->A->i, pos_correct, nnz, str, "A->i is wrong");
    ASSERT_EQUAL_ARRAY_INT_OR_FAIL(data->A->p, col_idx_correct, n + 1, str, "A->p is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->A->x, a_correct, nnz, 1e-12, str, "A->x is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->b, b_correct, m, 1e-12, str, "b is wrong");
    ASSERT_EQUAL_ARRAY_OR_FAIL(data->c, c_correct, n, 1e-12, str, "c is wrong");

    scs_free_data_cone(data, cone);

    SUCCEED(str);
}

bool test_SDP_from_YAML(char **str) {
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsInfo * info = scs_init_info();
    ScsSolution * sol = scs_init_sol();
    const char * filepath = "tests/c/data/test-4.yml";
    scs_int status;

    status = scs_from_YAML(filepath, &data, &cone);

    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "status is not 0");

    data->stgs->do_super_scs = 1;
    data->stgs->direction = restarted_broyden;
    data->stgs->k0 = 0;
    data->stgs->memory = 20;
    data->stgs->eps = 1e-8;
    data->stgs->verbose = 0;
    data->stgs->do_override_streams = 1;
    data->stgs->output_stream = stderr;

    status = scs(data, cone, sol, info);

    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "Problem not solved");
    ASSERT_EQUAL_INT_OR_FAIL(scs_linsys_is_indirect(), 0, str, "Wrong linsys method");
    ASSERT_EQUAL_INT_OR_FAIL(info->cg_total_iters, -1, str, "Wrong CG iters");
    ASSERT_TRUE_OR_FAIL(info->linsys_total_solve_time_ms > 0, str, "Linsys time");

    ASSERT_EQUAL_INT_OR_FAIL(cone->f, 0, str, "cone->f is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->l, 2, str, "cone->l is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->q[0], 401, str, "cone->q is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ep, 0, str, "cone->ep is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ed, 0, str, "cone->ed is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->psize, 0, str, "cone->psize is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->qsize, 1, str, "cone->qsize is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->ssize, 3, str, "cone->ssize is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->s[0], 20, str, "cone->s[0] is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->s[1], 20, str, "cone->s[1] is wrong");
    ASSERT_EQUAL_INT_OR_FAIL(cone->s[2], 2, str, "cone->s[2] is wrong");

    scs_free_data_cone(data, cone);
    scs_free_info(info);
    scs_free_sol(sol);

    SUCCEED(str);
}

bool test_logreg_from_YAML(char **str) {
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsInfo * info;
    ScsSolution * sol;
    const char * filepath = "tests/c/data/test-5.yml";
    scs_int status;

    info = scs_init_info();
    sol = scs_init_sol();
    status = scs_from_YAML(filepath, &data, &cone);

    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "status is not 0");

    data->stgs->do_super_scs = 1;
    data->stgs->direction = anderson_acceleration;
    data->stgs->memory = 4;
    data->stgs->verbose = 0;
    data->stgs->do_override_streams = 1;
    data->stgs->output_stream = stderr;

    status = scs(data, cone, sol, info);

    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_SOLVED, str, "Problem not solved");

    scs_free_data_cone(data, cone);
    scs_free_info(info);
    scs_free_sol(sol);

    SUCCEED(str);
}

bool test_power_from_YAML(char **str) {
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsInfo * info;
    ScsSolution * sol;
    const char * filepath = "tests/c/data/test-6.yml";
    scs_int status;

    sol = scs_init_sol();
    info = scs_init_info();
    status = scs_from_YAML(filepath, &data, &cone);

    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "status is not 0");

    data->stgs->do_super_scs = 1;
    data->stgs->direction = restarted_broyden;
    data->stgs->memory = 20;
    data->stgs->verbose = 0;
    data->stgs->do_override_streams = 1;
    data->stgs->output_stream = stderr;

    status = scs(data, cone, sol, info);

    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_INFEASIBLE, str, "Problem not infeasible");
    ASSERT_EQUAL_INT_OR_FAIL(strcmp(info->status, "Infeasible"), 0, str,
            "problem status not 'Infeasible'");

    scs_free_data_cone(data, cone);
    scs_free_info(info);
    scs_free_sol(sol);

    SUCCEED(str);
}

bool test_exponential_unbdd_from_YAML(char **str) {
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsInfo * info;
    ScsSolution * sol;
    const char * filepath = "tests/c/data/test-7.yml";
    scs_int status;

    sol = scs_init_sol();
    info = scs_init_info();
    status = scs_from_YAML(filepath, &data, &cone);

    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "status is not 0");

    data->stgs->do_super_scs = 1;
    data->stgs->direction = restarted_broyden;
    data->stgs->memory = 20;
    data->stgs->verbose = 0;
    data->stgs->k0 = 0;
    data->stgs->do_override_streams = 1;
    data->stgs->output_stream = stderr;

    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_UNBOUNDED, str, "Problem not unbounded");
    ASSERT_EQUAL_INT_OR_FAIL(strcmp(info->status, "Unbounded"), 0, str,
            "problem statuc not 'Unbounded'");

    /* Solve again with SCS */
    data->stgs->do_super_scs = 0;
    data->stgs->warm_start = 1;
    memset(sol->x, 0, data->n * sizeof (*sol->x));
    memset(sol->y, 0, data->m * sizeof (*sol->y));
    memset(sol->s, 0, data->m * sizeof (*sol->s));

    status = scs(data, cone, sol, info);
    ASSERT_EQUAL_INT_OR_FAIL(status, SCS_UNBOUNDED, str, "Problem not unbounded");
    ASSERT_EQUAL_INT_OR_FAIL(strcmp(info->status, "Unbounded"), 0, str,
            "problem statuc not 'Unbounded'");

    scs_free_data_cone(data, cone);
    scs_free_info(info);
    scs_free_sol(sol);

    SUCCEED(str);
}

bool test_problem_metadata(char **str) {
    const char problemName[] = "problem-123\0";
    const char license[] = "https://github.com/kul-forbes/scs/blob/master/LICENSE.txt";
    const char id[] = "http://superscs.org/problem/problem-123";
    int year = -1, month = -1, day = -1, hour = -1, minute = -1, second = -1;
    char timezone[100];
    time_t t = time(NULL);
    struct tm date_time_now = *localtime(&t);

    ScsConicProblemMetadata * meta;
    meta = scs_init_conic_problem_metadata(problemName);
    ASSERT_TRUE_OR_FAIL(meta != SCS_NULL, str, "`meta` is NULL");
    ASSERT_TRUE_OR_FAIL(strncmp(meta->problemName, problemName, 11) == 0,
            str, "problem name is wrong");
    ASSERT_TRUE_OR_FAIL(
            strncmp(meta->license, license, 57) == 0,
            str, "problem license is wrong");
    ASSERT_TRUE_OR_FAIL(
            strncmp(meta->id, id, 39) == 0,
            str, "problem ID is wrong");

    ASSERT_TRUE_OR_FAIL(
            sscanf(meta->date, "%d-%d-%d %d:%d:%d [%99[^]]]",
            &year, &month, &day, &hour, &minute, &second, timezone) > 0,
            str, "date format error");

    ASSERT_TRUE_OR_FAIL(
            ((date_time_now.tm_year + 1900 >= year) && (year <= 1901 + date_time_now.tm_year)),
            str, "time:year is wrong");

    ASSERT_TRUE_OR_FAIL((month >= 1 && month <= 12), str, "time:month is wrong");
    ASSERT_TRUE_OR_FAIL((day >= 1 && day <= 31), str, "time:day is wrong");
    ASSERT_TRUE_OR_FAIL((hour >= 0 && hour <= 23), str, "time:hour is wrong");
    ASSERT_TRUE_OR_FAIL((minute >= 0 && minute <= 59), str, "time:minute is wrong");
    ASSERT_TRUE_OR_FAIL((second >= 0 && second <= 60), str, "time:second is wrong");

    scs_free(meta);
    SUCCEED(str);
}

bool test_overtime_stop(char **str) {
    const scs_float max_time_millis = 100.;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsInfo * info;
    ScsSolution * sol;
    const char * filepath = "tests/c/data/liswet1.yml";
    scs_int status;

    sol = scs_init_sol();
    info = scs_init_info();
    status = scs_from_YAML(filepath, &data, &cone);
    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "status is not 0");

    data->stgs->max_time_milliseconds = max_time_millis;
    data->stgs->direction = anderson_acceleration;
    data->stgs->memory = 20;
    data->stgs->do_super_scs = 1;
    data->stgs->verbose = 0;
    data->stgs->max_iters = 1e4;
    data->stgs->cg_rate = 1.2;

    status = scs(data, cone, sol, info);
    ASSERT_TRUE_OR_FAIL(status != SCS_SOLVED, str, "wrong status (solved)");
    ASSERT_TRUE_OR_FAIL(status != SCS_UNBOUNDED, str, "wrong status (unbounded)");
    ASSERT_TRUE_OR_FAIL(status != SCS_INFEASIBLE, str, "wrong status (infeasible)");
    ASSERT_TRUE_OR_FAIL(status != SCS_INDETERMINATE, str, "wrong status (indeterminate)");
    ASSERT_TRUE_OR_FAIL(info->iter < data->stgs->max_iters, str, "too many iterations");
    ASSERT_TRUE_OR_FAIL(info->iter > 0, str, "zero iterations");

    scs_free_data_cone(data, cone);
    scs_free_info(info);
    scs_free_sol(sol);
    SUCCEED(str);
}

bool test_overtime_stop_scs(char **str) {
    const scs_float max_time_millis = 100.;
    ScsData * data = SCS_NULL;
    ScsCone * cone = SCS_NULL;
    ScsInfo * info;
    ScsSolution * sol;
    const char * filepath = "tests/c/data/liswet1.yml";
    scs_int status;

    info = scs_init_info();
    sol = scs_init_sol();
    status = scs_from_YAML(filepath, &data, &cone);

    ASSERT_EQUAL_INT_OR_FAIL(status, 0, str, "failed to parse YAML");

    data->stgs->max_time_milliseconds = max_time_millis;
    data->stgs->do_super_scs = 0;
    data->stgs->verbose = 0;
    data->stgs->max_iters = 1e5;
    data->stgs->cg_rate = 1.2;

    status = scs(data, cone, sol, info);
    ASSERT_TRUE_OR_FAIL(status != SCS_SOLVED, str, "wrong status (solved)");
    ASSERT_TRUE_OR_FAIL(status != SCS_UNBOUNDED, str, "wrong status (unbounded)");
    ASSERT_TRUE_OR_FAIL(status != SCS_INFEASIBLE, str, "wrong status (infeasible)");
    ASSERT_TRUE_OR_FAIL(status != SCS_INDETERMINATE, str, "wrong status (indeterminate)");
    ASSERT_TRUE_OR_FAIL(info->iter < data->stgs->max_iters, str, "too many iterations");
    ASSERT_TRUE_OR_FAIL(info->iter > 0, str, "zero iterations");

    scs_free_data_cone(data, cone);
    scs_free_info(info);
    scs_free_sol(sol);
    SUCCEED(str);
}
