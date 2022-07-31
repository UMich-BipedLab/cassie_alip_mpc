function [output1] = Inertia_RightThigh(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_RightThigh_mex(var1);
    else
        coder.cinclude('Inertia_RightThigh_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_RightThigh_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
