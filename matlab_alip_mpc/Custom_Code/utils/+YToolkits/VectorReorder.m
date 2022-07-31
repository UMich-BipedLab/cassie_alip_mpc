function V_1 = VectorReorder(V,index)
% For vector V push chosen index to top. 
% V should be a column vector
n = length(V);
len  = length(index);
not_index = setdiff(1:n,index);
V_1 = zeros(size(V));
V_1(1:len,:) = V(index,:);
V_1(len+1:end,:) = V(not_index,:);

end
