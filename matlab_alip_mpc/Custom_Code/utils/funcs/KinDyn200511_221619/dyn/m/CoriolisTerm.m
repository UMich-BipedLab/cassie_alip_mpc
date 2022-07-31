function [output1] = CoriolisTerm(var1,var2)
    if coder.target('MATLAB')
        [output1] = CoriolisTerm_mex(var1,var2);
    else
        coder.cinclude('CoriolisTerm_src.h');
        
        output1 = zeros(20, 1);

        
        coder.ceval('CoriolisTerm_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
