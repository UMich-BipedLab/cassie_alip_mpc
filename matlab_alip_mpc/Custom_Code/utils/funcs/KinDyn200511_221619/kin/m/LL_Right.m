function [output1] = LL_Right(var1)
    if coder.target('MATLAB')
        [output1] = LL_Right_mex(var1);
    else
        coder.cinclude('LL_Right_src.h');
        
        output1 = zeros(1, 1);

        
        coder.ceval('LL_Right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
