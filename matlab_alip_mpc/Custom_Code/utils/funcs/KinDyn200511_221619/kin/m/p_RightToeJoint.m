function [output1] = p_RightToeJoint(var1)
    if coder.target('MATLAB')
        [output1] = p_RightToeJoint_mex(var1);
    else
        coder.cinclude('p_RightToeJoint_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_RightToeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
