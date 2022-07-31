function [output1] = AMBody_LeftThigh(var1,var2)
    if coder.target('MATLAB')
        [output1] = AMBody_LeftThigh_mex(var1,var2);
    else
        coder.cinclude('AMBody_LeftThigh_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('AMBody_LeftThigh_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
