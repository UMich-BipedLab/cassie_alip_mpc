function [a,b] = InverseCurve_2pts(p1,p2)
% p1 p2 are two point on plane, find a line y = a/x+b passing this 2 pts.
a = - p1(2)*p2(2)*(p1(1)-p2(1))/(p1(2) - p2(2));
b = - (p1(2)*p1(1) - p2(2)*p2(1))/(p1(2) - p2(2));
end

