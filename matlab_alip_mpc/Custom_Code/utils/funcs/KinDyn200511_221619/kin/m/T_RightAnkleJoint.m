function [output1] = T_RightAnkleJoint(var1)
    if coder.target('MATLAB')
        [output1] = T_RightAnkleJoint_mex(var1);
    else
        coder.cinclude('T_RightAnkleJoint_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_RightAnkleJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
