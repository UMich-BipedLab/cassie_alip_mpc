function [tau_st_knee_est, tau_st_kneespring_est, tau_st_heelspring_est] = getSpringTauByGRF(GRF_stT_est, q, Flag_stT)
    % Based on the estimated GRF, calculate the corresponding force on knee, knee spring and heel spring
    % Flag_stT: -1 for left, 1 for right
    % Detail see onenote "20-05-31 GRF, spring and closed chain constraint"
    if Flag_stT == -1
        J_L = Jp_LeftToeJoint(q);
        % Transform (q_knee, q_shin(q_kneespring) and q_tarsus) to (q_knee, q_kneespring and q_heelspring)
        J_Trans = CCTrans_J(q(10:12, :));
        J_L_reduced = J_L(:, [10, 11, 12]);
        tau = -J_Trans'\J_L_reduced'*GRF_stT_est;
    else
        J_R = Jp_RightToeJoint(q);
        % Transform (q_knee, q_shin(q_kneespring) and q_tarsus) to (q_knee, q_kneespring and q_heelspring)
        J_Trans = CCTrans_J(q(17:19, :));
        J_R_reduced = J_R(:, [17, 18, 19]);
        tau = -J_Trans'\J_R_reduced'*GRF_stT_est;
    end
    
    % Assign tau to different joints
    tau_st_knee_est = tau(1, :);
    tau_st_kneespring_est = tau(2, :);
    tau_st_heelspring_est = tau(3, :);
end