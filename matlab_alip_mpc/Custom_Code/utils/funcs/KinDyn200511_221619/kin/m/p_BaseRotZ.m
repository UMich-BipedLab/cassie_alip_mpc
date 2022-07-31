function [output1] = p_BaseRotZ(var1)
    if coder.target('MATLAB')
        [output1] = p_BaseRotZ_mex(var1);
    else
        coder.cinclude('p_BaseRotZ_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_BaseRotZ_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
