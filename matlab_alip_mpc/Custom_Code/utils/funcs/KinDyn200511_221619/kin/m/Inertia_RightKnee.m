function [output1] = Inertia_RightKnee(var1)
    if coder.target('MATLAB')
        [output1] = Inertia_RightKnee_mex(var1);
    else
        coder.cinclude('Inertia_RightKnee_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('Inertia_RightKnee_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
