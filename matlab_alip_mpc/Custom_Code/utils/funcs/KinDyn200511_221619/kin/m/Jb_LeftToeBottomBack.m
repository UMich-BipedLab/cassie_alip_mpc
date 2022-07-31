function [output1] = Jb_LeftToeBottomBack(var1)
    if coder.target('MATLAB')
        [output1] = Jb_LeftToeBottomBack_mex(var1);
    else
        coder.cinclude('Jb_LeftToeBottomBack_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_LeftToeBottomBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
