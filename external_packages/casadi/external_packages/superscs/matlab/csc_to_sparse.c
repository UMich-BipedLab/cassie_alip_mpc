/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
 *                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
 *                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
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
#include "mex.h"
#include <string.h>

/* ----------------------------------------------------------
 * Template:
 * S = sparse_to_csc(num_rows, a, I, J)
 *
 * Notes:
 * 1. The number of columns of S is the length of I minus 1
 * 2. The number of nonzeros is the last element of I
 * 3. The length of J is equal to the number of nonzeros
 * ---------------------------------------------------------- */
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    const mxArray * input_num_rows;
    const mxArray * input_a;
    const mxArray * input_I;
    const mxArray * input_J;
    double * data_a;
    double * data_I;
    double * data_J;
    double * pr;
    size_t len_a;
    size_t len_I;
    size_t len_J;
    size_t nonzeroes;
    size_t i;
    mwSize num_rows;
    mwSize num_cols;
    mwIndex *irs;
    mwIndex *jcs;    
    
    if (nrhs!=4){
        mexErrMsgIdAndTxt("SCS:nrhs", 
                "this function requires exactly four input arguments");
    }
    
    input_num_rows = prhs[0];
    input_a        = prhs[1];
    input_I        = prhs[2];
    input_J        = prhs[3];
        
    len_a = mxGetNumberOfElements(input_a);
    len_I = mxGetNumberOfElements(input_I);
    len_J = mxGetNumberOfElements(input_J);
    num_cols = len_I - 1;
        
    num_rows = (mwSize)(*mxGetPr(input_num_rows));
    
    data_a = mxGetPr(input_a);
    data_I = mxGetPr(input_I);
    data_J = mxGetPr(input_J);
    
    nonzeroes = (size_t) data_I[len_I-1];
    
    if (nonzeroes!=len_a){
        mexErrMsgIdAndTxt("SCS:inconsistent", 
                "the length of `a` (%zu) must be equal the number of nonzeroes (%zu)",
                len_a, nonzeroes);
    }
    
    if (nonzeroes!=len_J){
        mexErrMsgIdAndTxt("SCS:inconsistent", 
                "the length of `J` (%zu) must be equal the number of nonzeroes (%zu)",
                len_J, nonzeroes);
    }
        
    if (nlhs == 0)
        return;
    
    
    plhs[0] = mxCreateSparse(num_rows, num_cols, nonzeroes, 0);
    pr       = mxGetPr(plhs[0]);
    jcs      = mxGetIr(plhs[0]);
    irs      = mxGetJc(plhs[0]);
    
    for (i=0; i<nonzeroes; ++i){
        pr[i] = data_a[i];
        jcs[i] = data_J[i];
    }
    
    for (i=0; i<len_I; ++i){
        irs[i] = data_I[i];
    }
    
}