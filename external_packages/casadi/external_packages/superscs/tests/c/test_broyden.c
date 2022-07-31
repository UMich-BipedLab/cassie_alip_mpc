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
#include "test_broyden.h"

static void randomize_values(scs_float* x, scs_int l) {
    scs_int i;
    for (i = 0; i < l; ++i) {
        x[i] = (i + 0.5) * 0.05;
    }
}

static void prepare_work(ScsWork * work, scs_int l_size, scs_int memory) {
    work->l = l_size;
    work->stgs = scs_calloc(1, sizeof (ScsSettings));
    work->stgs->thetabar = 0.2;
    work->direction_cache = scs_calloc(1, sizeof (ScsDirectionCache));
    work->direction_cache->S = scs_calloc((1 + memory) * l_size, sizeof (scs_float));
    work->direction_cache->U = scs_calloc((1 + memory) * l_size, sizeof (scs_float));
    work->direction_cache->mem = memory;
    work->direction_cache->mem_cursor = 0;
    work->Sk = scs_calloc(l_size, sizeof (scs_float)); /* malloc would be just fine anyway... */
    work->Yk = scs_calloc(l_size, sizeof (scs_float));
    work->dir = scs_calloc(l_size, sizeof (scs_float));
    work->R = scs_calloc(l_size, sizeof (scs_float));
    work->stepsize = 1;

    randomize_values(work->Sk, l_size);
    randomize_values(work->Yk, l_size);
    randomize_values(work->dir, l_size);
    randomize_values(work->R, l_size);
}

static void destroy_work(ScsWork * work) {
    if (!work) {
        return;
    }
    if (work->stgs) {
        scs_free(work->stgs);
    }
    if (work->Sk) {
        scs_free(work->Sk);
    }
    if (work->Yk) {
        scs_free(work->Yk);
    }
    if (work->R) {
        scs_free(work->R);
    }
    if (work->dir) {
        scs_free(work->dir);
    }
    if (work->direction_cache) {
        if (work->direction_cache->S) {
            scs_free(work->direction_cache->S);
        }
        if (work->direction_cache->U) {
            scs_free(work->direction_cache->U);
        }
        scs_free(work->direction_cache);
    }
    scs_free(work);
}

bool test_cache_increments(char** str) {
    ScsWork * work = scs_calloc(1, sizeof (ScsWork));
    scs_int i;
    const scs_int l = 4;
    const scs_int mem = 10;
    const scs_int runs = 5000;
    scs_int method_status;
    prepare_work(work, l, mem);
    scs_reset_direction_cache(work->direction_cache);
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 0, str, "active mem after reset not 0");

    ASSERT_EQUAL_INT_OR_FAIL(work->l, l, str, "size not correct")
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem, mem, str, "wrong memory")
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 0, str, "initial mem not 0")
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem, mem, str, "memory not set correctly")

    for (i = 0; i < runs; ++i) {
        method_status = scs_compute_dir_restarted_broyden(work);
        if (i > 1 && work->direction_cache->mem_cursor == 0) {
            ASSERT_EQUAL_INT_OR_FAIL(method_status, SCS_DIRECTION_CACHE_RESET, str, "status not SCS_DIRECTION_CACHE_RESET")
        } else {
            ASSERT_EQUAL_INT_OR_FAIL(method_status, SCS_DIRECTION_CACHE_INCREMENT, str, "status not SCS_DIRECTION_CACHE_INCREMENT")
        }
        ASSERT_TRUE_OR_FAIL(work->direction_cache->mem_cursor <= work->direction_cache->mem,
                str, "mem of cache overflowed")
    }

    scs_reset_direction_cache(work->direction_cache);
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 0, str, "active mem after reset not 0");

    destroy_work(work);

    SUCCEED(str);
}

bool test_broyden_direction_empty_memory(char** str) {
    ScsWork * work = scs_calloc(1, sizeof (ScsWork));
    const scs_int l = 4;
    const scs_int mem = 10;
    scs_int method_status;
    scs_float u_expected[4] = {-0.0366837857666911, 0.0330154071900220, -0.0440205429200293, 0.2017608217168012};
    scs_float d_expected[4] = {-3.73213499633162, -4.71107850330154, -1.21856199559795, 7.57674247982392};

    prepare_work(work, l, mem);

    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem, mem, str, "memory not set correctly");
    work->stgs->thetabar = 0.4;

    /* Yk = [1.5; 3.2; -1.8; 0.7]; */
    work->Yk[0] = 1.5;
    work->Yk[1] = 3.2;
    work->Yk[2] = -1.8;
    work->Yk[3] = 0.7;

    /* Sk = [0.5; 4.1; -3.0; 6.2]; */
    work->Sk[0] = 0.5;
    work->Sk[1] = 4.1;
    work->Sk[2] = -3.0;
    work->Sk[3] = 6.2;

    /* R = [3.3; 5.1, 0.7, -5.2];*/
    work->R[0] = 3.3;
    work->R[1] = 5.1;
    work->R[2] = 0.7;
    work->R[3] = -5.2;

    work->stepsize = 0.9;

    method_status = scs_compute_dir_restarted_broyden(work);
    ASSERT_EQUAL_INT_OR_FAIL(method_status, SCS_DIRECTION_CACHE_INCREMENT, str, "memory not incremented");
    ASSERT_EQUAL_ARRAY_OR_FAIL(work->direction_cache->U, u_expected, l, 1e-10, str, "u not correct");
    ASSERT_EQUAL_ARRAY_OR_FAIL(work->dir, d_expected, l, 1e-10, str, "direction not correct");
    ASSERT_EQUAL_ARRAY_OR_FAIL(work->direction_cache->S, work->Sk, l, 1e-10, str, "sk not added to the cache");


    destroy_work(work);

    SUCCEED(str);
}

bool test_cache_s(char** str) {
    ScsWork * work = scs_calloc(1, sizeof (ScsWork));
    scs_int i;
    scs_int j;
    scs_int k;
    scs_int cursor_before_reset;
    const scs_int l = 4;
    const scs_int mem = 10;
    const scs_int runs = 500;
    scs_int method_status;
    scs_float * S_prev;

    prepare_work(work, l, mem);
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem, mem, str, "memory not set");

    for (i = 0; i < runs; ++i) {

        for (j = 0; j < l; ++j) {
            work->Sk[j] = 0.1 * (j + 1) + 10.0 / (i + 1);
            work->R[j] *= 0.3;
            work->R[j] += 0.05 * j;
            work->Yk[j] *= 0.2;
            work->Yk[j] += 0.01 * j;
        }

        cursor_before_reset = work->direction_cache->mem_cursor;
        method_status = scs_compute_dir_restarted_broyden(work);

        if ((i + 1) % (mem) == 0) {
            ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 0, str, "current mem not zero");
            ASSERT_EQUAL_INT_OR_FAIL(method_status, SCS_DIRECTION_CACHE_RESET, str, "not reset");
            ASSERT_EQUAL_INT_OR_FAIL(cursor_before_reset, work->direction_cache->mem - 1, str, "not reset when it should have");
        } else {
            ASSERT_EQUAL_INT_OR_FAIL(method_status, SCS_DIRECTION_CACHE_INCREMENT, str, "not reset");
            ASSERT_TRUE_OR_FAIL(work->direction_cache->mem_cursor > 0, str, "memory cursor is at zero");
            ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, (i + 1) % (mem), str, "cursor at wrong position");
            for (k = 1; k < work->direction_cache->mem_cursor; ++k) {
                S_prev = work->direction_cache->S + (work->direction_cache->mem_cursor - k) * l;
                for (j = 0; j < l; ++j) {
                    ASSERT_EQUAL_FLOAT_OR_FAIL(
                            S_prev[j],
                            0.1 * (j + 1) + 10.0 / (i + 2 - k),
                            1e-9, str, "S_previous incorrect");
                }
            }
        }

    } /* end for loop */

    if (work) destroy_work(work);

    SUCCEED(str);
}

bool test_broyden(char** str) {
    ScsWork * work = scs_calloc(1, sizeof (ScsWork));
    const scs_float tol = 1e-10;
    const scs_int l = 3;
    const scs_int mem = 4;
    scs_int i;

    prepare_work(work, l, mem);
    work->Sk[0] = 0.417022004702574;
    work->Sk[1] = 0.720324493442158;
    work->Sk[2] = 0.000114374817345;


    work->Yk[0] = 0.302332572631840;
    work->Yk[1] = 0.146755890817113;
    work->Yk[2] = 0.092338594768798;

    work->R[0] = 0.186260211377671;
    work->R[1] = 0.345560727043048;
    work->R[2] = 0.396767474230670;

    work->stgs->thetabar = 0.1;

    scs_reset_direction_cache(work->direction_cache);

    scs_compute_dir_restarted_broyden(work);

    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[0], -0.347871060977909, tol, str, "dir[0] wrong (0)");
    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[1], -1.153786101435742, tol, str, "dir[1] wrong (0)");
    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[2], -0.266812741078959, tol, str, "dir[2] wrong (0)");

    ASSERT_EQUAL_FLOAT_OR_FAIL(work->direction_cache->U[0], 0.494773777143634, tol, str, "U[0] wrong (0)");
    ASSERT_EQUAL_FLOAT_OR_FAIL(work->direction_cache->U[1], 2.474392791454103, tol, str, "U[1] wrong (0)");
    ASSERT_EQUAL_FLOAT_OR_FAIL(work->direction_cache->U[2], -0.397858153324567, tol, str, "U[2] wrong (0)");

    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 1, str, "mem_cursor is wrong");

    work->Sk[0] = 0.178380225849766;
    work->Sk[1] = -0.196861446475943;
    work->Sk[2] = 0.586442621667069;


    work->Yk[0] = -0.851886969622469;
    work->Yk[1] = 0.800320709801823;
    work->Yk[2] = -1.509404724734393;

    work->R[0] = 0.875874147834533;
    work->R[1] = -0.242789536333340;
    work->R[2] = 0.166813439453503;

    scs_compute_dir_restarted_broyden(work);

    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[0], -0.844821713918483, tol, str, "dir[0] wrong (1)");
    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[1], -0.438339038559064, tol, str, "dir[1] wrong (1)");
    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[2], 0.205958930034291, tol, str, "dir[2] wrong (1)");


    scs_compute_dir_restarted_broyden(work);
    scs_compute_dir_restarted_broyden(work);
    scs_compute_dir_restarted_broyden(work);

    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[0], -0.615557936175172, tol, str, "dir[0] wrong (4)");
    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[1], -0.009167123450977, tol, str, "dir[1] wrong (4)");
    ASSERT_EQUAL_FLOAT_OR_FAIL(work->dir[2], 0.362741460313521, tol, str, "dir[2] wrong (4)");
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 1, str, "wrong cursor position");

    scs_reset_direction_cache(work->direction_cache);
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 0, str, "wrong cursor position");
    work->Sk[0] = 0.1;
    work->Sk[1] = 0.2;
    work->Sk[2] = 0.3;
    scs_compute_dir_restarted_broyden(work);
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 1, str, "wrong cursor position");
    work->Sk[0] = 0.4;
    work->Sk[1] = 0.5;
    work->Sk[2] = 0.6;
    scs_compute_dir_restarted_broyden(work);
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 2, str, "wrong cursor position");
    work->Sk[0] = 0.7;
    work->Sk[1] = 0.8;
    work->Sk[2] = 0.9;
    scs_compute_dir_restarted_broyden(work);
    ASSERT_EQUAL_INT_OR_FAIL(work->direction_cache->mem_cursor, 3, str, "wrong cursor position");
    for (i = 0; i < work->direction_cache->mem_cursor * l; ++i) {
        ASSERT_EQUAL_FLOAT_OR_FAIL(work->direction_cache->S[i], 0.1 * (i + 1), 1e-10, str, "wrong memory entry");
    }

    if (work != SCS_NULL) destroy_work(work);
    SUCCEED(str);
}

bool test_full_broyden(char** str) {
    ScsWork * work = scs_calloc(1, sizeof (ScsWork));
    /* const scs_float tol = 1e-10; */
    const scs_int l = 3;
    const scs_int mem = 4;
    /* scs_int i; */

    prepare_work(work, l, mem);
    work->stgs->direction = full_broyden;
    work->stgs->broyden_init_scaling = 1;
    work->stgs->tRule = 1;
    
    destroy_work(work);
    
    /*TODO complete this test! */
    
    SUCCEED(str);
}
