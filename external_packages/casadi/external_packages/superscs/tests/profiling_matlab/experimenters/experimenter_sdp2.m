clc;
clear;
rng('default');
rng(1);
load gong.mat;

% Experimenter parameters
tol              = 1e-4;                         % tolerance
max_iters        = 2e4;                          % max # iterations
max_time_minutes = 5.5;                          % maximum time in minutes
max_time         = max_time_minutes * 60 * 1e3;  % maximum time in ms

%% SDP2
sound(y);

% 1. Run sedumi
id = 8000;
solver_options = SuperSCSConfig.sedumiConfig(...
    'solver', 'sedumi', ...
    'tolerance', tol, ...
    'max_iters', max_iters, ...
    'max_time_milliseconds', max_time);
profile_runner_sdp2(solver_options, id);
sound(y);

id = id + 1;

solver_options = SuperSCSConfig.scsConfig(...
    'tolerance', tol, ...
    'max_iters', max_iters, ...
    'max_time_milliseconds', max_time);
profile_runner_sdp2(solver_options, id);
sound(y);

% 2. Broyden direction (memory = 50, k0: deactivated)
for bro_mem = [50, 100]
    id = id + 1;
    solver_options = SuperSCSConfig.broydenConfig(...
        'tolerance', tol, ...
        'max_iters', max_iters, ...
        'max_time_milliseconds', max_time, ...
        'memory', bro_mem, ...
        'k0', 0);
    profile_runner_sdp2(solver_options, id);    
    sound(y);
end

% 3. Anderson's acceleration (memory = 5, 10, 15)
for aa_mem = [3, 5, 10, 15]    
    id = id + 1;
    solver_options = SuperSCSConfig.andersonConfig(...
        'tolerance', tol, ...
        'max_iters', max_iters, ...
        'max_time_milliseconds', max_time, ...
        'memory', aa_mem);
    profile_runner_sdp2(solver_options, id);    
    sound(y);
end