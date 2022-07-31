function [output1] = Js_LeftKneeSpringJoint(var1)
    if coder.target('MATLAB')
        [output1] = Js_LeftKneeSpringJoint_mex(var1);
    else
        coder.cinclude('Js_LeftKneeSpringJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_LeftKneeSpringJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
