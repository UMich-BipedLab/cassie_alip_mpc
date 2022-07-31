function [output1] = T_BasePosX(var1)
    if coder.target('MATLAB')
        [output1] = T_BasePosX_mex(var1);
    else
        coder.cinclude('T_BasePosX_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_BasePosX_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
