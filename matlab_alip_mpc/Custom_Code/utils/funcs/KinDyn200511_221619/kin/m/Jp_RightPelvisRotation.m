function [output1] = Jp_RightPelvisRotation(var1)
    if coder.target('MATLAB')
        [output1] = Jp_RightPelvisRotation_mex(var1);
    else
        coder.cinclude('Jp_RightPelvisRotation_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_RightPelvisRotation_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
