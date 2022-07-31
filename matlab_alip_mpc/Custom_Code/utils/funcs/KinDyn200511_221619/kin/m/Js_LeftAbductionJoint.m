function [output1] = Js_LeftAbductionJoint(var1)
    if coder.target('MATLAB')
        [output1] = Js_LeftAbductionJoint_mex(var1);
    else
        coder.cinclude('Js_LeftAbductionJoint_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Js_LeftAbductionJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
