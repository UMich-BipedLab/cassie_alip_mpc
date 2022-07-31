function [tau_knee, tau_kneespring, tau_heelspring] = GRF_to_KneeAndTwoSprings(obj,GRF,q,leg_index)
% Based on the GRF, calculate the corresponding force on knee, knee spring
% and heel spring
% leg_index = -1 for left, 1 for right
% Detail see onenote "20-05-31 GRF, spring and closed chain constraint"
if leg_index == -1
    JL = Jp_LeftToeJoint(q);
    JT = ClosedChain_Coordinate_Transform_Jacobian(q(10:12));
    JL_selected = JL(:,[10,11,12]);
    tau = -JT'\JL_selected'*GRF;
else
    JR = Jp_RightToeJoint(q);
    JT = ClosedChain_Coordinate_Transform_Jacobian(q(17:19));
    JR_selected = JR(:,[17,18,19]);
    tau = -JT'\JR_selected'*GRF;
end

tau_knee = tau(1);
tau_kneespring = tau(2);
tau_heelspring = tau(3);

