function [output1] = T_RightKnee(var1)
    if coder.target('MATLAB')
        [output1] = T_RightKnee_mex(var1);
    else
        coder.cinclude('T_RightKnee_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_RightKnee_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
