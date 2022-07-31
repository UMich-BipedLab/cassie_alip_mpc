function [output1] = T_RightToe(var1)
    if coder.target('MATLAB')
        [output1] = T_RightToe_mex(var1);
    else
        coder.cinclude('T_RightToe_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_RightToe_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
