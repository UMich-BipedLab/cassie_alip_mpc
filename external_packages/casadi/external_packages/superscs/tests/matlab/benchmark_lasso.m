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

clear;
rng('default');
rng(1);

n = 1000; m = ceil(n/5); s=ceil(n/10);

x_true=[randn(s,1);zeros(n-s,1)]; % true sparse signal
x_true = x_true(randperm(n));

density = 0.2;
rcA = 1e-8;
A=sprandn(m,n,density,rcA);

b = A*x_true + 0.4*randn(m,1);
mu = 15;

scs_options = SuperSCSConfig.broydenConfig('tolerance', 1e-8,...
    'do_record_progress',1,'memory',100,'verbose',1);
tic;
cvx_begin
    cvx_solver scs
    scs_set_options(scs_options)
    variable x_c(n)
    minimize(0.5*sum_square(A*x_c - b) + mu*norm(x_c,1))
cvx_end
toc


load(scs_options.dumpfile)
semilogy(info.progress_time/1e3, info.progress_respri)
hold on
