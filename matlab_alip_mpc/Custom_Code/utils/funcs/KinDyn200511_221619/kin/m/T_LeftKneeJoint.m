function [output1] = T_LeftKneeJoint(var1)
    if coder.target('MATLAB')
        [output1] = T_LeftKneeJoint_mex(var1);
    else
        coder.cinclude('T_LeftKneeJoint_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_LeftKneeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
