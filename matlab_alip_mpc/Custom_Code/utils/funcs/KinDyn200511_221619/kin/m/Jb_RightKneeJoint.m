function [output1] = Jb_RightKneeJoint(var1)
    if coder.target('MATLAB')
        [output1] = Jb_RightKneeJoint_mex(var1);
    else
        coder.cinclude('Jb_RightKneeJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_RightKneeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
