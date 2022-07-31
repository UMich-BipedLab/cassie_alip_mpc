function out = profile_pca(problem, solver_options)
%PROFILE_PCA solves the following regularized PCA problem
%
% Minimize_X -trace(S*X) + lam*||X||_1
% subject to
%  X: data-by-data symmetric
%  trace(X) = 1
%  X >= 0
%
%Syntax:
%out = profile_pca(problem, solver_options)
%
%Input arguments:
% problem           structure defining the problem specifications with
%                   fields:
%  data                row dimension of X
%  p                matrix S is defined as S = A'*A, where A is a p-by-d
%                   (sparse) matrix
%  density          is the density of the sparse matrix A
%  rcA              an approximation of the reciprocal condition number 
%                   of matrix A
%  
% solver_options    structure with solver options which are passed to
%                   scs_set_options.
%
%Output arguments:
% out               structure containing the total runtime (field name: time)
%
%See also:
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

data = problem.d; % 200
p = problem.p; % 5
A = sprandn(p, data, problem.density, problem.rcA);
S = full(A'*A);

lam = problem.lam;

tstart_pca = tic;
cvx_begin sdp quiet
    if strcmp(solver_options.solver, 'scs')
        cvx_solver scs
        scs_set_options(solver_options);    
    else 
        eval(['cvx_solver ' solver_options.solver]);
        cvx_solver_settings('dumpfile', solver_options.dumpfile, ...
            'eps', solver_options.tolerance);    
    end    
    variable X(data,data) symmetric
    minimize(-trace(S*X) + lam*norm(X,1))
    trace(X)==1
    X>=0
cvx_end  
out.time = toc(tstart_pca);
