clc;
clear;
rng('default');
rng(1);
load gong.mat;

fprintf('[exp] Parametrizing SDP-2B\n');
% Experimenter parameters
tol              = 1e-4;                         % tolerance
max_iters        = 2e4;                          % max # iterations
max_time_minutes = 2.5;                          % maximum time in minutes
max_time         = max_time_minutes * 60 * 1e3;  % maximum time in ms

runner_options   = struct(...
    'name', 'SDP-X-2B', ...
    'reps', 3, ...
    'span_n', [40, 80], ...
    'span_log_eig_min', [-1.5, -1.0], ...
    'span_log_eig_max', [0.7 0.9 1.0 1.1]);
%% SDP2B
sound(y);
fprintf('[exp] Starting SDP-2B\n');

% 1. Run SCS
id = 53204580;

% 3. Anderson's acceleration (memory = 5, 10, 15)
for aa_mem = [3, 5, 10, 15]        
    id = id + 1;
    solver_options = SuperSCSConfig.andersonConfig(...
        'tolerance', tol, ...
        'max_iters', max_iters, ...
        'max_time_milliseconds', max_time, ...
        'memory', aa_mem);
    fprintf('[exp] SDP-2B (id:%d) with AA and memory: %d\n', id, aa_mem);
    fprintf('[exp] The time is %s\n', datetime());
    profile_runner_sdp2(solver_options, id, runner_options);    
    sound(y);
end

id = id + 1;
solver_options = SuperSCSConfig.scsConfig(...
    'tolerance', tol, ...
    'max_iters', max_iters, ...
    'max_time_milliseconds', max_time);
fprintf('[exp] SDP-2B (id:%d) with SCS\n', id);
fprintf('[exp] The time is %s\n', datetime());
profile_runner_sdp2(solver_options, id, runner_options);
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
    fprintf('[exp] SDP-2B (id:%d) with Broyden and memory: %d\n', id, bro_mem);
    fprintf('[exp] The time is %s\n', datetime());
    profile_runner_sdp2(solver_options, id, runner_options);    
    sound(y);
end
