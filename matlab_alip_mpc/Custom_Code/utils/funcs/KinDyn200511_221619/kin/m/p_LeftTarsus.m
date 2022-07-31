function [output1] = p_LeftTarsus(var1)
    if coder.target('MATLAB')
        [output1] = p_LeftTarsus_mex(var1);
    else
        coder.cinclude('p_LeftTarsus_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_LeftTarsus_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
