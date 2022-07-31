clear
rng('default'); rng(1);
load gong.mat;

%% SDP1
sound(y);

% 1. Run SCS
id = 301593185;
solver_options = SuperSCSConfigFactory.scsConfig();
profile_runner_sdp1(solver_options, id);
sound(y);


% 2A. Broyden (k0=1)
id = id + 1;
solver_options = SuperSCSConfigFactory.broydenConfig();
profile_runner_sdp1(solver_options, id);
sound(y);

% 2A. Broyden (k0=0)
id = id + 1;
solver_options.k0 = 0;
profile_runner_sdp1(solver_options, id);
sound(y);

% 3. Anderson (k0=1)
id = id + 1;
solver_options = SuperSCSConfigFactory.andersonConfig();
profile_runner_sdp1(solver_options, id);
sound(y);