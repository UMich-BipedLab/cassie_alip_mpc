function [output1] = GravityVector(var1)
    if coder.target('MATLAB')
        [output1] = GravityVector_mex(var1);
    else
        coder.cinclude('GravityVector_src.h');
        
        output1 = zeros(20, 1);

        
        coder.ceval('GravityVector_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
