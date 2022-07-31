function [output1] = Jp_LeftPelvisRotation(var1)
    if coder.target('MATLAB')
        [output1] = Jp_LeftPelvisRotation_mex(var1);
    else
        coder.cinclude('Jp_LeftPelvisRotation_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_LeftPelvisRotation_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
