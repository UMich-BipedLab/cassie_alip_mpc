function IRC = Construct_IRC_with_standing()
%CONSTRUCT_IRC Summary of this function goes here
%   Detailed explanation goes here
IRC.turn_rps = 0; % turning velocity rad/s
IRC.motor_power = 0; % related to STO button SA
IRC.step_time = 0; 
IRC.ds = 0; 
IRC.Vx_tgd = 0;
IRC.Vy_tgd_avg = 0;
IRC.H = 0;
IRC.desired_com2stToe_lateral = 0;
IRC.direct_up_down = 0;
IRC.reset_IMU_KF = 0;
IRC.reset_bias = 0;
IRC.CL = 0;

% standing
IRC.controller_mode_des = 0; % desired for the next iter
IRC.yaw_stand_stTD0 = 0;  % Standing pitch
IRC.pitch_stand_stTD0 = 0;  % Standing roll
IRC.roll_stand_stTD0 = 0;  % Standing y offset of the COM in the stDA frame
IRC.p_com_stand_y_stTD0 = 0;  % Add standing bias of x direction
IRC.com_x_offset_stand = 0;

% Autonomy
IRC.command_mode = 0;

% for mpc
IRC.kx = 0;
IRC.ky = 0;
IRC.mu = 0;
end

