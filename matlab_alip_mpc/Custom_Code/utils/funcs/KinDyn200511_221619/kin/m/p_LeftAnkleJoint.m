function [output1] = p_LeftAnkleJoint(var1)
    if coder.target('MATLAB')
        [output1] = p_LeftAnkleJoint_mex(var1);
    else
        coder.cinclude('p_LeftAnkleJoint_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_LeftAnkleJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
