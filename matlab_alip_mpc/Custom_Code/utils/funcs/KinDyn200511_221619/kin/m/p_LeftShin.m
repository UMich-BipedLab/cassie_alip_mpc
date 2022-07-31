function [output1] = p_LeftShin(var1)
    if coder.target('MATLAB')
        [output1] = p_LeftShin_mex(var1);
    else
        coder.cinclude('p_LeftShin_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_LeftShin_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
