clear 
tol = 1e-3;
rng('default')
rng(1);
load gong.mat;
%% SDP1
sound(y);

% -- Run SCS
id = 77700;
o = profile_ops;
o.do_super_scs = 1;
o.direction = 200;
o.k0=0;o.k1=0;o.k2=0;
profile_runner_rqp;
sound(y);


id = id + 1;
o = profile_ops;
o.do_super_scs = 1;
o.direction = 100;
o.k0=0;o.k1=1;o.k2=1;
o.memory = 100;
profile_runner_rqp;
sound(y);

id = id + 1;
o = profile_ops;
o.do_super_scs = 1;
o.direction = 150;
o.k0=1;o.k1=1;o.k2=1;
o.memory = 10;
profile_runner_rqp;
sound(y);