function [output1] = Jp_RightKnee(var1)
    if coder.target('MATLAB')
        [output1] = Jp_RightKnee_mex(var1);
    else
        coder.cinclude('Jp_RightKnee_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_RightKnee_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
