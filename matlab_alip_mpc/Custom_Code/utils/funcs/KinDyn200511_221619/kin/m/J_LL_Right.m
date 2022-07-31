function [output1] = J_LL_Right(var1)
    if coder.target('MATLAB')
        [output1] = J_LL_Right_mex(var1);
    else
        coder.cinclude('J_LL_Right_src.h');
        
        output1 = zeros(1, 20);

        
        coder.ceval('J_LL_Right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
