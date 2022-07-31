function [output1] = Js_BasePosY(var1)
    if coder.target('MATLAB')
        [output1] = Js_BasePosY_mex(var1);
    else
        coder.cinclude('Js_BasePosY_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_BasePosY_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
