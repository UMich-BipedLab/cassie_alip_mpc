function [output1] = dT_RightToeBottom(var1,var2)
    if coder.target('MATLAB')
        [output1] = dT_RightToeBottom_mex(var1,var2);
    else
        coder.cinclude('dT_RightToeBottom_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('dT_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
