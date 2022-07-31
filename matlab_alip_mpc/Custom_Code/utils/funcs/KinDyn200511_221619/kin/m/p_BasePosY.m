function [output1] = p_BasePosY(var1)
    if coder.target('MATLAB')
        [output1] = p_BasePosY_mex(var1);
    else
        coder.cinclude('p_BasePosY_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_BasePosY_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
