clear;
problem_name = 'example-problem-1';
filename = fullfile(get_scs_rootdir, 'matlab', 'scs-yaml', 'example.yml');
ops = struct('creator', 'SuperSCS v1.2.6');
data.A = sparse([0.3 0 0 ; 0 0.7 0; 0 0 0.2; -0.5 0.9 0]);  % define A
data.b = [0.2; 0.1; -0.1; 0.1];                             % define b
data.c = [1;-2;-3];                                         % define c
K.q = 4;                                                    % define K
problem_to_yaml(filename, problem_name, data, K, ops);      % save data
[data_loaded, K_loaded, dtl] = problem_from_yaml(filename); % load data

% Check that everything is OK
assert(norm(data_loaded.A-data.A, Inf) <= 1e-12);
assert(norm(data_loaded.b-data.b, Inf) <= 1e-12);
assert(norm(data_loaded.c-data.c, Inf) <= 1e-12);
assert(K.q == K_loaded.q);
assert(K_loaded.f == 0);
assert(K_loaded.l == 0);
assert(K_loaded.ep == 0);
assert(K_loaded.ed == 0);
assert(K_loaded.psize == 0);
assert(K_loaded.qsize == 1);
assert(K_loaded.ssize == 0);
assert(isempty(K_loaded.s));
assert(isempty(K_loaded.p));
assert(strcmp(problem_name, dtl.name));


%% Another test
data.A = sparse([0.1   0     0.2    0     0;
    0    -0.5   0      0     0.1;
    0     0     0.2    0.4  -0.1;
    -0.3   0     0.8    0.9  -0.2;
    0   0.1     0     -0.9  -0.2;
    1   0       1      0     0]);
data.b = [1;0.8;-1;2;1;1];
data.c = [0.1;0.1;0.2;0.1;0.6];

K.q = [2 2];
K.l = 1;
K.f = 1;

filename = fullfile(get_scs_rootdir, 'matlab', 'scs-yaml', 'example-2.yml');
problem_name = 'example-problem-2';

problem_to_yaml(filename, problem_name, data, K, ops);
[data_loaded, K_loaded, dtl] = problem_from_yaml(filename);
solver_options = struct('eps', 1e-6, 'do_super_scs', 1, 'direction', 150, 'memory', 5, 'k0',0);
[x, y, s, info] = scs_direct(data, K, solver_options)

%% Create random problem and store it in YAML

filename3 = fullfile(get_scs_rootdir, 'tests', 'c', 'data', 'test-3.yml');
[data, K, details] = problem_from_yaml(filename3);


%% Create an SDP problem and store it in YAML
clear
rng(2);
n=20;
solver_ops = SuperSCSConfig.andersonConfig('verbose',0,'use_indirect',0);


A = diag(-logspace(-1.5, -1, n));
U = orth(randn(n,n));
A = U'*A*U;

tstart_sdp2 = tic;
cvx_begin sdp quiet
cvx_solver scs
scs_set_options(solver_ops);
variable P(n,n) symmetric
minimize(trace(P))
A'*P + P*A <= -eye(n)
P >= eye(n)
P(1:2,1:2) >= 0.5*eye(2)
norm(P(:)) <= 621
sum(P(:))<=950
cvx_end

load(solver_ops.dumpfile);

[x, ~, ~, info] = scs_direct(data, K, struct('eps', 1e-8, ...
    'do_super_scs', 1, 'direction', 100, 'memory', 20, 'k0',0));

filename4 = fullfile(get_scs_rootdir, 'tests', 'c', 'data', 'test-4.yml');
problem_to_yaml(filename4, 'test-4-sdp-2', data, K);

%% Make problem with exponential cone
clear;
rng(1);

density = 0.1;
p = 10;   % features
q = 10*p;   % total samples
w_true = sprandn(p,1,0.2);
X_tmp = 3*sprandn(p, q, density);
ips = -w_true'*X_tmp;
ps = (exp(ips)./(1 + exp(ips)))';
labels = 2*(rand(q,1) < ps) - 1;
X_pos = X_tmp(:,labels==1);
X_neg = X_tmp(:,labels==-1);
X = [X_pos -X_neg]; % include labels with data
lam = 3;


solver_ops = SuperSCSConfig.andersonConfig('memory',4,'ls',5);

cvx_begin
cvx_solver scs
scs_set_options(solver_ops);
variable w(p)
minimize(sum(log_sum_exp([sparse(1,q);w'*X])) + lam * norm(w,1))
cvx_end

load(solver_ops.dumpfile);

filename5 = fullfile(get_scs_rootdir, 'tests', 'c', 'data', 'test-5.yml');
problem_to_yaml(filename5, 'test-5-logreg', data, K);

%% Power cone
clear;clc;rng(3);
n = 5;

nq = 2;
nl = 40;
p = [0.1 0.2 -0.6 -0.95];
data.A = sprandn(nq+3*numel(p)+nl,n,0.8);
K = struct('q',nq,'l',nl,'p', p);
b_ = 5;
data.b = rand(size(data.A,1),1);
data.c = ones(n,1);

[x, ~, ~, info] = scs_direct(data, K, struct('eps', 1e-8, ...
    'do_super_scs', 1, 'direction', 100, 'memory', 20, 'k0',0));


filename6 = fullfile(get_scs_rootdir, 'tests', 'c', 'data', 'test-6.yml');
problem_to_yaml(filename6,'test-problem-6-power-cone',data,K)



%% Power cone
clear;clc;rng(1);
n = 5;

nl = 2;
pe = 3;
data.A = sprandn(3*pe + nl, n, 0.8);
K = struct('ep', pe, 'l', nl);

data.b = rand(size(data.A,1),1);
data.c = ones(n,1);

[x, ~, ~, info] = scs_direct(data, K, struct('eps', 1e-8, ...
    'do_super_scs', 1, 'direction', 100, 'memory', 20, 'k0',0));


filename7 = fullfile(get_scs_rootdir, 'tests', 'c', 'data', 'test-7.yml');
problem_to_yaml(filename7,'test-problem-7-primal-exponential-cone',data,K)

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
