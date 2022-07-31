function [output1] = Jb_RightRotationJoint(var1)
    if coder.target('MATLAB')
        [output1] = Jb_RightRotationJoint_mex(var1);
    else
        coder.cinclude('Jb_RightRotationJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_RightRotationJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
