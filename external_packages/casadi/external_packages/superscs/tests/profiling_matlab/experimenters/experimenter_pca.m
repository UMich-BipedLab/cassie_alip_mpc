clear
tol = 1e-4;
rng('default')
rng(1);
load gong.mat;
id0 = 8010400;

max_iter = 5e4;          % 50k iterations maximum
max_time = 3 * 60 * 1e3; % 3 minutes max

runner_options = struct('name', 'reg-pca-v2.0');
%% PCA
sound(y);

% --- Run SDPT3
id = id0;
solver_options = SuperSCSConfig.sdpt3Config(...
    'tolerance', tol, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
profile_runner_pca(solver_options, id, runner_options);
sound(y);

% --- Run Sedumi
id = id + 1;
solver_options = SuperSCSConfig.sedumiConfig(...
    'tolerance', tol, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
profile_runner_pca(solver_options, id, runner_options);
sound(y);

% --- Run SCS
id = id + 1;
solver_options = SuperSCSConfig.scsConfig(...
    'tolerance', tol, ...
    'max_iters', max_iter, ...
    'max_time_milliseconds', max_time);
profile_runner_pca(solver_options, id, runner_options);
sound(y);



% 2. Run SuperSCS (Broyden, mem=100, k0=0)
for mem = [100]
    id = id + 1;
    solver_options = SuperSCSConfig.broydenConfig(...
        'tolerance', tol, ...
        'memory', mem, ...
        'max_iters', max_iter, ...
        'max_time_milliseconds', max_time, 'verbose', 2);
    profile_runner_pca(solver_options, id, runner_options);
    sound(y);
end


% 4. Run SuperSCS (Anderson, mem=10, 15, 20)
for mem = [5 10 15 20]
    id = id + 1;
    solver_options = SuperSCSConfig.andersonConfig(...
        'memory', mem,...
        'max_iters', max_iter, ...
        'max_time_milliseconds', max_time , 'verbose', 2);
    solver_options.memory = mem;
    profile_runner_pca(solver_options, id, runner_options);
    sound(y);
end