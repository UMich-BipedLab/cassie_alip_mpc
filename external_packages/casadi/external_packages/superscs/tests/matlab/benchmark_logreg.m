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

density = 0.4;
p = 100;   % features
q = 10*p;   % total samples
w_true = sprandn(p,1,0.2);
X_tmp = 3*sprandn(p, q, density);
ips = -w_true'*X_tmp;
ps = (exp(ips)./(1 + exp(ips)))';
labels = 2*(rand(q,1) < ps) - 1;
X_pos = X_tmp(:,labels==1);
X_neg = X_tmp(:,labels==-1);
X = [X_pos -X_neg]; % include labels with data
lam = .1; 


scs_options = SuperSCSConfig.douglasRachfordConfig('tolerance', 1e-4,...
    'do_record_progress',1,'memory',100,'verbose',2);


cvx_begin
   cvx_solver scs
   scs_set_options(scs_options);
   variable w(p)
   minimize(sum(log_sum_exp([sparse(1,q);w'*X])) + lam * norm(w,1))       
cvx_end



load(scs_options.dumpfile)
semilogy(info.progress_time/1e3, info.progress_respri)
hold on
