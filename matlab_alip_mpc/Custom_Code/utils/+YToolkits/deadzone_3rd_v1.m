function y = deadzone_3rd_v1(x,range)
y = zeros(size(x));
for i = 1:length(x)
    if abs(x(i))>range
        y(i) = x(i);
    else
        y(i) = x(i)^3/range^2;
    end
end

