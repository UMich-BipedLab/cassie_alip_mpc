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
/*! \page page_warm_starting Warm Starting
 * 
 * We may warm start SuperSCS by passing an initial estimate of the (x,y)-solution.
 * 
 * To activate warm starting, set <code>warm_start</code> to \c 1.
 * 
 * Here is a simple example in MATLAB:
 * 
 * ~~~~~{.m}
 * K.q = 4;
 * 
 * A(1,1) = 0.3;
 * A(4,1) = -0.5;
 * A(2,2) = 0.7;
 * A(4,2) = 0.9;
 * A(3,3) = 0.2;
 * 
 * b = [0.2; 0.1; -0.1; 0.1];
 * c = [1;-2;-3];
 * 
 * data.A = sparse(A);
 * data.b = b;
 * data.c = c;
 * 
 * params.eps      = 1e-6;
 * params.verbose  = 1;
 * [x, y, s, info] = scs_direct(data, K, params);
 * ~~~~~
 */