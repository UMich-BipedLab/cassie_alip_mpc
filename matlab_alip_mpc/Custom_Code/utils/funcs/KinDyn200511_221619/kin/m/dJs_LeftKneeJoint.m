function [output1] = dJs_LeftKneeJoint(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJs_LeftKneeJoint_mex(var1,var2);
    else
        coder.cinclude('dJs_LeftKneeJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJs_LeftKneeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
