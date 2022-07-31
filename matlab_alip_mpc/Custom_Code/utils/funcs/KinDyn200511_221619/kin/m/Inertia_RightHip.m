function [output1] = Inertia_RightHip(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_RightHip_mex(var1);
    else
        coder.cinclude('Inertia_RightHip_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_RightHip_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
