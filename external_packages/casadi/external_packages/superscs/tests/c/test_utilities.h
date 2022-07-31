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

/* 
 * File:   test_utilities.h
 * Author: Pantelis Sopasakis
 *
 * Created on May 26, 2017, 3:25 PM
 */

#ifndef TEST_UTILITIES_H
#define TEST_UTILITIES_H

#include "unit_test_util.h"
#include "linAlg.h"
#include "scs.h"
/* #include <time.h> */

#ifdef __cplusplus
extern "C" {
#endif

    bool test_project_linsys_v2(char** str);

    bool test_scs_scale_array(char** str);

    bool test_scs_gemm(char** str);

    bool test_scs_gemm_cp(char** str);

    bool test_scs_gemm_trans_cp(char** str);

    bool test_scs_inner_product(char** str);

    bool test_scs_subtract_array(char** str);

    bool test_scs_norm_difference(char** str);

    bool testscs_millis_to_time(char** str);

    bool test_scs_axpy(char** str);

    bool test_scs_cgls_square_matrix(char** str);

    bool test_scs_cgls_tall_matrix(char** str);

    bool test_scs_cgls_fat_matrix(char** str);

    bool test_scs_qr_least_sq_tall_matrix(char** str);

    bool test_scs_svd_least_sq_tall_matrix(char** str);

    bool test_scs_svd_least_sq_rank_deficient(char** str);

    bool test_scs_set_tolerance(char ** str);

    bool test_scs_set_restarted_broyden_settings(char** str);

    bool test_scs_set_anderson_settings(char** str);

    bool test_set_tolerance(char** str);

    bool test_set_memory(char** str);

#ifdef __cplusplus
}
#endif

#endif /* TEST_UTILITIES_H */
