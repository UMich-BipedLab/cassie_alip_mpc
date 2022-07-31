function [output1] = dJb_LeftKneeJoint(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_LeftKneeJoint_mex(var1,var2);
    else
        coder.cinclude('dJb_LeftKneeJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJb_LeftKneeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
