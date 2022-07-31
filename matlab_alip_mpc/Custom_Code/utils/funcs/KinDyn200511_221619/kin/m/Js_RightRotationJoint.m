function [output1] = Js_RightRotationJoint(var1)
    if coder.target('MATLAB')
        [output1] = Js_RightRotationJoint_mex(var1);
    else
        coder.cinclude('Js_RightRotationJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_RightRotationJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
