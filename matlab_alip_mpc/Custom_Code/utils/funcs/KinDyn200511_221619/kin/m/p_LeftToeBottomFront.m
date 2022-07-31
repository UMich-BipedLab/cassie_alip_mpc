function [output1] = p_LeftToeBottomFront(var1)
    if coder.target('MATLAB')
        [output1] = p_LeftToeBottomFront_mex(var1);
    else
        coder.cinclude('p_LeftToeBottomFront_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_LeftToeBottomFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
