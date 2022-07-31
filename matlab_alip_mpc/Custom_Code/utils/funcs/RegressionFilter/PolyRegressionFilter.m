%Yukai controller.
classdef PolyRegressionFilter <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties(Nontunable)
        sample_time;
        history_length;
        dop;
        signal_dim;
        delay;
    end
    properties(Access = private)
        %         q_history = zeros(7,30);
        sample_total = 0;
    end
    properties (DiscreteState)
        q_history;
        fil_matrix;
    end
    %         test = JointFilter.signal_dim;
    
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        function setupImpl(obj)
            obj.q_history = zeros(obj.signal_dim,obj.history_length);
            obj.fil_matrix = get_PolyRegressionFilterMatrix(obj.dop,obj.history_length,obj.sample_time,obj.delay);
        end % setupImpl
        
        function dq = stepImpl(obj,q)
            %             dq = obj.dq;
            dq=zeros(obj.signal_dim,1);
            
            temp = obj.q_history(:,2:end);
            obj.q_history(:,1:end-1) = temp;
            obj.q_history(:,end) = q;
            
            for i = 1:obj.signal_dim
                dq(i) = obj.fil_matrix*obj.q_history(i,:)';
            end % stepImpl
            if max(abs(q)) ~= 0
                obj.sample_total = obj.sample_total +1;
            end
            if obj.sample_total<obj.history_length
                dq = zeros(obj.signal_dim,1);
            end
        end
        
        %       function obj = JointFilter(T_sample, fil_matrix, history_length, dop)
        %          % Initialize Prop1 for each instance
        %         obj.T_sample = T_sample;
        %         obj.fil_matrix = fil_matrix;
        %         obj.history_length = history_length;
        %         obj.dop = dop;
        %         obj.q_history = zeros(obj.signal_dim,obj.history_length);
        %       end
        
        %%
        function [sz,dt,cp] = getDiscreteStateSpecificationImpl(obj,name)
            sz = [0, 0];
            dt = 'double';
            cp = false;
            switch name
                case 'q_history'
                    sz = [obj.signal_dim,obj.history_length];
                case 'fil_matrix'
                    sz = [1,obj.history_length];
            end
        end
        %% Default functions
        
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [name_1,name_2]  = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name_1 = 'q';
            name_2 = 't';
        end % getInputNamesImpl
        
        function [name_1] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'dq';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS ============================================
        function [dq] = getOutputSizeImpl(obj)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            dq = [obj.signal_dim, 1];
        end % getOutputSizeImpl
        
        function [dq] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            dq = 'double';
        end % getOutputDataTypeImpl
        
        function [dq] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            dq = false;
        end % isOutputComplexImpl
        
        function [dq] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            dq = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef