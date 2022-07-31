function [output1] = Jp_LeftToeJoint(var1)
    if coder.target('MATLAB')
        [output1] = Jp_LeftToeJoint_mex(var1);
    else
        coder.cinclude('Jp_LeftToeJoint_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jp_LeftToeJoint_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
