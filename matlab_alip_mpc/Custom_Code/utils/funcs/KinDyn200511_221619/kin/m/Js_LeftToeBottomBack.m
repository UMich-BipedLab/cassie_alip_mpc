function [output1] = Js_LeftToeBottomBack(var1)
    if coder.target('MATLAB')
        [output1] = Js_LeftToeBottomBack_mex(var1);
    else
        coder.cinclude('Js_LeftToeBottomBack_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_LeftToeBottomBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
