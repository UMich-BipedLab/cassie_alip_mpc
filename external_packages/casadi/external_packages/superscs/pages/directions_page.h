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
/*! \page page_directions Directions
 * 
 * \tableofcontents
 * 
 * \section sec-fpr Fixed-point residual
 * 
 * This is the most trivial choice where \f$d_k = -Rx_k\f$, but typically does
 * not lead to high performance.
 * 
 * \section sec-restarted-broyden Restarted Broyden
 * 
 * Directions are computed according to the following procedure:
 * 
 *  1.  Inputs: \f$y=y_k\f$, \f$r=Rx_k\f$, \f$s=s_k\f$, \f$\bar{\theta}\f$, \f$m\f$ (memory)
 *  2.  Buffer: \f$(\mathbf{s}, \mathbf{u})\f$
 *  3.  Returns: Direction \f$d_\star\f$ (and updates the \f$(\mathbf{s}, \mathbf{u})\f$-buffer)
 *  4.  \f$d_\star \gets -r\f$
 *  5.  \f$s_\star \gets y\f$
 *  6.  \f$m'\gets\f$ current cursor position
 *  6.  for \f$i=0,\ldots, m'-1\f$,
 *        1.   \f$s_\star \gets s_\star + \langle \mathbf{s}_i, s_\star\rangle \mathbf{u}_i\f$
 *        2.   \f$d_\star \gets d_\star + \langle \mathbf{s}_i, d_\star\rangle \mathbf{u}_i\f$
 *  7.  \f$\theta \gets \begin{cases}1,&\text{if } |\langle s, s_\star \rangle| \geq \bar{\theta} \|s\|^2\\ \frac{\|s\|^2(1-\mathrm{sgn}(\langle s, s_\star \rangle) \bar{\theta})}{\|s\|^2-\langle s, s_\star \rangle},&\text{otherwise}\end{cases}\f$
 *  8.  \f$s_\star \gets (1-\theta)s + \theta s_\star\f$
 *  9.  \f$u_\star \gets \frac{s-s_\star}{\langle s, s_\star \rangle}\f$ and push it into the buffer
 *  10. \f$d_\star \gets d_\star + \langle s, d_\star\rangle u_\star\f$
 *  11. Add \f$s\f$ into the buffer and move the cursor forward or empty/reset it if it is full
 * 
 * 
 * \section sec-andersons-acceleration Anderson's Acceleration
 * 
 * In Anderson's acceleration, we update a cache of past values of vectors \f$y_i\f$ and \f$s_i\f$.
 * 
 * We need to solve a linear system whose LHS matrix is \f$l\times m\f$, where
 * \f$m\f$ is the memory length. We do so using the SVD decomposition. 
 * 
 * The direction is computed by
 * 
 * \f{eqnarray*}{
 *  d_k = -Rx_k - (S_k-Y_k)t_k,
 * \f}
 * 
 * where \f$t_k\f$ is a solution of the linear system \f$Y_kt_k = Rx_k\f$, or, if the system
 * does not have a solution, a solution of the corresponding least-squares problem
 * (solved using SVD).
 * 
 * Matrices \f$Y_k\f$ and \f$S_k\f$ are buffers of past vectors \f$y_k\f$ and \f$s_k\f$
 * respectively, that is
 * 
 * \f{eqnarray*}{
 *  S_k = \begin{bmatrix}
 *  s_k & s_{k-1} & \cdots & s_{k-m+1}
 *  \end{bmatrix}\\
 *  Y_k = \begin{bmatrix}
 *  y_k & y_{k-1} & \cdots & y_{k-m+1}
 *  \end{bmatrix}
 * \f}
 * 
 * Lastly, \f$R\f$ is the \ref superscs-algorithmic-solution "fixed point operator".
 * 
 * \note All directions which require a finite-memory cache are supported by 
 * #scs_direction_cache.
 * 
 * \section sec-full-broyden Full Broyden
 * Full Broyden method (for experimental purposes only, not recommended unless the 
 * problem is of very low dimension).
 * 
 */