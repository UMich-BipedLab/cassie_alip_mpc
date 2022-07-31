function [output1] = Jdq_AMWorld_LeftToe(var1,var2)
    if coder.target('MATLAB')
        [output1] = Jdq_AMWorld_LeftToe_mex(var1,var2);
    else
        coder.cinclude('Jdq_AMWorld_LeftToe_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jdq_AMWorld_LeftToe_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
