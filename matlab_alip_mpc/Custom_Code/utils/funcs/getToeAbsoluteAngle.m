function [q_LT, q_RT, dq_LT, dq_RT] = getToeAbsoluteAngle(q,dq)

q_LT = -q(5) + q(9) + q(10) + q(11) + q(12) + q(13) + deg2rad(50);
q_RT = -q(5) + q(16) + q(17) + q(18) + q(19) + q(20) + deg2rad(50);
dq_LT = -dq(5) + dq(9) + dq(10) + dq(11) + dq(12) + dq(13);
dq_RT = -dq(5) + dq(16) + dq(17) + dq(18) + dq(19) + dq(20);
end

