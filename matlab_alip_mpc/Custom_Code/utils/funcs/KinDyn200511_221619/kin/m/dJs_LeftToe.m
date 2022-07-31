function [output1] = dJs_LeftToe(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJs_LeftToe_mex(var1,var2);
    else
        coder.cinclude('dJs_LeftToe_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJs_LeftToe_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
