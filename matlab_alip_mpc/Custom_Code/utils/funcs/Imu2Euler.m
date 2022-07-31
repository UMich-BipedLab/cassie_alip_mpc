function [q_yaw, q_pitch, q_roll, dq_yaw, dq_pitch, dq_roll] = Imu2Euler(q_orientation, w)
    % Get euler angle and euler rates from orientation and angular velocity
    % need further refined for different quadrant
    %% Get rotation matrix R and dR
    R = YToolkits.Angles.Quaternion_to_Matrix(q_orientation);
    dR = YToolkits.Angles.AngularVelocity_to_dMatrix(w, R);

    %% Calculate euler angles and diff
    eulerAngles = YToolkits.Angles.Matrix_to_Euler(R);
    deulerAngles = YToolkits.Angles.dMatrix_to_dEuler(R, dR);

    %% Assignment of variables
    q_yaw = eulerAngles(1);
    q_pitch = eulerAngles(2);
    q_roll = eulerAngles(3);
    
    dq_yaw = deulerAngles(1); 
    dq_pitch = deulerAngles(2); 
    dq_roll = deulerAngles(3);
end