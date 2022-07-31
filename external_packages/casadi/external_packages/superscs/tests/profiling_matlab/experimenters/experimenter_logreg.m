clear; clc;
rng('default')
rng(1);
load gong.mat;
tol = 1e-4;                 % tolerance
max_iter = 15000;           % 15k iterations maximum
max_time = 2.5 * 60 * 1e3;  % 

%% LOGISTIC REGRESSION (288 problems)

% 1. Run SCS
id = 616010840;
solver_options = SuperSCSConfig.scsConfig(...
    'tolerance', tol, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
profile_runner_logreg(solver_options, id);
sound(y);

% 2. Run Broyden (k1,k2, not k0)
%    memories: 50, 100
solver_options = SuperSCSConfig.broydenConfig(...
    'tolerance', tol, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time, ...
    'k0', 0);
for bro_mem = [50, 100]
    id = id + 1;
    solver_options.memory = bro_mem;
    profile_runner_logreg(solver_options, id);
    sound(y);
end

% 3. Run Anderson's acceleration (k0,k1,k2)
%    memories: 10, 5, 15
solver_options = SuperSCSConfig.andersonConfig(...
    'tolerance', tol, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
for aa_mem = [10, 5, 15]
    id = id + 1;
    solver_options.memory = aa_mem;
    profile_runner_logreg(solver_options, id);
    sound(y);
end