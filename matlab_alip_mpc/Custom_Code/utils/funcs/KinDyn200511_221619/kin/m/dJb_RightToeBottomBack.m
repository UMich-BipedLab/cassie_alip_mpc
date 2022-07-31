function [output1] = dJb_RightToeBottomBack(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_RightToeBottomBack_mex(var1,var2);
    else
        coder.cinclude('dJb_RightToeBottomBack_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJb_RightToeBottomBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
