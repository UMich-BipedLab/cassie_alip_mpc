%Yukai controller.

classdef RadioCommandInterpreter_with_standing < ...
        matlab.System & ...
        matlab.system.mixin.Propagates & ...
        matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties
        max_turn_per_sec;
        
        Vx_tgd_fil_param;
        Vy_tgd_avg_fil_param;
        H_fil_param;
        desired_com2stToe_lateral_fil_param;
        
        yaw_stand_filter_param;
        pitch_stand_filter_param;
        roll_stand_filter_param;
        p_com_stand_y_filter_param;
        
        sample_time;
    end
    properties(Constant, Access = private)
        
    end
    properties (Access = private)
        Vx_tgd_fil = 0;
        Vy_tgd_avg_fil = 0;
        H_fil = 0.8;
        desired_com2stToe_lateral_fil = -0.15;
%         step_time_fil = 0.3;
        CL_fil = 0.2;  % 0.1
        kx = 0;
        ky = 0;
        mu = 1;
        
        % Standing
        yaw_stand_filter = 0;
        pitch_stand_filter = 0;
        roll_stand_filter = 0;
        p_com_stand_y_filter = 0;
    end
    properties(Access = private)
        
    end
    properties(Access = private)
        
    end
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function [IRC] = stepImpl(obj,cassieOutputs)
            %% Initialize
            IRC = PreFunctions.Construct_IRC_with_standing();
            RadioButton = RadioChannelToButton(cassieOutputs.pelvis.radio.channel);
            
            %% Assign to IRC
            % sto
            if RadioButton.SAA == 1
                IRC.motor_power = 1;
            else
                IRC.motor_power = 0;
            end
            
            % Controller mode (Desired for next iter)
            if RadioButton.SBA == 1
                IRC.controller_mode_des = 1; % walking
            else
                IRC.controller_mode_des = 0;  % standing
            end
            
            % Target velocities
            Vx_tgd = (RadioButton.SGA + 2) * RadioButton.LVA ;
            obj.Vx_tgd_fil = YToolkits.first_order_filter(obj.Vx_tgd_fil, Vx_tgd, obj.Vx_tgd_fil_param);
            IRC.Vx_tgd = obj.Vx_tgd_fil + RadioButton.S1A; % add base offset to sag velocity
            
            Vy_tgd_avg = -(1/2*RadioButton.SEA+1)* RadioButton.LHA; % -2*RadioButton.LHA;
            obj.Vy_tgd_avg_fil = YToolkits.first_order_filter(obj.Vy_tgd_avg_fil, Vy_tgd_avg, obj.Vy_tgd_avg_fil_param);
            IRC.Vy_tgd_avg = obj.Vy_tgd_avg_fil;
            
            % Turning
            IRC.turn_rps = - obj.max_turn_per_sec*RadioButton.RHA;
            
            % COM Height
            IRC.H = obj.H_fil;
%             H = 1/5 * RadioButton.LSA + 0.6;
%             obj.H_fil = YToolkits.first_order_filter(obj.H_fil, H, obj.H_fil_param);
%             H = 0.8;
            
            % half step width
            desired_com2stToe_lateral = -0.15 - 0.2*RadioButton.S2A;
%             desired_com2stToe_lateral = -0.15 - 0.2*RadioButton.S2A;
            obj.desired_com2stToe_lateral_fil = YToolkits.first_order_filter(obj.desired_com2stToe_lateral_fil, desired_com2stToe_lateral, obj.desired_com2stToe_lateral_fil_param);
            IRC.desired_com2stToe_lateral = obj.desired_com2stToe_lateral_fil;
            
            % Foot clearance
            CL = 0.15;
            obj.CL_fil = YToolkits.first_order_filter(obj.CL_fil, CL, 0.0003);
            IRC.CL = obj.CL_fil;
            
            % Step Time
            autonomy = false;
            if autonomy
                % For autonomy
                %             if RadioButton.SDA == 1
                %                 IRC.reset_IMU_KF = 1;
                %                 IRC.reset_bias = 1;
                %             else
                %                 IRC.reset_IMU_KF = 0;
                %                 IRC.reset_bias = 0;
                %             end
                IRC.step_time = 0.3;
                IRC.ds = 1/IRC.step_time;
            else
                % step frequency (must change for autonomy ekf tests)
                if RadioButton.SDA == -1
                    IRC.step_time = 0.3;
                    IRC.ds = 1/IRC.step_time;
                elseif RadioButton.SDA == 0
                    IRC.step_time = 0.35;
                    IRC.ds = 1/IRC.step_time;
                elseif RadioButton.SDA == 1
                    IRC.step_time = 0.4;
                    IRC.ds = 1/IRC.step_time;
                end    
            end
            
            % Slope
            slope_angle_x = 22*RadioButton.RSA;
            slope_angle_y = 22*RadioButton.LSA;
            IRC.kx = tan(deg2rad(slope_angle_x));
            IRC.ky = tan(deg2rad(slope_angle_y));
            
            % Mu
%             if RadioButton.SCA > 0.5
%                 IRC.mu = obj.mu;
%             elseif RadioButton.SCA < -0.5
%                 IRC.mu = obj.mu - 0.8;  % 0.2
%             else
%                 IRC.mu = obj.mu - 0.4; % 0.6
%             end
            if RadioButton.SCA > 0.5 % high
                IRC.mu = 1;
            elseif RadioButton.SCA < -0.5 % lowest
                IRC.mu = 0.3;  
            else % middle
                IRC.mu = 0.6;
            end
      
            % Standing
            yaw_stand_temp = -0.4*RadioButton.RHA;
            obj.yaw_stand_filter = YToolkits.first_order_filter(obj.yaw_stand_filter, yaw_stand_temp, obj.yaw_stand_filter_param);
            IRC.yaw_stand_stTD0 = obj.yaw_stand_filter; % Standing yaw
            
            pitch_stand_temp = 0.5*RadioButton.LVA;
            obj.pitch_stand_filter = YToolkits.first_order_filter(obj.pitch_stand_filter, pitch_stand_temp, obj.pitch_stand_filter_param);
            IRC.pitch_stand_stTD0 = obj.pitch_stand_filter; % Standing pitch
            
            roll_stand_temp = 0.15*RadioButton.RVA;
            obj.roll_stand_filter = YToolkits.first_order_filter(obj.roll_stand_filter, roll_stand_temp, obj.roll_stand_filter_param);
            IRC.roll_stand_stTD0 = obj.roll_stand_filter; % Standing roll
            
            p_com_stand_y_temp = -0.05*RadioButton.LHA;
            obj.p_com_stand_y_filter = YToolkits.first_order_filter(obj.p_com_stand_y_filter, p_com_stand_y_temp, obj.p_com_stand_y_filter_param);
            IRC.p_com_stand_y_stTD0 = obj.p_com_stand_y_filter; % Standing y offset of the COM in the stTDA frame
            
            IRC.com_x_offset_stand = RadioButton.S1A; % Add standing bias of x direction                       
            
        end % stepImpl
        
        %% Default functions
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
        end % setupImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        %         function [name_1, name_2, name_3, name_4, name5, name6] = getOutputNamesImpl(~)
        %             %GETOUTPUTNAMESIMPL Return output port names for System block
        %             name_1 = 'EstStates';
        %             name_2 = 'q';
        %             name_3 = 'EulerRates';
        %             name_4 = 'qxyz';
        %             name_5 = 'dqxyz';
        %             name_5 = 'dqxyz';
        %         end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [IRC] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            IRC = [1, 1];
        end % getOutputSizeImpl
        
        function [IRC] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            IRC = 'IRCWithStandingBus';
        end % getOutputDataTypeImpl
        
        function [IRC] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            IRC = false;
        end % isOutputComplexImpl
        
        function [IRC] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            IRC = true;
        end % isOutputFixedSizeImpl
        
    end % methods
end % classdef
