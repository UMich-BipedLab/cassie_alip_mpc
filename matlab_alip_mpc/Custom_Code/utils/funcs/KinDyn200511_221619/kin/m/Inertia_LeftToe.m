function [output1] = Inertia_LeftToe(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_LeftToe_mex(var1);
    else
        coder.cinclude('Inertia_LeftToe_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_LeftToe_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
