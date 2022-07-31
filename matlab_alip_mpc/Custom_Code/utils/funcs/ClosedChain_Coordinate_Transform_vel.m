function dq_new = ClosedChain_Coordinate_Transform_vel(q_old, dq_old)
% q_old is q_knee, q_knee_spring, q_ankle
% q_new is q_knee, q_knee_spring and q_heel_spring
dq_new = zeros(3,1);
dq_new(1:2) = dq_old(1:2);
dq_new(3) = J_HeelSpringDeflectionEst(q_old(1),q_old(2),q_old(3))*dq_old;
end

