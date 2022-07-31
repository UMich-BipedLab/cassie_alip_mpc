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
/*! \page page_superscs The SuperSCS Algorithm
 * 
 * \section superscs-problem-statement Conic Optimization and HSDE
 * 
 * SCS and SuperSCS solve the following problem
 * 
 * \f{eqnarray*}{
 * &&\mathrm{Minimize}\ \langle c, x \rangle\\
 * &&Ax + s = b\\
 * &&s\in\mathcal{K},
 * \f}
 * 
 * where \f$x\in\mathbb{R}^n\f$, \f$s\in\mathbb{R}^m\f$ are the primal variables
 * and \f$\mathcal{K}\subseteq\mathbb{R}^m\f$ is a nonempty, closed, convex cone.
 * 
 * The matrix \f$A\in\mathbb{R}^{m\times n}\f$ and the vector \f$b\in\mathbb{R}^m\f$
 * are the problem data.
 * 
 * The algorithm makes use of the [homogeneous self-dual embedding]
 * (https://mathematix.wordpress.com/2017/06/05/cone-programs-and-self-dual-embeddings/) 
 * (HSDE) which is the problem of finding a \f$u=(x,y,\tau)\in\mathbb{R}^{n+m+1}\f$ so that
 * 
 * \f{eqnarray*}{
 * &&u\in\mathcal{C}\\
 * &&Qu\in\mathcal{C}^*\\
 * &&\langle u, Qu \rangle = 0,
 * \f}
 * 
 * where 
 * 
 * \f{eqnarray*}{
 * Q = \begin{bmatrix}
 * 0 & A^* & c\\
 * -A & 0 & b\\
 * -c^* & -b^* & 0
 * \end{bmatrix}
 * \f}
 * 
 * and \f$\mathcal{C} = \mathbb{R}^n\times \mathcal{K}^* \times \mathbb{R}_+\f$
 * is a cone.
 * 
 * Equivalently, the HSDE can be written as a variational inequality:
 * 
 * \f{eqnarray*}{
 * 0 \in Qu + N_{\mathcal{C}}(u),
 * \f}
 * 
 * where \f$N_{\mathcal{C}}\f$ is the normal cone of \f$\mathcal{C}\f$.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * \section superscs-algorithmic-solution Algorithmic Solution
 * 
 * \subsection superscs-sec-douglas-rachford Douglas-Rachford Splitting for HSDE
 * 
 * The Douglas-Rachford splitting can be applied to the above variational problem.
 * 
 * 
 * Operator \f$T\f$ is a (firmly) nonexpansive operator on which we may apply the 
 * <b>SuperMann</b> algorithmic scheme.
 * 
 * Since \f$Q\f$ is a skew-symmetric linear operator, it is maximally monotone.
 * 
 * Since \f$N_{\mathcal{C}}\f$ is the subdifferential of the proper convex 
 * function \f$\delta_{\mathcal{C}}\f$, it is maximally monotone. 
 * 
 * Additionally, because of Cor. 24.4(i) in \ref page_superscs_refs "[BauCom]", 
 * \f$Q+N_{\mathcal{C}}\f$ is maximally monotone. 
 * 
 * Therefore, we may apply the Douglas-Rachford splitting on this monotone 
 * inclusion. 
 * 
 * The SCS algorithm \ref page_superscs_refs "[ODon16]" is precisely the 
 * application of the Douglas-Rachford splitting (DRS) to 
 * \f$N_{\mathcal{C}}{}+{}Q\f$; this leads to the following iterations; see Sec. 
 * 7.3 in \ref page_superscs_refs "[RyuBoy16]"
 * 
 * \f{eqnarray*}{
 * 	  \tilde{u}^{\nu} 
 * {}={}& 
 * 	  (I+Q)^{-1}(u^{\nu})
 * \\
 * 	  \bar{u}^{\nu} 
 * {}={}& 
 * 	  \Pi_{\mathcal{C}}(2\tilde{u}^{\nu} - u^{\nu})
 * \\
 * 	  u^{\nu+1} 
 * {}={}& 
 * 	  u^{\nu} {}+{} \bar{u}^{\nu} {}-{} \tilde{u}^{\nu}
 * \f}
 * 
 * Here, on the other hand, we consider the opposite DRS splitting, \f$Q+N_{\mathcal{C}}\f$, 
 * which leads to the following DRS iterations
 *   \f{eqnarray*}{
 * 	    \tilde{u}^{\nu} 
 *   {}={}& 
 * 	    \Pi_{\mathcal{C}}(u^{\nu})
 *   \\
 * 	    \bar{u}^{\nu} 
 *   {}={}& 
 * 	    (I+Q)^{-1}(2\tilde{u}^{\nu} - u^{\nu})
 *   \\
 * 	    u^{\nu+1} 
 *   {}={}& 
 * 	    u^{\nu} {}+{} \bar{u}^{\nu} {}-{} \tilde{u}^{\nu}
 *  \f}
 * For any initial guess \f$u^0\f$, the iterates \f$u^\nu\f$ converge to a point 
 * \f$u^\star\f$ which satisfies the above monotone inclusion; see Thm. 25.6(i), 
 * (iv) in \ref page_superscs_refs "[BauCom11]".
 * 
 * The linear system  above can be either solved "directly" using a sparse LDL 
 * factorization or "indirectly" by means of the conjugate gradient method \ref 
 * page_superscs_refs "[ODon16]". 
 * 
 * The projection on \f$\mathcal{C}\f$ essentially requires that we be able to 
 * project on the dual cone, \f$\mathcal{K}^*\f$ 
 * 
 * The iterative method can be concisely written as 
 * \f{eqnarray*}{
 * u^{\nu+1} = Tu^\nu,
 * \f}
 * where \f$T:\mathbb{R}^{N}\to\mathbb{R}^{N}\f$ is a (firmly) nonexpansive 
 * operator \ref page_superscs_refs "[RyuBoy16]". 
 * As such it fits the Krasnosel'skii-Mann framework, because of Sec. 5.2 in 
 * \ref page_superscs_refs "[BauCom11]", leading to the relaxed iterations
 * 
 * \f{eqnarray*}{
 *  u^{\nu+1} {}={} (1-\lambda)u^\nu + \lambda Tu^{\nu},
 * \f}
 * 
 * with \f$\lambda \in (0,2)\f$ since \f$T\f$ is firmly nonexpansive and, as a 
 * result, it fits the SuperMann framework \ref page_superscs_refs "[ThePat16]".
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * \subsection superscs-sec-supermann-scheme SuperMann
 * 
 * SuperMann \ref page_superscs_refs "[ThePat16]" reduces the problem of finding 
 * a fixed-point \f$x^\star{}\in{}\operatorname{fix} T\f$ to that of finding a 
 * zero of the residual operator 
 * \f{eqnarray*}{
 *  R = I-T.
 * \f}
 * 
 * SuperMann, instead of applying Krasnosel'skii-Mann-type updates as discussed
 * above, takes extragradient-type updates of the general form
 *  \f{eqnarray*}{
 * 	  w^{\nu} 
 *   {}={}&
 * 	  u^{\nu} {}+{} \tau_\nu d^\nu,
 *   \\
 * 	 u^{\nu+1}
 *   {}={}&
 * 	 u^\nu - \zeta_{\nu} Rw^\nu,
 *  \f}
 * where 
 * \f$
 * 	d^{\nu}
 * \f$
 * are fast, e.g., quasi-Newtonian, directions and scalar parameters 
 * \f$\tau_{\nu}\f$ and \f$\zeta_{\nu}\f$ are appropriately chosen so as to 
 * guarantee global convergence.
 * 
 * 
 * At each step either trigger fast convergence (K1 steps) or ensure global 
 * convergence (K2 steps) as shown below. 
 * 
 * Alongside, a sufficient decrease of the norm of the residual, 
 * \f$\|Ru^{\nu}\|\f$, may trigger a "blind update" of the form 
 * \f$
 * 	u^{\nu+1} 
 * {}={} 
 * 	u^{\nu} 
 * {}+{} 
 * 	d^{\nu}.
 * \f$
 * 
 * 
 * <b>SuperSCS Algorithm</b>
 * 
 * - Input: \f$c_0, c_1, q\in [0,1)\f$, \f$\sigma\in (0,1)\f$, 
 *          \f$u^0\in\mathbb{R}^N\f$, \f$\lambda\in(0,2)\f$ 
 *          and \f$\epsilon>0\f$
 * - \f$\eta_0{}\gets{}\|Ru^0\|\f$, 
 *   \f$r_{\text{safe}}\gets \eta_0\f$
 * - <b>For</b> \f$\nu=0,1,\ldots\f$:
 *      -   Check \ref page_termination "termination criteria" with tolerance 
 *          \f$\epsilon\f$
 *      -   Choose \ref page_directions "direction" \f$d^{\nu}\f$, 
 *          let \f$\tau_{\nu}{}\gets{}1\f$
 *      - <b>If</b>   \f$
 *			\|Ru^\nu\| 
 *		  {}\leq{} 
 *			c_0 \eta_\nu
 *		\f$ <b>then</b> (K0, blind update)
 *	      -   \f$
 *			u^{\nu+1}
 *		    {}\gets{}
 *			w^\nu
 *		  \f$
 *	      -   \f$
 *			\eta_{\nu+1} 
 *                  {}\gets{}
 *                      \|Ru^{\nu}\|
 *		  \f$
 *      - <b>else</b>  
 *          - 
 *	    \f$
 *		    \eta_{\nu+1}
 *	      {}\gets{}
 *		    \eta_{\nu}
 *	    \f$
 *          - <b>Loop</b> (*linesearch*):
 *             - 
 *                 \f$
 *                           w^\nu
 *                    {}\gets{} 
 *                           u^\nu 
 *                    {}+{}
 *                           \tau_\nu d^\nu
 *                  \f$
 *            and
 *                \f$
 *                          \rho_{\nu}
 *                 {}\gets{}
 *                         \langle Rw^\nu, u^\nu {-} Tw^\nu\rangle 
 *                \f$
 *             - <b>If</b> 
 *               \f$
 *                     \|Ru^\nu\|
 *                 {}\leq{}
 *                       r_{\text{safe}}
 *                 \f$
 *                 and
 *                 \f$
 *                       \|Rw^\nu\|
 *                   {}\leq{} 
 *                       c_1 \|Ru^\nu\|
 *                 \f$
 *               <b>then</b> K1 steps)
 *                     - \f$
 *                             u^{\nu+1} 
 *                       {}\gets{} 
 *                             w^\nu
 *                       \f$,
 *                     - \f$
 *                           r_{\text{safe}}
 *                        {}\gets{}
 *                           \|Rw^\nu\| + q^\nu \eta_0
 *                       \f$
 *                     - exit *linesearch*
 *             - <b>Else If</b> 
 *                   \f$
 *                       \rho_{\nu}		  
 *                    {}\geq{} 
 *                       \sigma \|Ru^\nu\| \|Rw^\nu\|
 *                   \f$
 *                  <b>then</b> (K2 steps)
 *                     - \f$
 *                           u^{\nu+1} 
 *                       {}\gets{} 
 *                           u^\nu 
 *                       {}-{} 
 *                           \lambda\tfrac{\rho_\nu}{\|Rw^\nu\|^2}Rw^\nu
 *                       \f$ 
 *                     - exit *linesearch*
 *             - <b>Else</b> 
 *                 - \f$\tau_{\nu}{}\gets{}{\tau_{\nu}}/{2}\f$
 * 
 * By exploiting the structure of \f$T\f$ and, in particular, the fact that 
 * \f$(I+Q)^{-1}\f$ is a linear operator, we may avoid applying \f$T\f$ at every 
 * iteration of the line search loop. 
 * 
 * Instead, at every line search iteration we only need to apply 
 * \f$\Pi_{\mathcal{C}}\f$ once. 
 * 
 * SuperSCS does not need to solve a linear system within the line search loop.
 * 
 * Overall, save the computation of the residuals, at every iteration of SuperSCS 
 * we need to solve the linear system twice and invoke \f$\Pi_{\mathcal{C}}\f$ 
 * only \f$1+l_\nu\f$ times, where \f$l_{\nu}\f$ is the number of line search 
 * iterations.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * \section page_superscs_refs References
 * 
 * - [BauCom11] H.H. Bauschke and P.L. Combettes. [Convex analysis and monotone 
 *   operator theory in Hilbert spaces](http://www4.ncsu.edu/~pcombet/livre1.pdf). 
 *   Springer, 2011.
 * - [ODon+16] B. O’Donoghue, E. Chu, N. Parikh, and S. Boyd. [Conic optimization
 *   via operator splitting and homogeneous self-dual embedding](https://stanford.edu/~boyd/papers/pdf/scs_long.pdf). 
 *   JOTA 169(3):1042-1068, Jun 2016.
 * - [RyuBoy16] E.K. Ryu and S. Boyd. [A primer on monotone operator methods: a
 *   survey](http://stanford.edu/~boyd/papers/pdf/monotone_primer.pdf). Appl. 
 *   Comput. Math., 15(1):3-43, 2016.
 * - [ThePat16] A. Themelis and P. Patrinos. [Supermann: a superlinearly convergent
 *   algorithm for finding fixed points of nonexpansive operators](https://arxiv.org/pdf/1609.06955.pdf). ArXiv 
 *   1609.06955, 2016.
 */