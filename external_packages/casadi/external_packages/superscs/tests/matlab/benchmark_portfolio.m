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

clear; clc;

% Generate portfolio optimization problem
rng('default');
rng(1);

density = 0.1;
rc = 0.5; % estimated reciprocal condition number

n = 100000;
m = 100;

mu = exp(0.01 * randn(n, 1)) - 1; % returns
D = rand(n,1) / 10; % idiosyncratic risk
F = sprandn(n, m, density, rc) / 10; % factor model
gamma = 1;
B = 1;

%% 
do_super_scs = 1;

tic;
cvx_begin
    cvx_solver scs
    cvx_solver_settings('eps', 1e-3,...
        'scale', 1,...
        'do_super_scs',do_super_scs,...
        'direction', 100,...
        'k0', 0,...
        'ls', 5,...
        'memory', 200,...
        'rho_x', 0.1,...
        'verbose', 2)
    variable x(n)
    maximize(mu'*x - gamma*(sum_square(F'*x) + sum_square(D.*x)))
    sum(x) == B
    x >= 0
cvx_end
toc;
