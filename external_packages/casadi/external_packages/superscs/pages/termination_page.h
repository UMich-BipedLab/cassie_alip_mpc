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
/*! \page page_termination Termination criteria
 * 
 * \section sec-termination-criteria Termination conditions
 * The algorithm is terminated when an approximate optimal solution is found based on its
 * relative primal and dual residuals and relative duality gap.
 * At iteration \f$\nu\f$ let 
 * \f$
 * 	{u}^\nu 
 *   {}={}
 * 	({\chi}^{\nu}, {\psi}^{\nu}, {\tau}^{\nu})
 * \f$,
 * \f$
 * 	\bar{u}^\nu 
 *   {}={}
 * 	(\bar{\chi}^{\nu}, \bar{\psi}^{\nu}, \bar{\tau}^{\nu})
 * \f$ and 
 * \f$
 * 	\tilde{u}^\nu 
 *   {}={}
 * 	(\tilde{\chi}^{\nu}, \tilde{\psi}^{\nu}, \tilde{\tau}^{\nu})
 * \f$.
 * We compute 
 * \f$
 * 	\bar{\varsigma}^\nu
 * {}={}
 * 	\bar{\psi}^{\nu}
 * {}-{}
 * 	2\tilde{\psi}^{\nu}
 * {}+{}
 * 	\psi^\nu.
 * \f$
 * Let us also define the triplet 
 * \f$
 * 	(
 * 	  x^\nu, y^\nu, s^\nu
 * 	)
 * {}={}
 * 	(
 * 	  \bar{\chi}^{\nu}/\bar{\tau}^{\nu}, 
 * 	  \bar{\psi}^{\nu}/\bar{\tau}^{\nu}, 
 * 	  \bar{\varsigma}^{\nu}/\bar{\tau}^{\nu}
 * 	)
 * \f$, which serves as the candidate primal-dual solution at iteration \f$\nu\f$.
 * The relative primal residual is
 * \f{eqnarray*}{
 *  \mathrm{pr}^{\nu} {}={} \frac
 * 		      {
 * 			  \|
 * 			  A\bar{x}^\nu + \bar{s}^\nu - b
 * 			  \|
 * 		      }
 * 		      {
 * 			  1+\|b\|
 * 		      }
 * \f}
 * The relative dual residual is 
 * \f{eqnarray*}{
 *  \mathrm{dr}^\nu {}={} \frac
 * 		      {
 * 			  \|
 * 			  A^*\bar{y}^\nu + c
 * 			  \|
 * 		      }
 * 		      {
 * 			  1+\|c\|
 * 		      }
 * \f}
 * The relative duality gap is defined as 
 * \f{eqnarray*}{
 *  \mathrm{gap}^\nu {}={} \frac
 * 		      {
 * 			  |\langle c, \bar{x}^{\nu}\rangle {}+{} \langle b,\bar{y}^{\nu}\rangle|
 * 		      }
 * 		      {
 * 			  1 + |\langle c, \bar{x}^{\nu}\rangle| + |\langle b, \bar{y}^{\nu}\rangle|
 * 		      }
 * \f}
 * If \f$\mathrm{pr}^{\nu}\f$, \f$\mathrm{dr}^{\nu}\f$ and \f$\mathrm{gap}^{\nu}\f$ 
 * are all below a specified tolerance \f$\epsilon>0\f$, then we conclude that 
 * that the conic optimization problem is feasible, the algorithm is terminated
 * and the triplet 
 * \f$
 * 	(
 * 	  x^\nu, y^\nu, s^\nu
 * 	)
 * \f$
 * is an approximate solution.
 * 
 * The unboundedness and infeasibility certificates are derined from the 
 * \ref sec_unbdd_infeas "theorem of the alternative". The relative infeasibility 
 * certificate is defined as
 * 
 * \f{eqnarray*}{
 *  \mathrm{ic}^{\nu} {}={}
 * 	      \begin{cases}
 * 		      {
 * 			 \left\|b\right\| 
 * 			 \left\|A^*\bar{y}^{\nu}\right\|
 * 		      }
 * 		      /
 * 		      {
 * 			  \langle b, \bar{y}^{\nu}\rangle
 * 		      },
 * 		      &\text{ if } \langle b, \bar{y}^{\nu}\rangle{}<{}0\\
 * 		      +\infty,&\text{ else}
 * 	      \end{cases}
 * \f}
 * Likewise, the relative unboundedness certificate is defined as
 * \f{eqnarray*}{
 *  \mathrm{uc}^{\nu} {}={}
 * 	      \begin{cases}		     
 * 		      {
 * 			  \left\|c\right\| 
 * 			  \left\|A\bar{x}^{\nu} + \bar{s}^{\nu}\right\|
 * 		      }
 * 		      /
 * 		      {
 * 			  \langle c, \bar{x}^{\nu}\rangle
 * 		      },
 * 		      &\text{ if } \langle c, \bar{x}^{\nu}\rangle {}<{} 0\\
 * 		      +\infty,&\text{ else}
 * 	      \end{cases}
 * \f}
 * Provided that \f$\bar{u}^{\nu}\f$ is not a feasible \f$\epsilon\f$-optimal point, it is a certificate of
 * unboundedness if \f$\mathrm{uc}^{\nu}<\epsilon\f$ and it is a certificate of infeasibility if 
 * \f$\mathrm{ic}^{\nu}<\epsilon\f$.
 * 
 * 
 * \section sec-termination-algorithm Algorithm termination
 * 
 * SuperSCS is terminated if:
 * - The above conditions are satisfied up to a given \ref scs_settings#eps "tolerance" or
 * - The \ref scs_settings#max_iters "maximum number of iterations" is reached or
 * - The \ref scs_settings#max_time_milliseconds "maximum execution time" is reached
 */