function [output1] = Js_LeftRotationJoint(var1)
    if coder.target('MATLAB')
        [output1] = Js_LeftRotationJoint_mex(var1);
    else
        coder.cinclude('Js_LeftRotationJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_LeftRotationJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
