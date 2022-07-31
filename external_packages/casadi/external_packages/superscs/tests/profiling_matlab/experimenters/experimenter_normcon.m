clear; clc;
fprintf('[exp] Parametrizing NORMCON\n');

rng('default')
rng(1);
load gong.mat;
tol = 1e-4;                % tolerance
max_iter = 50000;          % 15k iterations maximum
max_time = 2.5 * 60 * 1e3; % 2.5 minutes max

%%

fprintf('[exp] Starting NORMCON\n');

% 1. Run AA
id = 573515;
for a_mem = [3, 5, 10]   
    solver_options = SuperSCSConfig.andersonConfig(...
        'tolerance', tol, ...
        'memory', a_mem, ...
        'max_iters', max_iter, ...
        'max_time_milliseconds', max_time);
    fprintf('[exp] NORMCON (id:%d) with AA and memory: %d\n', id, a_mem);
    fprintf('[exp] The time is %s\n', datetime());
    profile_runner_normcon(solver_options, id);
    sound(y);
    id = id + 1;
end

% 2. Broyden, k0: deactivated
for b_mem = [50, 100]
    solver_options = SuperSCSConfig.broydenConfig(...
        'tolerance', tol, ...
        'max_iters', max_iter, ...
        'max_time_milliseconds', max_time,...
        'k0', 0, ...
        'memory', b_mem);
    fprintf('[exp] NORMCON (id:%d) with Broyden and memory: %d\n', id, b_mem);
    fprintf('[exp] The time is %s\n', datetime());
    profile_runner_normcon(solver_options, id);
    sound(y);
    id = id + 1;
end

% 3. SCS
fprintf('[exp] NORMCON (id:%d) with SCS\n', id);
fprintf('[exp] The time is %s\n', datetime());
solver_options = SuperSCSConfig.scsConfig(...
    'tolerance', tol, ...
    'k0', 1, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
profile_runner_normcon(solver_options, id);
sound(y);
