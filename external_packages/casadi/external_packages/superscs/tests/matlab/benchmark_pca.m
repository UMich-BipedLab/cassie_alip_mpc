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

%{ 
clear;
rng('default');
rng(1);

data = 200;
p = 5;
A = sprandn(p,data,0.3,0.0001);
S = full(A'*A);

lam = 10;

cvx_begin sdp
    cvx_solver scs
    cvx_solver_settings('eps', 1e-3,...
        'verbose', 1,...
        'do_super_scs', 1, ...
        'direction', 100, ...
        'memory', 100,...
        'do_record_progress',1,...
        'dumpfile','pca.mat');
    variable X(data,data) symmetric
    minimize(-trace(S*X) + lam*norm(X,1))
    trace(X)==1
    X>=0
cvx_end  
%%
load('pca.mat')
semilogy(info.progress_time, info.progress_respri,'linewidth',2); hold on
semilogy(info.progress_time, info.progress_resdual,'linewidth',2);
legend('Primal Residual', 'Dual Residual');
xlabel('time [ms]'); ylabel('residual');
grid on

%}
%%
% NICE BENCHMARK
% Find X, low rank matrix, so that X is close to Y

n = 10;
r = 2;
lam = 5;
E = randn(n,r);
Y = E*E';


cvx_begin sdp
    cvx_solver scs
    cvx_solver_settings('eps', 1e-5,...
        'verbose', 1,...
        'do_super_scs', 1, ...
        'memory', 100);
    variable X(n,n) symmetric
    minimize(norm(X-Y,'fro'))
    subject to
    norm_nuc(X) <= 1
cvx_end  

plot(svd(X))
