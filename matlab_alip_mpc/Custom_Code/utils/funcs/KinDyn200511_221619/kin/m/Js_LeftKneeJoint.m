function [output1] = Js_LeftKneeJoint(var1)
    if coder.target('MATLAB')
        [output1] = Js_LeftKneeJoint_mex(var1);
    else
        coder.cinclude('Js_LeftKneeJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_LeftKneeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
