function q_new = ClosedChain_Coordinate_Transform_pos(q_old)
% q_old is q_knee, q_knee_spring, q_ankle
% q_new is q_knee, q_knee_spring and q_heel_spring
q_new = zeros(3,1);
q_new(1:2) = q_old(1:2);
q_new(3) = HeelSpringDeflectionEst(q_old(1),q_old(2),q_old(3));
end
