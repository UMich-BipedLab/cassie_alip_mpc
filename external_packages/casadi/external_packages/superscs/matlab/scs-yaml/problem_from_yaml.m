function [data, cones, details] = problem_from_yaml(yaml_filepath)
%PROBLEM_FROM_YAML constructs a SuperSCS problem from a YAML file
%
%Syntax:
%[data, K, details] = problem_from_yaml(yaml_filepath)
% 
%
%Input arguments:
%  yaml_filepath    path to YAML file
%
%Ouput arguments:
%  data             a structure with fields: `A`, `b` and `c`; the data of
%                   a conic optimization problem
%  cones            the cone specifications of the conic problem
%  details          other details of the problem such as the parsing time
%                   and the name of the problem
%
%See also
%problem_to_yaml, sparse_to_csc, csc_to_sparse


% The MIT License (MIT)
%
% Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
%                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
%                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
% Copyright (c) 2012 Brendan O'Donoghue (bodonoghue85@gmail.com)
%
% Permission is hereby granted, free of charge, to any person obtaining a copy
% of this software and associated documentation files (the "Software"), to deal
% in the Software without restriction, including without limitation the rights
% to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
% copies of the Software, and to permit persons to whom the Software is
% furnished to do so, subject to the following conditions:
%
% The above copyright notice and this permission notice shall be included in all
% copies or substantial portions of the Software.
%
% THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
% IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
% FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
% AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
% LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
% OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
% SOFTWARE.

%% Code
start_yaml_parsing = tic;
out = parse_yaml(yaml_filepath);
data.A = csc_to_sparse(out.A.m, out.A.a, out.A.I, out.A.J);
data.b = out.b;
data.c = out.c;
cones = out.K;

details.name = out.name;
details.parsing_time = toc(start_yaml_parsing);
