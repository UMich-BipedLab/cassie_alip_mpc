function [output1] = R_RightAnkleJoint(var1)
    if coder.target('MATLAB')
        [output1] = R_RightAnkleJoint_mex(var1);
    else
        coder.cinclude('R_RightAnkleJoint_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_RightAnkleJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
