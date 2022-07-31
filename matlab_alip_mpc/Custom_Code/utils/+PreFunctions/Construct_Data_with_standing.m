function Data = Construct_Data_with_standing()
% timing
Data.t_total = 0;
Data.t = 0;
Data.s = 0;

% states
Data.q = zeros(20,1);
Data.dq = zeros(20,1);

% control
Data.u = zeros(10,1);

% Controller mode
Data.controller_mode = 0;

% for walking (logged at all times)
Data.T_period = 0;
Data.stanceLeg = 0;
Data.tg_direction = 0;
Data.stTD0 = 0;

% kinematics - toes
Data.p_LToe_world = zeros(3,1);
% Data.p_LToe_stTD0 = zeros(3,1);

Data.p_RToe_world = zeros(3,1);
% Data.p_RToe_stTD0 = zeros(3,1);

% Data.v_LToe_world = zeros(3,1);
% Data.v_LToe_stTD0 = zeros(3,1);

% Data.v_RToe_world = zeros(3,1);
% Data.v_RToe_stTD0 = zeros(3,1);

% kinematics - com
Data.px_com_world = 0;
% Data.px_com_stTD0 = 0;

Data.py_com_world = 0;
% Data.py_com_stTD0 = 0;

Data.pz_com_world = 0;
% Data.pz_com_stTD0 = 0;

Data.vx_com_world = 0;
% Data.vx_com_stTD0 = 0;

Data.vy_com_world = 0;
% Data.vy_com_stTD0 = 0;

Data.vz_com_world = 0;
% Data.vz_com_stTD0 = 0;

% kinematics - relative com to toes
Data.rp_LToe_world = zeros(3,1);
Data.rp_LToe_world_fil = zeros(3,1);

Data.rp_RToe_world = zeros(3,1);
Data.rp_RToe_world_fil = zeros(3,1);

% kinematics - angular momentum
Data.Lx_LToe_world = 0;
% Data.Lx_LToe_stTD0 = 0;

Data.Lx_RToe_world = 0;
% Data.Lx_RToe_stTD0 = 0;

Data.Ly_LToe_world = 0;
% Data.Ly_LToe_stTD0 = 0;

Data.Ly_RToe_world = 0;
% Data.Ly_RToe_stTD0 = 0;

% Virtual constraints
Data.hr = zeros(8,1);
Data.h0 = zeros(8,1);

%% walking
% targets
Data.Vx_tgd_des = 0;    % psuedo velocity x desired (tgd = target direction) ~ Ly/mH
Data.Vy_tgd_des = 0;    % psuedo velocity y desired (tgd) ~ Lx/mH
Data.Lx_tgd_des = 0;
Data.Ly_tgd_des = 0;

% kinematics (walking specific)
Data.p_stToe_world = zeros(3,1);
Data.p_stToe_stTD0 = zeros(3,1);

Data.p_swToe_world = zeros(3,1);
Data.p_swToe_stTD0 = zeros(3,1);

Data.rp_stToe_world = zeros(3,1);
Data.rp_stToe_fil_world = zeros(3,1);
Data.rp_stToe_fil_stTD0 = zeros(3,1);

Data.Lx_stToe_world = 0;
Data.Lx_stToe_stTD0_obs = 0;
Data.Lx_stToe_stTD0_kf = 0;

Data.Ly_stToe_world = 0;
Data.Ly_stToe_stTD0_obs = 0;
Data.Ly_stToe_stTD0_kf = 0;

Data.vx_com_tgd = 0;
Data.vy_com_tgd = 0;
Data.vz_com_tgd = 0;

% foot placement
Data.x0_next_goal_world = 0;
Data.x0_next_goal_tgd = 0;

Data.y0_next_goal_world = 0;
Data.y0_next_goal_tgd = 0;

% ALIP state estimate
Data.xf_this_stTD0 = 0;
Data.yf_this_stTD0 = 0;
Data.Lxf_this_stTD0 = 0;
Data.Lyf_this_stTD0 = 0;

% MPC FP
Data.ufp_sol_rel_st_x = 0; % mpc footplacement before aligning with target direction
Data.ufp_sol_rel_st_y = 0;
Data.ufp_sol_rel_com_x = 0;
Data.ufp_sol_rel_com_y = 0;

% Terrain info
Data.kx_body = 0;
Data.kx_world = 0;
Data.ky_body = 0;
Data.ky_world = 0;
Data.mu = 1;

% Joint control
Data.qd_control = zeros(8,1);
Data.dqd_control = zeros(8,1);
Data.q0_control = zeros(8,1);
Data.dq0_control = zeros(8,1);

% Inverse kinematics
% Data.iter_num = 0;

%% Autonomy
% Data.V_com_x_Planner = 0;
% Data.V_com_y_Planner = 0;
% Data.yaw_des_Planner = 0;
% Data.Planner_vel_x = 0;
% Data.Planner_vel_y = 0;
% Data.Planner_yaw = 0;
% Data.command_mode = 0;

end