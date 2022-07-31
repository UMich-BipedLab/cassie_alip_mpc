function [output1] = AMWorld_RightKnee(var1,var2)
    if coder.target('MATLAB')
        [output1] = AMWorld_RightKnee_mex(var1,var2);
    else
        coder.cinclude('AMWorld_RightKnee_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('AMWorld_RightKnee_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
