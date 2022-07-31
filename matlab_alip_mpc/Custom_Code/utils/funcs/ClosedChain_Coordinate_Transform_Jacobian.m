function J = ClosedChain_Coordinate_Transform_Jacobian(q_old)
% q_old is q_knee, q_knee_spring, q_ankle
% q_new is q_knee, q_knee_spring and q_heel_spring
J = zeros(3,3);
J(1:2,1:2) = eye(2);
J(3,:) = J_HeelSpringDeflectionEst(q_old(1),q_old(2),q_old(3));
end

