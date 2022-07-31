function [alpha] = cutoff2alpha(fc, T)
    % Generate alpha, where fc = 1/(2*pi*RC) and w0 = 1/(R*C) 
    w0 = fc*2*pi;
    alpha = 1 - exp(-w0*T);
end