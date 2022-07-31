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
/*! \page page_cones Cones
 * 
 * \tableofcontents
 * 
 * \section cones-in-general Cones and inequalities
 * 
 * Pointed and salient <a href="https://en.wikipedia.org/wiki/Convex_cone">
 * convex cones</a> in \f$\mathbb{R}^n\f$ define a partial order therein. 
 * 
 * In particular, a pointed, salient, convex cone \f$\mathcal{K}\f$ induces a 
 * partial order \f$\preceq_{\mathcal{K}}\f$ such that 
 * \f$x \preceq_{\mathcal{K}} y\f$ if \f$y-x\in\mathcal{K}\f$.
 * 
 * The idea is that by replacing the standard element-wise inequality \f$\leq\f$
 * by an appropriate conic inequality \f$\preceq_{\mathcal{K}}\f$ in a linear 
 * program, we generalize LPs to more general optimization problems while retaining
 * their simple structure. 
 * 
 * Indeed, all convex optimization problems can be represented as conic problems.
 * 
 * What is important is that all common convex sets can be represented in terms
 * of conic inequalities using cones \f$\mathcal{K}\f$ on which projection is
 * numerically feasible.
 * 
 * Recall that for every convex cone \f$\mathcal{K}\subseteq \mathbb{R}^n\f$, 
 * we define its dual as the following convex cone
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{*} = \{y\in\mathbb{R}^n : x'y \geq 0, \text{ for all } x\in\mathcal{K}\}.
 * \f}
 * 
 * Hereafter, we list the convex cones which are supported by SuperSCS.
 * 
 * 
 * \subsection cones-zero Zero cone
 * 
 * The zero cone is the set \f$\mathcal{K}^{\mathrm{f}}_{n_{\mathrm{f}}} = 
 * \{0_{n_{\mathrm{f}}}\}\f$.
 * 
 * This is used to encode equality constraints.
 * 
 * 
 * 
 *
 * \subsection cone-linear Linear cone
 * 
 * The linear cone is the positive orthant
 * \f$\mathcal{K}^{\mathrm{l}}_{n_{\mathrm{l}}} = 
 * \{x\in\mathbb{R}^{n_{\mathrm{l}}}: x_i \geq 0, \forall i\}\f$
 * 
 * 
 * 
 * 
 * \subsection cone-soc SO cone
 * 
 * This is the Cartesian product of \f$N_{\mathrm{q}}\f$ cones with 
 * dimensions \f$n_{\mathrm{q},1},\ldots, n_{\mathrm{q},N_{\mathrm{q}}}\f$
 * 
 * The cone is
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{q}}_{n_{\mathrm{q},1},\ldots, n_{\mathrm{q},N_{\mathrm{q}}}} = 
 *      \mathcal{K}^{\mathrm{q}}_{n_{\mathrm{q},1}} 
 *      \times 
 *      \cdots
 *      \times
 *      \mathcal{K}^{\mathrm{q}}_{n_{\mathrm{q}, N_{q}}},
 * \f}
 * 
 * where \f$\mathcal{K}^{\mathrm{q}}_{n}\f$ is the second-order cone of 
 * dimension \f$n\f$, that is
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{q}}_{n} = \{x = (y,t): y\in\mathbb{R}^{n-1}, t\in\mathbb{R}:
 * \|y\| \leq t\}
 * \f}
 * 
 * 
 * 
 * 
 * \subsection cones-psd PSD cone
 * Let us first give a few necessary definitions. Given a symmetric matrix 
 * \f$X\in\mathbb{R}^{k\times k}\f$ we define the vectorization operator as 
 * 
 * \f{eqnarray*}{
 * \mathrm{vec}(X) = \sqrt{2} \left(
 * \textstyle\frac{X_{11}}{\sqrt{2}}, X_{2,1},\ldots, X_{k,1}, 
 * \textstyle\frac{X_{22}}{\sqrt{2}}, X_{3,2}, \ldots, X_{k,2},
 * \ldots, \textstyle\frac{X_{kk}}{\sqrt{2}} \right).
 * \f}
 * 
 * We further define the inverse operation, \f$\mathrm{mat}\f$ which maps a vector
 * of \f$\mathbb{R}^{k(k+1)/2}\f$ to the matrix
 * 
 * \f{eqnarray*}{
 * \mathrm{mat}(x) = \textstyle\frac{1}{\sqrt{2}}
 * \begin{bmatrix}
 * \sqrt{2}x_1 & x_2 & \cdots & x_k\\
 * x_{2} & \sqrt{2}x_{k+1} & \cdots & x_{2k-1}\\
 * \vdots & \vdots & \ddots & \vdots\\
 * x_{k} & x_{2k-1} & \cdots & \sqrt{2}x_{k(k+1)/2}
 * \end{bmatrix}.
 * \f}
 * 
 * The above definitions preserve the inner product operations. 
 * 
 * In particular
 * 
 * \f{eqnarray*}{
 * \langle X,Y \rangle  = \mathrm{tr}(X'Y) = \mathrm{vec}(X)'\mathrm{vec}(Y) = 
 * \langle \mathrm{vec}(X),\mathrm{vec}(Y) \rangle,
 * \f}
 * 
 * and
 * 
 * \f{eqnarray*}{
 * \langle x,y \rangle  = \langle \mathrm{mat}(x),\mathrm{mat}(y) \rangle.
 * \f}
 * 
 * We define the positive definite cone as
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{s}}_{k} = 
 * \{x\in\mathbb{R}^{k(k+1)/2} : \mathrm{mat}(x) \text{ is positive semidefinite}\}
 * \f}
 * 
 * Furthermore, define
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{s}}_{k_1,\ldots, k_{N_{\mathrm{s}}}} = 
 * \prod_{i=1}^{N_{\mathrm{s}}}\mathcal{K}^{\mathrm{s}}_{k_i}.
 * \f}
 * 
 * 
 * 
 * 
 * 
 * \subsection cones-exponential Exponential cone
 * 
 * Consider the following set in \f$\mathbb{R}^3\f$
 * \f{eqnarray*}{
 * \mathcal{C}^{\mathrm{ep}} = \{(x,y,z)\in\mathbb{R}^3: y e^{x/y} \leq z, y>0\}.
 * \f}
 * 
 * The exponential cone is the closure of \f$\mathcal{C}^{\mathrm{ep}}\f$
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{ep}} = \mathrm{cl}\mathcal{C}^{\mathrm{ep}}.
 * \f}
 * 
 * Define the Cartesian product of \f$n_{\mathrm{exp}}\f$ such cones
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{ep}}_{n_{\mathrm{ep}}} = 
 * \prod_{i=1}^{n_{\mathrm{ep}}}\mathcal{K}^{\mathrm{ep}}.
 * \f}
 * 
 * 
 * 
 * 
 * \subsection cones-dual-exponential Dual exponential cone
 * 
 * The dual exponential cone is the set
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{ed}} = 
 * \left\{
 * (u,v,w)\in\mathbb{R}^3: u\leq 0, w \geq 0, -u 
 *   \log(-\textstyle\frac{u}{w})+u-v\leq 0
 * \right\},
 * \f}
 * 
 * with \f$0 \log(0/w)=0\f$ for all \f$w\geq 0\f$.
 * 
 * This is the dual of the \ref cones-exponential "exponential cone".
 * 
 * We define
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{ed}}_{n_{\mathrm{ed}}} = 
 * \prod_{i=1}^{n_{\mathrm{ed}}}\mathcal{K}^{\mathrm{ed}}.
 * \f}
 * 
 * 
 * 
 * 
 * \subsection cones-power Power cone
 * 
 * Given a parameter \f$\alpha\in [0,1]\f$ we define the following cone
 * in \f$\mathbb{R}^3\f$
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{p}}_{\alpha} = 
 * \left\{
 *      x=(x_1,x_2,x_3)\in\mathbb{R}^3: x_1\geq 0, 
 *          x_2\geq 0, 
 *          x_1^\alpha x_2^{1-\alpha} \geq |x_3|
 * \right\}.
 * \f}
 * 
 * Now define the Cartesian product of \f$N_{\mathrm{p}}\f$ such cones with 
 * parameters \f$\alpha_1,\ldots, \alpha_{N_{\mathrm{p}}}\f$ as
 * 
 * \f{eqnarray*}{
 * \mathcal{K}^{\mathrm{p}}_{\alpha_1,\ldots, \alpha_{N_{\mathrm{p}}}} = 
 * \prod_{i=1}^{{N_{\mathrm{p}}}}
 *   \mathcal{K}^{\mathrm{p}}_{\alpha_i}.
 * \f}
 * 
 * For \f$\alpha\in (0,1]\f$, we define \f$\mathcal{K}^{\mathrm{p}}_{-\alpha}\f$
 * to be the dual cone of \f$\mathcal{K}^{\mathrm{p}}_{-\alpha}\f$, that is
 * \f$\mathcal{K}^{\mathrm{p}}_{-\alpha}=(\mathcal{K}^{\mathrm{p}}_{\alpha})^{*}\f$.
 * 
 * 
 * 
 * 
 * \subsection cones-cartesian-product General cones
 * 
 * In SuperSCS, cones are described by the general form
 * 
 * \f{eqnarray*}{
 * \mathcal{K} = \mathcal{K}^{\mathrm{f}}_{n_{\mathrm{f}}} 
 *                  \times 
 *               \mathcal{K}^{\mathrm{l}}_{n_{\mathrm{l}}}
 *                  \times
 *               \mathcal{K}^{\mathrm{q}}_{n_{\mathrm{q}_1},\ldots, n_{\mathrm{q},N_{\mathrm{q}}}}
 *                  \times
 *               \mathcal{K}^{\mathrm{s}}_{k_{1},\ldots, k_{N_{\mathrm{p}}}}
 *                  \times
 *              \mathcal{K}^{\mathrm{ep}}_{n_{\mathrm{ep}}}
 *                  \times
 *              \mathcal{K}^{\mathrm{ed}}_{n_{\mathrm{ed}}}
 *                  \times
 *              \mathcal{K}^{\mathrm{p}}_{\alpha_1,\ldots, \alpha_{N_{\mathrm{p}}}} 
 * \f}
 * 
 * 
 * \section cones-programmatically Cones in SuperSCS
 * 
 * \subsection cones-matlab MATLAB
 * 
 * In MATLAB, general cones are represented by structures.
 * 
 * The structure is straightforward and corresponds to the notation introduced above.
 * 
 * For example, let us have a look at the following cone
 * 
 * ~~~~~
 * K.f  = 2;
 * K.l  = 5;
 * K.q  = [3, 9, 7];
 * K.s  = [2, 6];
 * K.ep = 10;
 * K.ed = 4;
 * K.p  = [0.1, -0.6, 0.9];
 * ~~~~~
 * 
 * This corresponds to the following Cartesian product of cones:
 * 
 * \f{eqnarray*}{
 * \mathcal{K} = \mathcal{K}^{\mathrm{f}}_{2} 
 *                  \times 
 *               \mathcal{K}^{\mathrm{l}}_{5}
 *                  \times
 *               \mathcal{K}^{\mathrm{q}}_{3,7,9}
 *                  \times
 *               \mathcal{K}^{\mathrm{s}}_{2,6}
 *                  \times
 *              \mathcal{K}^{\mathrm{ep}}_{10}
 *                  \times
 *              \mathcal{K}^{\mathrm{ed}}_{4}
 *                  \times
 *              \mathcal{K}^{\mathrm{p}}_{0.1, -0.6, 0.9} 
 * \f}
 * 
 * Certain parameters can be omitted or set to <code>0</code> or <code>[]</code>. 
 * 
 * For example, the cone \f$\mathcal{K}^{\mathrm{q}}_3\f$ can be written as
 * 
 * ~~~~~
 * K.q = 3;
 * ~~~~~
 * 
 * or, equivalently
 * 
 * ~~~~~
 * K.f  = 0;
 * K.l  = 0;
 * K.q  = 3;
 * K.s  = [];
 * K.ep = 0;
 * K.ed = 0;
 * K.p  = [];
 * ~~~~~
 * 
 * 
 * \subsection cones-c C
 * 
 * In C, cones are supported by the structure #ScsCone. 
 * 
 * In order to construct \f$\mathcal{K}^{\mathrm{s}}_{k_1,\ldots, k_{N_{\mathrm{s}}}}\f$,
 * \f$\mathcal{K}^{\mathrm{p}}_{\alpha_1,\ldots, \alpha_{N_{\mathrm{p}}}}\f$ and/or
 * \f$\mathcal{K}^{\mathrm{q}}_{n_{\mathrm{q},1},\ldots, n_{\mathrm{q},N_{\mathrm{q}}}}\f$,
 * we also need to specify the lengths of the corresponding arrays.
 * 
 * For example, in order to define \f$\mathcal{K}^{\mathrm{q}}_{3,7,9}\f$ we do
 * 
 * ~~~~~
 * ScsCone * cone;
 * scs_int number_of_soc_cones = 3;
 * cone = scs_malloc(sizeof(*cone));
 * cone->qsize = number_of_soc_cones;
 * cone->q = scs_malloc(number_of_soc_cones * sizeof(*cone->q));
 * cone->q[0] = 3;
 * cone->q[0] = 7;
 * cone->q[0] = 9;
 * 
 * // at the end, don't forget to free the cone (e.g., using #scs_free_data_cone)
 * ~~~~~
 * 
 * The zero cone, the linear cone and the primal and dual exponential cones
 * are defined very easily as follows:
 * 
 * ~~~~~
 * cone->f  = 2;
 * cone->l  = 5;
 * cone->ep = 10;
 * cone->ed = 4;
 * ~~~~~
 * 
 * \subsection cones-python Python
 * 
 * In Python, a cone is described as in MATLAB and in C (see above).
 * 
 * For example, the cone \f$\mathcal{K} = \mathcal{K}^{\mathrm{f}}_{5} 
 * \times \mathcal{K}^{\mathrm{l}}_{3}\times \mathcal{K}^{\mathrm{q}}_{2,9}\f$ is
 * 
 * ~~~~~
 * cone = {'f':5, 'l': 3, 'q':[2,9]}
 * ~~~~~
 * 
 * \sa \ref #ScsCone "ScsCone: the C Cones API"
 * \sa \ref page_save_load "Saving and loading problems"
 * \sa \ref page_doc "SuperSCS tutorial"
 */
