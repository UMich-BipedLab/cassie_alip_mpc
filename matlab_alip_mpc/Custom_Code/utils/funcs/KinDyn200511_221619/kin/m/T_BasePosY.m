function [output1] = T_BasePosY(var1)
    if coder.target('MATLAB')
        [output1] = T_BasePosY_mex(var1);
    else
        coder.cinclude('T_BasePosY_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_BasePosY_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
