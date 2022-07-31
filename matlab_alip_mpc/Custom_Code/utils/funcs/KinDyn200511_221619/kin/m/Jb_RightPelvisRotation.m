function [output1] = Jb_RightPelvisRotation(var1)
    if coder.target('MATLAB')
        [output1] = Jb_RightPelvisRotation_mex(var1);
    else
        coder.cinclude('Jb_RightPelvisRotation_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_RightPelvisRotation_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
