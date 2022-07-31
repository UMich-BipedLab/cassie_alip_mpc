% get the indexes
if stanceLeg == -1
    qc_index = [5;6;8;15;10;14;16;17];
    motor_index = [3;1;2;7;4;6;8;9];
else
    qc_index = [5;6;15;8;17;7;9;10];
    motor_index = [8;6;7;2;9;1;3;4];
end

M = InertiaMatrix(q);
G = GravityVector(q);
B=zeros(20,10); B(7:10,1:4) = eye(4); B(13:17,5:9) = eye(5); B(20,10) = 1;
% body Jacobian on foot
Jb_L = Jb_LeftToeBottomBack(q);
Jb_R = Jb_RightToeBottomBack(q);
% cartesian Jacobian on foot
Jc_L = Jp_LeftToeBottomBack(q);
Jc_R = Jp_RightToeBottomBack(q);
% Homogeneous Transformation Matrix
T_L = T_LeftToeBottomBack(q);
T_R = T_RightToeBottomBack(q);
% Jacobian for ground constraint
Jg_L = zeros(5,20); Jg_L(1:3,:)= Jc_L; Jg_L([4,5],:)= Jb_L([5,6],:);
Jg_R = zeros(5,20); Jg_R(1:3,:)= Jc_R; Jg_R([4,5],:)= Jb_R([5,6],:);
if stanceLeg == -1
    Jg = Jg_L;
else
    Jg = Jg_R;
end
[Jgd1,Jgd2] = size(Jg);

JsL = zeros(2,20); JsL(1,11) = 1; JsL(2,[10 11 12]) = J_HeelSpringDeflectionEst(q(10),q(11),q(12));
JsR = zeros(2,20); JsR(1,18) = 1; JsR(2,[17 18 19]) = J_HeelSpringDeflectionEst(q(17),q(18),q(19));
Js = [JsL; JsR];

[Jsd1,Jsd2] = size(Js);
[JsLd1,JsLd2] = size(JsL);
[JsRd1,JsRd2] = size(JsR);
%Extended Matrix ( for walking)
Me = [M, -Jg', -Js';
    Jg, zeros(Jgd1,Jgd1), zeros(Jgd1,Jsd1);
    Js, zeros(Jsd1,Jgd1), zeros(Jsd1,Jsd1)];
He = [G;zeros(Jgd1,1);zeros(Jsd1,1)];
B = zeros(20,10); B(7:10,1:4) = eye(4); B(13:17,5:9) = eye(5); B(20,10) = 1;
B_cut = B(:,motor_index);
Be = [B_cut;zeros(Jgd1+Jsd1,length(motor_index))];

Me_re = YToolkits.SquareMatrixReorder(Me,qc_index);
He_re = YToolkits.VectorReorder(He,qc_index);
Be_re = YToolkits.VectorReorder(Be,qc_index);
[M11, M12, M21, M22, H1, H2, B1, B2] = YToolkits.PartitionEOM(Me_re,He_re,Be_re,length(qc_index));
M22_inv = M22^-1;
M_bar = M11 - M12*M22_inv*M21;
H_bar = -M12*M22_inv*H2+H1;
B_bar = -M12*M22_inv*B2 + B1;
B_bar_inv = B_bar^-1;
M_bar_inv = M_bar^-1;

B_bar_inv_times_M_bar = B_bar_inv*M_bar;
B_bar_inv_times_H_bar = B_bar_inv*H_bar;
% u8 = B_bar_inv*(M_bar*obj.ddqd_control + H_bar -Kd_PBC.*dqe_control - Kp_PBC.*qe_control);
% u_ff = B_bar_inv*(M_bar*obj.ddqd_control);
% u_gv = B_bar_inv*H_bar;
% u_fb = B_bar_inv*( -Kd_PBC.*dqe_control - Kp_PBC.*qe_control);
