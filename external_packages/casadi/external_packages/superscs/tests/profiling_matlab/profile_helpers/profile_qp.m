function out = profile_qp(problem, e, o)

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
n = problem.n;
m = problem.m;
rho = problem.rho;
Q0 = diag(logspace(problem.Q_log_eig_min, problem.Q_log_eig_max, n));
U = orth(randn(n,n));
Q = U'*Q0*U + rho*eye(n);
q = 5 * randn(n,1);
r = randn;
F = rand(m,n);
f = rand(m,1);

l = randn(n,1);
u = l + rand(n,1);

lb = min(l,u) - 0.5;
ub = max(l,u) + 0.5;

cvx_begin quiet
    cvx_solver scs
    scs_set_options(o, e);
    variable x(n)
        minimize( 0.5*x'*Q*x + q'*x + r )
        subject to:
            lb <= x <= ub
cvx_end

out = [];

