function [output1] = dJb_RightToeBottomFront(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_RightToeBottomFront_mex(var1,var2);
    else
        coder.cinclude('dJb_RightToeBottomFront_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJb_RightToeBottomFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
