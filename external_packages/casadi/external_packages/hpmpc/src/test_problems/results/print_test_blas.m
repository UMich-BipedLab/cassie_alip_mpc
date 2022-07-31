%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                                                 %
% This file is part of HPMPC.                                                                     %
%                                                                                                 %
% HPMPC -- Library for High-Performance implementation of solvers for MPC.                        %
% Copyright (C) 2014 by Technical University of Denmark. All rights reserved.                     %
%                                                                                                 %
% HPMPC is free software; you can redistribute it and/or                                          %
% modify it under the terms of the GNU Lesser General Public                                      %
% License as published by the Free Software Foundation; either                                    %
% version 2.1 of the License, or (at your option) any later version.                              %
%                                                                                                 %
% HPMPC is distributed in the hope that it will be useful,                                        %
% but WITHOUT ANY WARRANTY; without even the implied warranty of                                  %
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            %
% See the GNU Lesser General Public License for more details.                                     %
%                                                                                                 %
% You should have received a copy of the GNU Lesser General Public                                %
% License along with HPMPC; if not, write to the Free Software                                    %
% Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  %
%                                                                                                 %
% Author: Gianluca Frison, giaf (at) dtu.dk                                                       %
%                                                                                                 %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% prints the results of the performance test on blas

test_blas

graphics_toolkit('gnuplot')

f1 = figure()

if 0

plot(B(:,1), B(:,2), 'k-.', 'LineWidth', 2)
hold on
plot(B(:,1), B(:,4), 'b-x', 'LineWidth', 2)
%plot(B(:,1), B(:,6), 'r-o', 'LineWidth', 2)
%plot(B(:,1), B(:,8), 'g-*', 'LineWidth', 2)
%plot(B(:,1), B(:,10), 'r-^', 'LineWidth', 2)
%plot(B(:,1), B(:,12), 'm-^', 'LineWidth', 2)
%plot(B(:,1), B(:,14), 'c-d', 'LineWidth', 2)
%plot(B(:,1), B(:,16), 'k-s', 'LineWidth', 2)
%plot(B(:,1), B(:,18), 'c-s', 'LineWidth', 2)
%plot(B(:,1), B(:,20), 'k-d', 'LineWidth', 2)
%plot(B(:,1), B(:,22), 'g-^', 'LineWidth', 2)
%plot(B(:,1), B(:,24), 'm-*', 'LineWidth', 2)
%plot(B(:,1), B(:,26), 'b-o', 'LineWidth', 2)
%plot(B(:,1), B(:,28), 'k-x', 'LineWidth', 2)
%plot(B(:,1), B(:,30), 'k-o', 'LineWidth', 2)
%plot(B(:,1), B(:,32), 'k-*', 'LineWidth', 2)
%plot(B(:,1), B(:,34), 'k-^', 'LineWidth', 2)
hold off

title(['test HPMPC BLAS'])
xlabel('matrix size n')
ylabel('Gflops')
axis([0 B(end,1) 0 A(1)*A(2)])
legend('gemm\_nn', 'gemm\_nt', 'syrk\_potrf', 'trmm', 'trtr', 'gemv\_n', 'gemv\_t','trmv\_n', 'trmv\_t','trsv\_n', 'trsv\_t','symv', 'mvmv', 'Location', 'SouthEast')

else

if 0

%plot(B(:,3), B(:,5), 'b-x', 'LineWidth', 2)
loglog(B(:,1), B(:,5), 'b-x', 'LineWidth', 2)
%loglog(B(:,3), B(:,8), 'k-.', 'LineWidth', 2)
hold on
%plot(B(:,3), B(:,6), 'r-o', 'LineWidth', 2)
%loglog(B(:,3), B(:,5), 'b-x', 'LineWidth', 2)
%loglog(B(:,3), B(:,6), 'g-^', 'LineWidth', 2)
loglog(B(:,1), B(:,7), 'r-o', 'LineWidth', 2)
loglog(B(:,1), B(:,8), 'g-^', 'LineWidth', 2)
%loglog(B(:,3), B(:,9), 'b-x', 'LineWidth', 2)
%loglog(B(:,3), B(:,10), 'r-o', 'LineWidth', 2)
%loglog(B(:,3), B(:,11), 'g-^', 'LineWidth', 2)
%loglog(B(:,3), B(:,12), 'm-d', 'LineWidth', 2)
%loglog(B(:,3), B(:,8), 'k-.', 'LineWidth', 2)
hold off

%title(['condensing - n_x=12, x_u=5 - dense cost function'])
%title(['Hessian condensing - n_x=16, x_u=8 - dense cost function'])
title(['Hessian condensing - N=30, x_u=2 - diagonal cost function'])
%xlabel('N')
xlabel('n_x')
ylabel('time [s]')
%axis([1 100 1e-7 1e-1])
legend('N^3 n_x^2 alg', 'N^2 n_x^2 alg', 'N^2 n_x^3 alg', 'Location', 'SouthEast')
%legend('N^3 fact', 'N^3 cond + N^3 fact', 'N^2 cond + N^3 fact', 'N^2 n_x^2 cond \& fact', 'N^2 n_x^3 cond \& fact', 'Location', 'SouthEast')

else

if 0

%plot(B(:,3), B(:,5), 'b-x', 'LineWidth', 2)
%loglog(B(:,3), B(:,5), 'b-x', 'LineWidth', 2)
loglog(B(:,1), B(:,9), 'r-o', 'LineWidth', 2)
hold on
%plot(B(:,3), B(:,6), 'r-o', 'LineWidth', 2)
%loglog(B(:,3), B(:,6), 'g-^', 'LineWidth', 2)
%loglog(B(:,3), B(:,7), 'r-o', 'LineWidth', 2)
loglog(B(:,1), B(:,10), 'b-x', 'LineWidth', 2)
%loglog(B(:,3), B(:,11), 'r-o', 'LineWidth', 2)
%loglog(B(:,3), B(:,12), 'g-^', 'LineWidth', 2)
%loglog(B(:,3), B(:,13), 'm-d', 'LineWidth', 2)
%loglog(B(:,3), B(:,9), 'k-.', 'LineWidth', 2)
hold off

%title(['condensing - n_x=12, x_u=5 - dense cost function'])
%title(['condensing & factorization - n_x=16, x_u=8 - dense cost function'])
%title(['Hessian factorization - n_x=16, x_u=8'])
title(['Hessian factorization - N=30, x_u=2'])
%xlabel('N')
xlabel('n_x')
ylabel('time [s]')
%axis([1 100 1e-7 1e-3])
%legend('N^3 case (1)', 'N^3 case (2)', 'N^2 case (1)', 'Location', 'SouthEast')
%legend('N^3 fact', 'N^3 cond + N^3 fact', 'N^2 cond + N^3 fact', 'N^2 n_x^2 cond \& fact', 'N^2 n_x^3 cond \& fact', 'Location', 'SouthEast')
legend('N^3 fact', 'N fact', 'Location', 'SouthEast')

else

%plot(B(:,3), B(:,5), 'b-x', 'LineWidth', 2)
%loglog(B(:,3), B(:,5), 'b-x', 'LineWidth', 2)
loglog(B(:,3), B(:,5)+B(:,10), 'b-x', 'LineWidth', 2)
hold on
%plot(B(:,3), B(:,6), 'r-o', 'LineWidth', 2)
%loglog(B(:,3), B(:,6), 'g-^', 'LineWidth', 2)
%loglog(B(:,3), B(:,7), 'r-o', 'LineWidth', 2)
%loglog(B(:,1), B(:,10), 'b-x', 'LineWidth', 2)
%loglog(B(:,3), B(:,11), 'r-o', 'LineWidth', 2)
%loglog(B(:,3), B(:,12), 'g-^', 'LineWidth', 2)
loglog(B(:,3), B(:,13), 'r-o', 'LineWidth', 2)
loglog(B(:,3), B(:,14), 'g-^', 'LineWidth', 2)
%loglog(B(:,3), B(:,9), 'k-.', 'LineWidth', 2)
hold off

%title(['condensing - n_x=12, x_u=5 - dense cost function'])
%title(['condensing & factorization - n_x=16, x_u=8 - dense cost function'])
title(['Hessian cond fact - n_x=16, x_u=8 - dense cost function'])
%title(['Hessian cond fact - N=30, x_u=2 - diagonal cost function'])
xlabel('N')
%xlabel('n_x')
ylabel('time [s]')
%axis([1 100 1e-7 1e-3])
%legend('N^3 case (1)', 'N^3 case (2)', 'N^2 case (1)', 'Location', 'SouthEast')
%legend('N^3 fact', 'N^3 cond + N^3 fact', 'N^2 cond + N^3 fact', 'N^2 n_x^2 cond \& fact', 'N^2 n_x^3 cond \& fact', 'Location', 'SouthEast')
legend('N^3 n_x^2 alg', 'N^2 n_x^2 alg', 'N^2 n_x^3 alg', 'Location', 'SouthEast')

end

end

end

W = 4; H = 3;
set(f1,'PaperUnits','inches')
set(f1,'PaperOrientation','portrait');
set(f1,'PaperSize',[H,W])
set(f1,'PaperPosition',[0,0,W,H])
FN = findall(f1,'-property','FontName');
set(FN,'FontName','/usr/share/fonts/truetype/ttf-dejavu/DejaVuSerifCondensed.ttf');
FS = findall(f1,'-property','FontSize');
set(FS,'FontSize',10);
file_name = ['test_blas_', C, '.eps'];
print(f1, file_name, '-depsc') 

