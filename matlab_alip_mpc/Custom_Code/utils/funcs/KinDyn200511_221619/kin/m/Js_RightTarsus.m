function [output1] = Js_RightTarsus(var1)
    if coder.target('MATLAB')
        [output1] = Js_RightTarsus_mex(var1);
    else
        coder.cinclude('Js_RightTarsus_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_RightTarsus_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
