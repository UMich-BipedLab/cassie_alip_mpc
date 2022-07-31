function [output1] = AMWorld_RightShin(var1,var2)
    if coder.target('MATLAB')
        [output1] = AMWorld_RightShin_mex(var1,var2);
    else
        coder.cinclude('AMWorld_RightShin_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('AMWorld_RightShin_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
