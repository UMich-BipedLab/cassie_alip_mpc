function [output1] = Inertia_LeftThigh(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_LeftThigh_mex(var1);
    else
        coder.cinclude('Inertia_LeftThigh_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_LeftThigh_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
