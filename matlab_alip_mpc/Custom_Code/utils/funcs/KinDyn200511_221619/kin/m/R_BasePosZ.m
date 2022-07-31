function [output1] = R_BasePosZ(var1)
    if coder.target('MATLAB')
        [output1] = R_BasePosZ_mex(var1);
    else
        coder.cinclude('R_BasePosZ_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_BasePosZ_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
