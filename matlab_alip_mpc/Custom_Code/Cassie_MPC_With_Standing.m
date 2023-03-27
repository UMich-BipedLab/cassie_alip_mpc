%Grant ALIP-MPC controller.

classdef Cassie_MPC_With_Standing < ...
        matlab.System & ...
        matlab.system.mixin.Propagates & ...
        matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties
        Kp_pitch;
        Kd_pitch;
        Kp_roll;
        Kd_roll;
        Kp_yaw;
        Kd_yaw;
        
        Kp_abduction;
        Kp_rotation;
        Kp_thigh;
        Kp_knee;
        Kp_toe;
        
        Kd_abduction;
        Kd_rotation;
        Kd_thigh;
        Kd_knee;
        Kd_toe;
        
        Kp_st_rotation;
        Kd_st_rotation;
        
        u_abduction_swing_cp;
        u_roll_cp;
        u_pitch_cp
        u_knee_cp;
        
        CovPos_abduction;
        CovPos_rotation;
        CovPos_thigh;
        CovPos_knee;
        CovPos_toe;
        CovPos_qj1;
        CovPos_qj2;
        CovPos_qj3;
        
        CovVel_abduction;
        CovVel_rotation;
        CovVel_thigh;
        CovVel_knee;
        CovVel_toe;
        CovVel_qj1;
        CovVel_qj2;
        CovVel_qj3;
        
        Cov_Euler;
        Cov_Euler_rates;
        
        Cov_Lx_LRToe_stTD0;
        Cov_Ly_LRToe_stTD0;
        Cov_rpx_LRToe_stTD0;
        Cov_rpy_LRToe_stTD0;
        
        
        torque_transition_time;
        knee_cp_time;
        st_rotation_torque_ramp_time;
        torque_standFromWalk_transition_time;
        com_x_offset;
        Vx_tgd_offset;
        Vy_tgd_offset;
        
        stance_thre_lb;
        stance_thre_ub;
        stance_thre_lb_2;
        stance_thre_ub_2;
        
        IK_max_iter_num;
        yaw_error_fil_param;
        rp_LRToe_fil_param;
        adjusted_desired_roll_angle_fil_param;
        use_dq_AR_for_PD;
        lateral_correction_gain;
        one_step_max_vel_gain;
        max_st_rotation_motor_torque;
        
        KsL_1;
        KsL_2;
        KsR_1;
        KsR_2;
        
        toe_leave_ground_lb;
        toe_leave_ground_ub;
        
    end
    properties  % Tunable params for the standing controller
        Kp_abduction_stand;
        Kp_rotation_stand;
        Kp_thigh_stand;
        Kp_knee_stand;
        Kp_toe_stand;
        
        Kd_abduction_stand;
        Kd_rotation_stand;
        Kd_thigh_stand;
        Kd_knee_stand;
        Kd_toe_stand;
        
        Kp_knee_stand_lateral;
        Kd_knee_stand_lateral;
        
        com_x_offset_stand;
        
        F_st_lb_stand;
        F_st_ub_stand;
        
        com_y_offset_stand2walk;
        last_width_walk2stand;
        
        V_com_x_offset_walk2stand;
        
        mu_fil_param;
        
    end
    properties  % Tunable params for the sample time (Keep as the last)
        sample_time;
    end
    
    properties (Constant)
        TorqueLimits = repmat([112.5; 112.5; 195.2; 195.2; 45], [2, 1]);
        TorquesLimits_Custom = [-100, 100; -20, 20; -100, 100; -30, 180; -20, 20;...
            -100, 100; -20, 20; -100, 100; -30, 180; -20, 20];
        ActuatorLimits = [-0.2618, 0.3927; -0.3927, 0.3927; -0.8727, 1.3963; -2.8623, -0.7330; -2.4435, -0.5236;...
            -0.3927, 0.2618; -0.3927, 0.3927; -0.8727, 1.3963; -2.8623, -0.7330; -2.4435, -0.5236];
        ActuatorLimits_ARsafety = [-0.1618,0.2491; -0.2840,0.2840; -0.7727,1.2963; -2.6227,-0.8330; -2.3435,-0.7109;...
            -0.2491,0.1618; -0.2840,0.2840; -0.7727,1.2963; -2.6227,-0.8330; -2.3435,-0.7109];
        
        Ks1 = 1500;
        Ks2 = 1250;
        
        m = 31.8840;
        g = 9.81;
        
    end
    properties (Access = protected)
        
    end
    % PRIVATE PROPERTIES ====================================================
    properties(Access = private) % change when swing leg change
        rp_swToe_ini_world = zeros(3,1);
        rv_swToe_ini_world = zeros(3,1);
        rp_stToe_z_ini_world = 0;
        stToe_pos_world = zeros(3,1);
        swToe_pos_world = zeros(3,1);
        
        p_st_to_sw_init_world = zeros(3,1);   % for slope VC swing z
        rp_stToe_ground_z_ini_world = 0;      % for slope VC ground height
        
        stTD0 = 0; % direction of stance toe at the beginning of a step
        tg_direction = 0;
        st_rotation_goal = 0;
        sw_rotation_goal = 0;
        st_rotation_goal_last = 0;
        sw_rotation_goal_last = 0;
        st_rotation_pos_last = 0;
        st_rotation_vel_last = 0;
        sw_rotation_pos_last = 0;
        sw_rotation_vel_last = 0;
        
        u_last = zeros(10,1);
        
        swing_leg_leave_ground = 0;
        ini_toe_height_diff = 0;
        
        s_ini = 0;
        
        % Recording initial value of standing dist of LRTs
        dist_LRT_r_ini = [0; -0.3; 0];
    end
    properties(Access = private) % changes iteration
        initialized = 0;
        
        %% Walking
        % for filters
        sigma_Lx_stToe_stTD0 = 100;
        Lx_stToe_kf_stTD0 = 0;
        sigma_Ly_stToe_stTD0 = 100;
        Ly_stToe_kf_stTD0 = 0;
        
        % IK solver
        qd_control = zeros(8,1);
        dqd_control = zeros(8,1);
        ddqd_control = zeros(8,1);
        
        % previous iteration's variables
        u_prev = zeros(10,1);
        Ki_knee = 2000;
        iqe_control_knee = 0;
        
        % filtered rp_LRToe
        rp_LToe_fil_world = zeros(3,1);
        rp_RToe_fil_world = zeros(3,1);
        yaw_error_fil = 0;
        
        % store values in last iteration
        comp_knee_st_prev = 0;
        adjusted_desired_roll_angle_fil = 0;
        
        % u without torque limits
        u_no_limits = zeros(10, 1);
        
        % mu
        mu_fil = 1.0;
        
        %% Standing
        qd_control_stand_PD = zeros(8, 1);
        dqd_control_stand_PD = zeros(8, 1);
        
        
        %% Controller mode
        controller_mode = 0;
        
    end
    properties(Access = private) % low level controls
        hr = zeros(8,1);
        dhr = zeros(8,1);
        ddhr = zeros(8,1);
        h0 = zeros(8,1);
        dh0 = zeros(8,1);
    end
    properties(Access = private) % parameters
        
    end
    
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [userInputs, Data, SlrtToLinux, Controller2Estimator] = stepImpl(obj,LinuxToSlrt,Est_States_Bus,t_total,isSim,IRC,DynamicMatrixLibrary)
            %STEPIMPL System output and state update equations.
            
            %% Initialize Buses and Variables
            Data = PreFunctions.Construct_Data_with_standing;
            SlrtToLinux = get_SlrtToLinuxData_Struct();
            Controller2Estimator = PreFunctions.Construct_Controller2Estimator_with_standing;
            
            % Reset the desired motor torques to zero in case they aren't defined
            userInputs = CassieModule.getUserInStruct;
            u = zeros(10,1);
            Kp = repmat([obj.Kp_abduction;obj.Kp_rotation;obj.Kp_thigh;obj.Kp_knee; obj.Kp_toe],[2,1]);
            Kd = repmat([obj.Kd_abduction;obj.Kd_rotation;obj.Kd_thigh;obj.Kd_knee; obj.Kd_toe],[2,1]);
            
            % PD for standing mode
            Kp_stand = repmat([obj.Kp_abduction_stand; obj.Kp_thigh_stand; obj.Kp_knee_stand], [2, 1]);
            Kd_stand = repmat([obj.Kd_abduction_stand; obj.Kd_thigh_stand; obj.Kd_knee_stand], [2, 1]);
            
            if t_total > 0.001 && Est_States_Bus.isCalibrated
                %% Extract Inputs
                H_des = IRC.H;                      % desired com height
                Ts = IRC.step_time;              % step period
                z_cl = IRC.CL;                  % foot clearance
                Vx_des_no_offset = IRC.Vx_tgd;                                % Desired velocity in target direction direction at the end of a step
                Vx_des = Vx_des_no_offset + obj.Vx_tgd_offset;  % desired Psuedo-velocity
                half_width_lat = IRC.desired_com2stToe_lateral;    % at the begining of left stance (also at the end of left stance)
                %                 fp_long_method = IRC.direct_up_down;
                %                 fp_lat_method = IRC.lateral_fp_method;
                
                q = Est_States_Bus.q;
                dq = Est_States_Bus.dq;
                q_ss = Est_States_Bus.q;    % second set of q, used for low level PD control
                if obj.use_dq_AR_for_PD
                    dq_ss = Est_States_Bus.dq_AR;
                else
                    dq_ss = Est_States_Bus.dq;
                end
                s = Est_States_Bus.s;       % phase variable
                t = Est_States_Bus.t;       % time duration within current step
                stanceLeg = Est_States_Bus.stanceLeg;   % stanceLeg = -1 -> right stanceleg
                LegSwitch = Est_States_Bus.LegSwitch;   % Impact detected, start of step
                
                %                 GRF_L = Est_States_Bus.GRF_L;
                %                 GRF_R = Est_States_Bus.GRF_R;
                GRF_z = Est_States_Bus.GRF_z;
                %                 a_world = Est_States_Bus.a_world;       % acceleration in world frame
                
                % Controller mode
                obj.controller_mode = Est_States_Bus.controller_mode;
                %                 obj.controller_mode = Est_States_Bus.controller_mode;
                
                % Get standing info
                yaw_stand_stTD0_des = 0;     % IRC.yaw_stand_stDA;  % standing yaw
                pitch_stand_stTD0_des = 0;  % IRC.pitch_stand_stTD0; % Standing pitch for real control (LVA default as 1), 0 for sim
                roll_stand_stTD0_des = 0;   % IRC.roll_stand_stTD0; % Standing roll
                p_com_stand_y_stTD0_des = 0; % IRC.p_com_stand_y_stTD0;  % Standing y offset of the COM in the stTD0 frame
                com_x_offset_stand_adjustIRC = 0; % 0.3*IRC.com_x_offset_stand;
                ft_stand_from_walk = min([1, Est_States_Bus.t_stand_from_walk/obj.torque_standFromWalk_transition_time]);
                
                % Modify desired lateral com if transitioning to walk
                if (obj.controller_mode == 0) && (IRC.controller_mode_des == 1)
                    p_com_stand_y_stTD0_des = Est_States_Bus.t_to_walk*obj.com_y_offset_stand2walk;
                end
                
                % Initialize yaw target direction if not initialized or no
                % motor power
                if obj.initialized == 0 || IRC.motor_power == 0
                    obj.tg_direction = q(4);
                end
                
                % Constants
                %                 l_const = sqrt(obj.g/H);                  % LIP constant
                
                %% Change kx , ky to world frame
                kx_body = IRC.kx;
                ky_body = IRC.ky;
                k_normal_body = [kx_body; ky_body; -1];
                k_normal_world = YToolkits.Angles.Rz(obj.tg_direction) * k_normal_body;
                kx_world = k_normal_world(1);
                ky_world = k_normal_world(2);
                
                % Filter mu
                obj.mu_fil = YToolkits.first_order_filter(obj.mu_fil, IRC.mu , obj.rp_LRToe_fil_param);
                
                %% Update CustomEstStates for MPC Controller
                SlrtToLinux.time = t_total;
                SlrtToLinux.s = s;
                
                SlrtToLinux.zH = H_des;
                SlrtToLinux.Ts = IRC.step_time;
                SlrtToLinux.Tr = (1-s)*IRC.step_time;
                SlrtToLinux.leg_width = 2*abs(half_width_lat);
                SlrtToLinux.Lx_offset = - IRC.Vy_tgd_avg * obj.m * H_des;
                SlrtToLinux.Ly_des = Vx_des * obj.m * H_des;
                SlrtToLinux.kx = kx_body;
                SlrtToLinux.ky = ky_body;
                SlrtToLinux.mu = obj.mu_fil;
                                
                %% GRF Threshold set between 0 and 1: (GRFz-lb)/(GRFz-ub)
                %             [GRF_L_ratio, GRF_R_ratio] = get_f_GRF(obj, GRF_z);
                %             [f_GRF_L_2, f_GRF_R_2] = get_f_GRF_2(obj, GRF_z);
                
                %% Bezier Trajectory and torque ramp variables (s, u, t)
                s_sat = min([1,s]); % saturate s if at end of step
                ds = IRC.ds;  % time derivative of phase variable
                
                s_ratio_bezier = [0,1,3,6,6,6]/6;
                s_ratio = YToolkits.bezier(s_ratio_bezier,s);
                ds_ratio = YToolkits.dbezier(s_ratio_bezier,s)*ds;
                
                u_ratio = min([1,1/obj.torque_transition_time*t]);                  % ramp up torque values based on step time
                u_st_rotation_ratio = min(1,t/obj.st_rotation_torque_ramp_time);    % ramp up torque value for stance rotation ""
                
                %% COM, Left Toe, and Right Toe info (Compliant Springs)
                % com in world frame
                p_com_world = p_COM(q);
                p_com_world = p_com_world + YToolkits.Angles.Rz(q(4))*[obj.com_x_offset;0;0];   % rotates com world frame to align with IMU
                Jp_com_world = Jp_COM(q);
                v_com_world = Jp_com_world*dq;
                
                % Left toe motor in world frame
                p_LToe_world = p_LeftToeJoint(q);
                
                % Right toe motor in world frame
                p_RToe_world = p_RightToeJoint(q);
                
                % com pos wrt left toe
                rp_LToe_world = p_com_world - p_LToe_world;
                
                % com pos wrt right toe
                rp_RToe_world = p_com_world - p_RToe_world;
                
                % Filtering COM position wrt toes
                obj.rp_LToe_fil_world = YToolkits.first_order_filter(obj.rp_LToe_fil_world, rp_LToe_world , obj.rp_LRToe_fil_param);
                obj.rp_RToe_fil_world = YToolkits.first_order_filter(obj.rp_RToe_fil_world, rp_RToe_world , obj.rp_LRToe_fil_param);
                
                %% COM, Left Toe, Right Toe (Rigid Springs)
                % Generalized coordinates and velocities
                q_rigid = q;
                q_rigid(11) = 0;
                q_rigid(12) = -q_rigid(10)+deg2rad(13);
                q_rigid(18) = 0;
                q_rigid(19) = -q_rigid(17)+deg2rad(13);
                dq_rigid = dq;
                dq_rigid(11) = 0;
                dq_rigid(12) = -dq_rigid(10);
                dq_rigid(18) = 0;
                dq_rigid(19) = -dq_rigid(17);
                
                % COM world
                p_com_rigid_world =  p_COM(q_rigid);
                p_com_rigid_world = p_com_rigid_world + YToolkits.Angles.Rz(q(4))*[obj.com_x_offset;0;0];
                v_com_rigid_world =  Jp_com_world*dq_rigid;
                
                % Left toe world
                p_LToe_rigid_world =  p_LeftToeJoint(q_rigid);
                
                % Right toe world
                p_RToe_rigid_world =  p_RightToeJoint(q_rigid);
                
                % COM relative to left toe
                rp_LToe_rigid_world =  p_com_rigid_world - p_LToe_rigid_world;
                
                % COM relative to right toe
                rp_RToe_rigid_world =  p_com_rigid_world - p_RToe_rigid_world;
                
                %% Angular Momentum Calculation(compliant springs)
                % Angular Momentum (L): left toe
                JL_dq_LToe = Jdq_AMworld_about_pA(q,dq,p_LToe_world,zeros(3,20));
                L_LToe_world = JL_dq_LToe*dq;
                L_LToe_obs_world = L_LToe_world;
                L_LToe_obs_stTD0 = YToolkits.Angles.Rz( - obj.stTD0) * L_LToe_obs_world;  % rotates desired L to align with stance toe
                
                % Angular Momentum (L): right toe
                L_RToe_world = L_LToe_world + obj.m * cross(p_LToe_world - p_RToe_world, v_com_world); %% attention!!!! if urdf changes, total mass must change too!
                L_RToe_obs_world = L_RToe_world;
                L_RToe_obs_stTD0 = YToolkits.Angles.Rz( - obj.stTD0) * L_RToe_obs_world; % rotates desired L to align with stance toe
                
                %% Controller mode (0: Standing, 1: Walking)
                switch obj.controller_mode
                    case 0 % Standing Controller (Dianhao's)
                        
                        % Idx assign
                        % Idx split for each joint
                        Idx_l_abduction_stand = 6 + 1;
                        Idx_l_rotation_stand = 6 + 2;
                        Idx_l_thigh_stand = 6 + 3;
                        Idx_l_knee_stand = 6 + 4;
                        Idx_l_shin_stand = 6 + 5;
                        Idx_l_tarsus_stand = 6 + 6;
                        Idx_l_toe_stand = 6 + 7;
                        Idx_r_abduction_stand = 13 + 1;
                        Idx_r_rotation_stand = 13 + 2;
                        Idx_r_thigh_stand = 13 + 3;
                        Idx_r_knee_stand = 13 + 4;
                        Idx_r_shin_stand = 13 + 5;
                        Idx_r_tarsus_stand = 13 + 6;
                        Idx_r_toe_stand = 13 + 7;
                        
                        % Idx split for each motor
                        Idx_l_abduction_motor_stand = 1;
                        Idx_l_rotation_motor_stand = 2;
                        Idx_l_thigh_motor_stand = 3;
                        Idx_l_knee_motor_stand = 4;
                        Idx_l_toe_motor_stand = 5;
                        Idx_r_abduction_motor_stand = 6;
                        Idx_r_rotation_motor_stand = 7;
                        Idx_r_thigh_motor_stand = 8;
                        Idx_r_knee_motor_stand = 9;
                        Idx_r_toe_motor_stand = 10;
                        
                        standing_controller_method = 1;
                        switch standing_controller_method  % 1: PD; 2: PD (Lib)
                            case 1 % PD
                                % Init desired coordinates
                                % Get the average direction of the standing toes
                                obj.stTD0 = YToolkits.wrap_to_Pi(q(4) + (q(Idx_l_rotation_stand) + q(Idx_r_rotation_stand))/2);
                                
                                % Coords transformation (World to stTD0 frame) ????????
                                rp_LToe_stTD0 = (YToolkits.Angles.Rz(obj.stTD0)')*rp_LToe_world;
                                rp_RToe_stTD0 = (YToolkits.Angles.Rz(obj.stTD0)')*rp_RToe_world;
                                v_com_stTD0 = (YToolkits.Angles.Rz(obj.stTD0)')*v_com_world;
                                
                                % Define desired control variables
                                % Desired pos of COM in the stTD0 frame
                                p_com_stand_stTD0_des = [
                                    (0 + obj.com_x_offset_stand + com_x_offset_stand_adjustIRC);
                                    p_com_stand_y_stTD0_des;
                                    H_des];
                                
                                % Desired euler angles
                                eulerAngle_des = [
                                    yaw_stand_stTD0_des;
                                    pitch_stand_stTD0_des;
                                    roll_stand_stTD0_des];
                                
                                % Desired p of COM w.r.t. LRToes
                                dist_LRT_r_x = rp_LToe_stTD0(1, :) - rp_RToe_stTD0(1, :);
                                dist_LRT_r_y = rp_LToe_stTD0(2, :) - rp_RToe_stTD0(2, :);
                                dist_LRT_r_x = 0;  % Set the x offset as 0
                                if (LegSwitch == 1) && (Est_States_Bus.count_step2stand == 4)
                                    obj.dist_LRT_r_ini = rp_LToe_stTD0 - rp_RToe_stTD0;
                                end
                                %#1 Set current value as des
                                %                                 rp_LToe_stTD0_des = [dist_LRT_r_x/2; dist_LRT_r_y/2; 0] + p_com_stand_stTD0_des;
                                %                                 rp_RToe_stTD0_des = [-dist_LRT_r_x/2; -dist_LRT_r_y/2; 0] + p_com_stand_stTD0_des;
                                %#2 Set fixed value as des
                                %                                 rp_LToe_stTD0_des = [dist_LRT_r_x/2; -F_W_des/2; 0] + p_com_stand_stTD0_des;
                                %                                 rp_RToe_stTD0_des = [-dist_LRT_r_x/2; F_W_des/2; 0] + p_com_stand_stTD0_des;
                                %#3 Set recorded initials as des
                                %                                 rp_LToe_stTD0_des = [dist_LRT_r_x/2; obj.dist_LRT_r_ini(2, :)/2; 0] + p_com_stand_stTD0_des;
                                %                                 rp_RToe_stTD0_des = [-dist_LRT_r_x/2; -obj.dist_LRT_r_ini(2, :)/2; 0] + p_com_stand_stTD0_des;
                                %#4 Set recorded initials (add STDA_x axis) as des
                                rp_LToe_stTD0_des = [obj.dist_LRT_r_ini(1, :)/2; obj.dist_LRT_r_ini(2, :)/2; 0] + p_com_stand_stTD0_des;
                                rp_RToe_stTD0_des = [-obj.dist_LRT_r_ini(1, :)/2; -obj.dist_LRT_r_ini(2, :)/2; 0] + p_com_stand_stTD0_des;
                                
                                % Set reference hr, dhr for PD control (part for IK)
                                hr_stand_part = [rp_LToe_stTD0_des; rp_RToe_stTD0_des];
                                dhr_stand_part = zeros(6, 1);
                                
                                %% IK for standing controller
                                
                                % Init qd_control_stand (l_abduction, l_rotation, l_thigh, l_knee, r_abduction, r_rotation, r_thigh, r_knee)
                                obj.qd_control_stand_PD = q_rigid([Idx_l_abduction_stand, Idx_l_rotation_stand, Idx_l_thigh_stand, Idx_l_knee_stand, Idx_r_abduction_stand, Idx_r_rotation_stand, Idx_r_thigh_stand, Idx_r_knee_stand]);
                                
                                % Desired unchanged states
                                obj.qd_control_stand_PD([2, 6], :) = [-eulerAngle_des(1, :); -eulerAngle_des(1, :)];  % Desired q_rotation
                                
                                % Set IK initials
                                % Init iterative q with desired coordinates
                                q_iter_stand = q_rigid;
                                
                                % Desired unchanged states
                                q_iter_stand(1:3, :) = 0;  % Init guess of q_xyz
                                q_iter_stand(4:6, :) = eulerAngle_des;  % Desired euler angles
                                q_iter_stand([Idx_l_rotation_stand, Idx_r_rotation_stand]) = obj.qd_control_stand_PD([2, 6], :);  % Desired q_rotation
                                q_iter_stand([Idx_l_shin_stand, Idx_r_shin_stand]) = 0;  % Desired q_lr_shin
                                
                                % Desired changeable initial states from the current q_rigid
                                q_iter_stand([Idx_l_tarsus_stand, Idx_r_tarsus_stand]) =...
                                    -obj.qd_control_stand_PD([4, 8], :) + deg2rad(13);
                                
                                % Init params
                                iter_count_stand = 0;  % Iteration counter
                                max_iter_stand = 2;  % Max iteration
                                
                                % Define actuated joints' indexs and controlled motors' indexs
                                q_stand_index = [Idx_l_abduction_stand, Idx_l_thigh_stand, Idx_l_knee_stand, Idx_r_abduction_stand, Idx_r_thigh_stand, Idx_r_knee_stand];
                                control_stand_index = [Idx_l_abduction_motor_stand, Idx_l_thigh_motor_stand, Idx_l_knee_motor_stand, Idx_r_abduction_motor_stand, Idx_r_thigh_motor_stand, Idx_r_knee_motor_stand];
                                
                                % Iterative IK for standing controller
                                J_square_stand = zeros(6, 6);
                                while 1
                                    %% IK -- Geometry and IK combined method
                                    % q_iter_stand update
                                    q_iter_stand(q_stand_index, :) = obj.qd_control_stand_PD([1, 3, 4, 5, 7, 8], :);
                                    q_iter_stand([Idx_l_tarsus_stand, Idx_r_tarsus_stand], :) =...
                                        -obj.qd_control_stand_PD([4, 8], :) + deg2rad(13);
                                    q_iter_stand([Idx_l_thigh_stand, Idx_r_thigh_stand], :) =...
                                        q_rigid([Idx_l_thigh_stand, Idx_r_thigh_stand]) - 1/2*(q_iter_stand([Idx_l_knee_stand, Idx_r_knee_stand]) - q_rigid([Idx_l_knee_stand, Idx_r_knee_stand]));  % Geometry relationship
                                    
                                    % Compute dX, J
                                    % Compute p, Jp for COM
                                    p_com_iter_stand = p_COM(q_iter_stand);
                                    p_com_iter_stand = p_com_iter_stand + YToolkits.Angles.Rz(q_iter_stand(4))*[obj.com_x_offset; 0; 0];
                                    Jp_com_iter_stand = Jp_COM(q_iter_stand);
                                    
                                    % Compute p, Jp for LT
                                    p_LT_iter_stand = p_LeftToeJoint(q_iter_stand);
                                    Jp_LT_iter_stand = Jp_LeftToeJoint(q_iter_stand);
                                    
                                    % Compute p, Jp for RT
                                    p_RT_iter_stand = p_RightToeJoint(q_iter_stand);
                                    Jp_RT_iter_stand = Jp_RightToeJoint(q_iter_stand);
                                    
                                    % Compute p, Jp for com r.t. left toe
                                    rp_LToe_iter_stand = p_com_iter_stand - p_LT_iter_stand;
                                    Jrp_LToe_iter_stand = Jp_com_iter_stand - Jp_LT_iter_stand;
                                    
                                    % Compute p, Jp for com r.t. right toe
                                    rp_RToe_iter_stand = p_com_iter_stand - p_RT_iter_stand;
                                    Jrp_RToe_iter_stand = Jp_com_iter_stand - Jp_RT_iter_stand;
                                    
                                    % Define complete J
                                    J_complete_stand = [Jrp_LToe_iter_stand; Jrp_RToe_iter_stand];
                                    J_square_stand = [J_complete_stand(:, Idx_l_abduction_stand), J_complete_stand(:, Idx_l_thigh_stand), (J_complete_stand(:, Idx_l_knee_stand) - J_complete_stand(:, Idx_l_tarsus_stand)),...
                                        J_complete_stand(:, Idx_r_abduction_stand), J_complete_stand(:, Idx_r_thigh_stand), (J_complete_stand(:, Idx_r_knee_stand) - J_complete_stand(:, Idx_r_tarsus_stand))];
                                    J_square_stand(:, [3, 6]) = J_square_stand(:, [3, 6]) - 1/2*J_complete_stand(:, [Idx_l_thigh_stand, Idx_r_thigh_stand]);
                                    
                                    % Judge whether stop the loop (by accuracy or max_iter)
                                    % **(MUST AFTER COMPUTE J_SQUARE_STAND OTHERWISE CANNOT GET FINAL RESULTS OF dq and ddq)**
                                    h_iter_stand = [rp_LToe_iter_stand; rp_RToe_iter_stand];
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
                                    obj.qd_control_stand_PD([1, 3, 4, 5, 7, 8], :) = obj.qd_control_stand_PD([1, 3, 4, 5, 7, 8], :) + q_delta_stand;
                                    
                                    % Joint limits
                                    % For joints except lr_rotation_motor
                                    for i = 1:6
                                        if i == 1
                                            motor_index_temp = control_stand_index(:, i);
                                            obj.qd_control_stand_PD(i, :) = clamp2limit(obj, obj.qd_control_stand_PD(i, :), motor_index_temp);
                                        elseif (i == 2) || (i == 3) || (i == 4)
                                            i_temp = i + 1;
                                            motor_index_temp = control_stand_index(:, i);
                                            obj.qd_control_stand_PD(i_temp, :) = clamp2limit(obj, obj.qd_control_stand_PD(i_temp, :), motor_index_temp);
                                        else
                                            i_temp = i + 2;
                                            motor_index_temp = control_stand_index(:, i);
                                            obj.qd_control_stand_PD(i_temp, :) = clamp2limit(obj, obj.qd_control_stand_PD(i_temp, :), motor_index_temp);
                                        end
                                    end
                                    
                                    % Update iter_count
                                    iter_count_stand = iter_count_stand + 1;
                                end
                                
                                % Apply joint limits for unchanged joints
                                obj.qd_control_stand_PD(2, :) = clamp2limit(obj, obj.qd_control_stand_PD(2, :), Idx_l_rotation_motor_stand);  % Joint limits apply
                                obj.qd_control_stand_PD(6, :) = clamp2limit(obj, obj.qd_control_stand_PD(6, :), Idx_r_rotation_motor_stand);  % Joint limits apply
                                
                                % Get dqd_control_stand_PD
                                obj.dqd_control_stand_PD([1, 3, 4, 5, 7, 8], :) = J_square_stand\dhr_stand_part;
                                
                                % Control design
                                % Init q0_control_stand_PD = [l_abduction; l_rotation; l_thigh; l_knee; r_abduction; r_rotation; r_thigh; r_knee]
                                q0_control_stand_PD = zeros(8, 1);
                                q0_control_stand_PD(1, :) = q(Idx_l_abduction_stand, :);
                                q0_control_stand_PD(2, :) = q(Idx_l_rotation_stand, :);
                                q0_control_stand_PD(3, :) = q(Idx_l_thigh_stand, :);
                                q0_control_stand_PD(4, :) = q(Idx_l_knee_stand, :);
                                q0_control_stand_PD(5, :) = q(Idx_r_abduction_stand, :);
                                q0_control_stand_PD(6, :) = q(Idx_r_rotation_stand, :);
                                q0_control_stand_PD(7, :) = q(Idx_r_thigh_stand, :);
                                q0_control_stand_PD(8, :) = q(Idx_r_knee_stand, :);
                                dq0_control_stand_PD = zeros(8, 1);
                                dq0_control_stand_PD(1, :) = dq_ss(Idx_l_abduction_stand, :);
                                dq0_control_stand_PD(2, :) = dq_ss(Idx_l_rotation_stand, :);
                                dq0_control_stand_PD(3, :) = dq_ss(Idx_l_thigh_stand, :);
                                dq0_control_stand_PD(4, :) = dq_ss(Idx_l_knee_stand, :);
                                dq0_control_stand_PD(5, :) = dq_ss(Idx_r_abduction_stand, :);
                                dq0_control_stand_PD(6, :) = dq_ss(Idx_r_rotation_stand, :);
                                dq0_control_stand_PD(7, :) = dq_ss(Idx_r_thigh_stand, :);
                                dq0_control_stand_PD(8, :) = dq_ss(Idx_r_knee_stand, :);
                                
                                % Error
                                qe_control_stand_PD = q0_control_stand_PD - obj.qd_control_stand_PD;
                                dqe_control_stand_PD = dq0_control_stand_PD - obj.dqd_control_stand_PD;
                                
                                %% Torques except toes (PD)
                                % u: l_abduction, l_thigh, l_knee, r_abduction, r_thigh, r_knee
                                u(control_stand_index, :) = -Kp_stand.*qe_control_stand_PD([1, 3, 4, 5, 7, 8], :) - Kd_stand.*dqe_control_stand_PD([1, 3, 4, 5, 7, 8], :);
                                
                                % u: l_rotation, r_rotation
                                u([Idx_l_rotation_motor_stand, Idx_r_rotation_motor_stand], :) = -obj.Kp_rotation_stand*qe_control_stand_PD([2, 6], :) - obj.Kd_rotation_stand*dqe_control_stand_PD([2, 6], :);
                                
                                %% Spring compensation by estimate
                                gravity_est_stand = obj.m*obj.g;
                                % Compute dist
                                % Left
                                dist_horizontal_L = sqrt(rp_LToe_world(1, :)^2 + rp_LToe_world(2, :)^2);
                                dist_vertical_L = rp_LToe_world(3, :);
                                % Right
                                dist_horizontal_R = sqrt(rp_RToe_world(1, :)^2 + rp_RToe_world(2, :)^2);
                                dist_vertical_R = rp_RToe_world(3, :);
                                
                                % Compute estimated part of gravity on each leg
                                Fg_L = gravity_est_stand*(dist_horizontal_R/dist_vertical_R)/((dist_horizontal_L/dist_vertical_L) + (dist_horizontal_R/dist_vertical_R));
                                Fg_R = gravity_est_stand*(dist_horizontal_L/dist_vertical_L)/((dist_horizontal_L/dist_vertical_L) + (dist_horizontal_R/dist_vertical_R));
                                
                                % Get estimated GRF by assuming GRF_z = gravity and points to COM;
                                GRF_L_est_stand = Fg_L*[rp_LToe_world(1, :)/rp_LToe_world(3, :); rp_LToe_world(2, :)/rp_LToe_world(3, :); 1];
                                GRF_R_est_stand = Fg_R*[rp_RToe_world(1, :)/rp_RToe_world(3, :); rp_RToe_world(2, :)/rp_RToe_world(3, :); 1];
                                
                                % Estimate tau by computed GRF
                                [tau_l_knee_est_stand, tau_l_kneespring_est_stand, tau_l_heelspring_est_stand] = getSpringTauByGRF(GRF_L_est_stand, q, -1);
                                [tau_r_knee_est_stand, tau_r_kneespring_est_stand, tau_r_heelspring_est_stand] = getSpringTauByGRF(GRF_R_est_stand, q, 1);
                                
                                % Compute the spring deflection of stance leg
                                u([Idx_l_knee_motor_stand, Idx_r_knee_motor_stand], :) = u([Idx_l_knee_motor_stand, Idx_r_knee_motor_stand], :) + [tau_l_knee_est_stand; tau_r_knee_est_stand];
                                
                                % Lateral Knee compensation ????????
                                qe_control_stand_PD_knee_lateral = ((rp_LToe_stTD0(2, :) + rp_RToe_stTD0(2, :))/2) - p_com_stand_stTD0_des(2, :);
                                %                                 dqe_control_stand_PD_knee_lateral = (v_LT_r_stTD0(2, :) + v_RT_r_stTD0(2, :))/2;
                                dqe_control_stand_PD_knee_lateral = v_com_stTD0(2, :);
                                tau_knee_est_stand_lateral = -obj.Kp_knee_stand_lateral*qe_control_stand_PD_knee_lateral - obj.Kd_knee_stand_lateral*dqe_control_stand_PD_knee_lateral;
                                u(Idx_l_knee_motor_stand, :) = u(Idx_l_knee_motor_stand, :) - tau_knee_est_stand_lateral;
                                u(Idx_r_knee_motor_stand, :) = u(Idx_r_knee_motor_stand, :) + tau_knee_est_stand_lateral;
                                
                                %% Torques on toes
                                % Error
                                qe_control_stand_PD_toe = ((rp_LToe_stTD0(1, :) + rp_RToe_stTD0(1, :))/2) - (p_com_stand_stTD0_des(1, :));
                                %                                 dqe_control_stand_PD_toe = (v_LT_r_stTD0(1, :) + v_RT_r_stTD0(1, :))/2;  % May contain noise so the toe will vibrate
                                dqe_control_stand_PD_toe = v_com_stTD0(1, :);
                                
                                % Compute the torque
                                u([Idx_l_toe_motor_stand, Idx_r_toe_motor_stand], :) = -obj.Kp_toe_stand*qe_control_stand_PD_toe - obj.Kd_toe_stand*dqe_control_stand_PD_toe;
                                
                                % Apply toe torques according to the percentage of contacting the ground
                                [F_GRF_L, F_GRF_R] = getForcePctByGRF(GRF_z, obj.F_st_lb_stand, obj.F_st_ub_stand);
                                u([Idx_l_toe_motor_stand, Idx_r_toe_motor_stand], :) = [F_GRF_L; F_GRF_R].*u([Idx_l_toe_motor_stand, Idx_r_toe_motor_stand], :);
                                
                            case 2 %% PD LIB
                                % ======== Init desired coordinates ========
                                % Get the average direction of the standing toes
                                obj.stTD0 = YToolkits.wrap_to_Pi(q(4) + (q(Idx_l_rotation_stand) + q(Idx_r_rotation_stand))/2);
                                
                                % Coords transformation (World to stTD0 frame) ????????
                                rp_LToe_stTD0 = (YToolkits.Angles.Rz(obj.stTD0)')*rp_LToe_world;
                                rp_RToe_stTD0 = (YToolkits.Angles.Rz(obj.stTD0)')*rp_RToe_world;
                                v_com_stTD0 = (YToolkits.Angles.Rz(obj.stTD0)')*v_com_world;
                                
                                %% Define desired control variables
                                % Desired pos of COM in the stTD0 frame
                                p_com_stand_stTD0_des = [0; p_com_stand_y_stTD0_des; H_des];
                                
                                % Desired euler angles
                                eulerAngle_des = [yaw_stand_stTD0_des; pitch_stand_stTD0_des; roll_stand_stTD0_des];
                                
                                % Set dhr
                                dhr_stand_part = zeros(6, 1);
                                
                                % Define actuated joints' indexs and controlled motors' indexs
                                q_stand_index = [Idx_l_abduction_stand, Idx_l_thigh_stand, Idx_l_knee_stand, Idx_r_abduction_stand, Idx_r_thigh_stand, Idx_r_knee_stand];
                                control_stand_index = [Idx_l_abduction_motor_stand, Idx_l_thigh_motor_stand, Idx_l_knee_motor_stand, Idx_r_abduction_motor_stand, Idx_r_thigh_motor_stand, Idx_r_knee_motor_stand];
                                
                                %% Compute qd_control_stand_PD from Lib
                                % Get q_des_part (ypr = 0) and J from Lib
                                [q_des_part, J_square_stand_inv, J_eulerAngle_stand] = loadMatrixLibrary_StandIK(MatrixLibrary_StandIK, p_com_stand_stTD0_des(3, :), p_com_stand_stTD0_des(3, :));
                                
                                % Set error between desired h and current h at the current height
                                p_delta_stand = [p_com_stand_stTD0_des; p_com_stand_stTD0_des];
                                p_delta_stand([3, 6], :) = 0;
                                
                                % Set qd_control_stand_PD
                                obj.qd_control_stand_PD([1, 3, 4, 5, 7, 8], :) = q_des_part(q_stand_index, :);
                                obj.qd_control_stand_PD([2, 6], :) = [-eulerAngle_des(1, :); -eulerAngle_des(1, :)];  % Desired q_rotation
                                
                                % Compute delta q
                                q_delta_stand = J_square_stand_inv*(p_delta_stand - J_eulerAngle_stand*eulerAngle_des);
                                
                                % Update qd_control_stand_PD with J from Lib
                                obj.qd_control_stand_PD([1, 3, 4, 5, 7, 8], :) =...
                                    obj.qd_control_stand_PD([1, 3, 4, 5, 7, 8], :) + q_delta_stand;
                                
                                % Apply joint limits for unchanged joints
                                obj.qd_control_stand_PD(2, :) = clamp2limit(obj, obj.qd_control_stand_PD(2, :), Idx_l_rotation_motor_stand);  % Joint limits apply
                                obj.qd_control_stand_PD(6, :) = clamp2limit(obj, obj.qd_control_stand_PD(6, :), Idx_r_rotation_motor_stand);  % Joint limits apply
                                
                                % Get dqd_control_stand_PD
                                obj.dqd_control_stand_PD([1, 3, 4, 5, 7, 8], :) = J_square_stand_inv\dhr_stand_part;
                                
                                % Control design
                                % Init q0_control_stand_PD = [l_abduction; l_rotation; l_thigh; l_knee; r_abduction; r_rotation; r_thigh; r_knee]
                                q0_control_stand_PD = zeros(8, 1);
                                q0_control_stand_PD(1, :) = q(Idx_l_abduction_stand, :);
                                q0_control_stand_PD(2, :) = q(Idx_l_rotation_stand, :);
                                q0_control_stand_PD(3, :) = q(Idx_l_thigh_stand, :);
                                q0_control_stand_PD(4, :) = q(Idx_l_knee_stand, :);
                                q0_control_stand_PD(5, :) = q(Idx_r_abduction_stand, :);
                                q0_control_stand_PD(6, :) = q(Idx_r_rotation_stand, :);
                                q0_control_stand_PD(7, :) = q(Idx_r_thigh_stand, :);
                                q0_control_stand_PD(8, :) = q(Idx_r_knee_stand, :);
                                dq0_control_stand_PD = zeros(8, 1);
                                dq0_control_stand_PD(1, :) = dq_ss(Idx_l_abduction_stand, :);
                                dq0_control_stand_PD(2, :) = dq_ss(Idx_l_rotation_stand, :);
                                dq0_control_stand_PD(3, :) = dq_ss(Idx_l_thigh_stand, :);
                                dq0_control_stand_PD(4, :) = dq_ss(Idx_l_knee_stand, :);
                                dq0_control_stand_PD(5, :) = dq_ss(Idx_r_abduction_stand, :);
                                dq0_control_stand_PD(6, :) = dq_ss(Idx_r_rotation_stand, :);
                                dq0_control_stand_PD(7, :) = dq_ss(Idx_r_thigh_stand, :);
                                dq0_control_stand_PD(8, :) = dq_ss(Idx_r_knee_stand, :);
                                
                                % Error
                                qe_control_stand_PD = q0_control_stand_PD - obj.qd_control_stand_PD;
                                dqe_control_stand_PD = dq0_control_stand_PD - obj.dqd_control_stand_PD;
                                
                                %% Torques except toes (PD)
                                % u: l_abduction, l_thigh, l_knee, r_abduction, r_thigh, r_knee
                                u(control_stand_index, :) = -Kp_stand.*qe_control_stand_PD([1, 3, 4, 5, 7, 8], :) - Kd_stand.*dqe_control_stand_PD([1, 3, 4, 5, 7, 8], :);
                                % u: l_rotation, r_rotation
                                u([Idx_l_rotation_motor_stand, Idx_r_rotation_motor_stand], :) = -obj.Kp_rotation_stand*qe_control_stand_PD([2, 6], :) - obj.Kd_rotation_stand*dqe_control_stand_PD([2, 6], :);
                                
                                %% Spring compensation by estimate
                                gravity_est_stand = obj.m*obj.g;
                                % Compute dist
                                % Left
                                dist_horizontal_L = sqrt(rp_LToe_world(1, :)^2 + rp_LToe_world(2, :)^2);
                                dist_vertical_L = rp_LToe_world(3, :);
                                % Right
                                dist_horizontal_R = sqrt(rp_RToe_world(1, :)^2 + rp_RToe_world(2, :)^2);
                                dist_vertical_R = rp_RToe_world(3, :);
                                
                                % Compute estimated part of gravity on each leg
                                Fg_L = gravity_est_stand*(dist_horizontal_R/dist_vertical_R)/((dist_horizontal_L/dist_vertical_L) + (dist_horizontal_R/dist_vertical_R));
                                Fg_R = gravity_est_stand*(dist_horizontal_L/dist_vertical_L)/((dist_horizontal_L/dist_vertical_L) + (dist_horizontal_R/dist_vertical_R));
                                
                                % Get estimated GRF by assuming GRF_z = gravity and points to COM;
                                GRF_L_est_stand = Fg_L*[rp_LToe_world(1, :)/rp_LToe_world(3, :); rp_LToe_world(2, :)/rp_LToe_world(3, :); 1];
                                GRF_R_est_stand = Fg_R*[rp_RToe_world(1, :)/rp_RToe_world(3, :); rp_RToe_world(2, :)/rp_RToe_world(3, :); 1];
                                
                                % Estimate tau by computed GRF
                                [tau_l_knee_est_stand, tau_l_kneespring_est_stand, tau_l_heelspring_est_stand] = getSpringTauByGRF(GRF_L_est_stand, q, -1);
                                [tau_r_knee_est_stand, tau_r_kneespring_est_stand, tau_r_heelspring_est_stand] = getSpringTauByGRF(GRF_R_est_stand, q, 1);
                                
                                % Compute the spring deflection of stance leg
                                u([Idx_l_knee_motor_stand, Idx_r_knee_motor_stand], :) = u([Idx_l_knee_motor_stand, Idx_r_knee_motor_stand], :) + [tau_l_knee_est_stand; tau_r_knee_est_stand];
                                
                                % Lateral Knee compensation ????????
                                qe_control_stand_PD_knee_lateral = ((rp_LToe_stTD0(2, :) + rp_RToe_stTD0(2, :))/2) - p_com_stand_stTD0_des(2, :);
                                %                                 dqe_control_stand_PD_knee_lateral = (v_LT_r_stTD0(2, :) + v_RT_r_stTD0(2, :))/2;
                                dqe_control_stand_PD_knee_lateral = v_com_stTD0(2, :);
                                tau_knee_est_stand_lateral = -obj.Kp_knee_stand_lateral*qe_control_stand_PD_knee_lateral - obj.Kd_knee_stand_lateral*dqe_control_stand_PD_knee_lateral;
                                u(Idx_l_knee_motor_stand, :) = u(Idx_l_knee_motor_stand, :) - tau_knee_est_stand_lateral;
                                u(Idx_r_knee_motor_stand, :) = u(Idx_r_knee_motor_stand, :) + tau_knee_est_stand_lateral;
                                
                                %% Torques on toes
                                % Error
                                qe_control_stand_PD_toe = ((rp_LToe_stTD0(1, :) + rp_RToe_stTD0(1, :))/2) - (p_com_stand_stTD0_des(1, :) + obj.com_x_offset_stand + com_x_offset_stand_adjustIRC);
                                %                                 dqe_control_stand_PD_toe = (v_LT_r_stTD0(1, :) + v_RT_r_stTD0(1, :))/2;  % May contain noise so the toe will vibrate
                                dqe_control_stand_PD_toe = v_com_stTD0(1, :);
                                
                                % Compute the torque
                                u([Idx_l_toe_motor_stand, Idx_r_toe_motor_stand], :) = -obj.Kp_toe_stand*qe_control_stand_PD_toe - obj.Kd_toe_stand*dqe_control_stand_PD_toe;
                                
                                % Apply toe torques according to the percentage of contacting the ground
                                [F_GRF_L, F_GRF_R] = getForcePctByGRF(GRF_z, obj.F_st_lb_stand, obj.F_st_ub_stand);
                                u([Idx_l_toe_motor_stand, Idx_r_toe_motor_stand], :) = [F_GRF_L; F_GRF_R].*u([Idx_l_toe_motor_stand, Idx_r_toe_motor_stand], :);
                        end
                        
                        w_lip = sqrt(obj.g/H_des);
                        
                        % Preparing work before stand2walk ????????
                        if IRC.controller_mode_des == 1
                            % Get current L_LT and rp_LToe (Assume start to walk with left stance)
                            L_LToe_stTD0 = (YToolkits.Angles.Rz(obj.stTD0)')*L_LToe_world;
                            rp_LToe_stTD0 = (YToolkits.Angles.Rz(obj.stTD0)')*rp_LToe_world;
                            cur_L_stT_stTD0 = L_LToe_stTD0;
                            cur_y_stT_r_stTD0 = rp_LToe_stTD0(2, 1);
                            
                            % Get desired walking control input in the y direction
                            V_com_y_des_stTD0 = IRC.Vy_tgd_avg; % V_com_y_des_comD;
                            L_LT_nextstepend_des_x_stTD0 = obj.m*(-H_des)*V_com_y_des_stTD0;
                            
                            % Compute estimated stepend L_LT_stepend_est_x with current L_LT
                            L_LT_stepend_est_x_stTD0 = obj.m*(-H_des)*w_lip*sinh(w_lip*Ts)*cur_y_stT_r_stTD0 +...
                                cosh(w_lip*Ts)*cur_L_stT_stTD0(1, 1);
                            
                            % Judge whether it is able to walk
                            if L_LT_stepend_est_x_stTD0 < -L_LT_nextstepend_des_x_stTD0
                                Controller2Estimator.Flag_ready2walk = 1;
                            end
                        end
                        
                        % All torques ramping up instead of Step
                        % Record last walking torques before mode conversion
                        if Est_States_Bus.count_step2stand == 4
                            obj.u_last = obj.u_prev;
                        end
                        
                        % Ramping up torques
                        u = ft_stand_from_walk*u + (1 - ft_stand_from_walk)*obj.u_last;
                        
                        %% CLAMP TORQUES FOR STANDING CONTROLLER!!!!!
                        % Torque limits
                        for index_motor_temp = 1:10
                            u(index_motor_temp, :) = clampTorque2Limit(obj, u(index_motor_temp, :), index_motor_temp);
                        end
                        
                    case 1  % Walking
                        %% order the index of stance leg and swing leg
                        if stanceLeg == -1 % right stanceleg
                            st_abduction = 7;
                            st_rotation = 8;
                            st_thigh = 9;
                            st_knee = 10;
                            st_shin = 11;
                            st_ankle = 12;
                            st_toe = 13;
                            sw_abduction = 14;
                            sw_rotation = 15;
                            sw_thigh = 16;
                            sw_knee = 17;
                            sw_shin = 18;
                            sw_ankle = 19;
                            sw_toe =20;
                            
                            st_motor_abduction = 1;
                            st_motor_rotation = 2;
                            st_motor_thigh = 3;
                            st_motor_knee = 4;
                            st_motor_toe = 5;
                            sw_motor_abduction = 6;
                            sw_motor_rotation = 7;
                            sw_motor_thigh = 8;
                            sw_motor_knee = 9;
                            sw_motor_toe = 10;
                            
                            abduction_direction = 1; % when the hip abduct outside, the sign is positive
                        else
                            sw_abduction = 7;
                            sw_rotation = 8;
                            sw_thigh = 9;
                            sw_knee = 10;
                            sw_shin = 11;
                            sw_ankle = 12;
                            sw_toe = 13;
                            st_abduction = 14;
                            st_rotation = 15;
                            st_thigh = 16;
                            st_knee = 17;
                            st_shin = 18;
                            st_ankle = 19;
                            st_toe =20;
                            
                            sw_motor_abduction = 1;
                            sw_motor_rotation = 2;
                            sw_motor_thigh = 3;
                            sw_motor_knee = 4;
                            sw_motor_toe = 5;
                            st_motor_abduction = 6;
                            st_motor_rotation = 7;
                            st_motor_thigh = 8;
                            st_motor_knee = 9;
                            st_motor_toe = 10;
                            
                            abduction_direction = -1; % when the hip abduct outside, the sign is negative
                        end
                        
                        %% Initialize variables at impact
                        if LegSwitch == 1
                            
                            obj.u_last = obj.u_prev;
                            
                            obj.tg_direction = YToolkits.wrap_to_Pi(obj.tg_direction + IRC.turn_rps*Ts);
                            obj.stTD0 = YToolkits.wrap_to_Pi((q(4) + q(st_rotation))); % stTD0 means initial stance toe direction
                            
                            obj.st_rotation_goal_last = obj.hr(4);
                            obj.sw_rotation_goal_last = obj.hr(3);
                            obj.st_rotation_pos_last = obj.h0(4);
                            %                 obj.st_rotation_vel_last = obj.dh0(4);
                            obj.sw_rotation_pos_last = obj.h0(3);
                            %                 obj.sw_rotation_vel_last = obj.dh0(3);
                            obj.st_rotation_goal = - 0.5* YToolkits.wrap_to_Pi( obj.tg_direction - obj.stTD0);
                            obj.sw_rotation_goal = 0.5* YToolkits.wrap_to_Pi( obj.tg_direction - obj.stTD0);
                            obj.st_rotation_goal = clamp2limit(obj, obj.st_rotation_goal, st_motor_rotation);
                            obj.sw_rotation_goal = clamp2limit(obj, obj.sw_rotation_goal, sw_motor_rotation);
                            
                            % update L_*Toe_stTD0_obs if stTD0 is changed in this
                            L_LToe_obs_stTD0 = YToolkits.Angles.Rz( - obj.stTD0) * L_LToe_obs_world;
                            L_RToe_obs_stTD0 = YToolkits.Angles.Rz( - obj.stTD0) * L_RToe_obs_world;
                            
                            obj.iqe_control_knee = 0;       % accumulated knee error
                            obj.swing_leg_leave_ground = 0;
                            
                            obj.s_ini = 0;
                            
                            if stanceLeg == -1  % left stance
                                obj.rp_swToe_ini_world = rp_RToe_rigid_world; % notice: this value could be overwrite in later code
                                
                                obj.p_st_to_sw_init_world = p_RToe_rigid_world - p_LToe_rigid_world;  % for new VC des z
                                
                                Jp_RToe_world = Jp_RightToeJoint(q);
                                v_RToe_rigid_world =  Jp_RToe_world*dq_rigid;
                                rv_RToe_rigid_world =  v_com_rigid_world - v_RToe_rigid_world;
                                
                                obj.rv_swToe_ini_world = rv_RToe_rigid_world;
                                
                                obj.Lx_stToe_kf_stTD0 = L_LToe_obs_stTD0(1);
                                obj.Ly_stToe_kf_stTD0 = L_LToe_obs_stTD0(2);
                                obj.sigma_Lx_stToe_stTD0 = obj.Cov_Lx_LRToe_stTD0;
                                obj.sigma_Ly_stToe_stTD0 = obj.Cov_Ly_LRToe_stTD0;
                                
                                obj.rp_stToe_z_ini_world = rp_LToe_rigid_world(3);
                                obj.rp_stToe_ground_z_ini_world = rp_LToe_rigid_world(3) - kx_world*rp_LToe_rigid_world(1) - ky_world*rp_LToe_rigid_world(2);
                                
                            else    % left stance
                                obj.rp_swToe_ini_world = rp_LToe_rigid_world; % notice: this value could be overwrite in later code
                                
                                obj.p_st_to_sw_init_world = p_LToe_rigid_world - p_RToe_rigid_world;
                                
                                Jp_LToe_world = Jp_LeftToeJoint(q);
                                v_LToe_rigid_world =  Jp_LToe_world*dq_rigid;
                                rv_LToe_rigid_world =  v_com_rigid_world - v_LToe_rigid_world;
                                obj.rv_swToe_ini_world = rv_LToe_rigid_world;

                                obj.Lx_stToe_kf_stTD0 = L_RToe_obs_stTD0(1);
                                obj.Ly_stToe_kf_stTD0 = L_RToe_obs_stTD0(2);
                                obj.sigma_Lx_stToe_stTD0 = obj.Cov_Lx_LRToe_stTD0;
                                obj.sigma_Ly_stToe_stTD0 = obj.Cov_Ly_LRToe_stTD0;
                                
                                obj.rp_stToe_z_ini_world = rp_RToe_rigid_world(3);
                                obj.rp_stToe_ground_z_ini_world = rp_RToe_rigid_world(3) - kx_world*rp_RToe_rigid_world(1) - ky_world*rp_RToe_rigid_world(2);
                                
                            end
                        end
                        
                        %% Assign Stance vs Swing toe parameters
                        if stanceLeg == -1 % left stance
                            
                            p_stToe_world = p_LToe_world;
                            rp_stToe_world = rp_LToe_world;
                            rp_stToe_fil_world = obj.rp_LToe_fil_world;
                            L_stToe_world = L_LToe_world;
                            L_stToe_obs_stTD0 = L_LToe_obs_stTD0;
                            
                            p_swToe_world = p_RToe_world;
                            L_swToe_world = L_RToe_world;
                            
                            Cov_Lx_stToe_stTD0 = obj.Cov_Lx_LRToe_stTD0;
                            Cov_Ly_stToe_stTD0 = obj.Cov_Ly_LRToe_stTD0;
                            
                            Cov_rpx_stToe_stTD0 = obj.Cov_rpx_LRToe_stTD0;
                            Cov_rpy_stToe_stTD0 = obj.Cov_rpy_LRToe_stTD0;
                            
                            Ks_st_1 = obj.KsL_1;
                            Ks_st_2 = obj.KsL_2;
                            
                            qs_st_1 = Est_States_Bus.qsL_1;
                            qs_st_2 = Est_States_Bus.qsL_2;
                            
                            rp_stToe_rigid_world = rp_LToe_rigid_world;                            
                            rp_swToe_rigid_world = rp_RToe_rigid_world;

                        else % right stance
                            p_stToe_world = p_RToe_world;        
                            rp_stToe_world = rp_RToe_world;
                            rp_stToe_fil_world = obj.rp_RToe_fil_world;         
                            L_stToe_world = L_RToe_world;
                            L_stToe_obs_stTD0 = L_RToe_obs_stTD0;
                            
                            p_swToe_world = p_LToe_world;
                            L_swToe_world = L_LToe_world;
                            
                            Cov_Lx_stToe_stTD0 = obj.Cov_Lx_LRToe_stTD0;
                            Cov_Ly_stToe_stTD0 = obj.Cov_Ly_LRToe_stTD0;
                            
                            Cov_rpx_stToe_stTD0 = obj.Cov_rpx_LRToe_stTD0;
                            Cov_rpy_stToe_stTD0 = obj.Cov_rpy_LRToe_stTD0;
                            
                            Ks_st_1 = obj.KsR_1;
                            Ks_st_2 = obj.KsR_2;
                            
                            qs_st_1 = Est_States_Bus.qsR_1;
                            qs_st_2 = Est_States_Bus.qsR_2;
                            
                            rp_stToe_rigid_world = rp_RToe_rigid_world;
                            rp_swToe_rigid_world = rp_LToe_rigid_world;
                            
                        end
                        
                        %% Transform world to stTD0 frame
                        rp_stToe_fil_stTD0 = YToolkits.Angles.Rz( - obj.stTD0) * rp_stToe_fil_world;
                        %             rp_swToe_stTD0 = YToolkits.Angles.Rz( - obj.stTD0) * rp_swToe;
                        %             rp_stToe_tgd = YToolkits.Angles.Rz( - obj.tg_direction) * rp_stToe_fil;
                        %             rp_swToe_tgd = YToolkits.Angles.Rz( - obj.tg_direction) * rp_swToe;
                        
                        %% KF Angular Momemtum
                        % Ly
                        % model parameters (state, output, and covariance info)
                        At_Ly = 1;      % state matrix for Ly
                        At_x = obj.sample_time*obj.m*obj.g; % state matrix for xc
                        Ct = 1;
                        Qt = Cov_Ly_stToe_stTD0;
                        
                        % prediction step w/ no noise(state and covariance from dynamics model)
                        % Ly_k+1 = Ly_k + (deltaT * m * g) * x_k
                        Ly_stToe_bar_stTD0 = At_Ly * obj.Ly_stToe_kf_stTD0 + At_x * rp_stToe_fil_stTD0(1);  % prediction update of Ly
                        sigma_Ly_stToe_bar_stTD0 = At_Ly*obj.sigma_Ly_stToe_stTD0*At_Ly' + At_x*Cov_rpx_stToe_stTD0*At_x';    % prediction update of cov(Ly)
                        
                        % measurement update
                        Kt = sigma_Ly_stToe_bar_stTD0*Ct'*(Ct*sigma_Ly_stToe_bar_stTD0*Ct'+Qt)^-1;                      % kalman gain
                        obj.Ly_stToe_kf_stTD0 = Ly_stToe_bar_stTD0 + Kt*(L_stToe_obs_stTD0(2)-Ct*Ly_stToe_bar_stTD0);   % updated state from measurement
                        obj.sigma_Ly_stToe_stTD0 = (1-Kt*Ct)*sigma_Ly_stToe_bar_stTD0;                                  % updated covariance from measurement
                        
                        % Lx
                        % model parameters (state, output, and covariance info)
                        At_Lx = 1; % state matrix for Lx
                        At_y = -obj.sample_time*obj.m*obj.g; % state matrix for yc
                        Ct = 1;
                        Qt = Cov_Lx_stToe_stTD0;
                        
                        % prediction step
                        Lx_stToe_bar_stTD0 = obj.Lx_stToe_kf_stTD0 + At_y*(rp_stToe_fil_stTD0(2)); % prediction step of Lx
                        sigma_Lx_stToe_bar_stTD0 = At_Lx*obj.sigma_Lx_stToe_stTD0*At_Lx' + At_y*Cov_rpy_stToe_stTD0*At_y'; % prediction update of cov(Lx)
                        
                        % measurement update
                        Kt = sigma_Lx_stToe_bar_stTD0*Ct'*(Ct*sigma_Lx_stToe_bar_stTD0*Ct'+Qt)^-1;                    % Kalmain gain
                        obj.Lx_stToe_kf_stTD0 = Lx_stToe_bar_stTD0 + Kt*(L_stToe_obs_stTD0(1)-Ct*Lx_stToe_bar_stTD0); % updated state from measurement
                        obj.sigma_Lx_stToe_stTD0 = (1-Kt*Ct)*sigma_Lx_stToe_bar_stTD0;                                % updated covariance from measurement
                        
                        %% Foot placement Calculation
                        Tr = max([0, 1-s])/ds;
                        l = sqrt(obj.g/H_des);
                        
                        x0_next_goal_tgd = LinuxToSlrt.ufp_wrt_com(1);
                        y0_next_goal_tgd = LinuxToSlrt.ufp_wrt_com(2);
                        xyz0_next_goal_world = YToolkits.Angles.Rz(obj.tg_direction) * [x0_next_goal_tgd; y0_next_goal_tgd; 0];
                        x0_next_goal_world = xyz0_next_goal_world(1);
                        y0_next_goal_world = xyz0_next_goal_world(2);
                        
                        xf_this_stTD0 = cosh(l*Tr) * rp_stToe_fil_stTD0(1) + 1/(obj.m*H_des*l)*sinh(l*Tr) * obj.Ly_stToe_kf_stTD0;
                        Lyf_this_stTD0 = obj.m * H_des * l * sinh(l*Tr)* rp_stToe_fil_stTD0(1) + cosh(l*Tr) * obj.Ly_stToe_kf_stTD0;
                        
                        yf_this_stTD0 = cosh(l*Tr) * rp_stToe_fil_stTD0(2) - 1/(obj.m*H_des*l)*sinh(l*Tr) * obj.Lx_stToe_kf_stTD0;
                        Lxf_this_stTD0 = - obj.m * H_des * l * sinh(l*Tr)* rp_stToe_fil_stTD0(2) + cosh(l*Tr) * obj.Lx_stToe_kf_stTD0;
                        
                        Lxyzf_this_tgd = YToolkits.Angles.Rz(obj.stTD0 - obj.tg_direction) * [Lxf_this_stTD0; Lyf_this_stTD0; 0];
                        Lxf_this_tgd = Lxyzf_this_tgd(1);
                        Lyf_this_tgd = Lxyzf_this_tgd(2);
                        
                        xyzf_this_tgd = YToolkits.Angles.Rz(obj.stTD0 - obj.tg_direction) * [xf_this_stTD0; yf_this_stTD0; 0];
                        xf_this_tgd = xyzf_this_tgd(1);
                        yf_this_tgd = xyzf_this_tgd(2);
                        
                        %% Update CustomEstStates for MPC over UDP
                        SlrtToLinux.xlip_current = [...
                            rp_stToe_fil_stTD0(1);
                            rp_stToe_fil_stTD0(2);
                            obj.Lx_stToe_kf_stTD0;
                            obj.Ly_stToe_kf_stTD0];
                        SlrtToLinux.stance_leg = stanceLeg;
%                         SlrtToLinux.xc_this = xf_this_tgd;
%                         SlrtToLinux.yc_this = yf_this_tgd;
%                         SlrtToLinux.Lx_this = Lxf_this_tgd;
%                         SlrtToLinux.Ly_this = Lyf_this_tgd;
                        
                        %% obtain tg direction frame value
                        v_com_tgd = YToolkits.Angles.Rz(obj.tg_direction)' * v_com_world;
                        v_com_stTD0 = YToolkits.Angles.Rz(obj.stTD0)' * v_com_world;
                        
                        %% Desired trajectories for virtual constraints
                        
                        % desired sinusoid traj for swing foot x
                        ref_rp_swToe_x = 1/2*(obj.rp_swToe_ini_world(1) - x0_next_goal_world)*cos(pi*(s-obj.s_ini)/(1-obj.s_ini)) + 1/2*(obj.rp_swToe_ini_world(1) + x0_next_goal_world);
                        ref_rv_swToe_x = 1/2*(obj.rp_swToe_ini_world(1) - x0_next_goal_world)*(-pi/(1-obj.s_ini)*sin(pi*(s-obj.s_ini)/(1-obj.s_ini))*ds);
                        ref_ra_swToe_x = 1/2*(obj.rp_swToe_ini_world(1) - x0_next_goal_world)*(-(pi/(1-obj.s_ini))^2*cos(pi*(s-obj.s_ini)/(1-obj.s_ini))*ds^2);
                        
                        % desired sinusoid traj for swing foot y
                        ref_rp_swToe_y = 1/2*(obj.rp_swToe_ini_world(2) - y0_next_goal_world)*cos(pi*(s-obj.s_ini)/(1-obj.s_ini)) + 1/2*(obj.rp_swToe_ini_world(2) + y0_next_goal_world);
                        ref_rv_swToe_y = 1/2*(obj.rp_swToe_ini_world(2) - y0_next_goal_world)*(-pi/(1-obj.s_ini)*sin(pi*(s-obj.s_ini)/(1-obj.s_ini))*ds);
                        ref_ra_swToe_y = 1/2*(obj.rp_swToe_ini_world(2) - y0_next_goal_world)*(-(pi/(1-obj.s_ini))^2*cos(pi*(s-obj.s_ini)/(1-obj.s_ini))*ds^2);
                        
                        % parabola for swing foot z traj
                        %                 para_a2 = -2 * obj.H_next + 2 * obj.rp_swToe_ini_world(3) + 4 * z_cl;
                        %                 para_a1 = 3 * obj.H_next - 3 * obj.rp_swToe_ini_world(3) - 4 * z_cl;
                        %                 para_a0 = obj.rp_swToe_ini_world(3);
                        s_cl = 2/3;
                        ufp_sol_rel_st_world = YToolkits.Angles.Rz(obj.tg_direction) * [LinuxToSlrt.ufp_wrt_st(1); LinuxToSlrt.ufp_wrt_st(2); 0];
                        ufp_sol_rel_st_world_x = ufp_sol_rel_st_world(1);
                        ufp_sol_rel_st_world_y = ufp_sol_rel_st_world(2);
                        
                        para_a2 = z_cl/(s_cl - 1) - (z_cl - obj.p_st_to_sw_init_world(3) + kx_world*ufp_sol_rel_st_world_x + ky_world*ufp_sol_rel_st_world_y)/s_cl;
                        para_a1 = -(z_cl - obj.p_st_to_sw_init_world(3) + kx_world*ufp_sol_rel_st_world_x + ky_world*ufp_sol_rel_st_world_y + obj.p_st_to_sw_init_world(3)*s_cl^2 - kx_world*s_cl^2*ufp_sol_rel_st_world_x - ky_world*s_cl^2*ufp_sol_rel_st_world_y)/(s_cl*(s_cl - 1));
                        para_a0 = obj.p_st_to_sw_init_world(3);
                        ref_p_st_to_swToe_z= para_a2 * s^2 + para_a1 * s + para_a0;
                        ref_v_st_to_swToe_z = (2 * para_a2 * s + para_a1) * ds;
                        ref_a_st_to_swToe_z = (2 * para_a2) * ds^2;
                        
                        % reference traj for stance rotation (hip yaw)
                        ref_st_rotation = (1-s_sat) * obj.st_rotation_pos_last + s_sat*obj.st_rotation_goal;
                        
                        % reference traj for swing rotation (hip yaw)
                        yaw_error = YToolkits.wrap_to_Pi(q(4) - obj.tg_direction); % obj.yaw_error_fil = YToolkits.first_order_filter(obj.yaw_error_fil, yaw_error , obj.yaw_error_fil_param);
                        obj.sw_rotation_goal =  - yaw_error; % overwrite the sw_rotation_goal here
                        obj.sw_rotation_goal = clamp2limit(obj, obj.sw_rotation_goal, sw_motor_rotation);
                        ref_sw_rotation = (1-s_sat) * obj.sw_rotation_pos_last + s_sat*obj.sw_rotation_goal;
                        
                        % reference traj for relative com z to stance
                        if isSim == 2
                            spring_height_compensation = 0;
                        else
                            spring_height_compensation = 0.00;
                        end
                        ref_rp_stToe_z = (1-s_ratio)*obj.rp_stToe_ground_z_ini_world + s_ratio * H_des;  % uses q_rigid to compute com z height (could add compensation if necessary)
                        ref_rv_stToe_z = -ds_ratio*obj.rp_stToe_ground_z_ini_world + ds_ratio * H_des;
                        
                        % Concatenate reference traj's
                        obj.hr= [0;0;ref_st_rotation; ref_sw_rotation; ref_rp_stToe_z ; ref_rp_swToe_x; ref_rp_swToe_y; ref_p_st_to_swToe_z];
                        obj.dhr = [0;0;0;0;ref_rv_stToe_z;ref_rv_swToe_x;ref_rv_swToe_y;ref_v_st_to_swToe_z];
                        obj.ddhr = [0;0;0;0;0;ref_ra_swToe_x;ref_ra_swToe_y;ref_a_st_to_swToe_z];
                        
                        %% Inverse Kinematics
                        % Jh is jacobian for output
                        %             Jh = zeros(8,20);
                        %             Jh(1,5) = 1; % torso pitch
                        %             Jh(2,6) = 1; % torso roll
                        %             Jh(3,st_rotation) = 1; % stance rotation
                        %             Jh(4,sw_rotation) = 1; % swing rotation.
                        %             Jh(5,:) = Jrp_stToe_rigid(3,:); % com to stance toe height
                        %             Jh([6,7,8],:) = Jrp_swToe_rigid([1,2,3],:); % com to swing toe x y z relativ pos
                        
                        % Actual output
                        obj.h0 = [q_rigid(5);q_rigid(6);q_rigid(st_rotation);q_rigid(sw_rotation);rp_stToe_rigid_world(3);rp_swToe_rigid_world([1,2,3])];
                        %                 obj.h0 = [q_rigid(5);q_rigid(6);q_rigid(st_rotation);q_rigid(sw_rotation);zeros(4,1)];
                        %             obj.dh0 = Jh*dq_rigid;
                        
                        % mapping to actuated generalized coordinates
                        obj.qd_control(1) = obj.hr(1); % torso pitch
                        obj.qd_control(2) = obj.hr(2); % torso roll
                        obj.qd_control(3) = obj.hr(3); % stance rotation
                        obj.qd_control(4) = obj.hr(4); % swing rotation
                        obj.dqd_control(1) = obj.dhr(1); % torso pitch
                        obj.dqd_control(2) = obj.dhr(2); % torso roll
                        obj.dqd_control(3) = obj.dhr(3); % stance rotation
                        obj.dqd_control(4) = obj.dhr(4); % swing rotation
                        
                        % if leg switch, initially guess qd_control with actual value
                        if LegSwitch == 1
                            obj.qd_control(5:8) = q_rigid([st_knee, sw_abduction, sw_thigh, sw_knee]);
                        end
                        q_iter = q_rigid;
                        iter_num = 0;
                        while 1
                            q_iter([st_knee, sw_abduction, sw_thigh, sw_knee, st_ankle, sw_ankle]) = [obj.qd_control(5:8); - obj.qd_control([5,8]) + deg2rad(13)]; % rigid constraint
                            q_iter(st_thigh) = q_rigid(st_thigh) - 1/2 * (q_iter(st_knee) - q_rigid(st_knee)); % assume the leg direction does not change after knee extend/retract
                            
                            p_com_iter =  p_COM(q_iter);
                            p_com_iter = p_com_iter + YToolkits.Angles.Rz(q(4))*[obj.com_x_offset;0;0];
                            p_LToe_iter =  p_LeftToeJoint(q_iter);
                            p_RToe_iter =  p_RightToeJoint(q_iter);
                            rp_LToe_iter =  p_com_iter - p_LToe_iter;
                            rp_RToe_iter =  p_com_iter - p_RToe_iter;
                            
                            Jp_com_iter =  Jp_COM(q_iter);
                            Jp_LToe_iter =  Jp_LeftToeJoint(q_iter);
                            Jp_RToe_iter =  Jp_RightToeJoint(q_iter);
                            Jrp_LToe_iter =  Jp_com_iter - Jp_LToe_iter;
                            Jrp_RToe_iter =  Jp_com_iter - Jp_RToe_iter;
                            
                            if stanceLeg == -1  % left stance
                                rp_stToe_iter = rp_LToe_iter;
                                rp_swToe_iter = rp_RToe_iter;
                                Jrp_stToe_iter = Jrp_LToe_iter;
                                Jrp_swToe_iter = Jrp_RToe_iter;
                            else  % right stance
                                rp_stToe_iter = rp_RToe_iter;
                                rp_swToe_iter = rp_LToe_iter;
                                Jrp_stToe_iter = Jrp_RToe_iter;
                                Jrp_swToe_iter = Jrp_LToe_iter;
                            end
                            %                     J_allq = [Jrp_stToe_iter(3,:);Jrp_swToe_iter([1,2,3],:)];
                            J_allq = [Jrp_stToe_iter(3,:)-kx_world*Jrp_stToe_iter(1,:)-ky_world*Jrp_stToe_iter(2,:); Jrp_swToe_iter([1,2],:); Jrp_stToe_iter(3,:)-Jrp_swToe_iter(3,:)];
                            
                            J44 = [J_allq(:,st_knee) - J_allq(:,st_ankle) , J_allq(:,[sw_abduction, sw_thigh]), J_allq(:,sw_knee) - J_allq(:,sw_ankle)];
                            J44(:,1) = J44(:,1) - 1/2 * J_allq(:,st_thigh);
                            if max(abs(obj.hr(5:8) - [rp_stToe_iter(3)-kx_world*rp_stToe_world(1)-ky_world*rp_stToe_world(2);rp_swToe_iter([1,2]); rp_stToe_iter(3)-rp_swToe_iter(3)]))<0.001 || iter_num >= obj.IK_max_iter_num
                                break;
                            end
                            %                     qd_control5_8_update = J44\(obj.hr(5:8) - [rp_stToe_iter(3);rp_swToe_iter([1,2,3])]);
                            qd_control5_8_update = J44\(obj.hr(5:8) - [rp_stToe_iter(3)-kx_world*rp_stToe_world(1)-ky_world*rp_stToe_world(2);rp_swToe_iter([1,2]); rp_stToe_iter(3)-rp_swToe_iter(3)]);
                            if max(abs(qd_control5_8_update)) > 0.1
                                qd_control5_8_update = 0.1/max(abs(qd_control5_8_update)) * qd_control5_8_update;
                            end
                            obj.qd_control(5:8) = obj.qd_control(5:8) + qd_control5_8_update;
                            
                            obj.qd_control(5) = clamp2limit(obj, obj.qd_control(5), st_motor_knee);
                            obj.qd_control(6) = clamp2limit(obj, obj.qd_control(6), sw_motor_abduction);
                            obj.qd_control(7) = clamp2limit(obj, obj.qd_control(7), sw_motor_thigh);
                            obj.qd_control(8) = clamp2limit(obj, obj.qd_control(8), sw_motor_knee);
                            
                            iter_num = iter_num + 1;
                        end
                        obj.dqd_control(5:8) = J44\obj.dhr(5:8);
                        %                 obj.ddhr(5) = 9.8*sqrt((rp_stToe(1)^2 + rp_stToe(2)^2))/rp_stToe(3) * sqrt((rp_stToe(1)^2 + rp_stToe(2)^2))/norm(rp_stToe);
                        obj.ddqd_control(5:8) = J44\obj.ddhr(5:8);
                        % special treatment for stance knee
                        %             st_abd_thi_knee_fake_vel = (Jrp_stToe_rigid(:,[st_abduction, st_thigh, st_knee]) + [zeros(3,2),-Jrp_stToe_rigid(:,st_ankle)])\[v_com(1);v_com(2); 0];
                        %                 st_abd_thi_knee_fake_accel = (Jrp_stToe_rigid(:,[st_abduction, st_thigh, st_knee]) + [zeros(3,2),-Jrp_stToe_rigid(:,st_ankle)])\((32*9.8/32)*[rp_stToe(1)/rp_stToe(3); rp_stToe(2)/rp_stToe(3); 0]);
                        %             obj.dqd_control(5) = st_abd_thi_knee_fake_vel(3);
                        %                 obj.ddqd_control(5) = st_abd_thi_knee_fake_accel(3);
                        
                        %% Compensate spring deflection
                        %             ref_rp_swToe = obj.hr(6:8);
                        
                        F_gravity = obj.m*obj.g;
                        GRF_st_est = F_gravity * [ rp_stToe_world(1)/rp_stToe_world(3); rp_stToe_world(2)/rp_stToe_world(3); 1];% assume GRFz = gravity and GRF point to COM;
                        %             GRF_sw_est = F_gravity * [ rp_swToe(1)/rp_swToe(3); rp_swToe(2)/rp_swToe(3); 1];% assume GRFz = gravity and GRF point to COM;
                        
                        % If leg touch the ground, the corresponding force on knee, knee spring and heel spring will be
                        [tau_knee_st_est, tau_kneespring_st_est, tau_heelspring_st_est] = GRF_to_KneeAndTwoSprings(obj,GRF_st_est,q,stanceLeg);
                        %                 [tau_knee_sw_est, tau_kneespring_sw_est, tau_heelspring_sw_est] = GRF_to_KneeAndTwoSprings(obj,GRF_sw_est,q,-stanceLeg);
                        
                        % compute the corresponding spring deflection.
                        % stance leg
                        deflection_kneespring_st_est = -tau_kneespring_st_est/Ks_st_1;
                        deflection_heelspring_st_est = -tau_heelspring_st_est/Ks_st_2;
                        J_ccct_st = ClosedChain_Coordinate_Transform_Jacobian(q([st_knee, st_shin, st_ankle])); %replace with rigid if vibration occurs
                        if stanceLeg == -1
                            J_LL_st = J_LL_Left(q);
                        else
                            J_LL_st = J_LL_Right(q);
                        end
                        J_LL_st_selected = J_LL_st([st_knee, st_shin, st_ankle]);
                        J_LL_ccc = J_LL_st_selected*J_ccct_st^-1;
                        LL_error = J_LL_ccc*[0;deflection_kneespring_st_est;deflection_heelspring_st_est];
                        comp_knee_st = -LL_error/J_LL_ccc(1,1);
                        %             dcomp_knee_st = (comp_knee_st - obj.comp_knee_st_prev)/obj.sample_time;
                        
                        %             a_comp_knee = -20;
                        qd_control_adjusted = obj.qd_control;
                        dqd_control_adjusted = obj.dqd_control;
                        ddqd_control_adjusted = obj.ddqd_control;
                        
                        qd_control_adjusted(5) = obj.qd_control(5) + comp_knee_st;
                        
                        
                        if isSim
                            adjusted_desired_roll_angle = qd_control_adjusted(2);
                            roll_adjustment_thre = 0.1;
                            if qd_control_adjusted(6) > obj.ActuatorLimits_ARsafety(sw_motor_abduction,2) - roll_adjustment_thre
                                adjusted_desired_roll_angle = qd_control_adjusted(2) + qd_control_adjusted(6) - (obj.ActuatorLimits_ARsafety(sw_motor_abduction,2)- roll_adjustment_thre);
                            end
                            if qd_control_adjusted(6) < obj.ActuatorLimits_ARsafety(sw_motor_abduction,1) + roll_adjustment_thre
                                adjusted_desired_roll_angle = qd_control_adjusted(2) + qd_control_adjusted(6) - (obj.ActuatorLimits_ARsafety(sw_motor_abduction,1)+ roll_adjustment_thre);
                            end
                            %                     obj.adjusted_desired_roll_angle_fil = YToolkits.first_order_filter(obj.adjusted_desired_roll_angle_fil,adjusted_desired_roll_angle,obj.adjusted_desired_roll_angle_fil_param);
                            obj.adjusted_desired_roll_angle_fil = YToolkits.first_order_filter(obj.adjusted_desired_roll_angle_fil,adjusted_desired_roll_angle,1);
                            qd_control_adjusted(2) = obj.adjusted_desired_roll_angle_fil;
                        end
                        
                        q0_control = zeros(8,1);
                        q0_control(1) = q_ss(5);
                        q0_control(2) = q_ss(6);
                        q0_control(3) = q_ss(st_rotation);
                        q0_control(4) = q_ss(sw_rotation);
                        q0_control(5) = q_ss(st_knee);
                        q0_control(6) = q_ss(sw_abduction);
                        q0_control(7) = q_ss(sw_thigh);
                        q0_control(8) = q_ss(sw_knee);
                        dq0_control = zeros(8,1);
                        dq0_control(1) = dq_ss(5);
                        dq0_control(2) = dq_ss(6);
                        dq0_control(3) = dq_ss(st_rotation);
                        dq0_control(4) = dq_ss(sw_rotation);
                        dq0_control(5) = dq_ss(st_knee);
                        dq0_control(6) = dq_ss(sw_abduction);
                        dq0_control(7) = dq_ss(sw_thigh);
                        dq0_control(8) = dq_ss(sw_knee);
                        
                        %% Compute Torque
                        qe_control = q0_control - qd_control_adjusted;
                        dqe_control = dq0_control - dqd_control_adjusted;
                        
                        low_level_method = 3;
                        switch low_level_method
                            case 1
                                %                     %% compute torque (PD)
                                %                     u_torso_pitch = -obj.Kp_pitch*q_ss(5) - obj.Kd_pitch*dq_ss(5);
                                %                     u_torso_roll = obj.Kp_pitch*q_ss(6) + obj.Kd_pitch*dq_ss(6);
                                %
                                %
                                %                     obj.iqe_control_knee = obj.iqe_control_knee + obj.sample_time * dqe_control(5);
                                %                     u(st_motor_thigh) = u_torso_pitch;
                                %                     u(st_motor_abduction) = u_torso_roll;
                                %                     u(st_motor_rotation) = -obj.Kp_st_rotation*qe_control(3) - obj.Kd_st_rotation*dqe_control(3);
                                %                     u(sw_motor_rotation) = -obj.Kp_rotation*qe_control(4) - obj.Kd_rotation*dqe_control(4);
                                %                     %                 u(st_motor_knee) = -obj.Kp_knee*qe_control(5) - obj.Kd_knee*dqe_control(5) - obj.Ki_knee*obj.iqe_control_knee;
                                %                     u(st_motor_knee) = -obj.Kp_knee*qe_control(5) - obj.Kd_knee*dqe_control(5);
                                %                     u(sw_motor_abduction) = -obj.Kp_abduction*qe_control(6) - obj.Kd_abduction*dqe_control(6);
                                %                     u(sw_motor_thigh) = -obj.Kp_thigh*qe_control(7) - obj.Kd_thigh*dqe_control(7);
                                %                     u(sw_motor_knee) = -obj.Kp_knee*qe_control(8) - obj.Kd_knee*dqe_control(8);
                                %
                                %                     % add compenstation for stance knee
                                %                     u(st_motor_knee) = u(st_motor_knee) + tau_knee_st_est;
                                %
                                %                     % add compenstation for torso pitch and roll on stance
                                %                     u(st_motor_thigh) = u(st_motor_thigh) +  u_pitch_cp;
                                %                     u(st_motor_abduction) = u(st_motor_abduction) + abduction_direction * u_roll_cp;
                                %
                                %                     % control torso when leg is on the ground
                                %                     u(st_motor_thigh) = GRF_st_ratio * u(st_motor_thigh) + (1 - GRF_st_ratio)*( - obj.Kd_thigh * dq_ss(st_thigh));
                                %                     u(sw_motor_thigh) = GRF_sw_ratio * u_torso_pitch + (1 - GRF_sw_ratio)*u(sw_motor_thigh);
                                %                     u(st_motor_abduction) = GRF_st_ratio * u(st_motor_abduction) + (1 - GRF_st_ratio)*( - obj.Kd_abduction * dq_ss(st_abduction));
                                %                     u(sw_motor_abduction) = GRF_sw_ratio * u_torso_roll + (1 - GRF_sw_ratio)*u(sw_motor_abduction);
                            case 2
                                %                     %% compute torque (PBC)
                                %                     % get the indexes
                                %                     qc_index = [5;6;st_rotation;sw_rotation;st_knee;sw_abduction;sw_thigh;sw_knee];
                                %                     motor_index = [st_motor_thigh;st_motor_abduction;st_motor_rotation;sw_motor_rotation;st_motor_knee;sw_motor_abduction;sw_motor_thigh;sw_motor_knee];
                                %                     Kp_PBC = [obj.Kp_pitch; obj.Kp_roll; Kp([st_motor_rotation;sw_motor_rotation;st_motor_knee;sw_motor_abduction;sw_motor_thigh;sw_motor_knee])];
                                %                     Kd_PBC = [obj.Kd_pitch; obj.Kd_roll; Kd([st_motor_rotation;sw_motor_rotation;st_motor_knee;sw_motor_abduction;sw_motor_thigh;sw_motor_knee])];
                                %
                                %                     M = InertiaMatrix(q);
                                %                     G = GravityVector(q);
                                %                     B=zeros(20,10); B(7:10,1:4) = eye(4); B(13:17,5:9) = eye(5); B(20,10) = 1;
                                %                     % body Jacobian on foot
                                %                     Jb_L = Jb_LeftToeBottomBack(q);
                                %                     Jb_R = Jb_RightToeBottomBack(q);
                                %                     % cartesian Jacobian on foot
                                %                     Jc_L = Jp_LeftToeBottomBack(q);
                                %                     Jc_R = Jp_RightToeBottomBack(q);
                                %                     % Homogeneous Transformation Matrix
                                %                     T_L = T_LeftToeBottomBack(q);
                                %                     T_R = T_RightToeBottomBack(q);
                                %                     % Jacobian for ground constraint
                                %                     Jg_L = zeros(5,20); Jg_L(1:3,:)= Jc_L; Jg_L([4,5],:)= Jb_L([5,6],:);
                                %                     Jg_R = zeros(5,20); Jg_R(1:3,:)= Jc_R; Jg_R([4,5],:)= Jb_R([5,6],:);
                                %                     if stanceLeg == -1
                                %                         Jg = Jg_L;
                                %                     else
                                %                         Jg = Jg_R;
                                %                     end
                                %                     [Jgd1,Jgd2] = size(Jg);
                                %
                                %                     JsL = zeros(2,20); JsL(1,11) = 1; JsL(2,[10 11 12]) = J_HeelSpringDeflectionEst(q(10),q(11),q(12));
                                %                     JsR = zeros(2,20); JsR(1,18) = 1; JsR(2,[17 18 19]) = J_HeelSpringDeflectionEst(q(17),q(18),q(19));
                                %                     Js = [JsL; JsR];
                                %
                                %                     [Jsd1,Jsd2] = size(Js);
                                %                     [JsLd1,JsLd2] = size(JsL);
                                %                     [JsRd1,JsRd2] = size(JsR);
                                %                     %Extended Matrix ( for walking)
                                %                     Me = [M, -Jg', -Js';
                                %                         Jg, zeros(Jgd1,Jgd1), zeros(Jgd1,Jsd1);
                                %                         Js, zeros(Jsd1,Jgd1), zeros(Jsd1,Jsd1)];
                                %                     He = [G;zeros(Jgd1,1);zeros(Jsd1,1)];
                                %                     B = zeros(20,10); B(7:10,1:4) = eye(4); B(13:17,5:9) = eye(5); B(20,10) = 1;
                                %                     B_cut = B(:,motor_index);
                                %                     Be = [B_cut;zeros(Jgd1+Jsd1,length(motor_index))];
                                %
                                %                     Me_re = YToolkits.SquareMatrixReorder(Me,qc_index);
                                %                     He_re = YToolkits.VectorReorder(He,qc_index);
                                %                     Be_re = YToolkits.VectorReorder(Be,qc_index);
                                %                     [M11, M12, M21, M22, H1, H2, B1, B2] = YToolkits.PartitionEOM(Me_re,He_re,Be_re,length(qc_index));
                                %                     M22_inv = M22^-1;
                                %                     M_bar = M11 - M12*M22_inv*M21;
                                %                     H_bar = -M12*M22_inv*H2+H1;
                                %                     B_bar = -M12*M22_inv*B2 + B1;
                                %                     B_bar_inv = B_bar^-1;
                                %                     M_bar_inv = M_bar^-1;
                                %
                                %                     u8 = B_bar_inv*(M_bar*ddqd_control_adjusted + H_bar -Kd_PBC.*dqe_control - Kp_PBC.*qe_control);
                                %                     u_ff = B_bar_inv*(M_bar*ddqd_control_adjusted);
                                %                     u_gv = B_bar_inv*H_bar;
                                %                     u_fb = B_bar_inv*( -Kd_PBC.*dqe_control - Kp_PBC.*qe_control);
                                %                     u(motor_index) = u8;
                            case 3
                                %% compute torque (PBC matrix + static gravity)
                                [u_gc_st_abduction, u_gc_st_thigh, u_gc_sw_abduction, u_gc_sw_thigh] = get_gravity_compensation(q, stanceLeg); % Gravity compensation for st_abduction, st_thigh, sw_abduction, sw_thigh
                                % get the indexes
                                %                     qc_index = [5;6;st_rotation;sw_rotation;st_knee;sw_abduction;sw_thigh;sw_knee];
                                motor_index = [st_motor_thigh;st_motor_abduction;st_motor_rotation;sw_motor_rotation;st_motor_knee;sw_motor_abduction;sw_motor_thigh;sw_motor_knee];
                                Kp_PBC = [obj.Kp_pitch; obj.Kp_roll; obj.Kp_st_rotation; Kp([sw_motor_rotation;st_motor_knee;sw_motor_abduction;sw_motor_thigh;sw_motor_knee])];
                                Kd_PBC = [obj.Kd_pitch; obj.Kd_roll; obj.Kd_st_rotation; Kd([sw_motor_rotation;st_motor_knee;sw_motor_abduction;sw_motor_thigh;sw_motor_knee])];
                                
                                %                         [B_bar,B_bar_inv,H_bar,M_bar,M_bar_inv] = Select_DynamicMatrix(obj,DynamicMatrixLibrary,q(10),q(17),stanceLeg);
                                
                                [B_bar_inv,B_bar_inv_times_M_bar] = Select_DynamicMatrix(obj,DynamicMatrixLibrary,q(10),q(17),stanceLeg);
                                
                                %                         u8 = B_bar_inv*(M_bar*obj.ddqd_control + H_bar -Kd_PBC.*dqe_control - Kp_PBC.*qe_control);
                                
                                u_ff = B_bar_inv_times_M_bar * ddqd_control_adjusted;
                                u_fb = B_bar_inv*( -Kd_PBC.*dqe_control - Kp_PBC.*qe_control);
                                u_gv = [u_gc_st_thigh; u_gc_st_abduction; 0; 0; tau_knee_st_est; u_gc_sw_abduction; u_gc_sw_thigh; 0];
                                u(motor_index) = u_ff + u_gv + u_fb;
                                
                        end
                        % flat swing toe
                        [Angle_LToe, Angle_RToe, dAngle_LToe, dAngle_RToe] = getToeAbsoluteAngle_rigid(q,dq); % in radians
                        if stanceLeg == -1
                            u(10) = - obj.Kp_toe * (Angle_RToe - atan(kx_body)) - obj.Kd_toe * dAngle_RToe;
                        else
                            u(5) = - obj.Kp_toe * (Angle_LToe - atan(kx_body)) - obj.Kd_toe * dAngle_LToe;
                        end
                        
                        %% smooth torque and assign
                        u = u_ratio*u + (1 - u_ratio) * obj.u_last;
                        
                        % ramp st_motor_rotation torque up
                        u(st_motor_rotation) = u_st_rotation_ratio * u(st_motor_rotation);
                        
                        % swing thigh & abduction don't apply torque until leg leave ground
                        if LegSwitch == 1
                            obj.ini_toe_height_diff = p_swToe_world(3) - p_stToe_world(3);
                        end
                        toe_height_diff_ratio = (((p_swToe_world(3) - p_stToe_world(3)) - obj.ini_toe_height_diff) - obj.toe_leave_ground_lb)/(obj.toe_leave_ground_ub - obj.toe_leave_ground_lb); % a ramp up function about toe height difference
                        toe_height_diff_ratio = median([toe_height_diff_ratio,0,1]);
                        if obj.swing_leg_leave_ground == 0
                            obj.rp_swToe_ini_world(1:2) = rp_swToe_rigid_world(1:2);
                            %                     obj.s_ini = min([s,0.6]); % s_ini will be the s when swing leg begin to swing.
                            obj.s_ini = s;
                            u(sw_motor_thigh) = toe_height_diff_ratio * u(sw_motor_thigh);
                            u(sw_motor_abduction) = toe_height_diff_ratio * u(sw_motor_abduction);
                        end
                        if toe_height_diff_ratio > 0.99
                            obj.swing_leg_leave_ground = 1;
                        end
                        
                        % limit stance rotation maximum torque
                        if stanceLeg == -1
                            GRF_st = Est_States_Bus.GRF_L;
                        else
                            GRF_st = Est_States_Bus.GRF_R;
                        end
                        max_toe_yaw_torque = get_max_toe_yaw_torque(GRF_st(1), GRF_st(2), 0.6);
                        u(st_motor_rotation) = median([- max_toe_yaw_torque, max_toe_yaw_torque, u(st_motor_rotation)]);
                        
                        % limit stance knee torque
                        u(st_motor_knee) = median([-50,u(st_motor_knee),180]);
                        u(sw_motor_knee) = median([-50,u(sw_motor_knee),180]);
                        
                        % Torque limits
                        for index_motor_temp = 1:10
                            u(index_motor_temp, :) = clampTorque2Limit(obj, u(index_motor_temp, :), index_motor_temp);
                        end
                        
                        obj.comp_knee_st_prev = comp_knee_st;
                        
                        %% Log data for walking controller only
                        if obj.controller_mode == 1
                            % target velocities
                            Data.Vx_tgd_des = Vx_des;
                            Data.Ly_tgd_des = Vx_des * obj.m * H_des;
                            Data.Vy_tgd_des = IRC.Vy_tgd_avg;
                            Data.Lx_tgd_des = -IRC.Vy_tgd_avg * obj.m * H_des;

                            % centroidal kinematics (walking specific)
                            Data.p_stToe_world = p_stToe_world;    
                            Data.p_stToe_stTD0 = YToolkits.Angles.Rz( - obj.stTD0) * p_stToe_world;
                            
                            Data.p_swToe_world = p_swToe_world;
                            Data.p_swToe_stTD0 = YToolkits.Angles.Rz( - obj.stTD0) * p_swToe_world;
                            
                            Data.rp_stToe_fil_world = rp_stToe_fil_world;
                            Data.rp_stToe_fil_stTD0 = rp_stToe_fil_stTD0;

                            Data.Lx_stToe_world = L_stToe_world(1);
                            Data.Lx_stToe_stTD0_obs = L_stToe_obs_stTD0(1);
                            Data.Lx_stToe_stTD0_kf = obj.Lx_stToe_kf_stTD0;
                            
                            Data.Ly_stToe_world = L_stToe_world(2);
                            Data.Ly_stToe_stTD0_obs = L_stToe_obs_stTD0(2);
                            Data.Ly_stToe_stTD0_kf = obj.Ly_stToe_kf_stTD0;
                            
                            Data.vx_com_tgd = v_com_tgd(1);
                            Data.vy_com_tgd = v_com_tgd(2);
                            Data.vz_com_tgd = v_com_tgd(3);
                            
                            % foot placement
                            Data.x0_next_goal_world = x0_next_goal_world;
                            Data.x0_next_goal_tgd = x0_next_goal_tgd;
                            
                            Data.y0_next_goal_world = y0_next_goal_world;
                            Data.y0_next_goal_tgd = y0_next_goal_tgd;
                            
                            % ALIP state estimates
                            Data.xf_this_stTD0 = xf_this_stTD0;
                            Data.yf_this_stTD0 = yf_this_stTD0;
                            Data.Lxf_this_stTD0 = Lxf_this_stTD0;
                            Data.Lyf_this_stTD0 = Lyf_this_stTD0; 
                            
                            % mpc fp
                            Data.ufp_sol_rel_st_x = LinuxToSlrt.ufp_wrt_st(1); % mpc footplacement before aligning with target direction
                            Data.ufp_sol_rel_st_y = LinuxToSlrt.ufp_wrt_st(2);
                            Data.ufp_sol_rel_com_x = LinuxToSlrt.ufp_wrt_com(1);
                            Data.ufp_sol_rel_com_y = LinuxToSlrt.ufp_wrt_com(2);
                            
                            % terrain
                            Data.kx_body = kx_body;
                            Data.kx_world = kx_world;
                            Data.ky_body = ky_body;
                            Data.ky_world = ky_world;
                            Data.mu = obj.mu_fil;
                            
                            % joint tracking
                            Data.qd_control = obj.qd_control;
                            Data.dqd_control = obj.dqd_control;
                            Data.q0_control = q0_control;
                            Data.dq0_control = dq0_control;                            
                        end
                        
                end
                % store the torque
                userInputs.torque = u;
                
                % initialize after 1 loop
                if obj.initialized == 0
                    obj.initialized = 1;
                end
                
                %% log variables for next iteration
                obj.u_prev = u;
                
                %% Return
                userInputs.telemetry(1) = 0;
                userInputs.telemetry(2) = 0;
                userInputs.telemetry(3) = 0;
                userInputs.telemetry(4) = 0;
                userInputs.telemetry(5) = Est_States_Bus.Voltage;
                userInputs.telemetry(6) = 0;
                userInputs.telemetry(8) = GRF_z(1);
                userInputs.telemetry(9) = GRF_z(2);
                
                %% log Data
                % time 
                Data.t_total = t_total;
                Data.t = t;
                Data.s = s;

                % states
                Data.q = q;
                Data.dq = dq;
                
                % torque
                Data.u = u;
                
                % Controller mode
                Data.controller_mode = obj.controller_mode;

                % for walking (logged at all times)
                Data.T_period = IRC.step_time;
                Data.stanceLeg = stanceLeg;
                Data.tg_direction = obj.tg_direction;
                Data.stTD0 = obj.stTD0;
                
                % kinematics - toes
                Data.p_LToe_world = p_LToe_world;
                Data.p_RToe_world = p_RToe_world;
                
                % kinematics - com
                Data.px_com_world = p_com_world(1);
                Data.py_com_world = p_com_world(2);
                Data.pz_com_world = p_com_world(3);
                Data.vx_com_world = v_com_world(1);
                Data.vy_com_world = v_com_world(2);
                Data.vz_com_world = v_com_world(3);
                
                % kinematics - angular momentum
                Data.Lx_LToe_world = L_LToe_world(1);
                Data.Lx_RToe_world = L_RToe_world(1);
                Data.Ly_LToe_world = L_LToe_world(2);
                Data.Ly_RToe_world = L_RToe_world(2);
                
                % virtual constraints
                Data.hr = obj.hr;
                Data.h0 = obj.h0;
                             
            else
            end
        end % stepImpl
        
        %% Default functions
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
        end % setupImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        %         function [name_1, name_2]  = getInputNamesImpl(~)
        %             %GETINPUTNAMESIMPL Return input port names for System block
        %             name_1 = 'EstStates';
        %             name_2 = 't_total';
        %         end % getInputNamesImpl
        %
        %         function [name_1, name_2] = getOutputNamesImpl(~)
        %             %GETOUTPUTNAMESIMPL Return output port names for System block
        %             name_1 = 'userInputs';
        %             name_2 = 'Data';
        %         end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [out, Data, SlrtToLinux, Controller2Estimator] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            out = [1, 1];
            Data = [1, 1];
            SlrtToLinux = [1,1];
            Controller2Estimator = [1,1];
        end % getOutputSizeImpl
        
        function [out, Data, SlrtToLinux, Controller2Estimator] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            out = 'CassieUserInBus';
            Data = 'cassieDataWithStandingBus';
            SlrtToLinux = 'SlrtToLinuxDataBus';
            Controller2Estimator = 'cassieController2EstimatorWithStandingBus';
        end % getOutputDataTypeImpl
        
        function [out, Data, SlrtToLinux, Controller2Estimator] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            out = false;
            Data = false;
            SlrtToLinux = false;
            Controller2Estimator = false;
        end % isOutputComplexImpl
        
        function [out, Data, SlrtToLinux, Controller2Estimator] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            out = true;
            Data = true;
            SlrtToLinux = true;
            Controller2Estimator = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef
