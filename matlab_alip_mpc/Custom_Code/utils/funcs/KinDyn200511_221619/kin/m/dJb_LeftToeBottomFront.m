function [output1] = dJb_LeftToeBottomFront(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_LeftToeBottomFront_mex(var1,var2);
    else
        coder.cinclude('dJb_LeftToeBottomFront_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJb_LeftToeBottomFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
