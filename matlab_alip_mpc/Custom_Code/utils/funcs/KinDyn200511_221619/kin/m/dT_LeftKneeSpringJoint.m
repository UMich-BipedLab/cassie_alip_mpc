function [output1] = dT_LeftKneeSpringJoint(var1,var2)
    if coder.target('MATLAB')
        [output1] = dT_LeftKneeSpringJoint_mex(var1,var2);
    else
        coder.cinclude('dT_LeftKneeSpringJoint_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('dT_LeftKneeSpringJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
