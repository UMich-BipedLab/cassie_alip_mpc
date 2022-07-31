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
/*! \page page_save_load Saving and Loading Problems
 * 
 * \tableofcontents
 * 
 * \section superscs-yaml-format SuperSCS YAML format
 * 
 * A conic problem is described by the tuple \f$(A,b,c,\mathcal{K})\f$ where \f$A\f$
 * is an \f$m\times n\f$ \ref page_sparse_matrices "sparse matrix" and 
 * \f$\mathcal{K}\f$ is a cone.
 * 
 * These data can be saved in a 
 * <a href="http://docs.ansible.com/ansible/devel/reference_appendices/YAMLSyntax.html">YAML</a> 
 * file from which they can be accessed
 * from MATLAB, C, R, Java, Python and any other programming language.
 * 
 * YAML files are easy to parse and are human- and machine-readable.
 * 
 * Let us consider the following second-order cone program:
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
 * Let \f$\mathcal{K}\f$ be the second-order cone in \f$\mathbb{R}^4\f$.
 * 
 * The YAML representation of this problem is as follows 
 * (<a href="data/example.yml" download>download</a>):
 * 
 * ~~~~~{.yml}
 * --- # SuperSCS Problem
 * meta:
 *     id: 'http://superscs.org/problem/#example-problem-1'
 *     date: '09-Apr-2018 19:41:52'
 *     creator: 'SuperSCS'
 *     yamlVersion: '1.2'
 *     license: 'https://github.com/kul-forbes/scs/blob/master/LICENSE.txt'
 * problem:
 *     name: 'example-problem-1'
 *     A: 
 *         m: 4
 *         n: 3
 *         nnz: 5
 *         a: [0.3,-0.5,0.7,0.9,0.2]
 *         I: [0,2,4,5]
 *         J: [0,3,1,3,2]
 *     b: [0.2,0.1,-0.1,0.1]
 *     c :[1,-2,-3]
 *     K:
 *         eq: 0
 *         ep: 0
 *         q: 4
 *         f: 0
 *         l: 0
 *         s: []
 *         ed: 0
 *         p: []
 * ...
 * ~~~~~
 * 
 * \section superscs-yaml-matlab MATLAB
 * 
 * In MATLAB, you may serialize your problem using <code>problem_to_yaml</code>.
 * 
 * In MATLAB the data of a conic optimization problem are stored in a structure
 * called `data` with fields `A`, `b` and `c` and another structure called `K` 
 * containing the cone specifications. 
 * 
 * To save the contents of `data` and `K` in `my_problem.yml` run:
 * 
 * ~~~~~
 * problem_to_yaml('my_problem.yml', 'problem-1', data, K);
 * ~~~~~
 * 
 * To print the YAML-serialized problem data to the standard output run:
 * 
 * ~~~~~
 * problem_to_yaml(1, 'problem-1', data, K);
 * ~~~~~
 * 
 * To print the YAML representation to some other output stream, e.g., a stream 
 * to a file created using `fopen` run:
 * 
 * ~~~~~
 * fid = fopen('path/to/myfile.yml', 'w');
 * problem_to_yaml(fid, 'example-problem-1', data, K);
 * fclose(fid);
 * ~~~~~
 * 
 * Retrieving data from a YAML file is as simple as
 * 
 * ~~~~~
 * [data, K] = problem_from_yaml('example.yml');
 * ~~~~~
 * 
 * Here is a full example of saving and loading data:
 * 
 * ~~~~~
 * filename = 'example.yml';
 * data.A = sparse([0.3 0 0 ; 0 0.7 0; 0 0 0.2; -0.5 0.9 0]);  % define A
 * data.b = [0.2; 0.1; -0.1; 0.1];                             % define b
 * data.c = [1;-2;-3];                                         % define c
 * K.eq = 0; K.ep = 0; K.q = 4;                                % define K
 * problem_to_yaml(filename, 'example-problem-1', data, K);    % save data
 * [data_loaded, K_loaded] = problem_from_yaml(filename);      % load data
 * ~~~~~
 * 
 * A large YAML file can be found <a href="data/liswet1.yml.txt">here</a>.
 * 
 * \section superscs-yaml-c C
 * 
 * In C, loading a YAML file is supported by SuperSCS's YAML parser.
 * 
 * To load a YAML file use #scs_from_YAML.
 * 
 * Here is an example:
 * 
 * ~~~~~
 * ScsData * data;
 * ScsCone * cone;
 * const char * filepath = "matlab/scs-yaml/example.yml";
 * int status = scs_from_YAML(filepath, &data, &cone);
 * if (status != 0) { 
 *  // handle failure
 * }
 * // use `data` and `cone` ...
 * // at the end don't forget to call `scs_free_data_cone`
 * scs_free_data_cone(data, cone);
 * ~~~~~
 * 
 * To save a problem (\ref #ScsData "data" and \ref #ScsCone "cones") in a YAML file,
 * use #scs_to_YAML.
 * 
 * Alongside, you need to provide some metadata for your problem.
 * 
 * Here is an example:
 * 
 * ~~~~~
 * const char * filepath = "my-problem.yml";
 * ScsData * data;
 * ScsCone * cone;
 * ScsConicProblemMetadata * metadata;
 * // Construct `data` and `cone` ...
 * 
 * // Initialize a metadata structure
 * metadata = scs_init_conic_problem_metadata("con-problem-1234");
 * 
 * // Provide some metadata
 * strncpy(metadata->creator, "Pantelis Sopasakis", METADATA_TEXT_SIZE);
 * strncpy(metadata->license, "LGPL v3.0", METADATA_TEXT_SIZE);
 * 
 * // Serialize to YAML and store in a file
 * status = scs_to_YAML(filepath, metadata, data, cone);
 * ~~~~~
 * \sa \ref page_sparse_matrices
 */