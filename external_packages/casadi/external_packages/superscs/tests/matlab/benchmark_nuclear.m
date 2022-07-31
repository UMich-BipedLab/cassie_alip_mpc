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

rng('default');
rng(1);

m = 500;
n = 200;
percentage_missing = 0.9;
n_nan = ceil(percentage_missing*m*n);
M = 100*randn(m, n);
idx = randperm(m*n);
idx_nan = idx(1:n_nan);
idx_not_nan = idx(n_nan+1:end);
M(idx_nan) = nan;
lam = 1e-3;

scs_options = SuperSCSConfig.andersonConfig('tolerance', 1e-4,...
    'do_record_progress',1,'verbose',1,'memory',5);

cvx_begin sdp
    cvx_solver scs
    scs_set_options(scs_options)
    variable X(m,n)
    minimize (lam * norm_nuc(X) + sum_square(X(idx_not_nan)-M(idx_not_nan)))
    subject to
        X(idx_not_nan)==M(idx_not_nan)
cvx_end


load(scs_options.dumpfile)
semilogy(info.progress_time/1e3, info.progress_respri)
hold on
