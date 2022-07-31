function shifted_geom_mean = sgm(v, sh)
%SGM returns the shifted goemtric mean of the data in `v` with 
%shift parameter `sh`
%
%Syntax:
%s = sgm(v, shift)
%

shifted_geom_mean = exp(sum(log(max(1, v + sh)))/length(v)) - sh;

