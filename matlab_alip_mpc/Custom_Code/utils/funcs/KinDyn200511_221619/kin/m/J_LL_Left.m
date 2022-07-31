function [output1] = J_LL_Left(var1)
    if coder.target('MATLAB')
        [output1] = J_LL_Left_mex(var1);
    else
        coder.cinclude('J_LL_Left_src.h');
        
        output1 = zeros(1, 20);

        
        coder.ceval('J_LL_Left_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
