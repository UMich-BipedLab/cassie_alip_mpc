function [output1] = dR_LeftThighJoint(var1,var2)
    if coder.target('MATLAB')
        [output1] = dR_LeftThighJoint_mex(var1,var2);
    else
        coder.cinclude('dR_LeftThighJoint_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('dR_LeftThighJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
