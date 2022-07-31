function [output1] = dJb_BasePosY(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_BasePosY_mex(var1,var2);
    else
        coder.cinclude('dJb_BasePosY_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJb_BasePosY_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
