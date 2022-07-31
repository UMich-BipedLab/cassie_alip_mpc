function [output1] = dT_RightThighJoint(var1,var2)
    if coder.target('MATLAB')
        [output1] = dT_RightThighJoint_mex(var1,var2);
    else
        coder.cinclude('dT_RightThighJoint_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('dT_RightThighJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
