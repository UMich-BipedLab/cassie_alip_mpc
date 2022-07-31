function [output1] = Jdq_AMWorld_RightThigh(var1,var2)
    if coder.target('MATLAB')
        [output1] = Jdq_AMWorld_RightThigh_mex(var1,var2);
    else
        coder.cinclude('Jdq_AMWorld_RightThigh_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jdq_AMWorld_RightThigh_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
