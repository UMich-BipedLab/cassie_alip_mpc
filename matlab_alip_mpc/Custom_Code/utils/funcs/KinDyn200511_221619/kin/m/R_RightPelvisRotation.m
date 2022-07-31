function [output1] = R_RightPelvisRotation(var1)
    if coder.target('MATLAB')
        [output1] = R_RightPelvisRotation_mex(var1);
    else
        coder.cinclude('R_RightPelvisRotation_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_RightPelvisRotation_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
