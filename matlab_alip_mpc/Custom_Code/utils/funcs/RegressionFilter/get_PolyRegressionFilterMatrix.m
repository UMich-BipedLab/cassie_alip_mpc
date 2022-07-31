function fil_matrix = get_PolyRegressionFilterMatrix(dop,history_length,sample_time,delay)
% get R for dy = R*Y
%  y is a scalor, Y is measurement of y from t_k-M+1 to t_k, dy is estimated velocity at t_k
% M is history length, dop is the degree of freedom of the fitting polynomial
A = zeros(history_length,dop+1);

for i = 1:history_length
    for j = 1:dop+1
        A(i,j) = ((i-history_length)*sample_time)^(j-1);
    end
end

% Matrix_temp = zeros(1,dop+1);
% Matrix_temp(2) = 1;
% fil_matrix = Matrix_temp*(A'*A)^-1*A';

[Q,R]=qr(A,0);
PsuedoInverse=R^-1*Q';

% [Q,R]=qr(A);
% PsuedoInverse=inv(R'*R)*R'*Q';


DelayRowVector = get_DelayRowVector(delay,sample_time,dop);
% Matrix_temp(2) = 1;
fil_matrix = DelayRowVector*PsuedoInverse;

% for i = 1:1000
%     matrixSize = 100;
%     M = rand(matrixSize, matrixSize);
%     if rank(M) == matrixSize
%         test = M^-1;
%     end
% end

