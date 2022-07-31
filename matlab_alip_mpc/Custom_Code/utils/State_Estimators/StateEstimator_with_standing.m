% FG State Estimator
classdef StateEstimator_with_standing <...
        matlab.System &...
        matlab.system.mixin.Propagates &...
        matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties  % Tunable params     
        Ks_L1;
        Ks_L2;
        Ks_R1;
        Ks_R2;

        Cov_LRT_r_body_x;
        Cov_LRT_r_body_y;
        Cov_LRT_r_body_z;
        Cov_LinearAccelerator_xy;
        Cov_LinearAccelerator_z;
        
        vx_slide_toe_1;
        vx_slide_toe_2;
        Tx_slide_toe_2;

        vy_slide_toe_1;
        vy_slide_toe_2;
        Ty_slide_toe_2;

        vz_slide_toe_1;
        vz_slide_toe_2;
        Tz_slide_toe_2;

        sample_time;
    end
    properties (Access = private) 
        t0 = 0;  % record the timestamp of the start of each step
        t_pre = 0;  % record previous t (each step at the end of estimator)
        s = 0;  % percentage of each step
    end
    properties (Access = private)  % Biases
        bias_z = 0;
    end
    properties (Access = private)
        initialized = 0;
        
        %% Walking
        stanceLeg = -1;  % -1: stance leg is left; ...
        GRF_sw_z = 0;
        GRF_st_z = 0;
        p_stT = zeros(3, 1);
        p_swT = zeros(3, 1);
        
        %% Standing
        % Stand to walk
        Flag_stand2walk = 0;
        t_to_walk_ini = 0;
        t_stand_from_walk_ini = 0;
        
        % Walk to stand
        Flag_walk2stand = 0;
        count_step2stand = 0;
        
        %% Controller mode
        controller_mode = 0;  % Init as stand
    end
    properties (Access = private)  % Kalman Filter
        % Mu and Sigma
        vOpOpswT_KF_x = zeros(3, 1); % pO: x,y,z; vO: dx,dy,dz; pswT: generalized coords of swT
        vOpOpswT_KF_y = zeros(3, 1);
        vOpOpswT_KF_z = zeros(3, 1);
        sigma_vOpOpswT_KF_x = 1000*eye(3);
        sigma_vOpOpswT_KF_y = 1000*eye(3);
        sigma_vOpOpswT_KF_z = 1000*eye(3);
    end

    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        function [EstStates, q, EulerRates, q_xyz, dq_xyz, a_world] = stepImpl(obj, cassieOutputs, IRC, t_total, isSim, Controller2Estimator)
            %% ======== Init of desired outputs ========
            EstStates = PreFunctions.Construct_EstStates_with_standing();  % State class to convey
            q = zeros(20, 1);
            dq = zeros(20, 1);
            q_xyz = zeros(3, 1);
            dq_xyz = zeros(3, 1);
            EulerRates = zeros(3, 1);
            a_world = zeros(3, 1);  % Acceleration in 3-D
            % Init GRF for legs
            GRF_L = zeros(2, 1);
            GRF_R = zeros(2, 1);
            
            %% ======== Get variables ========
            if t_total > 0.001 && cassieOutputs.isCalibrated
                %% Get q, dq
                [q_yaw, q_pitch, q_roll, dq_yaw, dq_pitch, dq_roll] = Imu2Euler(cassieOutputs.pelvis.vectorNav.orientation, cassieOutputs.pelvis.vectorNav.angularVelocity);
                a_raw = cassieOutputs.pelvis.vectorNav.linearAcceleration;
            	a_world = YToolkits.Angles.Rz(q_yaw)*YToolkits.Angles.Ry(q_pitch)*YToolkits.Angles.Rx(q_roll)*a_raw;
                a_world = a_world - [0; 0; 9.806];
            
                % Get qa, qj
                % Actuated joints
                qa = CassieModule.getDriveProperty(cassieOutputs, 'position');
                dqa = CassieModule.getDriveProperty(cassieOutputs, 'velocity');
                % Unactuated joints
                qj = CassieModule.getJointProperty(cassieOutputs, 'position');
                dqj = CassieModule.getJointProperty(cassieOutputs, 'velocity');
                % Orientation
                q_orientation = cassieOutputs.pelvis.vectorNav.orientation;
                % Split q
                qa_L = qa(1:5, :);
                qa_R = qa(6:10, :);
                qj_L = qj(1:2, :);
                qj_R = qj(4:5, :);  % 3rd is for footJoint (Actually GRF_z in non SimMechanics simulation)
                % Split dq
                dqa_L = dqa(1:5, :);
                dqa_R = dqa(6:10, :);
                dqj_L = dqj(1:2, :);
                dqj_R = dqj(4:5, :);  % 3rd is for footJoint (Actually GRF_z in non SimMechanics simulation)
                % Springs  ????????
                qs_L = getSpringDeflectionAngleV2(qa_L(4), qj_L(1), qj_L(2));
                qs_R = getSpringDeflectionAngleV2(qa_R(4), qj_R(1), qj_R(2));
                dqs_L = getSpringDeflectionRateV2(qa_L(4), qj_L(1), qj_L(2), dqa_L(4), dqj_L(1), dqj_L(2));
                dqs_R = getSpringDeflectionRateV2(qa_R(4), qj_R(1), qj_R(2), dqa_R(4), dqj_R(1), dqj_R(2));
                
                % Assign joint q, dq values accordingly
                q_abduction_L = qa_L(1, :);
                q_rotation_L = qa_L(2, :);
                q_thigh_L = qa_L(3, :);
                q_knee_L = qa_L(4, :);
                q_knee_shin_L = qj_L(1, :);
                q_shin_tarsus_L = qj_L(2, :);
                q_toe_L = qa_L(5, :);
                
                q_abduction_R = qa_R(1, :);
                q_rotation_R = qa_R(2, :);
                q_thigh_R = qa_R(3, :);
                q_knee_R = qa_R(4, :);
                q_knee_shin_R = qj_R(1, :);
                q_shin_tarsus_R = qj_R(2, :);
                q_toe_R = qa_R(5, :);
                
                dq_abduction_L = dqa_L(1, :);
                dq_rotation_L = dqa_L(2, :);
                dq_thigh_L = dqa_L(3, :);
                dq_knee_L = dqa_L(4, :);
                dq_knee_shin_L = dqj_L(1, :);
                dq_shin_tarsus_L = dqj_L(2, :);
                dq_toe_L = dqa_L(5, :);
                
                dq_abduction_R = dqa_R(1, :);
                dq_rotation_R = dqa_R(2, :);
                dq_thigh_R = dqa_R(3, :);
                dq_knee_R = dqa_R(4, :);
                dq_knee_shin_R = dqj_R(1, :);
                dq_shin_tarsus_R = dqj_R(2, :);
                dq_toe_R = dqa_R(5, :);
                
                % Get q and dq (20, 1)
                q_temp = [
                    0; 0; 0; q_yaw; q_pitch; q_roll;...
                    q_abduction_L; q_rotation_L; q_thigh_L; q_knee_L; q_knee_shin_L; q_shin_tarsus_L; q_toe_L;
                    q_abduction_R; q_rotation_R; q_thigh_R; q_knee_R; q_knee_shin_R; q_shin_tarsus_R; q_toe_R
                    ];
                dq_temp = [
                    0; 0; 0; dq_yaw; dq_pitch; dq_roll;...
                    dq_abduction_L; dq_rotation_L; dq_thigh_L; dq_knee_L; dq_knee_shin_L; dq_shin_tarsus_L; dq_toe_L;
                    dq_abduction_R; dq_rotation_R; dq_thigh_R; dq_knee_R; dq_knee_shin_R; dq_shin_tarsus_R; dq_toe_R
                    ];
                
                %% ======== Get GRF and calculations ======== 
                [GRF_L, GRF_R] = get_GRF(obj, q_temp, qs_L, qs_R);
                % Simulation
                if isSim == 2  % Self EOM simulation
                    GRF_L(2) = dqj(3, :);  % Get vertical GRF
                    GRF_R(2) = dqj(6, :);  % Get vertical GRF
                else  % SimMechanics
                    [GRF_L, GRF_R] = get_GRF(obj, q_temp, qs_L, qs_R);
                end
                
                % Time calculation and init
                %T = IRC.step_time;  % Step time
                t = t_total - obj.t0;  % t during per step
                obj.s = obj.s + (t - obj.t_pre)*IRC.ds;  % Percentage of time spent during per step
                
                %% ======== Finite State Machine ======== ????????
                % Init LegSwitch as 0 (1 if.f. necessary)
                LegSwitch = 0;
                
                %% Standing mode
                if obj.controller_mode == 0
                    obj.stanceLeg = -1;  % Indicate the stance leg (Assume left stance when standing)
                    obj.t0 = t_total;  % Update t0 for standing
                    t = 0.2;  % Not 0 for Cov in KF
                    obj.s = 0.3;
                    
                    % Set flag variables from walking as 0 for the next round
                    obj.Flag_walk2stand = 0;
                    obj.count_step2stand = 0;
                    
                    % Need mode change to walk
                    if IRC.controller_mode_des == 1
                        % First time that command is received
                        if obj.Flag_stand2walk == 0
                            obj.Flag_stand2walk = 1;
                            obj.t_to_walk_ini = t_total;  % Update t_ini for preparing to walk
                        end
                        
                        % Ready to walk
                        if Controller2Estimator.Flag_ready2walk == 1
                            obj.controller_mode = 1;  % Switch to walking mode
                            
                            obj.stanceLeg = -1;  % Indicate the stance leg when switched to walking mode
                            obj.t0 = t_total;  % Update t0 for next step
                            t = 0;
                            obj.s = 0;
                            LegSwitch = 1;  % Legs need to be switched
                            
                            obj.Flag_stand2walk = 0;
                        end
                    end
                end
                
                % Compute absolute time to walk from the ini
                if (obj.controller_mode == 0) && (IRC.controller_mode_des == 1)
                    t_to_walk = t_total - obj.t_to_walk_ini;
                else
                    t_to_walk = 0;
                end
                
                % Compute absolute time of standing from walk (or from the beginning)
                if (obj.controller_mode == 0)
                    t_stand_from_walk = t_total - obj.t_stand_from_walk_ini;
                else
                    t_stand_from_walk = 0;
                end
                
                %% Walking mode
                if obj.controller_mode == 1
                    % Foot change
                    if (obj.GRF_sw_z >= 150 && obj.s > 1/2) || (obj.s > 1.2)
                        obj.stanceLeg = -obj.stanceLeg;  % Indicate the stance leg
                        obj.t0 = t_total;  % Update t0 for next step
                        t = 0;
                        obj.s = 0;
                        LegSwitch = 1;  % Legs need to be switched
                        obj.p_stT = obj.p_swT;
    %                 else
    %                     Flag_switch = 0;

                        % Need mode change to stand (Only apply that leg is left stance)
                        if (IRC.controller_mode_des == 0) && (obj.stanceLeg == -1) && (obj.Flag_walk2stand == 0)
                            obj.Flag_walk2stand = 1;
                            obj.count_step2stand = 0;
                        end
                        
                        % Step accumulation till standing
                        if obj.Flag_walk2stand == 1
                            obj.count_step2stand = obj.count_step2stand + 1;
                        end
                        
                        % Mode conversion when steps are enough
                        if obj.count_step2stand == 4  
                            obj.controller_mode = 0;
                            obj.t_stand_from_walk_ini = t_total;
                        end
                    end
                end
                
                % Define the GRF
                if obj.stanceLeg == -1  % Left toe is stancing
                    obj.GRF_st_z = GRF_L(2);
                    obj.GRF_sw_z = GRF_R(2);
                else  % Right toe is stancing
                    obj.GRF_st_z = GRF_R(2);
                    obj.GRF_sw_z = GRF_L(2);
                end
                
                %% ======== Get 'Origin' x,y,z,dx,dy,dz r.t. 'Toes' (stT on ground) ======== 
                p_O2LT_r = zeros(3, 1) - p_LeftToeJoint(q_temp);
                p_O2RT_r = zeros(3, 1) - p_RightToeJoint(q_temp);
                if obj.stanceLeg == -1  % Left toe is stancing
                    p_O2stT_r = p_O2LT_r;
                else
                    p_O2stT_r = p_O2RT_r;
                end
                
                % Reset bias_z and IMU_KF ???????????????? (remember to change in IRC)
                if IRC.reset_bias
                    obj.bias_z = YToolkits.first_order_filter(obj.bias_z, a_world(3, :), 0.0002);
                end
                a_world(3, :) = a_world(3, :) - obj.bias_z;
                if IRC.reset_IMU_KF || ~obj.initialized
                    % Init KF matrix
                    obj.vOpOpswT_KF_x = zeros(3, 1); % pO: x,y,z; vO: dx,dy,dz; pswT: generalized coords of swT
                    obj.vOpOpswT_KF_y = zeros(3, 1);
                    obj.vOpOpswT_KF_z = zeros(3, 1);
                    
                    % Init p_O
                    obj.vOpOpswT_KF_x(2, :) = p_O2LT_r(1, :);
                    obj.vOpOpswT_KF_y(2, :) = p_O2LT_r(2, :);
                    obj.vOpOpswT_KF_z(2, :) = p_O2LT_r(3, :);
                end

                % Judge whether initialized
                if obj.initialized == 0
                    obj.initialized = 1;
                    LegSwitch = 1;
                end
                
                %% ======== Kalman filter for q_xyz, dq_xyz estimation ========
                %% Define KF state and Cov
                Cov_LRT_r = YToolkits.Angles.Rz(q_yaw)*diag([obj.Cov_LRT_r_body_x; obj.Cov_LRT_r_body_y; obj.Cov_LRT_r_body_z])*YToolkits.Angles.Rz(q_yaw)';
                if LegSwitch == 1
                    % Update KF state 'x'
                    obj.vOpOpswT_KF_x(3, :) = obj.vOpOpswT_KF_x(2, :) - p_O2stT_r(1, :);
                    obj.vOpOpswT_KF_y(3, :) = obj.vOpOpswT_KF_y(2, :) - p_O2stT_r(2, :);
                    obj.vOpOpswT_KF_z(3, :) = obj.vOpOpswT_KF_z(2, :) - p_O2stT_r(3, :);
                    
                    % Update KF 'sigma'
                    obj.sigma_vOpOpswT_KF_x(3, 3) = obj.sigma_vOpOpswT_KF_x(2, 2) + Cov_LRT_r(1, 1);
                    obj.sigma_vOpOpswT_KF_y(3, 3) = obj.sigma_vOpOpswT_KF_y(2, 2) + Cov_LRT_r(2, 2);
                    obj.sigma_vOpOpswT_KF_z(3, 3) = obj.sigma_vOpOpswT_KF_z(2, 2) + Cov_LRT_r(3, 3);
                end
                
                %% KF Model matrix
                % Prediction model (x(k) is defined as [v_O; p_O; p_swT])
                % 1) Process model
                %    X(k+1) = V(k)*delta_t
                %    V(k+1) = V(k) + dk*delta_t
                % 2) Measurement model (Take k_timestep p_O2stT_r as z(k))
                %    z(k) = x(k)(2) - x(k)(3)
                At = eye(3, 3);
                At(2, 1) = obj.sample_time;
                Bt = [obj.sample_time; 0; 0];
                Ct = [0 1 -1];
                % Inputs
                ut_x = a_world(1);
                ut_y = a_world(2);
                ut_z = a_world(3);
                % Measurements
                zt_x = p_O2stT_r(1, :);
                zt_y = p_O2stT_r(2, :);
                zt_z = p_O2stT_r(3, :);
                
                %% KF noise Cov
                Cov_LinearAccelerator = diag([obj.Cov_LinearAccelerator_xy; obj.Cov_LinearAccelerator_xy; obj.Cov_LinearAccelerator_z]);
                % Qt (Process model noise) ?????????????
                % x
                Qt_x = zeros(3, 3);
                Qt_x(1, 1) = Cov_LinearAccelerator(1, 1)*(1 + abs(a_world(1)))^2*obj.sample_time^2;
                Qt_x(3, 3) = SlideToeCovariance(obj, t, 'x')*obj.sample_time^2;
                % y
                Qt_y = zeros(3, 3);
                Qt_y(1, 1) = Cov_LinearAccelerator(2, 2)*(1 + abs(a_world(2)))^2*obj.sample_time^2;
                Qt_y(3, 3) = SlideToeCovariance(obj, t, 'y')*obj.sample_time^2;
                % z
                Qt_z = zeros(3, 3);
                Qt_z(1, 1) = Cov_LinearAccelerator(3, 3)*(1 + abs(a_world(3)))^2*obj.sample_time^2;
                Qt_z(3, 3) = SlideToeCovariance(obj, t, 'z')*obj.sample_time^2;
                
                if t_total < 0.1
                    Qt_x(3, 3) = 1000;
                    Qt_y(3, 3) = 1000;
                    Qt_z(3, 3) = 1000;
                end
                
                % Rt (Measurement model noise) ????????
                Rt_x = Cov_LRT_r(1, 1);
                Rt_y = Cov_LRT_r(2, 2);
                Rt_z = Cov_LRT_r(3, 3);

                %% KF algorithm (EKF)
                % x
                % Prediction
                vOpOpswT_KF_x_hat = At*obj.vOpOpswT_KF_x + Bt*ut_x;
                sigma_vOpOpswT_KF_x_hat = At*obj.sigma_vOpOpswT_KF_x*At' + Qt_x;
                % Correction
                obj.vOpOpswT_KF_x = vOpOpswT_KF_x_hat +...
                    sigma_vOpOpswT_KF_x_hat*Ct'*((Ct*sigma_vOpOpswT_KF_x_hat*Ct' + Rt_x)\(zt_x - Ct*vOpOpswT_KF_x_hat));
                obj.sigma_vOpOpswT_KF_x = (eye(3, 3) - sigma_vOpOpswT_KF_x_hat*Ct'*((Ct*sigma_vOpOpswT_KF_x_hat*Ct' + Rt_x)\Ct))*sigma_vOpOpswT_KF_x_hat;
                
                % y
                % Prediction
                vOpOpswT_KF_y_hat = At*obj.vOpOpswT_KF_y + Bt*ut_y;
                sigma_vOpOpswT_KF_y_hat = At*obj.sigma_vOpOpswT_KF_y*At' + Qt_y;
                % Correction
                obj.vOpOpswT_KF_y = vOpOpswT_KF_y_hat +...
                    sigma_vOpOpswT_KF_y_hat*Ct'*((Ct*sigma_vOpOpswT_KF_y_hat*Ct' + Rt_y)\(zt_y - Ct*vOpOpswT_KF_y_hat));
                obj.sigma_vOpOpswT_KF_y = (eye(3, 3) - sigma_vOpOpswT_KF_y_hat*Ct'*((Ct*sigma_vOpOpswT_KF_y_hat*Ct' + Rt_y)\Ct))*sigma_vOpOpswT_KF_y_hat;
                
                % z
                % Prediction
                vOpOpswT_KF_z_hat = At*obj.vOpOpswT_KF_z + Bt*ut_z;
                sigma_vOpOpswT_KF_z_hat = At*obj.sigma_vOpOpswT_KF_z*At' + Qt_z;
                % Correction
                obj.vOpOpswT_KF_z = vOpOpswT_KF_z_hat +...
                    sigma_vOpOpswT_KF_z_hat*Ct'*((Ct*sigma_vOpOpswT_KF_z_hat*Ct' + Rt_z)\(zt_z - Ct*vOpOpswT_KF_z_hat));
                obj.sigma_vOpOpswT_KF_z = (eye(3, 3) - sigma_vOpOpswT_KF_z_hat*Ct'*((Ct*sigma_vOpOpswT_KF_z_hat*Ct' + Rt_z)\Ct))*sigma_vOpOpswT_KF_z_hat;
                
                %% ======== Get actual q, dq (toe as origin) and EulerRates ========
                % Get q_xyz and q
                q_xyz = [obj.vOpOpswT_KF_x(2, :); obj.vOpOpswT_KF_y(2, :); obj.vOpOpswT_KF_z(2, :)];
                q = [q_xyz; q_temp(4:20, :)];
                % Get dq_xyz and dq
                dq_xyz = [obj.vOpOpswT_KF_x(1, :); obj.vOpOpswT_KF_y(1, :); obj.vOpOpswT_KF_z(1, :)];
                dq = [dq_xyz; dq_temp(4:20, :)];
                % Get EulerRates
                EulerRates = [dq_yaw; dq_pitch; dq_roll];
                
                % Update previous t for Log
                obj.t_pre = t;
                
                %% ======== Construct EstStates ========
                EstStates.isCalibrated = cassieOutputs.isCalibrated;
                
                EstStates.q = q;
                EstStates.dq = dq;
                EstStates.dq_AR = dq;
                EstStates.t = t;
                EstStates.s = obj.s;
                EstStates.a_world = a_world;
                EstStates.stanceLeg = obj.stanceLeg;
                EstStates.LegSwitch = LegSwitch;
                EstStates.Voltage = cassieOutputs.rightLeg.kneeDrive.dcLinkVoltage;
                
                EstStates.GRF_z = [GRF_L(2); GRF_R(2)];
                EstStates.GRF_L = GRF_L;
                EstStates.GRF_R = GRF_R;
                
                EstStates.qsL_1 = qs_L(1);
                EstStates.qsL_2 = qs_L(2);
                EstStates.qsR_1 = qs_R(1);
                EstStates.qsR_2 = qs_R(2);
                
                EstStates.dqsL_1 = dqs_L(1);
                EstStates.dqsL_2 = dqs_L(2);
                EstStates.dqsR_1 = dqs_R(1);
                EstStates.dqsR_2 = dqs_R(2);
                
                EstStates.controller_mode = obj.controller_mode;
                EstStates.t_to_walk = t_to_walk;
                EstStates.count_step2stand = obj.count_step2stand;
                EstStates.t_stand_from_walk = t_stand_from_walk;
            end  % endif
        end % stepImpl
        
        %% Helper functions
        function [GRF_L, GRF_R] = get_GRF(obj, q, qs_L, qs_R)
            q(4, :) = 0;
            Jp_LT = Jp_LeftToeJoint(q);
            Jp_RT = Jp_RightToeJoint(q);
            [Fs_L1, Fs_L2, Fs_R1, Fs_R2] = get_spring_force(obj, qs_L, qs_R);
            Js_L2 = J_HeelSpringDeflectionEst(q(10, :), q(11, :), q(12, :));
            Js_R2 = J_HeelSpringDeflectionEst(q(17, :), q(18, :), q(19, :));
            Js_L = Jp_LT([1,3], [11,12]);
            Js_R = Jp_RT([1,3], [18,19]);
            GRF_L = (-Js_L')^-1*[(Fs_L1 + Js_L2(2)*Fs_L2); Js_L2(3)*Fs_L2];
            GRF_R = (-Js_R')^-1*[(Fs_R1 + Js_R2(2)*Fs_R2); Js_R2(3)*Fs_R2];
        end
        function [Fs_L1, Fs_L2, Fs_R1, Fs_R2] = get_spring_force(obj, qs_L, qs_R)
            Fs_L1 = -obj.Ks_L1*qs_L(1, :);
            Fs_L2 = -obj.Ks_L2*qs_L(2, :);
            Fs_R1 = -obj.Ks_R1*qs_R(1, :);
            Fs_R2 = -obj.Ks_R2*qs_R(2, :);
        end
        
        
        %% Default functions
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
        end % setupImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [name_1, name_2, name_3, name_4, name_5]  = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name_1 = 'cassieOutputs';
            name_2 = 'IRC';
            name_3 = 't_total';
            name_4 = 'isSim';
            name_5 = 'Controller2Estimator';
        end % getInputNamesImpl
        
        function [name_1, name_2, name_3, name_4, name_5, name_6] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'EstStates';
            name_2 = 'q';
            name_3 = 'EulerRates';
            name_4 = 'q_xyz';
            name_5 = 'dq_xyz';
            name_6 = 'a_world';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [EstStates, q, EulerRates, q_xyz, dq_xyz, a_world] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            EstStates = [1, 1];
            q = [20, 1];
            EulerRates = [3, 1];
            q_xyz = [3, 1];
            dq_xyz = [3, 1];
            a_world = [3, 1];
        end % getOutputSizeImpl
        
        function [EstStates, q, EulerRates, q_xyz, dq_xyz, a_world] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            EstStates = 'EstStatesWithStandingBus';
            q = 'double';
            EulerRates = 'double';
            q_xyz = 'double';
            dq_xyz = 'double';
            a_world = 'double';
        end % getOutputDataTypeImpl
        
        function [EstStates, q, EulerRates, q_xyz, dq_xyz, a_world] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            EstStates = false;
            q = false;
            EulerRates = false;
            q_xyz = false;
            dq_xyz = false;
            a_world = false;
        end % isOutputComplexImpl
        
        function [EstStates, q, EulerRates, q_xyz, dq_xyz, a_world] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            EstStates = true;
            q = true;
            EulerRates = true;
            q_xyz = true;
            dq_xyz = true;
            a_world = true;
        end % isOutputFixedSizeImpl
    end
end