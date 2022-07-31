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
 * File:   test_superscs.h
 * Author: Pantelis Sopasakis
 *
 * Created on May 31, 2017, 5:41 PM
 */

#ifndef TEST_SUPERSCS_H
#define TEST_SUPERSCS_H

#include "unit_test_util.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    bool test_superscs_solve(char** str);
    
    bool test_superscs_with_anderson(char** str);
    
    bool test_superscs_000(char** str);
    
    bool test_superscs_001_fpr(char** str);
    
    bool test_superscs_001_rbroyden(char** str);
    
    bool test_superscs_100_rbroyden(char** str);
    
    bool test_superscs_011_progress(char** str);
    
    bool test_residuals(char** str);   
    
    bool test_rho_x(char** str);
    
    bool test_validation(char** str);    
    
    bool test_no_normalization(char** str);

    bool test_warm_start(char** str);
    
    bool test_scale(char** str);
    
    bool test_serialize_YAML(char** str);
    
    bool test_serialize_YAML_no_metadata(char** str);
    
    bool test_copy_YAML(char** str);
    
    bool test_parse_YAML(char** str);
    
    bool test_parse_YAML_2(char** str);
    
    bool test_parse_YAML_3(char** str);
    
    bool test_SDP_from_YAML(char **str);
        
    bool test_logreg_from_YAML(char **str);
    
    bool test_power_from_YAML(char **str);
    
    bool test_exponential_unbdd_from_YAML(char **str);
    
    bool test_problem_metadata(char **str);
    
    bool test_overtime_stop(char **str);
    
    bool test_overtime_stop_scs(char **str);

#ifdef __cplusplus
}
#endif

#endif /* TEST_SUPERSCS_H */
