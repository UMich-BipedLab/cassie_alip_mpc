function [output1] = AMBody_LeftKnee(var1,var2)
    if coder.target('MATLAB')
        [output1] = AMBody_LeftKnee_mex(var1,var2);
    else
        coder.cinclude('AMBody_LeftKnee_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('AMBody_LeftKnee_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
