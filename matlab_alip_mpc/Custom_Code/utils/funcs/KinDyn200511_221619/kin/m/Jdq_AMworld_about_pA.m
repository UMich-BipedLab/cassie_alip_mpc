function [output1] = Jdq_AMworld_about_pA(var1,var2,var3,var4)
    if coder.target('MATLAB')
        [output1] = Jdq_AMworld_about_pA_mex(var1,var2,var3,var4);
    else
        coder.cinclude('Jdq_AMworld_about_pA_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jdq_AMworld_about_pA_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) ,coder.rref(var3) ,coder.rref(var4) );
    end
end
