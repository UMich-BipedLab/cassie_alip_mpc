function [output1] = R_LeftKneeJoint(var1)
    if coder.target('MATLAB')
        [output1] = R_LeftKneeJoint_mex(var1);
    else
        coder.cinclude('R_LeftKneeJoint_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_LeftKneeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
