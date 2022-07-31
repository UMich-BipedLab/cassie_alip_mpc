function [output1] = AMBody_RightTarsus(var1,var2)
    if coder.target('MATLAB')
        [output1] = AMBody_RightTarsus_mex(var1,var2);
    else
        coder.cinclude('AMBody_RightTarsus_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('AMBody_RightTarsus_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
