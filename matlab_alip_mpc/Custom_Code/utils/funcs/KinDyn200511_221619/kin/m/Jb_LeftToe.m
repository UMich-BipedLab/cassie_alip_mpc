function [output1] = Jb_LeftToe(var1)
    if coder.target('MATLAB')
        [output1] = Jb_LeftToe_mex(var1);
    else
        coder.cinclude('Jb_LeftToe_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_LeftToe_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
