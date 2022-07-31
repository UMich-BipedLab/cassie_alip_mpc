function [output1] = Jp_RightRotationJoint(var1)
    if coder.target('MATLAB')
        [output1] = Jp_RightRotationJoint_mex(var1);
    else
        coder.cinclude('Jp_RightRotationJoint_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_RightRotationJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
