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

// FILE: superscs_test.c 

#include <stdio.h>
#include <stdlib.h>
#include "superscs/scs.h"
#include "superscs/scs_parser.h"
#include "superscs/util.h"

int main(int argc, char** argv) {
    ScsData * data;
    ScsCone * cone;
    ScsInfo * info = scs_init_info();
    ScsSolution * sol = scs_init_sol();
    const char * filepath = "tests/c/data/test-1.yml";
    scs_int status;
    
    // load problem from file
    status = scs_from_YAML(filepath, &data, &cone);
    
    // solver options
    scs_set_restarted_broyden_settings(data, 100);    
    data->stgs->verbose = 1;
    
    // solve the problem
    status = scs(data, cone, sol, info);
    
    // free allocated memory
    scs_free_data_cone(data, cone);
    scs_free_info(info);
    scs_free_sol(sol);
    
    return (EXIT_SUCCESS);
}

