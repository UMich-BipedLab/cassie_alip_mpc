function out = profile_lasso(problem, solver_options)
%PROFILE_LASSO solves a LASSO (l1-regularized least squares) optimization
%problem which amounts to solving
%
% Minimize  0.5*sum_square(A*x_c - b) + mu*norm(x_c,1)
%
%Syntax:
% out = profile_lasso(problem, solver_options)
%
%Input arguments:
% problem           structure defining the problem specifications with
%                   fields:
%  n                number of decision variables (length of x)
%  m                row-dimension of matrix A
%  s                number of nonzero entries of x_true
%  density          density of A (which is a sparse matrix)
%  rcA              the reciprocal condition number of A (approximately)
%  sigma            b = A*x_true + sigma*randn(m,1);
%  mu               the LASSO parameter mu > 0
%
% solver_options    structure with solver options which are passed to
%                   scs_set_options.
%
%
%Output arguments:
% out               structure containing the total runtime (field name: time)
%                   
%See also
% scs_set_options


n = problem.n; m = problem.m; s = problem.s; density = problem.density;
mu = problem.mu; sigma = problem.sigma;

x_true=[randn(s,1);zeros(n-s,1)]; % true sparse signal
x_true = x_true(randperm(n));

rcA = problem.rcA;
A=sprandn(m,n,density,rcA);

b = A*x_true + sigma*randn(m,1);

tstart_lasso = tic;
cvx_begin quiet
    cvx_solver scs
    scs_set_options(solver_options)
    variable x_c(n)
    minimize(0.5*sum_square(A*x_c - b) + mu*norm(x_c,1))
cvx_end
out.time = toc(tstart_lasso);
