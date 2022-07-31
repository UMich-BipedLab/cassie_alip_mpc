function [output1] = p_LeftKneeJoint(var1)
    if coder.target('MATLAB')
        [output1] = p_LeftKneeJoint_mex(var1);
    else
        coder.cinclude('p_LeftKneeJoint_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_LeftKneeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
