function [output1] = Jp_LeftShin(var1)
    if coder.target('MATLAB')
        [output1] = Jp_LeftShin_mex(var1);
    else
        coder.cinclude('Jp_LeftShin_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_LeftShin_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
