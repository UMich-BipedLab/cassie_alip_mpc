function [q_LT, q_RT, dq_LT, dq_RT] = getToeAbsoluteAngle_rigid(q,dq)

q_LT = -q(5) + q(9) + q(10) + (-q(10)+deg2rad(13)) + q(13) + deg2rad(50);
q_RT = -q(5) + q(16) + q(17)+ (-q(17)+deg2rad(13)) + q(20) + deg2rad(50);
dq_LT = -dq(5) + dq(9) + dq(13);
dq_RT = -dq(5) + dq(16) + dq(20);
end

