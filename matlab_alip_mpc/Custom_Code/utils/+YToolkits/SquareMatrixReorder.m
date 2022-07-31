function M_2 = SquareMatrixReorder(M,index)
% For M*q, want to reorder q, push chosen index to top. Calculate
% corresponding new M
[n,~] = size(M);
len  = length(index);
not_index = setdiff(1:n,index);
M_1 = zeros(size(M));
M_2 = zeros(size(M));
M_1(1:len,:) = M(index,:);
M_1(len+1:end,:) = M(not_index,:);
M_2(:,1:len) = M_1(:,index);
M_2(:,len+1:end) = M_1(:,not_index);
end

