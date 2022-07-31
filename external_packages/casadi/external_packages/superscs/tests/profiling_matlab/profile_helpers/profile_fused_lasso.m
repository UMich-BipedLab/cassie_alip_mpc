function out = profile_fused_lasso(problem, solver_options)

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

m = problem.m;
ni = problem.ni;
k = problem.k;
rho=problem.rho;
sigma=problem.sigma;

A = randn(m, ni*k);
A = A / norm(A);

x0 = zeros(ni*k,1);
for i=1:k
    if rand < rho,
        x0(i*ni:(i+1)*ni) = rand;
    end
end
b = A*x0 + sigma*randn(m,1);
lam = 0.1*sigma*sqrt(m*log(ni*k));

I = speye(ni*k);
T1 = I(1:end-1,:);
T2 = I(2:end,:);
cvx_begin quiet
    cvx_solver scs
    scs_set_options(solver_options);
    variable x(ni*k)
    minimize( sum_square(A*x - b) + lam*norm(x,1) + lam*norm(T1*x-T2*x, 1) ); 
cvx_end
out = [];

