function [output1] = R_LeftToeBottomBack(var1)
    if coder.target('MATLAB')
        [output1] = R_LeftToeBottomBack_mex(var1);
    else
        coder.cinclude('R_LeftToeBottomBack_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_LeftToeBottomBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
