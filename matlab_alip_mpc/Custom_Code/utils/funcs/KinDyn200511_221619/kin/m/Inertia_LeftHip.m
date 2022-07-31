function [output1] = Inertia_LeftHip(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_LeftHip_mex(var1);
    else
        coder.cinclude('Inertia_LeftHip_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_LeftHip_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
