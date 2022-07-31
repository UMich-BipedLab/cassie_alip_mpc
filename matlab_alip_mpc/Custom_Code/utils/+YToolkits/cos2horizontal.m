function [f,df] = cos2horizontal(t, peak_time)
% a function start at 0 and continous rise with a cos function, arrived at
% peak at peak time;
if t < 0
    f = 0;
    df = 0;
elseif t < peak_time
    T = 2*peak_time;
    f = 1/2 * (cos(2 * pi / T * t - pi) + 1);
    df = - 1 * pi / T * sin( 2 * pi / T * t - pi);
else
    f = 1;
    df = 0;
end

