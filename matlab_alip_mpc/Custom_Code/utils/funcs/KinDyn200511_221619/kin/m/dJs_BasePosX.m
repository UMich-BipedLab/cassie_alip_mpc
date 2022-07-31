function [output1] = dJs_BasePosX(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJs_BasePosX_mex(var1,var2);
    else
        coder.cinclude('dJs_BasePosX_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJs_BasePosX_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
