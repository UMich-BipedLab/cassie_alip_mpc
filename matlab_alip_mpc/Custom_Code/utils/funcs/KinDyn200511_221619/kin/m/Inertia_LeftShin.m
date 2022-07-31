function [output1] = Inertia_LeftShin(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_LeftShin_mex(var1);
    else
        coder.cinclude('Inertia_LeftShin_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_LeftShin_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
