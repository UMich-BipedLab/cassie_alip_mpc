function J_Trans = CCTrans_J(q_origin)
    % q_origin is q_knee, q_knee_spring, q_tarsus
    % q_new is q_knee, q_kneespring and q_heelspring
    J_Trans = zeros(3, 3);
    J_Trans(1:2, 1:2) = eye(2, 2);
    J_Trans(3, :) = J_HeelSpringDeflectionEst(q_origin(1, :), q_origin(2, :), q_origin(3, :));
end