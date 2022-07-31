function [output1] = T_LeftThigh(var1)
    if coder.target('MATLAB')
        [output1] = T_LeftThigh_mex(var1);
    else
        coder.cinclude('T_LeftThigh_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('T_LeftThigh_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
