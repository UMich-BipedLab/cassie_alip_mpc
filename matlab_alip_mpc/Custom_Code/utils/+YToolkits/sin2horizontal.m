function [f,df] = sin2horizontal(t, peak_time)
% a function start at 0 and continous rise with a sin function, arrived at
% peak at peak time;
if t < 0
    f = 0;
    df = 0;
elseif t < peak_time
    T = 4*peak_time;
    omega = 2*pi/T;
    f = sin(omega * t);
    df = omega*cos(omega * t);
else
    f = 1;
    df = 0;
end

