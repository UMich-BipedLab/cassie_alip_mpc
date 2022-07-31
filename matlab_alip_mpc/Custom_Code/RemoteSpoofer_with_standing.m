% RemoteSpoofer
classdef RemoteSpoofer_with_standing < ...
        matlab.System & ...
        matlab.system.mixin.Propagates %#codegen
    
    % PROTECTED PROPERTIES ==================================================
    properties (Access = protected)
    end % properties
    
    % Private variables
    properties(Access = private)
    end
    
    % Pre-computed constants
    properties(Access = private, Constant)
    end
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
        end % setupImpl
        
        function [cassieOutputs] = stepImpl(obj, cassieOutputs,t)
            
            RadioButton = RadioChannelToButton(cassieOutputs.pelvis.radio.channel);
            %% Button guide
            %   SAA : AR TORQUE ENABLE
            %   SBA : 1->walking (0/-1)->standing
            %   S1A : Sagittal vel offset
            %   S2A : leg width offset
            %   SCA : Friction mu
            %   SDA : Step time
            %   SEA : lateral vel gain
            %   SFA : IEKF switch
            %   SGA : sagittal vel gain
            %   SHA : AR SOFT TORQUE ENABLE
            %   LVA : sagittal vel
            %   LHA : lateral vel
            %   RVA : NOT USED
            %   RHA : yaw vel
            
            
            %% Assign values
            % controller_mode % 1: walking, 0/-1: standing
            RadioButton.SBA = 1;
            
            % Velocity
            RadioButton.SGA = -1; % set sagittal velocity range  1mps (-1), 2mps, 3mps (1)
            RadioButton.SEA = -1; % set lateral velocity range
            if t <= 3
                RadioButton.LHA = 0 ;  %
                RadioButton.LVA = 0;
            elseif t > 3 && t <= 5 
                RadioButton.LHA = 0;
                RadioButton.LVA = 0;
            elseif t > 5
                RadioButton.LHA = 0.5;
                RadioButton.LVA = 0;
            else
                RadioButton.LHA = 0;
                RadioButton.LVA = 0;
            end
            
            % Sagittal Velocity offset
            RadioButton.S1A = 0.07;
            
            % Step Time
            if t <= 5
                RadioButton.SDA = -1; % 0.3
            else
                RadioButton.SDA = 0; % 0.3
            end
            
            
            % Turning speed ================================================
%             if t > 10
%                 RadioButton.RHA = 1;
%             end

            % Slope input ===============================================
            % ratio of max slope 22 deg ([-1 1])
            RadioButton.RSA = 0; % x slope angle in deg
            RadioButton.LSA = 0.2274; %0.1136, 0.2274(= 5deg); % y slope angle in deg
            
            % Half Foot Width offset (default is 0.3)
            % How it's used: desired_com2stToe_lateral = -0.15 - 0.2*RadioButton.S2A;
            RadioButton.S2A = 0;

            % Friction [ mu = 1.0(1), 0.6, 0.2 (-1) ]
            if t <=8
                RadioButton.SCA = 1; 
            elseif t > 8 && t <= 13
                RadioButton.SCA = 0;
            else
                RadioButton.SCA = 0;
            end
            
            cassieOutputs.pelvis.radio.channel = RadioButtonToChannel(RadioButton);

        end % stepImpl
        
        %% Define Outputs
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function out = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            out = [1, 1];           
        end % getOutputSizeImpl
        
        function out = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            out = 'CassieOutBus';
        end % getOutputDataTypeImpl
        
        function out = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            out = false;
        end % isOutputComplexImpl
        
        function out= isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            out = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef

