function [output1] = Inertia_LeftPelvisRotation(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_LeftPelvisRotation_mex(var1);
    else
        coder.cinclude('Inertia_LeftPelvisRotation_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_LeftPelvisRotation_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
