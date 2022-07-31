function [output1] = dJp_BasePosY(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJp_BasePosY_mex(var1,var2);
    else
        coder.cinclude('dJp_BasePosY_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('dJp_BasePosY_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
