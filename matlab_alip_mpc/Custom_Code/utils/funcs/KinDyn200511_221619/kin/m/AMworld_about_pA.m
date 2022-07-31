function [output1] = AMworld_about_pA(var1,var2,var3)
    if coder.target('MATLAB')
        [output1] = AMworld_about_pA_mex(var1,var2,var3);
    else
        coder.cinclude('AMworld_about_pA_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('AMworld_about_pA_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) ,coder.rref(var3) );
    end
end
