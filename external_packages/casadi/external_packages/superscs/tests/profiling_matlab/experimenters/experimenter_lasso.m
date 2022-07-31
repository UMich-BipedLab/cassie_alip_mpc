clear; clc;
rng('default')
rng(1);
load gong.mat;
tol = 1e-4;              % tolerance
max_iter = 15000;        % 15k iterations maximum
max_time = 3 * 60 * 1e3; % 3 minutes max

%% LASSO (1152 problems)
sound(y);

% 1. Run SCS
id = 9288770;
solver_options = SuperSCSConfig.scsConfig(...
    'tolerance', tol, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
profile_runner_lasso(solver_options, id);
sound(y);

% 2A. Run SuperSCS with different memory lengths (k1,k2: activated, k0=0)
id = id + 1;
solver_options = SuperSCSConfig.broydenConfig(...
    'tolerance', tol, ...
    'k0', 0, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
for mem = [50 100],    
    id = id + 1;
    solver_options.memory = mem;
    profile_runner_lasso(solver_options, id);
    sound(y);
end

% 3. Run SuperSCS with Anderson's acceleration (k0,k1,k2: activated)
id = id + 1;
solver_options = SuperSCSConfig.andersonConfig(...
    'tolerance', tol, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
for mem = [5 10 15 20],    
    id = id + 1;   
    solver_options.memory = mem;
    profile_runner_lasso(solver_options, id);
    sound(y);
end