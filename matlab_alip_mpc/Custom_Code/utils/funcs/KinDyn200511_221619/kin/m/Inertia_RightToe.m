function [output1] = Inertia_RightToe(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_RightToe_mex(var1);
    else
        coder.cinclude('Inertia_RightToe_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_RightToe_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
