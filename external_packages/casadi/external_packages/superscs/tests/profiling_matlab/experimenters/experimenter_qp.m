clear all
tol = 1e-3;
rng('default')
rng(1);
load gong.mat;
%% SDP1
%sound(y);

% -- Run SCS
id = 463682880;
o = SuperSCSConfigFactory.scsConfig();
profile_runner_qp;
sound(y);

% -- Run SuperSCS (Broyden, mem = 100, no k0);
id = id + 1;
o = SuperSCSConfigFactory.broydenConfig();
o.memory = 100; o.k0 = 0;
profile_runner_qp;
sound(y);


% -- Run SuperSCS (Broyden, mem = 100, k0: activated);
id = id + 1;
o = SuperSCSConfigFactory.broydenConfig();
o.memory = 100;
profile_runner_qp;
sound(y);

% -- Run SuperSCS with AA, memory = 15 and k0
id = id + 1;
o = SuperSCSConfigFactory.andersonConfig();
o.memory = 15;
profile_runner_qp;
sound(y);

% -- Run SuperSCS with AA, memory = 20 and k0
id = id + 1;
o = SuperSCSConfigFactory.andersonConfig();
o.memory = 20;
profile_runner_qp;
sound(y);


% -- Run SuperSCS with AA, memory = 10 and k0
id = id + 1;
o = SuperSCSConfigFactory.andersonConfig();
o.memory = 10;
profile_runner_qp;
sound(y);