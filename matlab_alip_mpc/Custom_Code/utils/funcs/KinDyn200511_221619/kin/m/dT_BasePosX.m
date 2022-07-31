function [output1] = dT_BasePosX(var1,var2)
    if coder.target('MATLAB')
        [output1] = dT_BasePosX_mex(var1,var2);
    else
        coder.cinclude('dT_BasePosX_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('dT_BasePosX_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
