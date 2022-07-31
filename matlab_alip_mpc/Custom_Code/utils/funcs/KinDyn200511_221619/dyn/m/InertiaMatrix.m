function [output1] = InertiaMatrix(var1)
    if coder.target('MATLAB')
        [output1] = InertiaMatrix_mex(var1);
    else
        coder.cinclude('InertiaMatrix_src.h');
        
        output1 = zeros(20, 20);

        
        coder.ceval('InertiaMatrix_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
