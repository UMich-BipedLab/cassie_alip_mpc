function [output1] = Jb_LeftKnee(var1)
    if coder.target('MATLAB')
        [output1] = Jb_LeftKnee_mex(var1);
    else
        coder.cinclude('Jb_LeftKnee_src.h');
        
        output1 = zeros(6, 20);

        
        coder.ceval('Jb_LeftKnee_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
