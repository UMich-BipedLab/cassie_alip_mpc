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
/*! \page page_logging Logging
 * 
 * 
 * \section logging_in_c Logging in C
 * In SuperSCS, we may activate the logging of progress information using 
 * the property <code>do_record_progress</code> in \ref scs_settings "ScsSettings".
 * 
 * In that case, the \ref scs_info "Info" object that is updated using ::scs contains the 
 * following information:
 * 
 * - <code>progress_iter</code> an array of the iterations when the progress data
 *   were recorded. It is possible that progress data are stored with a stride.
 * - <code>progress_time</code> an array of timestamps (starting at \c 0) when
 *   the progress data were recorded
 * - <code>progress_norm_fpr</code> the values of the fixed-point residual at 
 *   every iteration.
 * - <code>progress_respri</code> the recoded primal residuals
 * - <code>progress_resdual</code> the recorded dual residuals
 * - <code>progress_relgap</code> an array of the recoded values of the relative
 *   gap
 * - <code>progress_pcost</code> an array of the recoded values of the primal cost
 * - <code>progress_dcost</code> an array of the recoded values of the dual cost 
 * - <code>progress_ls</code> the number of line-search iterations at each iteration
 *   of the algorithm
 * - <code>progress_mode</code> the type of step that was taken at every iteration;
 *   \c -1 corresponds to a nominal step, \c 0 is for a K0 step and \c 1 and \c 2
 *   are for K1 and K2 steps respectively.
 * 
 * Note that the above arrays have length equal to the number of iterations.
 * 
 * Example:
 * 
 * ~~~~~{.m}
 * scs_int i;
 * const scs_int column_size = 10;
 * printf("  i     P Cost    D Cost       Gap       FPR      PRes      DRes\n");
 * printf("----------------------------------------------------------------\n");
 * for (i = 0; i < info->iter; ++i) {
 *       printf("%*i ", 3, info->progress_iter[i]);
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
 * 
 * 
 * \section logging_in_matlab Logging in MATLAB
 * Similarly, we may record progress information in MATLAB when we call 
 * <code>scs_direct.m</code>, <code>scs_indirect.m</code> or <code>scs.m</code>.
 * 
 * All we have to do is to set <code>do_record_progress</code> to \c 1.
 * 
 * ~~~~~{.m}
 * params.do_record_progress = 1; 
 * [x, y, s, info] = scs_direct(data, K, params);
 * ~~~~~
 * 
 * This is the \c info structure we get when we run 
 * [tests/matlab/cone_test.m](https://github.com/kul-forbes/scs/blob/master/tests/matlab/cone_test.m):
 * 
 * ~~~~~{.m}
 * info = 
 * 
 *                       iter: 32
 *                     status: 'Solved'
 *                       pobj: -16.3754
 *                       dobj: -16.3754
 *                     resPri: 6.7545e-12
 *                    resDual: 2.2441e-11
 *                  resInfeas: NaN
 *                   resUnbdd: 0.3220
 *                     relGap: 2.6977e-12
 *                  setupTime: 0.0507
 *                  solveTime: 1.2677
 *              progress_iter: [32x1 double]
 *            progress_relgap: [32x1 double]
 *            progress_respri: [32x1 double]
 *           progress_resdual: [32x1 double]
 *             progress_pcost: [32x1 double]
 *             progress_dcost: [32x1 double]
 *              progress_time: [32x1 double]
 *              progress_mode: [32x1 double]
 *                progress_ls: [32x1 double]
 *     allocated_memory_bytes: 14528
 * ~~~~~
 * 
 * \section logging_via_cvx Logging via CVX
 * 
 * Likewise, when calling SuperSCS via CVX, set <code>do_record_progress</code>
 * to \c 1 and <code>dumpfile</code> to a destination MAT file where the output
 * is to be stored.
 * 
 * CVX cannot return <code>info</code> as an argument, but it can dump all details
 * in a MAT file.
 * 
 * This contains:
 * - <code>data</code>: the \ref page_sparse_matrices "sparse matrix" \c A and 
 *                      the vectors \c b and \c c of the problem
 * - <code>K</code>: The \ref page_cones "cone"
 * - <code>output</code>: What the solver prints while running
 * - <code>pars</code>: The parameters that we passed to the solver
 * - <code>xx</code>, <code>yy</code> and <code>ss</code>: The (x,y,s)-solution
 * - <code>info</code>: The \c info structure containing the progress information.
 * 
 * Here is a complete example:
 * 
 * ~~~~~{.m}
 * rng('default');
 * rng(1);
 * 
 * d = 200;
 * p = 5;
 * A = sprandn(p,d,0.3,0.0001);
 * S = full(A'*A);
 * 
 * lam = 2;
 * 
 * cvx_begin sdp
 *     cvx_solver scs
 *     cvx_solver_settings('eps', 1e-3,...
 *         'verbose', 1,...
 *         'do_super_scs', 1, ...
 *         'direction', 100, ...
 *         'memory', 100,...
 *         'do_record_progress',1,...
 *         'dumpfile','pca.mat');
 *     variable X(d,d) symmetric
 *     minimize(-trace(S*X) + lam*norm(X,1))
 *     trace(X)==1
 *     X>=0
 * cvx_end  
 * ~~~~~
 * 
 * We may then load the file \c pca.mat and plot the results
 * 
 * ~~~~~{.m}
 * load('pca.mat')
 * semilogy(info.progress_time, info.progress_respri,'linewidth',2); hold on
 * semilogy(info.progress_time, info.progress_resdual,'linewidth',2);
 * legend('Primal Residual', 'Dual Residual');
 * xlabel('time [ms]'); ylabel('residual');
 * grid on
 * ~~~~~
 * 
 * <img src="images/pca_progress.png" alt="progress" width="45%" height="62%"/>
 * 
 * \sa \ref page_doc "SuperSCS tutorial"
 * \sa \ref page_save_load "Saving and loading problems"
 * \sa \ref page_cones "Useful cones and how to use them"
 * 
 */