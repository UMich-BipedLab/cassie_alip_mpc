function [output1] = T_RightTarsus(var1)
    if coder.target('MATLAB')
        [output1] = T_RightTarsus_mex(var1);
    else
        coder.cinclude('T_RightTarsus_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_RightTarsus_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
