function EstStates = Construct_EstStates_with_standing()
%CONSTRUC_ESTSTATES Summary of this function goes here
%   Detailed explanation goes here
EstStates.isCalibrated = false;
EstStates.Voltage = 0;
EstStates.initialized = 0;
EstStates.q = zeros(20,1);
EstStates.dq = zeros(20,1);
EstStates.dq_AR = zeros(20,1);
EstStates.a_world = zeros(3,1);

EstStates.s = 0;
EstStates.t = 0;
EstStates.stanceLeg = -1;
EstStates.LegSwitch = 0;

EstStates.qsL_1 = 0;
EstStates.qsL_2 = 0;
EstStates.qsR_1 = 0;
EstStates.qsR_2 = 0;

EstStates.dqsL_1 = 0;
EstStates.dqsL_2 = 0;
EstStates.dqsR_1 = 0;
EstStates.dqsR_2 = 0;

EstStates.GRF_z = zeros(2,1);
EstStates.GRF_L = zeros(2,1);
EstStates.GRF_R = zeros(2,1);
EstStates.dqxyz_cov = zeros(3,3);
EstStates.qxyz_cov = zeros(3,3);

% standing additions
EstStates.controller_mode = 0;
EstStates.t_to_walk = 0;
EstStates.count_step2stand = 0;
EstStates.t_stand_from_walk = 0;
end

