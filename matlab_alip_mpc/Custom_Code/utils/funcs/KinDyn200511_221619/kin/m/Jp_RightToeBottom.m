function [output1] = Jp_RightToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = Jp_RightToeBottom_mex(var1);
    else
        coder.cinclude('Jp_RightToeBottom_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
