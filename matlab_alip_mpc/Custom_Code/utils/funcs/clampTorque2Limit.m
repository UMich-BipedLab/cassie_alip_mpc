 function [torque_motor_clamped] = clampTorque2Limit(obj, torque_motor, index_motor)
    % Apply torque limits to each motor 
    torque_motor_clamped = median([obj.TorquesLimits_Custom(index_motor, 1), obj.TorquesLimits_Custom(index_motor, 2), torque_motor]);
end