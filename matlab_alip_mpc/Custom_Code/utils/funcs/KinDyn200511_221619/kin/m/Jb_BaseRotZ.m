function [output1] = Jb_BaseRotZ(var1)
    if coder.target('MATLAB')
        [output1] = Jb_BaseRotZ_mex(var1);
    else
        coder.cinclude('Jb_BaseRotZ_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_BaseRotZ_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
