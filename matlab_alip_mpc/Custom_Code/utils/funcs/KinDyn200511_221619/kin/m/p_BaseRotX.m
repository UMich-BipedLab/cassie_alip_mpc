function [output1] = p_BaseRotX(var1)
    if coder.target('MATLAB')
        [output1] = p_BaseRotX_mex(var1);
    else
        coder.cinclude('p_BaseRotX_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_BaseRotX_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
