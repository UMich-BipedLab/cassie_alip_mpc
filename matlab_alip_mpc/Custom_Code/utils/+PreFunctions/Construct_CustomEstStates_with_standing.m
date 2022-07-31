function CustomEstStates = Construct_CustomEstStates_with_standing()
%CONSTRUC_ESTSTATES Summary of this function goes here
%   Detailed explanation goes here
CustomEstStates.t = 0;
CustomEstStates.s = 0;
CustomEstStates.stanceLeg = -1;
CustomEstStates.kx = 0;
CustomEstStates.ky = 0;
CustomEstStates.mu = 0;
CustomEstStates.leg_width = 0;
CustomEstStates.Lx_offset = 0;
CustomEstStates.Ly_des = 0;
CustomEstStates.z_H = 0;
CustomEstStates.xc_this = 0.01;
CustomEstStates.yc_this = 0.01;
CustomEstStates.Lx_this = 0.01;
CustomEstStates.Ly_this = 0.01;
CustomEstStates.T_period = 0.3;

end

