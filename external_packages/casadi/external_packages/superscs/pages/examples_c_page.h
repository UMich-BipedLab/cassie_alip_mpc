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
/*! \page examples_general SuperSCS Examples
 * 
 * - \ref examples_in_c "Examples in C"
 * - \ref page_cvx_examples "Examples in MATLAB using CVX"
 * 
 */ 
/*! \page examples_in_c Examples in C
 *
 * \section sec_example_socp_statement Mathematical problem statement
 * Let us solve the following \ref cone-soc "second-order cone" program:
 * 
 * \f{eqnarray*}{
 * &&\mathrm{Minimize}\ \langle c, x \rangle\\
 * &&Ax + s = b\\
 * &&s\in\mathcal{K},
 * \f}
 * 
 * where \f$x\in\mathbb{R}^3\f$, \f$A\in\mathbb{R}^{4\times 3}\f$ is the following
 * \ref page_sparse_matrices "sparse matrix"
 * 
 * \f{eqnarray*}{
 * A &=& \begin{bmatrix}
 * 0.3\\
 * & 0.7\\
 * && 0.2\\
 * -0.5 & 0.9
 * \end{bmatrix}
 * \f}
 * 
 * and \f$c\in\mathbb{R}^3\f$ and \f$b\in\mathbb{R}^4\f$ are the vectors
 * 
 * \f{eqnarray*}{
 * c &=& \begin{bmatrix}
 * 1 & -2 & -3
 * \end{bmatrix}^{\top}
 * \f}
 * 
 * and
 * 
 * \f{eqnarray*}{
 * b &=& \begin{bmatrix}
 * 0.2 & 0.1 & -0.1 & 0.1
 * \end{bmatrix}^{\top}.
 * \f}
 * 
 * Last, \f$\mathcal{K}\f$ is the second-order cone in \f$\mathbb{R}^4\f$.
 * 
 * \section sec_example_socp_programming Formulation in C
 * 
 * \subsection sec_example_socp_prob_data Problem data
 * Let us first start with some declarations:
 * 
 * ~~~~~~{.c}
 * const scs_int n = 3;     // dimension of x
 * const scs_int m = 4;     // dimension of s
 * const scs_int nnz = 5;   // number of nonzero entries in A
 * ScsSolution * sol;       // problem solution
 * ScsData * data;          // problem data and settings
 * ScsAMatrix * A;          // sparse matrix A
 * ScsInfo * info;          // status information
 * ScsCone * cone;          // Cone K
 * ~~~~~~
 *
 * We then need to allocate a #ScsData object and define \f$b\f$ and \f$c\f$
 * 
 * ~~~~~{.c}
 * data = scs_init_data();
 * 
 * data->c = malloc(n * sizeof (scs_float));
 * data->c[0] = 1.0;
 * data->c[1] = -2.0;
 * data->c[2] = -3.0;
 *
 * data->b = malloc(m * sizeof (scs_float));
 * data->b[0] = 0.2;
 * data->b[1] = 0.1;
 * data->b[2] = -0.1;
 * data->b[3] = 0.1;
 *
 * data->m = m;
 * data->n = n;
 * ~~~~~
 * 
 * \subsection sec_example_socp_prob_matrix_a Sparse matrix
 * 
 * Next, we construct the \ref page_sparse_matrices "sparse matrix" 
 * \f$A\f$ and we pass it to the #ScsData object
 * 
 * ~~~~~{.c}
 * A = malloc(sizeof (ScsAMatrix));
 * A->m = m;
 * A->n = n;
 * A->p = malloc((n + 1) * sizeof (scs_int));
 * A->i = malloc(nnz * sizeof (scs_int));
 * A->x = malloc(nnz * sizeof (scs_float));
 * 
 * A->p[0] = 0;
 * A->p[1] = 2;    
 * A->p[2] = 4;
 * A->p[3] = 5;
 *   
 * A->i[0] = 0;   
 * A->i[1] = 3;   
 * A->i[2] = 1;   
 * A->i[3] = 3;   
 * A->i[4] = 2;
 *    
 * A->x[0] = 0.3;   
 * A->x[1] = -0.5;   
 * A->x[2] = 0.7;   
 * A->x[3] = 0.9;   
 * A->x[4] = 0.2;
 *     
 * data->A = A;
 * ~~~~~
 * 
 * For more information about sparse matrices, read 
 * \ref page_sparse_matrices "this documentation page".
 * 
 * 
 * \subsection sec_example_socp_settings Configuring SuperSCS
 * Next, we may modify some of the default settings 
 * 
 * ~~~~~{.c}
 * scs_set_default_settings(data);          // default settings
 * data->stgs->eps = 1e-9;                  // override defaults
 * data->stgs->rho_x = 1;
 * data->stgs->verbose = 0;
 * data->stgs->sse = 0.7;
 * data->stgs->direction = restarted_broyden;
 * ~~~~~
 * 
 * The following utility functions can be used to facilitate the configuration 
 * of SuperSCS:
 * 
 * ~~~~~{.c}
 * scs_set_restarted_broyden_settings(data, 50);  // restarted Broyden dir, memory=50
 * scs_set_anderson_settings(data, 3);            // Anderson's acceleration, memory=3
 * scs_set_tolerance(data, 1e-4);                 // Set tolerance to 1e-4
 * ~~~~~
 * 
 * Function ::scs_set_default_settings sets the \ref ::scs_set_default_settings 
 * "default settings"
 * 
 * 
 * \subsection sec_example_socp_cone Specifying the cone
 * 
 * Last thing to define is the second-order cone \f$\mathcal{K}\f$
 * 
 * ~~~~~{.c}
 * cone = malloc(sizeof (ScsCone));
 * cone->ssize = 0;
 * cone->ed = 0;
 * cone->ep = 0;
 * cone->f = 0;
 * cone->l = 0;
 * cone->psize = 0;
 * cone->ssize = 0;
 * cone->qsize = 1;
 * cone->q = malloc(4 * sizeof (scs_int));
 * cone->q[0] = 4;
 * cone->p = SCS_NULL;
 * cone->s = SCS_NULL;
 * ~~~~~
 * 
 * Note that the last couple of lines are important!
 * 
 * \subsection sec_example_socp_solving Solve the problem
 * 
 * We now invoke ::scs to solve the problem
 * 
 * ~~~~~{.c}
 * sol = scs_init_sol();
 * info = scs_init_info();
 * scs(data, cone, sol, info);
 * ~~~~~
 * 
 * It is highly recommended that you use these initializers to create
 * these structures.
 * 
 * Now 
 * \code info->statusVal \endcode 
 * is the exit-flag of the solver and it is equal to ::SCS_SOLVED.
 * 
 * The primal-dual solution \f$(x^\star,s^\star,y^\star)\f$ is now stored in 
 * ```sol```.
 * 
 * If ```data->stgs->verbose``` is set to ```1```, the following will be 
 * printed 
 * 
 * \code{.txt}
 * Lin-sys: sparse-direct, nnz in A = 5
 * eps = 1.00e-08, alpha = 1.50, max_iters = 2000, normalize = 1, scale = 1.00
 * Variables n = 3, constraints m = 4
 * Cones:	soc vars: 4, soc blks: 1
 * Setup time: 1.01e-02s
 * Running SuperSCS...
 * ---------------------------------------------------------------------------------------
 *  Iter | pri res | dua res | rel gap | pri obj | dua obj | kap/tau |   FPR   | time (s)
 * ---------------------------------------------------------------------------------------     
 *      0| 5.65e+00  9.74e+00  5.21e-01 -4.58e+01 -1.41e+01  0.00e+00  1.96e+00  6.49e-03     
 *     10| 7.27e-02  2.47e-01  2.54e-02 -1.64e+01 -1.73e+01  0.00e+00  1.82e-02  1.92e-02 
 *     20| 2.14e-03  5.13e-03  7.45e-04 -1.67e+01 -1.68e+01  0.00e+00  7.75e-04  3.30e-02 
 *     30| 3.71e-09  3.15e-07  5.48e-09 -1.64e+01 -1.64e+01  0.00e+00  4.83e-09  4.25e-02 
 *     32| 6.75e-12  2.24e-11  2.70e-12 -1.64e+01 -1.64e+01  0.00e+00  2.23e-12  5.42e-02 
 * ---------------------------------------------------------------------------------------
 * Status: Solved
 * Timing: Solve time: 6.78e-02s
 * 	Lin-sys: nnz in L factor: 12, avg solve time: 6.98e-06s
 * 	Cones: avg projection time: 7.37e-06s
 * ---------------------------------------------------------------------------------------
 * Error metrics:
 * dist(s, K) = 0.0000e+00, dist(y, K*) = 1.4211e-14, s'y/|s||y| = -2.7982e-17
 * |Ax + s - b|_2 / (1 + |b|_2) = 6.7545e-12
 * |A'y + c|_2 / (1 + |c|_2) = 2.2441e-11
 * |c'x + b'y| / (1 + |c'x| + |b'y|) = 2.6977e-12
 * ---------------------------------------------------------------------------------------
 * c'x = -16.3754, -b'y = -16.3754
 * \endcode
 * 
 * \subsection sec_example_socp_free_mem Postprocessing
 * 
 * The last thing to do is to free the used memory
 * 
 * ~~~~~{.c}
 * scs_free_data_cone(data, cone);
 * scs_free_sol(sol);
 * scs_free_info(info);
 * ~~~~~
 * 
 * If we need to collect progress data for the algorithm, we need to activate logging
 * using
 * 
 * ~~~~~{.c}
 * data->stgs->do_record_progress = 1;
 * ~~~~~
 * 
 * This option is otherwise disabled by default.
 * 
 * We may then print various statistics
 * 
 * ~~~~~{.c}
 * scs_int i;
 * const scs_int column_size = 10;
 * printf("  i     P Cost    D Cost       Gap       FPR      PRes      DRes\n");
 * printf("----------------------------------------------------------------\n");
 * for (i = 0; i < info->iter; ++i) {
 *       printf("%*i ", 3, i);
 *       printf("%*.2e", column_size, info->progress_pcost[i]);
 *       printf("%*.2e", column_size, info->progress_dcost[i]);
 *       printf("%*.2e", column_size, info->progress_relgap[i]);
 *       printf("%*.2e", column_size, info->progress_norm_fpr[i]);
 *       printf("%*.2e", column_size, info->progress_respri[i]);
 *       printf("%*.2e", column_size, info->progress_resdual[i]);
 *       printf("\n");
 * }
 * ~~~~~
 * 
 * If <code>do_record_progress</code> is, instead, set to <code>0</code>, no progress
 * data are stored and the above pointers are equal to ::SCS_NULL.
 * 
 * \sa \ref page_doc "SuperSCS Documentation: Using SuperSCS"
 * \sa \ref page_cvx_examples "Examples via CVX"
 */