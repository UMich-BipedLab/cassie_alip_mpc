function [output1] = AMWorld_RightToe(var1,var2)
    if coder.target('MATLAB')
        [output1] = AMWorld_RightToe_mex(var1,var2);
    else
        coder.cinclude('AMWorld_RightToe_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('AMWorld_RightToe_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
