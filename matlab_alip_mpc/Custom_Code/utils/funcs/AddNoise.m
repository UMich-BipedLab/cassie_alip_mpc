% RemoteSpoofer
classdef AddNoise < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    % PROTECTED PROPERTIES ==================================================
    properties
        Cov_qa;
        Cov_qj;
        Cov_dqa;
        Cov_dqj;
        Cov_LinearAccelerator;
        Cov_Orientation;
        Cov_AngularVelocity;
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
        
        function [cassieOutputs] = stepImpl(obj, cassieOutputs)
            cassieOutputs.pelvis.vectorNav.angularVelocity = normrnd(cassieOutputs.pelvis.vectorNav.angularVelocity, sqrt(obj.Cov_AngularVelocity));
            cassieOutputs.pelvis.vectorNav.orientation = normrnd(cassieOutputs.pelvis.vectorNav.orientation, sqrt(obj.Cov_Orientation));
            cassieOutputs.pelvis.vectorNav.linearAcceleration = normrnd(cassieOutputs.pelvis.vectorNav.linearAcceleration, sqrt(obj.Cov_LinearAccelerator));
            
            qa = CassieModule.getDriveProperty(cassieOutputs,'position');
            qj = CassieModule.getJointProperty(cassieOutputs,'position');
            dqa = CassieModule.getDriveProperty(cassieOutputs,'velocity');
            dqj = CassieModule.getJointProperty(cassieOutputs,'velocity');
            
            qa_noise = normrnd(qa, sqrt(obj.Cov_qa));
            qj_noise = normrnd(qj, sqrt(obj.Cov_qj));
            dqa_noise = normrnd(dqa, sqrt(obj.Cov_dqa));
            dqj_noise = normrnd(dqj, sqrt(obj.Cov_dqj));
            
            cassieOutputs.leftLeg.hipRollDrive.position = qa_noise(1);
            cassieOutputs.leftLeg.hipYawDrive.position = qa_noise(2);
            cassieOutputs.leftLeg.hipPitchDrive.position = qa_noise(3);
            cassieOutputs.leftLeg.kneeDrive.position = qa_noise(4);
            cassieOutputs.leftLeg.footDrive.position = qa_noise(5);
            cassieOutputs.rightLeg.hipRollDrive.position = qa_noise(6);
            cassieOutputs.rightLeg.hipYawDrive.position = qa_noise(7);
            cassieOutputs.rightLeg.hipPitchDrive.position = qa_noise(8);
            cassieOutputs.rightLeg.kneeDrive.position = qa_noise(9);
            cassieOutputs.rightLeg.footDrive.position = qa_noise(10);
            
            cassieOutputs.leftLeg.shinJoint.position = qj_noise(1);
            cassieOutputs.leftLeg.tarsusJoint.position = qj_noise(2);
            cassieOutputs.leftLeg.footJoint.position = qj_noise(3);
            cassieOutputs.rightLeg.shinJoint.position = qj_noise(4);
            cassieOutputs.rightLeg.tarsusJoint.position = qj_noise(5);
            cassieOutputs.rightLeg.footJoint.position = qj_noise(6);        
            
            cassieOutputs.leftLeg.hipRollDrive.velocity = dqa_noise(1);
            cassieOutputs.leftLeg.hipYawDrive.velocity = dqa_noise(2);
            cassieOutputs.leftLeg.hipPitchDrive.velocity = dqa_noise(3);
            cassieOutputs.leftLeg.kneeDrive.velocity = dqa_noise(4);
            cassieOutputs.leftLeg.footDrive.velocity = dqa_noise(5);
            cassieOutputs.rightLeg.hipRollDrive.velocity = dqa_noise(6);
            cassieOutputs.rightLeg.hipYawDrive.velocity = dqa_noise(7);
            cassieOutputs.rightLeg.hipPitchDrive.velocity = dqa_noise(8);
            cassieOutputs.rightLeg.kneeDrive.velocity = dqa_noise(9);
            cassieOutputs.rightLeg.footDrive.velocity = dqa_noise(10);
            
            cassieOutputs.leftLeg.shinJoint.velocity = dqj_noise(1);
            cassieOutputs.leftLeg.tarsusJoint.velocity = dqj_noise(2);
            cassieOutputs.leftLeg.footJoint.velocity = dqj_noise(3);
            cassieOutputs.rightLeg.shinJoint.velocity = dqj_noise(4);
            cassieOutputs.rightLeg.tarsusJoint.velocity = dqj_noise(5);
            cassieOutputs.rightLeg.footJoint.velocity = dqj_noise(6);      
            
            
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

