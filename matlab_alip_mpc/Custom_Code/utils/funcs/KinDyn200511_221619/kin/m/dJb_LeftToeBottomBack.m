function [output1] = dJb_LeftToeBottomBack(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_LeftToeBottomBack_mex(var1,var2);
    else
        coder.cinclude('dJb_LeftToeBottomBack_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJb_LeftToeBottomBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
