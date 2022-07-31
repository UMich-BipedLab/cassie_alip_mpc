function [output1] = Js_LeftTarsus(var1)
    if coder.target('MATLAB')
        [output1] = Js_LeftTarsus_mex(var1);
    else
        coder.cinclude('Js_LeftTarsus_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_LeftTarsus_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
