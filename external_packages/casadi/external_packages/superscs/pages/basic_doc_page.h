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
/*! \page page_doc Using SuperSCS
 * 
 * \tableofcontents
 * 
 * \section secc SuperSCS in C 
 * 
 * \subsection sec_compiling_superscs_in_c SuperSCS: Compiling & Linking in C
 * 
 * Read this section if you intend to use SuperSCS in C.
 * 
 * Most users are interested
 * in use SuperSCS via its MATLAB and Python interface and via CVX/CVXPy.
 * 
 * To you SuperSCS in C you first need to 
 * \ref installation_in_c "build the source code" as explained above.
 * 
 * This will generate the following four files in the <code>out/</code> folder:
 * 
 * - **Static library files:**
 *      - <code>out/libscsdir.a</code>: static SuperSCS library with the direct method
 *      - <code>out/libscsindir.a</code>: static SuperSCS library with the indirect 
 *                                        method (more suitable for large-scale problems).
 * - **Shared library files:**
 *      - <code>out/libscsdir.so</code>: shared library (direct)
 *      - <code>out/libscsindir.so</code>: shared library (indirect)
 * 
 * Let us give a brief example of how to use SuperSCS in C by compiling your source
 * code (read more \ref page_save_load "here")...
 * 
 * ~~~~~
 * // FILE: superscs_test.c 
 * 
 * #include <stdio.h>
 * #include <stdlib.h>
 * #include "scs.h"
 * 
 * int main(int argc, char** argv) {
 *     ScsData * data = SCS_NULL;
 *     ScsCone * cone = SCS_NULL;
 *     ScsInfo * info = scs_init_info();
 *     ScsSolution * sol = scs_init_sol();
 *     const char * filepath = "path/to/my_problem.yml";
 *     scs_int status;
 * 
 *     // load problem from file
 *     status = scs_from_YAML(filepath, &data, &cone);
 * 
 *     // solver options
 *     data->stgs->do_super_scs = 1;
 *     data->stgs->direction = restarted_broyden;
 *     data->stgs->memory = 100;
 *     data->stgs->verbose = 1;
 * 
 *     // solve the problem
 *     status = scs(data, cone, sol, info);
 * 
 *     // free allocated memory
 *     scs_free_data_cone(data, cone);
 *     scs_free_info(info);
 *     scs_free_sol(sol);
 * 
 *     return (EXIT_SUCCESS);
 * }
 * ~~~~~
 * 
 * Let us now compile and link to the static library <code>out/libscsdir.a</code>
 * 
 * ~~~~~
 * # On Windows and MacOSX
 * gcc -Iinclude superscs_test.c \
 *   -o superscs_test path/to/libscsindir.a \
 *   -llapack -lblas -lm
 * ~~~~~
 * 
 * On Linux, append <code>-lrt</code>, that is
 * 
 * ~~~~~
 * # On Linux
 * gcc -Iinclude superscs_test.c \
 *   -o superscs_test path/to/libscsindir.a \
 *   -llapack -lblas -lm -lrt
 * ~~~~~
 * 
 * In particular:
 * 
 * - <b>-Lpath/to/out/superscs/lib/dir</b> specifies the path to the SuperSCS library 
 *   where <b>libscsindir.a</b> is stored. You must have run <b>make</b> for this to 
 *   exist.
 * - <b>-l:libscsindir.a</b> means that the linker should link to the SuperSCS library
 *   statically. 
 * - <b>-llapack -lblas</b> these are the <a href="http://www.netlib.org/blas/">blas</a> 
 *   and <a href="http://www.netlib.org/lapack/">lapack</a> linear algebra libraries.
 * - <b>-lm -lrt</b> these are the math and real-time libraries; the latter is 
 *   optional.
 * 
 * SuperSCS can be compiled to run on **multiple cores** using [OpenMP](https://www.openmp.org/).
 * 
 * In order to compile SuperSCS with OpenMP enabled, set <code>USE_OPENMP=1</code>
 * in <code>scs.mk</code>.
 * 
 * You may find a comprehensive example \ref examples_in_c "here".
 * 
 * \section secmatlab SuperSCS in MATLAB
 * 
 * SuperSCS can be called directly, to solve conic problems, in MATLAB.
 * 
 * Two functions, namely \c scs_direct and \c scs_indirect, solve the problem 
 * with the direct and indirect methods respectively.
 * 
 * Here is an example:
 * 
 * ~~~~~
 * m = 9;
 * n = 4;
 * data.A = sparse(randn(m,n));
 * data.b = randn(m,1);
 * data.c = randn(n,1);
 * cones.q = m;
 * solver_options = struct('eps', 1e-5, 'do_super_scs', 1, 'direction', 100, ...
 *    'memory', 50, 'rho_x', .001);
 * [x,y,s,info] = scs_direct(data, cones, solver_options);
 * ~~~~~
 * 
 * The user needs to provide three structures:
 * 
 * - <code>data</code>: with the problem data, i.e., the triplet \f$(A,b,c)\f$
 * - <code>cones</code>: the specifications of the cone \f$\mathcal{K}\f$
 * - <code>solver_options</code>: (optional) options for the solver
 * 
 * To use SuperSCS provide the option <code>solver_options.do_super_scs=1</code>.
 * 
 * A list of all solver options and their default parameters can be found 
 * \ref ::scs_set_default_settings "here".
 * 
 * Note that the method with which SuperSCS computes the direction (e.g., the 
 * \ref sec-restarted-broyden "restarted Broyden method", 
 * \ref sec-andersons-acceleration "Anderson's acceleration" etc) is specified using 
 * <code>solver_options.direction</code>.
 * Admissible values are numeric (not strings) and are as follows:
 * 
 * - <code>direction=100</code>: Restarted Broyden method
 * - <code>direction=150</code>: Anderson's acceleration
 * - <code>direction=200</code>: Fixed point residual
 * - <code>direction=300</code>: Full Broyden method
 * 
 * Functions \c scs_direct and \c scs_indirect return the primal and dual solution
 * of the problem, \f$(x,s,y)\f$ and a structure with information about the solution
 * such as the solver time, number of iterations, relative duality gap and more).
 * 
 * By default, SuperSCS does not record the progress of the algorithm. To do so,
 * you need to set the option <code>do_record_progress=1</code> in the solver
 * options.
 * 
 * 
 * 
 * \section seccvxmatlab SuperSCS via CVX in MATLAB
 * 
 * SuperSCS can be used with CVX in MATLAB by simply using
 * ~~~~~
 * cvx_solver scs
 * ~~~~~
 * and setting the solver option <code>do_super_scs=1</code> as shown below
 * 
 * ~~~~~{.m}
 * cvx_begin
 *  cvx_solver scs
 *  cvx_solver_settings('eps', 1e-4,...
 *      'do_super_scs', 1,...
 *      'direction', 150,...
 *      'memory', 10)
 *  variable x(n)
 *      minimize( 0.5*x'*Q*x + q'*x + r )
 *      subject to:
 *          lb <= x <= ub
 *          F*x == f
 * cvx_end
 * ~~~~~
 * 
 * Several examples are given \ref page_cvx_examples "here". 
 * 
 * Solver info can be stored using the property <code>dumpfile</code> as explained 
 * \ref logging_via_cvx "here".
 * 
 * \section secpython SuperSCS in Python
 * 
 * In order to use SuperSCS in Python, you first need to 
 * \ref sec_installation_python "install the \c superscs module".
 * 
 * Then, it is straightforward to <code>import superscs</code>, define the problem data
 * (matrix \c A as a <code>scipy.sparse</code> matrix and vectors \c b and \c c),
 * the cone and call <code>superscs.solve</code>:
 * 
 * ~~~~~
 * import superscs
 * import numpy as np
 * from scipy import sparse
 * ij = np.array([[0,1,2,3],[0,1,2,3]])
 * A = sparse.csc_matrix(([-1.,-1.,1.,1.], ij), (4,4))
 * b = np.array([0.,0.,1,1])
 * c = np.array([1.,1.,-1,-1])
 * cone = {'l': 4}
 * data = {'A': A, 'b':b, 'c':c}
 * sol = superscs.solve(data, cone, use_indirect = False, memory = 50, verbose = 2)
 * ~~~~~
 * 
 * The last invocation takes as input arguments:
 * 
 * 1. the object \c data which is the triplet \f$(A,b,c)\f$; the problem data,
 * 2. the cone \c cone which, here, is a linear cone of dimension 4,
 * 3. additional optional arguments (such as the LBFGS memory)
 * 
 * The call returns \c sol; an object which return the solver status, the 
 * solution and additional information.
 * 
 * Here is what we see if we print out \c sol from the example above:
 * 
 * ~~~~~{.json}
 * {'info': {'dobj': -1.9999059647316126,
 *           'iter': 3,
 *           'pobj': -1.999698352184447,
 *           'relGap': 4.1525795644121774e-05,
 *           'resDual': 3.168953637264187e-05,
 *           'resInfeas': nan,
 *           'resPri': 6.556650505320437e-05,
 *           'resUnbdd': 1.376693966512017,
 *           'setupTime': 0.104,
 *           'solveTime': 0.477834,
 *           'status': 'Solved',
 *           'statusVal': 1},
 * 's': array([ 0.,  0.,  0.,  0.]),
 * 'x': array([  5.13892443e-05,   5.13892443e-05,   9.99900565e-01,
 *         9.99900565e-01]),
 * 'y': array([ 0.99995195,  0.99995195,  0.99995298,  0.99995298])}
 * ~~~~~
 * 
 * We see that <code>sol.status</code> is <code>Solved</code> and the status code
 * is <code>sol.statusVal: 1</code>, meaning that the problem has been solved.
 * 
 * The triplet <code>(x,y,s)</code> is the solution of the problem and <code>sol.pobj</code>
 * and <code>sol.dobj</code> are the values of the primal and dual objectives.
 * 
 * We may also inspect the relative duality gap, primal and dual residuals, 
 * the residuals associated with the infeasibility and unboundedness of the solution
 * and the number of iterations required to solve the problem.
 * 
 * \section seccvxpython SuperSCS via CVX in Python
 * 
 * First, let us load some necessary libraries
 * ~~~~~
 * # Loading some libraries...
 * import cvxpy as cp
 * import numpy as np
 * import superscs
 * ~~~~~
 
 * In order to verify that SuperSCS is properly installed and CVXPy can use it, 
 * run
 * 
 * ~~~~~
 * cp.installed_solvers()
 * ~~~~~
 * 
 * This will return a list of solvers and \c SUPERSCS should be among them.
 *  
 * Then, we define the problem data
 * ~~~~~ 
 * # Problem data...
 * m = 2
 * n = 3
 * T = 10
 * alpha = 0.1
 * beta = 1.0
 * A = np.eye(n) + alpha*np.random.randn(n,n)
 * B = np.random.randn(n,m)
 * x_0 = beta*np.random.randn(n,1)
 * 
 * # Form and solve control problem...
 * x = cp.Variable(n, T+1)
 * u = cp.Variable(m, T)
 * states = []
 * 
 * for t in range(T):
 *      cost = cp.pnorm(u[:,t], 1)
 *      constr = [x[:,t+1] == A*x[:,t] + B*u[:,t],
 *                cp.norm(u[:,t], 'inf') <= 1]
 *      states.append(cp.Problem(cp.Minimize(cost), constr))
 * ~~~~~
 * 
 * Finally, we define the optimization problem (we specify the cost function and 
 * the constraints) and we invoke the solver
 * ~~~~~
 * # sums problem objectives and concatenates constraints...
 * prob = sum(states)
 * prob.constraints += [x[:,T] == 0, x[:,0] == x_0]
 * prob.solve(solver="SUPERSCS", verbose=True)
 * ~~~~~
 */