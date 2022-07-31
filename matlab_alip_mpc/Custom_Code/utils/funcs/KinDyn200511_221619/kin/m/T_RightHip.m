function [output1] = T_RightHip(var1)
    if coder.target('MATLAB')
        [output1] = T_RightHip_mex(var1);
    else
        coder.cinclude('T_RightHip_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_RightHip_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
