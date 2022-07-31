function [output1] = Jb_RightToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = Jb_RightToeBottom_mex(var1);
    else
        coder.cinclude('Jb_RightToeBottom_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
