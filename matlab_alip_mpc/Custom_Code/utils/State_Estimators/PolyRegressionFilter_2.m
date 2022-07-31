%Yukai controller.
classdef PolyRegressionFilter_2 <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    % PROTECTED PROPERTIES ====================================================
    properties(Nontunable)
        sample_time;
        history_length;
        dop;
        signal_dim;
        delay;
        max_history_length;
        max_dop;
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
            obj.q_history = zeros(obj.signal_dim,obj.max_history_length);
            obj.fil_matrix = zeros(obj.max_history_length, obj.max_history_length, obj.max_dop);
            for i = 1:obj.max_dop
                for j = i+1:obj.max_history_length
                    obj.fil_matrix(j, end - j + 1 : end, i) = get_PolyRegressionFilterMatrix(i,j,obj.sample_time,obj.delay); % fil_matrix is a lower triangle matrix
                end
            end
        end % setupImpl
        
        function dq = stepImpl(obj,q)
            %             dq = obj.dq;
            history_length_safe = min([obj.history_length,obj.max_history_length]);
            dop_safe = min([obj.dop,obj.max_dop]);
            
            dq=zeros(obj.signal_dim,1);
            obj.q_history = circshift(obj.q_history,-1,2);
            obj.q_history(:,end) = q;
            
            for i = 1:obj.signal_dim
                dq(i) = obj.fil_matrix(history_length_safe,end - history_length_safe + 1:end,dop_safe) * obj.q_history(i,end - history_length_safe + 1:end)';
            end % stepImpl
            
            if max(abs(q)) ~= 0
                obj.sample_total = obj.sample_total +1;
            end
            if obj.sample_total<obj.max_history_length
                dq = zeros(obj.signal_dim,1);
            end
        end

        %%
        function [sz,dt,cp] = getDiscreteStateSpecificationImpl(obj,name)
            
            dt = 'double';
            cp = false;
            switch name
                case 'q_history'
                    sz = [obj.signal_dim, obj.max_history_length];
                case 'fil_matrix'
                    sz = [obj.max_history_length, obj.max_history_length, obj.max_dop];
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