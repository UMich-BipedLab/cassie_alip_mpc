function [] = formulate_alip_mpc_fp_opt(mpc_info)
import casadi.*

%% Extract Inputs
% params
g = 9.806;

% symbolics
f_xc_slip = mpc_info.symbolics.f_xc_slip_limit;
f_yc_slip = mpc_info.symbolics.f_yc_slip_limit;

% optimization
sol_type = mpc_info.opt.qpsolver;
N_steps_ahead = mpc_info.opt.N_steps_ahead;
N_intervals = mpc_info.opt.N_intervals;
Q_running = mpc_info.opt.Q;

% dimensions
n_x = 4;
n_ufp = 2;

%% Dynamics Derivation
x = SX.sym('x',[n_x,1]);  % x = [xc; yc; Lx; Ly];
u = SX.sym('u',[n_ufp,1]);

% params
dt_sym = SX.sym('dt_sym');
m_sym = SX.sym('m_sym');
zH_sym = SX.sym('zH_sym');

% continuous time dynamics
A = [...
    0,      0,      0,              1/(m_sym*zH_sym);  % xcdot
    0,      0,      -1/(m_sym*zH_sym), 0;          % ycdot
    0,      -m_sym*g,   0,              0;              % Lxdot
    m_sym*g,    0,      0,              0];             % Lydot
xdot = A * x;

% impact dynamics
Bd_impact = [-1, 0; 0, -1; 0, 0; 0, 0];

% Discrete time dynamics (Ad_ALIP = expm(A))
x_next_exact = Ad_ALIP(m_sym,zH_sym,dt_sym)*x + Bd_impact*u;
fd_alip = Function('fd_alip',{x,u,m_sym,zH_sym,dt_sym},{x_next_exact});

%% Opti Variables and Parameters
opti = casadi.Opti();

% opt vars
X_traj = opti.variable(n_x,N_steps_ahead);
Ufp_traj = opti.variable(n_ufp,N_steps_ahead);

% parameters
p_x_init = opti.parameter(n_x,1);
p_stanceLeg = opti.parameter(1,1); % left_stance = -1
p_m = opti.parameter(1,1);         % cassie mass = 31.8852
p_zH = opti.parameter(1,1);
p_Ts = opti.parameter(1,1);
p_Tr = opti.parameter(1,1);
p_leg_width = opti.parameter(1,1);
p_Lx_offset = opti.parameter(1,1);
p_Ly_des = opti.parameter(1,1);
p_ufp_max = opti.parameter(n_ufp,1);
p_ufp_min = opti.parameter(n_ufp,1);
p_k = opti.parameter(2,N_steps_ahead); % [kx; ky]
p_mu = opti.parameter(2,N_steps_ahead); % friction coefficient [mux,muy]
p_Q_term = opti.parameter(n_x,n_x);

%% Desired State
l = sqrt(g/p_zH); % lip constant

% Compute xc_des
xc_des = (1/(p_m*p_zH*l))*tanh(l*p_Ts/2)*p_Ly_des;

% Compute yc, Lx desired
stance_sign = p_stanceLeg;
for i = 1:N_steps_ahead
    % start with the desired values at next step so if in left stance then the first des
    % should correspond to those of right stance
    % Left Stance: yc = -W/2, Lx = + 0.5*m*H*W*l*tanh(Ts*l/2)
    % Right Stance: yc = W/2, Ly = - 0.5*m*H*W*l*tanh(Ts*l/2)
    yc_des_traj{i} = stance_sign * (-p_leg_width / 2);
    Lx_des_traj{i} = p_Lx_offset + stance_sign * (0.5*p_m*p_zH*p_leg_width*l*tanh(0.5*p_Ts*l));
    stance_sign = -stance_sign;
end

for i = 1:N_steps_ahead
    X_des{i} = [xc_des; yc_des_traj{i}; Lx_des_traj{i}; p_Ly_des];
end
%% Trajectory
cost = 0;
for n = 1:N_steps_ahead
    % dynamics constraints
    if n == 1
        dt = p_Tr;
        Xkm1 = p_x_init;
    else
        dt = p_Ts;
        Xkm1 = X_traj(:,n-1);
    end
    Xk = fd_alip(Xkm1,Ufp_traj(:,n),p_m,p_zH,dt);
    opti.subject_to( X_traj(:,n) == Xk );
    
    % Outputs
    for i = 0:N_intervals
        dt_interval = p_Ts/N_intervals;
        Yk = Ad_ALIP(p_m,p_zH,i*dt_interval)*Xk;        % state output
        
        % slip constraint
        xc_slip_limit = f_xc_slip(p_zH,p_mu(1,n),p_k(1,n));
        yc_slip_limit = f_yc_slip(p_zH,p_mu(2,n),p_k(2,n));
        opti.subject_to( -xc_slip_limit <= Yk(1) <= xc_slip_limit );
        opti.subject_to( -yc_slip_limit <= Yk(2) <= yc_slip_limit );
        
        % mechanical constraint
        xc_mech_limit = p_ufp_max(1)/2;
        opti.subject_to( -xc_mech_limit <= Yk(1) <= xc_mech_limit );
        
        % cost
        if i == N_intervals
            if n < N_steps_ahead
                Q = Q_running;
            else
                Q = p_Q_term;
            end
            X_error = Yk - X_des{n};
            cost = cost + X_error.'*Q*X_error;
        end
    end
end

% opti cost
opti.minimize(cost);

%% Copy Opti for both LS and RS. Different fp constraints next...
opti_LS = opti.copy();
opti_RS = opti.copy();

%% Foot Placement Constraints
% Ufp x foot placement constraint
for n = 1:N_steps_ahead
    opti_LS.subject_to(p_ufp_min(1) <= Ufp_traj(1,n) <= p_ufp_max(1))
    opti_RS.subject_to(p_ufp_min(1) <= Ufp_traj(1,n) <= p_ufp_max(1))
end

% Ufp y foot placement constraints... need to correct for signage depending
% on stance foot
% if in LS next fp constr is -ufpy_max <= ufpy <= -ufpy_min
% if in RS next fp constr is ufpy_min <= ufpy <= ufpy_max
ufp_y_max = p_ufp_max(2); % absolute values
ufp_y_min = p_ufp_min(2); % absolute value (always positive)

% Left Stance
for n = 1:2:N_steps_ahead
    % y foot placement constraint (don't allow crossover)
    opti_LS.subject_to(-ufp_y_max <= Ufp_traj(2,n) <= -ufp_y_min);
    opti_LS.subject_to(ufp_y_min <= Ufp_traj(2,n+1) <= ufp_y_max);
end
% Right Stance
for n = 1:2:N_steps_ahead
    opti_RS.subject_to(ufp_y_min <= Ufp_traj(2,n) <= ufp_y_max);
    opti_RS.subject_to(-ufp_y_max <= Ufp_traj(2,n+1) <= -ufp_y_min);
end

%% Choose Opti solver
if sol_type == "qrqp"
    %% QRQP
    % C++ Code Generation
    opts = struct('qpsol','qrqp','print_iteration',false,'print_header',false,'print_time',false);
    opts.qpsol_options = struct('print_iter',false,'print_header',false,'print_info',false);
    opti_LS.solver('sqpmethod',opts);
    opti_RS.solver('sqpmethod',opts);
    
    % code generation
    opt_args = {...
        X_traj,...
        Ufp_traj,...
        p_x_init,...
        p_stanceLeg,...
        p_m,...
        p_zH,...
        p_Ts,...
        p_Tr,...
        p_leg_width,...
        p_Lx_offset,...
        p_Ly_des,...
        p_ufp_max,...
        p_ufp_min,...
        p_k,...
        p_mu,...
        p_Q_term};
    ufp_com = X_traj(1:2,1) - Ufp_traj(:,1);
    opt_output = {X_traj, Ufp_traj, ufp_com};
    
    name_cg_LS = char("cassie_LS_simplempc" + ...
        "_Ns" + N_steps_ahead + ...
        "_Ni" + N_intervals + ...
        "_" + sol_type);
    f_opti_LS = opti_LS.to_function(name_cg_LS,opt_args,opt_output);
    
    name_cg_RS = char("cassie_RS_simplempc" + ...
        "_Ns" + N_steps_ahead + ...
        "_Ni" + N_intervals + ...
        "_" + sol_type);
    f_opti_RS = opti_RS.to_function(name_cg_RS,opt_args,opt_output);
    
    compile_src = true;
    if compile_src
        cg_options = struct();
        cg = CodeGenerator(name_cg_LS,cg_options);
        cg.add(f_opti_LS);
        disp('Generating LS C code...');
        tic
        cg.generate()
        movefile([name_cg_LS '.c'],['gen/cassie_mpc_fp_solvers/' name_cg_LS '.c'])
        disp("Generation time = " + toc);
        
        % Right stance solver
        cg_options = struct();
        cg = CodeGenerator(name_cg_RS,cg_options);
        cg.add(f_opti_RS);
        disp('Generating RS C code...');
        tic
        cg.generate()
        movefile([name_cg_RS '.c'],['gen/cassie_mpc_fp_solvers/' name_cg_RS '.c'])
        disp("Generation time = " + toc);
    end
    
    
end

end

