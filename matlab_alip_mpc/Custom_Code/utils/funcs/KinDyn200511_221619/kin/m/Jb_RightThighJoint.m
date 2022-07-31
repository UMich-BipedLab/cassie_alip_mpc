function [output1] = Jb_RightThighJoint(var1)
    if coder.target('MATLAB')
        [output1] = Jb_RightThighJoint_mex(var1);
    else
        coder.cinclude('Jb_RightThighJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_RightThighJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
