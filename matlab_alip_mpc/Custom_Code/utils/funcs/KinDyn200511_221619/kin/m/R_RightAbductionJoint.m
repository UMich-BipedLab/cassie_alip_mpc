function [output1] = R_RightAbductionJoint(var1)
    if coder.target('MATLAB')
        [output1] = R_RightAbductionJoint_mex(var1);
    else
        coder.cinclude('R_RightAbductionJoint_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_RightAbductionJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
