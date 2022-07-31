function out = profile_sdp2(problem, solver_options)
%PROFILE_SDP2 solves the problem
%
% Minimize_P trace(P)
% subject to
%  P: symmetric
%  P >= I
%  A'*P + P*A <= -I
%
%Syntax:
%out = profile_sdp2(problem, solver_options)
%
%Input arguments:
% problem           structure defining the problem specifications with
%                   fields:
%  n                row dimension of P
%  log_eig_min      logarithm of the minimum eigenvalue of A
%  log_eig_max      logarithm of the maximum eigenvalue of A
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
n=problem.n;
A = diag(-logspace(problem.log_eig_min, problem.log_eig_max, n));
U = orth(randn(n,n));
A = U'*A*U;

tstart_sdp2 = tic;
cvx_begin sdp quiet
    if strcmp(solver_options.solver, 'sedumi')
        cvx_solver sedumi
        cvx_solver_settings('dumpfile', solver_options.dumpfile);
    elseif strcmp(solver_options.solver, 'scs')
        cvx_solver scs
        scs_set_options(solver_options);        
    end        
    variable P(n,n) symmetric
    minimize(trace(P))
    A'*P + P*A <= -eye(n)
    P >= eye(n)
cvx_end    
    
out.time = toc(tstart_sdp2);
trace(P)