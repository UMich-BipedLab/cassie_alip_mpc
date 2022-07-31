function [output1] = T_RightToeBottomFront(var1)
    if coder.target('MATLAB')
        [output1] = T_RightToeBottomFront_mex(var1);
    else
        coder.cinclude('T_RightToeBottomFront_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_RightToeBottomFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
