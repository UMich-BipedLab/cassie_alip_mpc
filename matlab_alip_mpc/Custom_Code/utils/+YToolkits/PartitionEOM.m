function [M11, M12, M21, M22, H1, H2, B1, B2] = PartitionEOM(M,H,B,n)
% Partition Equation of motion, n is the num of rows in first part
M11 = M(1:n,1:n);
M12 = M(1:n,n+1:end);
M21 = M(n+1:end,1:n);
M22 = M(n+1:end,n+1:end);
H1 = H(1:n);
H2 = H(n+1:end);
B1 = B(1:n,:);
B2 = B(n+1:end,:);
end

