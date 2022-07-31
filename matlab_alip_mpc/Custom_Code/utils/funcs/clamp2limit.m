function [joint_clamped] = clamp2limit(obj, joint, index)
joint_clamped = median([obj.ActuatorLimits(index,1), obj.ActuatorLimits(index,2),joint]);
end

