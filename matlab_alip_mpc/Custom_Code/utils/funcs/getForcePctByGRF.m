function [F_GRF_L, F_GRF_R] = getForcePctByGRF(GRF_z, F_lb, F_ub)
    % Get percentage of the stance force of contacting the ground
    F_GRF_L = (GRF_z(1, :) - F_lb)/(F_ub - F_lb);
    F_GRF_R = (GRF_z(2, :) - F_lb)/(F_ub - F_lb);
    F_GRF_L = median([F_GRF_L, 0, 1]);
    F_GRF_R = median([F_GRF_R, 0, 1]);
end