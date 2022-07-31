function DelayRowVector = get_DelayRowVector(delay,sample_time,dop)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here
DelayRowVector = zeros(1,dop+1);
for i = 2:dop+1
    DelayRowVector(i) = (i-1)*(delay*sample_time)^(i-2);
end

