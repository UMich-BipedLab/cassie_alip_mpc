function [output1] = Jb_RightTarsus(var1)
    if coder.target('MATLAB')
        [output1] = Jb_RightTarsus_mex(var1);
    else
        coder.cinclude('Jb_RightTarsus_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_RightTarsus_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
