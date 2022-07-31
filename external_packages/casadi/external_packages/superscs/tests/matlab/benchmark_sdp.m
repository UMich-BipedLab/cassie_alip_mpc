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

%% SDP #1: Minimum trace
clear;
rng('default');
rng(1);

scs_options = SuperSCSConfig.douglasRachfordConfig('tolerance', 1e-4,...
    'do_record_progress',1,'memory',100,'verbose',2);


n=300;
P = randn(n,n);
cvx_begin sdp
cvx_solver scs
scs_set_options(scs_options);
variable Z(n,n) hermitian toeplitz
dual variable Q
minimize( norm( Z - P, 'fro' ) )
Z >= 0 : Q;
cvx_end



%% SDP #2: Lyapunov matrix
clear;
rng('default');
rng(1);

temp_dir = fullfile(get_scs_rootdir,'temp');
fileid = 'tmp3';

scs_options = SuperSCSConfig.andersonConfig(...
    'tolerance', 1e-4,...
    'do_record_progress',1,'verbose',2, ...
    'max_iters', 1e6,  ...
    'max_time_milliseconds', 120000, ...
    'dumpfile', fullfile(temp_dir, fileid));

n=50;
A = diag(-logspace(-1.5, 1.1, n));
U = orth(randn(n,n));
A = U'*A*U;
tic
cvx_begin sdp
cvx_solver scs
scs_set_options(scs_options);
variable P(n,n) symmetric
minimize(trace(P))
A'*P + P*A <= -eye(n)
P >= eye(n)
cvx_end
toc

load(scs_options.dumpfile)
semilogy(info.progress_time/1e3, info.progress_respri, 'LineWidth', 2)
hold on

%%
t1 = fullfile(temp_dir, 'tmp1');
t2 = fullfile(temp_dir, 'tmp2');
t3 = fullfile(temp_dir, 'tmp3');
load(t1); semilogy(info.progress_time/1e3, info.progress_relgap, 'LineWidth', 2); hold on;
load(t2); semilogy(info.progress_time/1e3, info.progress_relgap, 'LineWidth', 2); hold on
load(t3); semilogy(info.progress_time/1e3, info.progress_relgap, 'LineWidth', 2); hold on
legend('SCS', 'Broyden (mem=100)', 'Anderson (mem=10)')
ylabel('relative duality gap'); xlabel('time (s)'); grid;
axis tight


