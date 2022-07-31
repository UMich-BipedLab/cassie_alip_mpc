%% script for generating Matrix library for IK for standing (PD) to shortening computing time
clear all;
clc;
root_dir = pwd;

%% ======== Init: Define q_knee range lists and Ks ========
%% H_com range lists
% H_com bounds and step length
H_com_LR_ub = 0.8;
H_com_LR_lb = 0.4;
H_step_length = 0.05;

% H_com_L_list
H_com_L_list = H_com_LR_lb:H_step_length:H_com_LR_ub;
% H_com_R_list
H_com_R_list = H_com_LR_lb:H_step_length:H_com_LR_ub;

%% ======== Library generation ========
getIdx_StandIK;
for i_L = 1:1:length(H_com_L_list)
    for i_R = 1:1:length(H_com_R_list)
        %% Computation
        % Init q_iter_stand
        q_iter_stand = zeros(20, 1);
        dq_iter_stand = zeros(20, 1);
        
        % Init desired commands
        p_LT_r_stTDA_des = [0; -0.15; H_com_L_list(i_L)];
        p_RT_r_stTDA_des = [0; 0.15; H_com_R_list(i_R)];
        hr_stand_part = [p_LT_r_stTDA_des; p_RT_r_stTDA_des];
        
        % Get q_l/r_thigh and q_l/r_knee
        [q_iter_stand(Idx_l_thigh_stand), q_iter_stand(Idx_l_knee_stand)]= Inverse_Kinematics_p(0, norm(p_LT_r_stTDA_des));
        [q_iter_stand(Idx_r_thigh_stand), q_iter_stand(Idx_r_knee_stand)]= Inverse_Kinematics_p(0, norm(p_RT_r_stTDA_des));
        
        % Set IK initials
        % Desired unchanged states
        q_iter_stand(1:3, :) = 0;  % Init guess of q_xyz
        q_iter_stand(4:6, :) = zeros(3, 1);  % Desired euler angles
        q_iter_stand([Idx_l_rotation_stand, Idx_r_rotation_stand]) = zeros(2, 1);  % Desired q_rotation
        q_iter_stand([Idx_l_shin_stand, Idx_r_shin_stand]) = 0;  % Desired q_lr_shin
        % Desired changeable initial states from the current q_rigid
        q_iter_stand([Idx_l_tarsus_stand, Idx_r_tarsus_stand]) =...
            -q_iter_stand([Idx_l_knee_stand, Idx_r_knee_stand]) + deg2rad(13);
        
        %% IK for standing controller
        % Init params
        iter_count_stand = 0;  % Iteration counter
        max_iter_stand = 10;  % Max iteration

        % Define actuated joints' indexs and controlled motors' indexs
        q_stand_index = [Idx_l_abduction_stand, Idx_l_thigh_stand, Idx_l_knee_stand, Idx_r_abduction_stand, Idx_r_thigh_stand, Idx_r_knee_stand];
        control_stand_index = [Idx_l_abduction_motor_stand, Idx_l_thigh_motor_stand, Idx_l_knee_motor_stand, Idx_r_abduction_motor_stand, Idx_r_thigh_motor_stand, Idx_r_knee_motor_stand];

        % Iterative IK for standing controller
        J_square_stand = zeros(6, 6);
        while 1
            % IK -- Geometry and IK combined method
            % q_iter_stand update
            q_iter_stand([Idx_l_tarsus_stand, Idx_r_tarsus_stand], :) =...
                -q_iter_stand([Idx_l_knee_stand, Idx_r_knee_stand]) + deg2rad(13);
%             q_iter_stand([Idx_l_thigh_stand, Idx_r_thigh_stand], :) =...
%                 q_rigid([Idx_l_thigh_stand, Idx_r_thigh_stand]) - 1/2*(q_iter_stand([Idx_l_knee_stand, Idx_r_knee_stand]) - q_rigid([Idx_l_knee_stand, Idx_r_knee_stand]));  % Geometry relationship

            % Compute dX, J       
            % Compute p, Jp for COM
            p_com_iter_stand = p_COM(q_iter_stand);
%             p_com_iter_stand = p_com_iter_stand + YToolkits.Angles.Rz(q_iter_stand(4))*[obj.com_x_offset; 0; 0];
            Jp_com_iter_stand = Jp_COM(q_iter_stand);

            % Compute p, Jp for LT
            p_LT_iter_stand = p_LeftToeJoint(q_iter_stand);
            Jp_LT_iter_stand = Jp_LeftToeJoint(q_iter_stand);

            % Compute p, Jp for RT
            p_RT_iter_stand = p_RightToeJoint(q_iter_stand);
            Jp_RT_iter_stand = Jp_RightToeJoint(q_iter_stand);

            % Compute p, Jp for com r.t. left toe
            p_LT_r_iter_stand = p_com_iter_stand - p_LT_iter_stand;
            Jp_LT_r_iter_stand = Jp_com_iter_stand - Jp_LT_iter_stand;

            % Compute p, Jp for com r.t. right toe
            p_RT_r_iter_stand = p_com_iter_stand - p_RT_iter_stand;
            Jp_RT_r_iter_stand = Jp_com_iter_stand - Jp_RT_iter_stand;

            % Define complete J
            J_complete_stand = [Jp_LT_r_iter_stand; Jp_RT_r_iter_stand];
            J_square_stand = [J_complete_stand(:, Idx_l_abduction_stand), J_complete_stand(:, Idx_l_thigh_stand), (J_complete_stand(:, Idx_l_knee_stand) - J_complete_stand(:, Idx_l_tarsus_stand)),...
                J_complete_stand(:, Idx_r_abduction_stand), J_complete_stand(:, Idx_r_thigh_stand), (J_complete_stand(:, Idx_r_knee_stand) - J_complete_stand(:, Idx_r_tarsus_stand))];
            J_square_stand(:, [3, 6]) = J_square_stand(:, [3, 6]) - 1/2*J_complete_stand(:, [Idx_l_thigh_stand, Idx_r_thigh_stand]);

            % Judge whether stop the loop (by accuracy or max_iter)
            % **(MUST AFTER COMPUTE J_SQUARE_STAND OTHERWISE CANNOT GET FINAL RESULTS OF dq and ddq)**
            h_iter_stand = [p_LT_r_iter_stand; p_RT_r_iter_stand];
            p_delta_stand = hr_stand_part - h_iter_stand;
            if iter_count_stand >= max_iter_stand || max(abs(p_delta_stand)) < 1e-3
                break;
            end

            % Compute delta q
            q_delta_stand = J_square_stand\p_delta_stand;

            % Update qd_control_stand_PD with appropriate amplitude
            if max(abs(q_delta_stand)) > 0.1
                q_delta_stand = 0.1/max(abs(q_delta_stand))*q_delta_stand;
            end
            q_iter_stand(q_stand_index, :) = q_iter_stand(q_stand_index, :) + q_delta_stand;

            % Joint limits
            % For joints except lr_rotation_motor
            for i = 1:6
                motor_index_temp = control_stand_index(:, i);
                q_index_temp = q_stand_index(:, i);
                q_iter_stand(q_index_temp, :) = clamp2Limit_StandIK(q_iter_stand(q_index_temp, :), motor_index_temp);
            end

            % Update iter_count
            iter_count_stand = iter_count_stand + 1;
        end

        % Apply joint limits for unchanged joints
%         q_iter_stand(Idx_l_rotation_stand, :) = Clamp2Limit(obj, q_iter_stand(Idx_l_rotation_stand, :), Idx_l_rotation_motor_stand);  % Joint limits apply
%         q_iter_stand(Idx_r_rotation_stand, :) = Clamp2Limit(obj, q_iter_stand(6, :), Idx_r_rotation_motor_stand);  % Joint limits apply

        % Get toes angle for complete q generation
        [q_LT_stand_abs, q_RT_stand_abs, dq_LT_stand_abs, dq_RT_stand_abs] = getToeGeneralizedAngle(q_iter_stand, dq_iter_stand);
        q_iter_stand(Idx_l_toe_stand, :) = -q_LT_stand_abs;
        q_iter_stand(Idx_r_toe_stand, :) = -q_RT_stand_abs;
        
        %% Compute dX, J after get desired q_iter_stand
        % Compute p, Jp for COM
        p_com_iter_stand = p_COM(q_iter_stand);
%             p_com_iter_stand = p_com_iter_stand + YToolkits.Angles.Rz(q_iter_stand(4))*[obj.com_x_offset; 0; 0];
        Jp_com_iter_stand = Jp_COM(q_iter_stand);

        % Compute p, Jp for LT
        p_LT_iter_stand = p_LeftToeJoint(q_iter_stand);
        Jp_LT_iter_stand = Jp_LeftToeJoint(q_iter_stand);

        % Compute p, Jp for RT
        p_RT_iter_stand = p_RightToeJoint(q_iter_stand);
        Jp_RT_iter_stand = Jp_RightToeJoint(q_iter_stand);

        % Compute p, Jp for com r.t. left toe
        p_LT_r_iter_stand = p_com_iter_stand - p_LT_iter_stand;
        Jp_LT_r_iter_stand = Jp_com_iter_stand - Jp_LT_iter_stand;

        % Compute p, Jp for com r.t. right toe
        p_RT_r_iter_stand = p_com_iter_stand - p_RT_iter_stand;
        Jp_RT_r_iter_stand = Jp_com_iter_stand - Jp_RT_iter_stand;
        
        % Define complete J
        % For abduction, thigh and knee
        J_complete_stand_lib = [Jp_LT_r_iter_stand; Jp_RT_r_iter_stand];
        J_square_stand_lib = [J_complete_stand_lib(:, Idx_l_abduction_stand), J_complete_stand_lib(:, Idx_l_thigh_stand), (J_complete_stand_lib(:, Idx_l_knee_stand) - J_complete_stand_lib(:, Idx_l_tarsus_stand)),...
            J_complete_stand_lib(:, Idx_r_abduction_stand), J_complete_stand_lib(:, Idx_r_thigh_stand), (J_complete_stand_lib(:, Idx_r_knee_stand) - J_complete_stand_lib(:, Idx_r_tarsus_stand))];
        J_square_stand_lib(:, [3, 6]) = J_square_stand_lib(:, [3, 6]) - 1/2*J_complete_stand_lib(:, [Idx_l_thigh_stand, Idx_r_thigh_stand]);
        J_square_stand_inv_lib = J_square_stand_lib^(-1);
        % For yaw, pitch and roll
        J_eulerAngle_complete_stand_lib = J_complete_stand_lib;
        J_eulerAngle_complete_stand_lib(:, 4) = J_complete_stand_lib(:, 4) - J_complete_stand_lib(:, Idx_l_rotation_stand) - J_complete_stand_lib(:, Idx_r_rotation_stand);
        J_eulerAngle_stand_lib = J_eulerAngle_complete_stand_lib(:, 4:6);

        %% Generate MatrixLibrary
        MatrixLibrary_StandIK.q(:, i_L, i_R) = q_iter_stand;
        MatrixLibrary_StandIK.J_square_stand_inv(:, :, i_L, i_R) = J_square_stand_inv_lib;
        MatrixLibrary_StandIK.J_eulerAngle_stand(:, :, i_L, i_R) = J_eulerAngle_stand_lib;
    end
end
MatrixLibrary_StandIK.H_com_L_list = H_com_L_list;
MatrixLibrary_StandIK.H_com_R_list = H_com_R_list;
MatrixLibrary_StandIK.H_com_L_range = [H_com_LR_lb, H_com_LR_ub, H_step_length];
MatrixLibrary_StandIK.H_com_R_range = [H_com_LR_lb, H_com_LR_ub, H_step_length];

%% ======== Save Library ========
save([root_dir '\CustomCodes\utils\funcs\MatrixLibrary\StandIK\MatrixLibrary_StandIK_v1'], 'MatrixLibrary_StandIK');

%% ======== Helper Funcs ========
function [joint_clamped] = clamp2Limit_StandIK(joint, index)
    % Temp matrix
    ActuatorLimits_temp = [-0.2618, 0.3927; -0.3927, 0.3927; -0.8727, 1.3963; -2.8623, -0.7330; -2.4435, -0.5236;...
            -0.3927, 0.2618; -0.3927, 0.3927; -0.8727, 1.3963; -2.8623, -0.7330; -2.4435, -0.5236];
    % Apply joint limits to each joints
    joint_clamped = median([ActuatorLimits_temp(index, 1), ActuatorLimits_temp(index, 2), joint]);
end