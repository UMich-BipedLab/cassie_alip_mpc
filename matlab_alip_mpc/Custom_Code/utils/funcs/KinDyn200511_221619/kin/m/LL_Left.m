function [output1] = LL_Left(var1)
    if coder.target('MATLAB')
        [output1] = LL_Left_mex(var1);
    else
        coder.cinclude('LL_Left_src.h');
        
        output1 = zeros(1, 1);

        
        coder.ceval('LL_Left_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
