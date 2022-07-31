function max_toe_yaw_torque = get_max_toe_yaw_torque(GRF_x, GRF_z, friction_cone)

zop = 0.051*GRF_x/GRF_z;

fz_front = (0.06 - zop)/0.16*GRF_z;
fz_back = (0.1 + zop)/0.16*GRF_z;

max_toe_yaw_torque = min([fz_back, fz_front]) * 0.16 * friction_cone;

end

