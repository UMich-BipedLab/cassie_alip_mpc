function y = deadzone_5rd_v1(x,range)
y = zeros(size(x));
for i = 1:length(x)
    if abs(x(i))>range
        y(i) = x(i);
    else
        y(i) = x(i)^5/range^4;
    end
end