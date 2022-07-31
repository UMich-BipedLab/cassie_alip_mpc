function [output1] = dJb_RightKnee(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_RightKnee_mex(var1,var2);
    else
        coder.cinclude('dJb_RightKnee_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('dJb_RightKnee_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
