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
 * File:   unit_test_util.c
 * Author: Pantelis Sopasakis
 *
 * Created on April 1, 2017, 2:10 AM
 */

#include "unit_test_util.h"
#include "directions.h"

bool scs_assert_equals_int(const scs_int a, const scs_int b) {
    return (a == b);
}

bool scs_assert_equals_float(const scs_float a, const scs_float b, const scs_float tol) {
    return ( fabs(a - b) < tol);
}

bool scs_assert_equals_array(
        const scs_float * a,
        const scs_float * b,
        scs_int n,
        const scs_float tol) {
    return scs_norm_infinity_difference(a, b, n) < tol;
}

bool scs_assert_equals_array_int(
        const scs_int * a,
        const scs_int * b,
        scs_int n) {
    scs_int i;
    bool all_equal = 1;
    for (i = 0; i < n; ++i) {
        all_equal = all_equal && (a[i] == b[i]);
    }
    return all_equal;
}

bool scs_test(const unitTest_t ut, const char* name) {
    char * message = NULL;
    int result = ut(&message);
    if (result == TEST_SUCCESS) {
        printf(TEST_PASS_FLAG);
    } else {
        printf(TEST_FAIL_FLAG); /* LCOV_EXCL_LINE */
    }
    printf(" (%s) -- %s\n", name, message);
    return result;
}
