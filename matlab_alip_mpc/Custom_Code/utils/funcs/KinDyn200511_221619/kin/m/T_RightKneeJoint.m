function [output1] = T_RightKneeJoint(var1)
    if coder.target('MATLAB')
        [output1] = T_RightKneeJoint_mex(var1);
    else
        coder.cinclude('T_RightKneeJoint_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_RightKneeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
