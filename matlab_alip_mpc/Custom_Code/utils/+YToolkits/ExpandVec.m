function Evector = ExpandVec(vector,size)
%example: vector = [1, 2 ,4] size = 3
%         Evector = [ 1 2 3 4 5 6 10 11 12];
Evector = zeros(1,size*length(vector));
for i = 1:length(vector)
    Evector(i*size - size+1:i*size) = vector(i)*size-size+1:vector(i)*size;
end
end

