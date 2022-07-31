function [output1] = dJb_BasePosX(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_BasePosX_mex(var1,var2);
    else
        coder.cinclude('dJb_BasePosX_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJb_BasePosX_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
