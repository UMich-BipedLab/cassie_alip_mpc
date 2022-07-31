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
/*! \page page_unbdd_infeas Unboundedness and infeasibility
 * 
 * \section sec_unbdd_infeas Theorems of the alternative
 * 
 * Infeasibility and unboundedness (dual infeasibility) conditions are provided 
 * by the so-called <b>theorems of the alternative</b>. 
 * 
 * The *weak* theorems of the alternative, state that 
 * 
 * - <b>(Primal feasibility)</b>. At most one of the following two systems is 
 * solvable
 *      -  \f$Ax\preceq_{\mathcal{K}} b\f$ (i.e., \f$b-Ax\in\mathcal{K}\f$ or 
 *          \f$Ax+s=b\f$ for some \f$s\in\mathcal{K}\f$)
 *      -   \f$A^* y = 0\f$, \f$y \succeq_{\mathcal{K}^*} 0\f$ and 
 *          \f$\langle b,y \rangle < 0\f$
 * 
 * - <b>(Dual feasibility)</b>. At most one of the following two systems is 
 *  solvable
 *      - \f$A^*y {}+{} c {}={} 0\f$ and \f$ y\succeq_{\mathcal{K}} 0\f$
 *      - \f$Ax\succeq 0\f$ and  \f$\langle c,x\rangle {}\leq{} 0\f$
 * 
 * This result is used in the derivation of 
 * \ref page_termination "infeasibility and unbounddedness certificates".
 */