function [output1] = dJs_LeftKneeSpringJoint(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJs_LeftKneeSpringJoint_mex(var1,var2);
    else
        coder.cinclude('dJs_LeftKneeSpringJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJs_LeftKneeSpringJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
