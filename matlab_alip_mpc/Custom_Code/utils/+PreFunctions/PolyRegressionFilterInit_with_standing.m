% history_length = 10; % sample num
% dop = 1; % deg of polynomial NOTICE! dop too high will make(A'*A) close to singular and cause numeric issue when using code gen mode.

A = zeros(c_history_length,c_dop+1);
% osam = 0; % offset sample 
% 
for i = 1:c_history_length
    for j = 1:c_dop+1
        A(i,j) = ((i-c_history_length)*sample_time)^(j-1);
    end
end
[Q,R]=qr(A,0);
PsuedoInverse=inv(R)*Q';


Matrix_temp = zeros(1,c_dop+1);
Matrix_temp(2) = 1;
fil_matrix = Matrix_temp*PsuedoInverse;

% for i = 1:sample_num
%     for j = 1:dop+1

% cov_dq_estimated = sum(fil_matrix.^2)*cov_q_measured;

% sum(fil_matrix.^2)

