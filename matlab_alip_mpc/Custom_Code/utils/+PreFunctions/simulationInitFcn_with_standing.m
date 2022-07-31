%% Terrain - Modify Alpha_x/y to change simMechanics ground environment
alpha_x = deg2rad(0);  % change world-y slope (body x) (cassie rotated 90 deg wrt world frame
alpha_y = deg2rad(5);  % change world-x slope (body y)
kx_sim = tan(alpha_x);
ky_sim = tan(alpha_y);

%%
% LA0 = 0.0336;
% LA0 = 0.1;
LA0 = 0;
% LL0 = 0.5;
LL0_L = 0.8;
LL0_R = 0.79;
[qthigh0_L,qknee0_L] = Inverse_Kinematics_p(LA0,LL0_L);
[qthigh0_R,qknee0_R] = Inverse_Kinematics_p(LA0,LL0_R);
qtoe0_L = - qthigh0_L - deg2rad(13) - deg2rad(50);
qtoe0_R = - qthigh0_R - deg2rad(13) - deg2rad(50);
if isSim == 1
    height0 = 0.16+LL0_L; % simmenchanics and ideal simulator has different origin position
else
    height0 = 0.09+LL0_L; % ideal simulator origin position is below original origin for 
end
% q = zeros(20,1);
% q(9) = qthigh0_L; q(10) = qknee0_L; q(12) = -qknee0_L + deg2rad(13); q(13) = qtoe0_L;
% temp = p_LeftToeBottomBack(q);
% height0 = -temp(3) + 0.08 + 0.05; %0.08 is the distance from IMU (User defined origin) to AR defined origin.

h0_output = [ 0.0045; 0; qthigh0_L; qknee0_L; qtoe0_L; -0.0045; 0; qthigh0_R; qknee0_R; qtoe0_R];


% Set initial pelvis position and rotation
pelvisPosition = [0; 0; height0];
initial_direction = pi/2;
pelvisRotation = Rotation3d().rotZYX([initial_direction; 0; 0]).getValue;
% pelvisRotation = Rotation3d().rotZYX([0; 0; 0]).getValue;
% Define initial motor states
figure;
motorPositions = h0_output;
motorVelocities = zeros(10,1);
close(gcf);

% Define intial pelvis state
% pelvisPosition = [0; 0; height0+2];
fix_torso = 0;
fix_z = 0;
% fixed_joint = [1,2,4,5,6]; %cartesian position and Euler Angle
fixed_joint = [2,4,6]; %cartesian position 
if fix_z
    pelvisPosition = [0; 0; 1.5];
else
    pelvisPosition = [0; 0; height0-0.02];
end
Jt = zeros(length(fixed_joint),20);% Torso constraint Jacobian
for i = 1: length(fixed_joint)
    Jt(i,fixed_joint(i)) = 1;
end
pelvisVelocity = pelvisRotation*[0; 0.1; 0];
% pelvisRotation = Rotation3d.identity.getValue;
pelvisAngularVelocity = [0; 0; 0];

% Full state InitCondition
% pelvisPosition = pelvisPosition + [0; 0; 0.02];  % flat
% pelvisPosition = pelvisPosition + [0; 0; 0.08];  % lateral 11 deg
pelvisPosition = pelvisPosition + [0; 0; 0.04];  % lateral 11 deg
qall_ini = [pelvisPosition;zeros(3,1);h0_output(1:4);0;-h0_output(4)+deg2rad(13);h0_output(5:9);0;-h0_output(9)+deg2rad(13);h0_output(10)];
dqall_ini = zeros(20,1);
x_ini = [qall_ini;dqall_ini];

%% noise of measurement
si_Cov_LinearAccelerator = (0.00)^2 * ones(3,1);
si_Cov_AngularVelocity = 0e-6 * ones(3,1);
si_Cov_Orientation = 0e-8 *ones(4,1);
si_Cov_qa = 0e-8 * ones(10,1);
si_Cov_qj = 0e-8 * ones(6,1);
si_Cov_dqa = 0e-4 * ones(10,1);
si_Cov_dqj = 0e-4 * ones(6,1);

%% Standing Test
% % Init origin params
% LA0 = 0;  % Init pitch of torso
% LL0_L = 0.82;  % Init height of torso according to left leg
% LL0_R = 0.79;  % Init height of torso according to right leg
% 
% % Init q_toe
% % Left
% [q_thigh0_L, q_knee0_L] = Inverse_Kinematics_p(LA0, LL0_L);  % Get init thigh and knee angles
% q_toe0_L = - q_thigh0_L - deg2rad(13) - deg2rad(50);  
% % Right
% [q_thigh0_R, q_knee0_R] = Inverse_Kinematics_p(LA0, LL0_R);  % Get init thigh and knee angles
% q_toe0_R = - q_thigh0_R - deg2rad(13) - deg2rad(50); 
% 
% % Init h_pelvis
% if isSim == 1  % SimMechanics
%     h_Origin0 = 0.16 + LL0_L;
% else
%     h_Origin0 = 0.09 + LL0_L;
% end
% 
% h0_output = [0.0045; 0; q_thigh0_L; q_knee0_L; q_toe0_L; -0.0045; 0; q_thigh0_R; q_knee0_R; q_toe0_R];  %[0.0045; 0; q_thigh0; q_knee0; q_toe0; -0.0045; 0; q_thigh0; q_knee0; q_toe0];
% 
% % Init plevis x,y,z & yaw,pitch,roll and Motors
% pelvisPosition = [0; 0; h_Origin0];
% initial_direction = pi/2;  % Set for pi/2 for robust test
% pelvisRotation = Rotation3d().rotZYX([initial_direction; 0; 0]).getValue;
% pelvisVelocity = pelvisRotation*[0; 0; 0];
% pelvisAngularVelocity = [0; 0; 0];
% 
% figure;
% motorPositions = h0_output;
% motorVelocities = zeros(10,1);
% close(gcf);
% 
% % Init pelvis state
% fix_torso = 0;  % Torso constranit for 2-D simulation  NOT YET GOOD
% fix_z = 0;
% if fix_z
%     pelvisPosition = [0; 0; 1.5];
% else
%     pelvisPosition = [0; 0; h_Origin0 - 0.02];
% end
% fixed_index = [2, 4, 6];  % fix [y; yaw; roll] that exceed 2-D plane
% Jt = zeros(length(fixed_index), 20);
% for i = 1:length(fixed_index)
%     Jt(i, fixed_index(i)) = 1;
% end
% 
% % Configure q0, dq0 and x_ini
% q0 = [pelvisPosition;...  % x, y, z 
%     zeros(3, 1);...  % yaw, pitch, roll
%     h0_output(1:4, :);...  % q_abduction, q_rotation, q_thigh, q_knee for left leg
%     0;...
%     -h0_output(4, :) + deg2rad(13);  % q_tarsus for left leg
%     h0_output(5, :);...  % q_toe for left leg
%     h0_output(6:9, :);...  % q_abduction, q_rotation, q_thigh, q_knee for right leg
%     0;...
%     -h0_output(9, :) + deg2rad(13);...  % q_tarsus for right leg
%     h0_output(10, :)];  % q_toe for right leg
% dq0 = zeros(20, 1);
% x_ini = [q0; dq0];











