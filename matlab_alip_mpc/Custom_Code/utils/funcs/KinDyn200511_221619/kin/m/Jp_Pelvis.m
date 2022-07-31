function [output1] = Jp_Pelvis(var1)
    if coder.target('MATLAB')
        [output1] = Jp_Pelvis_mex(var1);
    else
        coder.cinclude('Jp_Pelvis_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_Pelvis_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
