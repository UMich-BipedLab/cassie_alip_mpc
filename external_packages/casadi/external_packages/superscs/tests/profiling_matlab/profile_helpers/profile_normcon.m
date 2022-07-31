function out = profile_normcon(problem, solver_options)
%PROFILE_NORMCON solves the following norm-constrained problem
%
% Minimize ||A*x - b||
% subject to
%  ||G*x|| <= 1
%  Ex = 1
%
%where `A` is an m-by-n sparse matrix with given density and reciprocal
%condition number, `b` is an m-vector and `G` is a p-by-n sparse matrix
%with given density
%
%Syntax:
%out = profile_normcon(problem, solver_options)
%
%Input arguments:
% problem           structure defining the problem specifications with
%                   fields:
%  m, n             row and column dimensions of `A`
%  ne               number of equality constraints (row dimension of E)
%  magE             magnitude of matrix `E`; Matrix `E` is constructed as
%                   `magE * rand(ne, n)`
%  p                row dimension of `G`
%  density          density of the sparse matrix `A`
%  rca              approximate reciprocal condition number of A
%  density_c        density of the sparse matrix `G`
%  bmag             magnitude of vector `b` which is constructed by
%                   b = problem.bmag*randn(problem.m, 1);
%  Gmag             magnitude of matrix `G` which is constructed by
%                   G = problem.Gmag*sprandn(problem.p, problem.n, ...
%                   problem.density_c);
%
% solver_options    structure with solver options which are passed to
%                   scs_set_options.
%
%Output arguments:
% out               structure containing the total runtime (field name: time)
%              
%See also
% scs_set_options

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
 
A = sprandn(problem.m, problem.n, problem.density, problem.rca);
b = problem.bmag*randn(problem.m, 1);
G = problem.Gmag*sprand(problem.p, problem.n, problem.density_c);
E = problem.magE * rand(problem.ne, problem.n);

tstart_normcon = tic;
cvx_begin quiet
    cvx_solver scs
    scs_set_options(solver_options)
    variable x(problem.n)
    minimize( norm(A*x-b) )
    subject to
        if (problem.p > 0),
            norm(G*x) <= 1
        end
        if (problem.ne > 0),
            E * x == ones(problem.ne, 1)
        end
cvx_end
out.time = toc(tstart_normcon);
