function [u_gc_st_abduction, u_gc_st_thigh, u_gc_sw_abduction, u_gc_sw_thigh] = get_gravity_compensation(q,stanceLeg)

p_Pelvis_com = p_Pelvis(q);
p_LPelvisRotation_com = p_LeftPelvisRotation(q);
p_LHip = p_LeftHip(q);
p_LThigh_com = p_LeftThigh(q);
p_LKnee_com = p_LeftKnee(q);
p_LShin_com = p_LeftShin(q);
p_LTarsus_com = p_LeftTarsus(q);
p_LToe_com = p_LeftToe(q);
p_RPelvisRotation_com = p_RightPelvisRotation(q);
p_RHip = p_RightHip(q);
p_RThigh_com = p_RightThigh(q);
p_RKnee_com = p_RightKnee(q);
p_RShin_com = p_RightShin(q);
p_RTarsus_com = p_RightTarsus(q);
p_RToe_com = p_RightToe(q);

Pelvis_mass = 10.33;
LPelvisRotation_mass = 1.82;
LHip_mass = 1.17;
LThigh_mass = 5.52;
LKnee_mass = 0.758;
LShin_mass = 0.577;
LTarsus_mass = 0.782;
LToe_mass = 0.15;
RPelvisRotation_mass = 1.82;
RHip_mass = 1.17;
RThigh_mass = 5.52;
RKnee_mass = 0.758;
RShin_mass = 0.577;
RTarsus_mass = 0.782;
RToe_mass = 0.15;

p_LAbductionJoint = p_LeftAbductionJoint(q);
p_LThighJoint = p_LeftThighJoint(q);
p_RAbductionJoint = p_RightAbductionJoint(q);
p_RThighJoint = p_RightThighJoint(q);

R_LAbductionJoint = R_LeftAbductionJoint(q);
R_LThighJoint = R_LeftThighJoint(q);
R_RAbductionJoint = R_RightAbductionJoint(q);
R_RThighJoint = R_RightThighJoint(q);


p_Links_com = [p_Pelvis_com, ...
                p_LPelvisRotation_com, p_LHip, p_LThigh_com, p_LKnee_com, p_LShin_com, p_LTarsus_com, p_LToe_com,...
                p_RPelvisRotation_com, p_RHip, p_RThigh_com, p_RKnee_com, p_RShin_com, p_RTarsus_com, p_RToe_com];
Links_mass = [Pelvis_mass; 
                LPelvisRotation_mass; LHip_mass; LThigh_mass; LKnee_mass; LShin_mass; LTarsus_mass; LToe_mass;...
                RPelvisRotation_mass; RHip_mass; RThigh_mass; RKnee_mass; RShin_mass; RTarsus_mass; LToe_mass];
                
    
if stanceLeg == -1
    st_abduction_burden_index = [1,9:15];
    u_gc_st_abduction = -get_joint_gravity_burden(p_Links_com, Links_mass, st_abduction_burden_index, p_LAbductionJoint, R_LAbductionJoint, [1;0;0]);
    
    st_thigh_burden_index = [1,2,3,9:15];   
    u_gc_st_thigh = -get_joint_gravity_burden(p_Links_com, Links_mass, st_thigh_burden_index, p_LThighJoint, R_LThighJoint, [0;0;1]);
    
    
    sw_abduction_burden_index = [10:15];
    u_gc_sw_abduction = get_joint_gravity_burden(p_Links_com, Links_mass, sw_abduction_burden_index, p_RAbductionJoint, R_RAbductionJoint, [1;0;0]);
    
    sw_thigh_burden_index = [11:15];   
    u_gc_sw_thigh = get_joint_gravity_burden(p_Links_com, Links_mass, sw_thigh_burden_index, p_RThighJoint, R_RThighJoint, [0;0;1]);
    
else
    st_abduction_burden_index = [1,2:8];
    u_gc_st_abduction = -get_joint_gravity_burden(p_Links_com, Links_mass, st_abduction_burden_index, p_RAbductionJoint, R_RAbductionJoint, [1;0;0]);
    
    st_thigh_burden_index = [1,2:8,9,10];
    u_gc_st_thigh = -get_joint_gravity_burden(p_Links_com, Links_mass, st_thigh_burden_index, p_RThighJoint, R_RThighJoint, [0;0;1]);

    sw_abduction_burden_index = [3:8];
    u_gc_sw_abduction = get_joint_gravity_burden(p_Links_com, Links_mass, sw_abduction_burden_index, p_LAbductionJoint, R_LAbductionJoint, [1;0;0]);
    
    sw_thigh_burden_index = [4:8];   
    u_gc_sw_thigh = get_joint_gravity_burden(p_Links_com, Links_mass, sw_thigh_burden_index, p_LThighJoint, R_LThighJoint, [0;0;1]);
end
end


function gravity_burden = get_joint_gravity_burden(p_Links_com, Links_mass, burden_index, p_Joint, R_joint, joint_direction)
    g = 9.81;
    mass_burden = sum(Links_mass(burden_index));
    p_com_burden = p_Links_com(:,burden_index) * Links_mass(burden_index)/mass_burden;
    torque_burden = cross(p_com_burden - p_Joint, [0;0;-g] * mass_burden);
    gravity_burden = -joint_direction'*R_joint'*torque_burden;
end

                    
                
