function A_inv = QR_inverse(A)
% A is supposed to be a square matrix
[Q,R]=qr(A,0);
A_inv=inv(R)*Q';
end

