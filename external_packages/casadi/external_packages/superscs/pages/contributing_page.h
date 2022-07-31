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
/*! \page page_contributing Contributing to SuperSCS
 * 
 * \tableofcontents
 * 
 * Thank you for considering contributing to SuperSCS!
 * 
 * Please, read the following guide before you fork this repository, or before 
 * you file a new issue.
 * 
 * \section sec_style_guide Style guide
 * 
 * \subsection sec_style_in_c C coding style
 * 
 * SuperSCS follows the following naming convention:
 * 
 * - Typed structures are camel-case, e.g., #ScsCone and #ScsData
 * - All functions start with <code>scs_</code> or <code>superscs_</code>; 
 *   this is because C lacks namespaces, so
 *   we need to avoid name clashes with other libraries
 * - Guards in header files should start with <code>SCS_</code>
 * - All function names are lowercare, e.g., #scs_init_data. Don't use names like 
 *   <code>iCantReadThis</code>.
 * - Function names must be as informative as possible about the 
 *   underlying functionality, e.g., #scs_matrix_multiply
 * - Variables defined via preprocessor directives are all uppercase
 *   and start with \c SCS_ (e.g., #SCS_SOLVED) 
 * - Names of unit tests start with <code>test_</code>
 * - No function or variable names are allowed to start with an underscore
 * - Give all variables, even local ones, names that reveal their 
 *   designation, e.g., \c norm_E_Atran_yb instead of \c t.
 * - Static variables are all-lowercase and separated by underscores
 * - Write one statement per line, e.g., avoid <code>int a=1, b=2, c;</code>
 * - Do not default if tests for nonzero, i.e., use <code>if (a != 0)</code>
 *   instead of <code>if (a)</code>; the same holds for non-<code>NULL</code> tests
 * - Write short functions (we still need to do some work towards that direction)
 * - Prefer <code>#if defined()</code> instead of <code>#ifdef</code>
 * - Do not hard code any data in the code; use preprocessor directives
 * 
 * In particular, in regard to structures, they should be written like that:
 * 
 * \htmlonly
 * <div class="fragment">
 * <div class="line"><span class="keyword">struct</span> <span class="code">scs_structure {</span></div>
 * <div class="line"><span class="comment">  /* fields go here &#42;/</span></div>
 * <div class="line"><span class="code">};</span></div>
 * <div class="line"><span class="code"></span></div>
 * <div class="line"><span class="keyword">typedef struct</span> scs_structure <span class="code"><a>ScsStructure</a></span>;</div>
 * </div>
 * \endhtmlonly
 *  
 * \subsection sec_style_documentation API Documentation in C
 * 
 * All non-static functions in C must be documented using the Doxygen style.
 * 
 * \htmlonly
 * <div class="fragment">
 * <div class="line"><span class="comment">/**</span></div>
 * <div class="line"><span class="comment"> * \brief Give a brief description here</span></div>
 * <div class="line"><span class="comment"> *</span></div>
 * <div class="line"><span class="comment"> * Give a more detailed description here</span></div>
 * <div class="line"><span class="comment"> *</span></div>
 * <div class="line"><span class="comment"> * @param data explain what this parameter is about</span></div>
 * <div class="line"><span class="comment"> * @param cone explanation...</span></div>
 * <div class="line"><span class="comment"> *</span></div>
 * <div class="line"><span class="comment"> * @return returns 0 if ... and 1 if ...</span></div>
 * <div class="line"><span class="comment"> *</span></div>
 * <div class="line"><span class="comment"> &#42;/</span></div>
 * </div>
 * \endhtmlonly
 * 
 * ~~~~~
 * scs_int scs_function(ScsData * data, ScsCone * cone);
 * ~~~~~
 * 
 * Installation instructions, mathematical documentation and other non-API 
 * documentation should not be part of function/variable documentation.
 * 
 * Instead, you should contribute to an existing page in 
 * <a href="https://github.com/kul-forbes/scs/tree/master/pages">pages/</a>.
 * 
 * 
 * 
 * \subsection sec_unit_testing Unit testing in C
 * 
 * Unit tests are supported and executed by a simple in-house framework.
 * 
 * C Tests are stored in <code>/tests/c/</code> and supporting data files 
 * are found in <code>/tests/c/data/</code>.
 * 
 * The main test runner file is <code>tests/c/test_runner_dir.c</code>.
 * 
 * Tests are added as follows:
 * 
 * ~~~~~
 * r += scs_test(&test_problem_metadata, "Metadata");
 * ~~~~~
 * 
 * The above line adds the test <code>test_problem_metadata</code> which has the name 
 * <code>Metadata</code>.
 * 
 * Test functions are of type <code>typedef bool (*unitTest_t)(char**)</code>;
 * for example:
 * 
 * ~~~~~
 * bool test_broyden(char** str) {
 *  return TEST_SUCCESS;
 * }
 * ~~~~~
 * 
 * Unit tests contain assertions which are documented in \ref unit_test_util.h.
 * 
 * For example:
 * 
 * ~~~~~
 * bool test_example(char** str) {
 *      ASSERT_TRUE_OR_FAIL(x > 0, str, "variable `x` should be positive");
 *      ASSERT_EQUAL_INT_OR_FAIL(i, i_expected, str, "the value of `i` is wrong");
 *      ASSERT_EQUAL_FLOAT_OR_FAIL(t, t_expected, 1e-9, str, "the value of `t` is wrong");
 *      ASSERT_EQUAL_ARRAY_OR_FAIL(arr, arr_expected, 10, 1e-9, str, "array `arr` is not correct");
  *     return TEST_SUCCESS;
 * }
 * ~~~~~
 * 
 * All test functions start with <code>test_</code>.
 * 
 * 
 * \subsection sec_style_comments_in_c Comments in C
 * 
 * Comments in C should be like that:
 * 
 * \htmlonly
 * <div class="fragment">
 * <div class="line"><span class="comment">/* comment goes here &#42;/</span></div>
 * </div>
 * \endhtmlonly
 * 
 * Multi-line comments should be like that:
 * 
 * \htmlonly
 * <div class="fragment">
 * <div class="line"><span class="comment">/*</span></div>
 * <div class="line"><span class="comment"> * this is a multiple-line comment</span></div>
 * <div class="line"><span class="comment"> * which continues into the next line</span></div>
 * <div class="line"><span class="comment"> &#42;/</span></div>
 * </div>
 * \endhtmlonly
 * 
 * 
 * \subsection sec_version_numbers Version Numbers
 * 
 * SuperSCS uses a 3-digit version number with a *major*, a *minor* and a *build*
 * number.
 * 
 * Version numbers are updated every time \c dev is merged into \c master.
 * 
 * 
 *  
 * \section sec_working_with_git Git
 * 
 * \subsection sec_git_branches Using/creating branches
 * 
 * We use a simple collaboration model with two branches:
 * 
 * - The \c master branch into which we merge to create a new release,
 * - The \c dev (development) branch where the development takes place
 * 
 * Experimental branches can be created, branching out of \c dev.
 * 
 * If you need to provide some new functionality, or solve an issue:
 * 
 * - Checkout \c dev
 * - Create a new branch out of \c dev - give it a name like <code>feature/parser</code>
 *   or <code>hotfix-issue-183</code>
 * - Work on that branch, write unit tests for your new functionality or 
 *   tests to verify that the problem has been resolved
 * - Create a new pull request on github and ask for someone else to have a 
 *   look at your changes and merge it.
 * 
 * \subsection sec_git_issues Creating an issue
 *
 * \subsubsection sec_issues_code_of_conduct Issues: code of conduct
 * 
 * Before creating a new issue, please make sure that the same or a very similar issue has 
 * already been filed.
 *
 * In general, you shouldn't file an issue to ask a question unless:
 * - You need to report that the documentation is unclear, wrong, outdated or insufficient (label: <code>documentation</code>),
 * - You want to contribute to SuperSCS and part of the code or its sturcture is not clear (label: <code>help-wanted</code>).
 * 
 * If you simply need to ask a question...
 * 
 * \htmlonly
 * <div style="cursor:pointer;">
 * <img src="images/chat.png" 
 *   class="js-gitter-toggle-chat-button"
 *   width="40px"
 *   title="Click here to start chatting with us"
 *   alt="Gitter button"/>
 * </div>
 * 
 * <script>
 *   ((window.gitter = {}).chat = {}).options = {
 *     room: 'kul-forbes/scs', //own room name
 *     activationElement: false
 *   };
 * </script>
 * <script src="https://sidecar.gitter.im/dist/sidecar.v1.js" async defer></script>
 * \endhtmlonly
 *
 * \subsubsection sec_issues_report Reporting an issue
 * 
 * You may report your issue using the project's [issue tracker on github](https://github.com/kul-forbes/scs/issues)
 * 
 * In your issue report, please include the following information:
 *
 * - **explanatory title**: a clear title
 * - **description**: a detailed description of the issue
 * - **steps to reproduce the issue**: make a list of steps
 *   - report the expected and actual behavior
 *   - provide logs and the output of SuperSCS
 *   - if logs are too lengthy, use [pastebin](https://pastebin.com/) or a similar service
 *   - if you need to paste code, use github's markdown syntax
 * - **SuperSCS**: report your SuperSCS version
 * - **Platform information**: what is your operating system, Python/MATLAB version or other relevant information
 *
 * Alongside, provide any additional information that will help reproduce 
 * and resolve the issue.
 *
 * If possible, write a test that reproduces the error.
 * 
 * \subsubsection sec_issues_labels Labels of issues
 * Labels:
 * - <code>bug</code>: bug report
 * - <code>documentation</code>: insufficient/unclear/wrong documentation
 * - <code>duplicate</code>: the same or really similar issue has been filed 
 * - <code>enhancement</code>: proposal for enchancement
 * - <code>help-wanted</code>: a user or developer needs help or guidance with the code
 * - <code>invalid</code>: invalid issue
 * - <code>linux</code>: linux operating system
 * - <code>maxosx</code>: Mac OS X operating system
 * - <code>matlab</code>: issue related to MATLAB
 * - <code>memory-leak</code>: memory leak or other memory issue
 * - <code>python</code>: issue related to python
 * - <code>serializer-parser</code>: issue related to the YAML serializer/parser
 * - <code>testing</code>: wrong/insufficient testing
 * - <code>windows</code>: windows operating system
 * - <code>wontfix</code>: this issue will not be fixed
 * 
 * 
 * \subsection sec_git_commiting Committing to github
 * 
 * The following commit guidelines were inspired by the guidelines 
 * of [Atom](https://github.com/atom/atom/blob/master/CONTRIBUTING.md#git-commit-messages)...
 * 
 * - Use <code>[ci skip]</code> in the first line of your commit message to 
 *   skip the CI testing
 * - Annotate your commit message as follows (will create an emoji):
 *     - \htmlonly<span><img src="https://assets-cdn.github.com/images/icons/emoji/unicode/1f3a8.png" style="height:15px"/></span>\endhtmlonly 
 *       <code>:art:</code> when improving the format/structure of the code
 *     - \htmlonly<span><img src="https://assets-cdn.github.com/images/icons/emoji/unicode/1f4dd.png" style="height:15px"/></span>\endhtmlonly
 *       <code>:memo:</code> when writing docs
 *     - \htmlonly<span><img src="https://assets-cdn.github.com/images/icons/emoji/unicode/1f41e.png" style="height:15px"/></span>\endhtmlonly
 *       <code>:beetle:</code> when fixing a bug
 *     - \htmlonly<span><img src="https://assets-cdn.github.com/images/icons/emoji/unicode/1f40e.png" style="height:15px"/></span>\endhtmlonly
 *       <code>:racehorse:</code> when improving performance
 *     - \htmlonly<span><img src="https://assets-cdn.github.com/images/icons/emoji/unicode/2705.png" style="height:15px"/></span>\endhtmlonly
 *       <code>:white_check_mark:</code> when adding tests
 *     - \htmlonly<span><img src="https://assets-cdn.github.com/images/icons/emoji/unicode/1f527.png" style="height:15px"/></span>\endhtmlonly 
 *       <code>:wrench:</code> when benchmarking or profiling
 *     - \htmlonly<span><img src="https://assets-cdn.github.com/images/icons/emoji/unicode/1f528.png" style="height:15px"/></span>\endhtmlonly 
 *       <code>:hammer:</code> improved code or implemented new feature
 *     - \htmlonly<span><img src="https://assets-cdn.github.com/images/icons/emoji/unicode/1f6a7.png" style="height:15px"/></span>\endhtmlonly 
 *       <code>:construction:</code> work in progress
 *
 * 
 * \subsection sec_git_contributing Contributing to SuperSCS
 * 
 * In order to contribute and actively participate in the development of 
 * SuperSCS, you first need to [fork](https://github.com/kul-forbes/scs/fork) 
 * the repository on github:
 * 
 * \htmlonly
 * <iframe 
 *   src="https://ghbtns.com/github-btn.html?user=kul-forbes&repo=scs&type=fork&count=true&size=large" 
 *   frameborder="0" scrolling="0" width="158px" height="30px"></iframe>
 * \endhtmlonly
 *
 * This way you will obtain a copy of SuperSCS in your user account.
 * 
 * You will be able to work there and submit a pull request once you complete 
 * your changes.
 * 
 * \subsection sec_git_merging_master Before merging into master
 * 
 * Before merging into <code>master</code>, use the following checklist:
 * 
 * - \htmlonly<input type="checkbox">\endhtmlonly Make sure there is adequate testing.
 * - \htmlonly<input type="checkbox">\endhtmlonly Run <code>make COV=1 cov</code> and check the results
 * - \htmlonly<input type="checkbox">\endhtmlonly Run <code>cppcheck</code>
 * - \htmlonly<input type="checkbox">\endhtmlonly Run <code>make docs</code> and check the output for warnings/errors
 * - \htmlonly<input type="checkbox">\endhtmlonly All unit tests pass on travis CI
 * - \htmlonly<input type="checkbox">\endhtmlonly ... and on Appveyor
 * - \htmlonly<input type="checkbox">\endhtmlonly Valgrind does not return any errors
 * - \htmlonly<input type="checkbox">\endhtmlonly The profiler (<code>make PF=1 profile</code>) works
 * - \htmlonly<input type="checkbox">\endhtmlonly The Python interface compiles and works correctly
 * - \htmlonly<input type="checkbox">\endhtmlonly The MEX interface works properly
 * - \htmlonly<input type="checkbox">\endhtmlonly All necessary files (e.g., images) have been committed
 * - \htmlonly<input type="checkbox">\endhtmlonly The version number has been updated in the C code
 * - \htmlonly<input type="checkbox">\endhtmlonly ... and in Doxygen (<code>docs/html-extra/scs-html-extra.html</code>)
 * - \htmlonly<input type="checkbox">\endhtmlonly ... and in Docker
 * - \htmlonly<input type="checkbox">\endhtmlonly Docker image builds successfully
 * - \htmlonly<input type="checkbox">\endhtmlonly New image uploaded on Docker Hub
 * - \htmlonly<input type="checkbox">\endhtmlonly A pull request has preferably been created
 * - \htmlonly<input type="checkbox">\endhtmlonly Changelog has been updated
 * - \htmlonly<input type="checkbox">\endhtmlonly Make sure there are no important 
 *           <a href="https://github.com/kul-forbes/scs/issues">issues</a>
 * - \htmlonly<input type="checkbox">\endhtmlonly Check out 
 *           <a href="https://trello.com/b/YMcZoJN9/superscs">Trello</a>
 * 
 * After the pull request has been merged:
 * 
 * - Build the documentation in <code>master</code> and push (<code>make docs</code>)
 * - Generate the [lcov report](coverage/) (<code>make COV=1 cov</code>)
 * - If necessary, create a release
 * - Switch back to the development branch to continue
 * 
 * [<b>Copy this into your pull request!</b>](data/merge-checklist.txt) 
 * 
 * \section sec_performing_benchmarks Benchmarking
 * 
 * Additional benchmarks are always welcome.
 * 
 * The standard way to report benchmarking results in SuperSCS is the 
 * \ref benchmarks-dolan-more "Dolan-Moré plot".
 * 
 * \subsection sec_performing_benchmarks_matlab Benchmarking in MATLAB
 * 
 * Benchmarking scripts are found in <code>tests/profiling_matlab</code>.
 * 
 * The files are organised in three main subfolders:
 * 
 * - <code>experimenters/</code> experimenters  call the  profile runners 
 *     with different solver parameters.
 * - <code>profile_helpers/</code> functions used to run profiling problems
 * - <code>profile_runners/</code> functions which call the profile helpers 
 *     with different problem parameters; these define a suite of numerical 
 *     experiments
 * 
 * 
 * \subsubsection sec_performing_benchmarks_matlab_helpers Helpers
 * 
 * Profile helpers are functions of the following form:
 * 
 * ~~~~~
 * out = profile_lasso(problem, solver_options);
 * ~~~~~
 * 
 * These accept two arguments: a <code>problem</code> structure with the problem
 * parameters and a <code>solver_options</code> with the solver configuration
 * (as instance of SuperScsConfig).
 * 
 * \subsubsection sec_performing_benchmarks_matlab_runners Runners
 * 
 * Runners are saved in <code>profile_runners/</code>. Profile runners execute a
 * diverse collection of problems by invoking profile helper functions.
 * 
 * Profile runners are functions of the form:
 * 
 * ~~~~~
 * profile_runner_logreg(solver_options, id, runner_options);
 * ~~~~~
 * 
 * The first argument is an instance of <code>SuperSCSConfig</code> which is 
 * passed to all invocations of <code>profile_runner_*</code>.
 * 
 * The second argument is an (integer) identifier of the runner. The results will
 * be stored in a <code>.mat</code> file at <code>profile_results/{id}.mat</code>.
 * 
 * These mat files are not put under version control.
 * 
 * The third argument is a structure with runner configuration parameters.
 * 
 * These typically are ranges of the problem parameters to be tested, number of 
 * repetitions of each run and more.
 * 
 * Profile runners store some general statistics in the CSV file 
 * [register.csv](https://github.com/kul-forbes/scs/blob/master/tests/profiling_matlab/profile_results/register.csv) 
 * which can be used for look-up purposes.
 * 
 * \subsubsection sec_performing_benchmarks_matlab_experimenters Experimenters
 * 
 * Lastly, we have the <em>experimenters</em>. These are stored in <code>experimenters/</code>.
 * 
 * An experimenter is a MATLAB script that calls a profile runner with different
 * solver parameters. 
 * 
 * 
 * \subsubsection sec_performing_benchmarks_matlab_plots Plotting results
 * 
 * Once an experimenter has completed successfully, we may create performance
 * plots using <code>perf_profile_plot</code>
 * 
 * \subsection sec_performing_benchmarks_python Benchmarking in Python
 * 
 * 
 * 
 * 
 * \section sec_docker_guide Docker
 * 
 * \subsection sec_docker_make Making a Docker image
 * 
 * To build a new docker image, run the following command from within the base
 * directory of SuperSCS:
 * 
 * ~~~~~
 * docker image build -t kulforbes/superscs:v{version-name} .
 * ~~~~~
 * 
 * The docker configuration is given in 
 * [Dockerfile](https://github.com/kul-forbes/scs/blob/master/Dockerfile).
 * 
 */