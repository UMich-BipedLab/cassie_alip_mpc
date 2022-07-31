function [output1] = Jq_AMWorld_Pelvis(var1,var2)
    if coder.target('MATLAB')
        [output1] = Jq_AMWorld_Pelvis_mex(var1,var2);
    else
        coder.cinclude('Jq_AMWorld_Pelvis_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jq_AMWorld_Pelvis_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
