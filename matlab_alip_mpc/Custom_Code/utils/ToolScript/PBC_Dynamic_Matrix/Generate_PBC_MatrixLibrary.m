gravity = 32*9.8;

upper_limit = -0.85;
lower_limit = -2.4;
step_length = 0.05;

st_knee_range = lower_limit:step_length:upper_limit;
sw_knee_range = lower_limit:step_length:upper_limit;



KsL_1 = 1500;
KsL_2 = 1250;
KsR_1 = 1500;
KsR_2 = 1250;

stanceLeg = -1;
for sti = 1:1:length(st_knee_range)
    for swi = 1:1:length(sw_knee_range)
        st_knee = st_knee_range(sti);
        sw_knee = sw_knee_range(swi);
        [~,LLst] = Forward_Kinematics_p(0, st_knee);
        [~,LLsw] = Forward_Kinematics_p(0, sw_knee);
        % generate corresponding q
        q = zeros(20,1);
        [q([9]),q([10])]= Inverse_Kinematics_p(0, LLst);
        [q([16]),q([17])]= Inverse_Kinematics_p(0, LLsw);
        q(12) = - q(10) +deg2rad(13);
        
        p_com = p_COM(q);
        p_stToe = p_LeftToeJoint(q);
        rp_stToe = p_com - p_stToe;
        
        GRF_est = gravity * [ rp_stToe(1)/rp_stToe(3); rp_stToe(2)/rp_stToe(3); 1];
        
        JL = Jp_LeftToeJoint(q);
        JT = ClosedChain_Coordinate_Transform_Jacobian(q(10:12));
        JL_selected = JL(:,[10,11,12]);
        tau = -JT'\JL_selected'*GRF_est; % tau is the torque on knee, knee spring and heel spring.
        
        deflection_kneespring = -tau(2)/KsL_1;
        deflection_heelspring = -tau(3)/KsL_2;
        
        delta_q_kksa = (JT)^-1*[0;deflection_kneespring; deflection_heelspring]; % corresponding change on knee, kneespring and ankle;
        
        q(11) = delta_q_kksa(2);
        q(12) = q(12) + delta_q_kksa(3);
        
        generate_Matrix;
        
        DynamicMatrixLibrary.LeftStance.B_bar_inv(:,:,sti,swi) = B_bar_inv; % Vq = interp2(X,Y,V,Xq,Yq), V must be a matrix containing length(Y) rows and length(X) columns
        DynamicMatrixLibrary.LeftStance.B_bar_inv_times_M_bar(:,:,sti,swi) = B_bar_inv_times_M_bar;
        DynamicMatrixLibrary.LeftStance.B_bar_inv_times_H_bar(:,sti,swi) = B_bar_inv_times_H_bar;
        DynamicMatrixLibrary.LeftStance.st_knee_range = [lower_limit, upper_limit,  step_length];
        DynamicMatrixLibrary.LeftStance.sw_knee_range = [lower_limit, upper_limit,  step_length];
    end
end

stanceLeg = 1;
for sti = 1:1:length(st_knee_range)
    for swi = 1:1:length(sw_knee_range)
        st_knee = st_knee_range(sti);
        sw_knee = sw_knee_range(swi);
        [~,LLst] = Forward_Kinematics_p(0, st_knee);
        [~,LLsw] = Forward_Kinematics_p(0, sw_knee);
        % generate corresponding q
        q = zeros(20,1);
        [q([16]),q([17])]= Inverse_Kinematics_p(0, LLst);
        [q([9]),q([10])]= Inverse_Kinematics_p(0, LLsw);
        q(19) = - q(17) +deg2rad(13);
        
        p_com = p_COM(q);
        p_stToe = p_RightToeJoint(q);
        rp_stToe = p_com - p_stToe;
        
        GRF_est = gravity * [ rp_stToe(1)/rp_stToe(3); rp_stToe(2)/rp_stToe(3); 1];
        
        JR = Jp_RightToeJoint(q);
        JT = ClosedChain_Coordinate_Transform_Jacobian(q(17:19));
        JR_selected = JR(:,[17,18,19]);
        tau = -JT'\JR_selected'*GRF_est; % tau is the torque on knee, knee spring and heel spring.
        
        deflection_kneespring = -tau(2)/KsR_1;
        deflection_heelspring = -tau(3)/KsR_2;
        
        delta_q_kksa = (JT)^-1*[0;deflection_kneespring; deflection_heelspring]; % corresponding change on knee, kneespring and ankle;
        
        q(18) = delta_q_kksa(2);
        q(19) = q(19) + delta_q_kksa(3);
        
        generate_Matrix;
        
        DynamicMatrixLibrary.RightStance.B_bar_inv(:,:,sti,swi) = B_bar_inv;
        DynamicMatrixLibrary.RightStance.B_bar_inv_times_M_bar(:,:,sti,swi) = B_bar_inv_times_M_bar;
        DynamicMatrixLibrary.RightStance.B_bar_inv_times_H_bar(:,sti,swi) = B_bar_inv_times_H_bar;
        DynamicMatrixLibrary.RightStance.st_knee_range = [lower_limit, upper_limit,  step_length];
        DynamicMatrixLibrary.RightStance.sw_knee_range = [lower_limit, upper_limit,  step_length];
    end
end

save([root_dir '\CustomCodes\utils\mat\DynamicMatrixLibrary_Sim_v1'],'DynamicMatrixLibrary')
