function profile_runner_lasso(solver_options, id, runner_options)
%PROFILE_RUNNER_LASSO runs a collection of lasso problems by invoking the
%helper function profile_lasso
%
%Syntax:
%profile_runner_lasso(solver_options, id)
%profile_runner_lasso(solver_options, id, runner_options)
%
%Input arguments:
% id        experiment id (at the end of the experiment, the results are
%           stored in a MAT file in tests/profiling_matlab/profile_results
%           and are also registered in the file register.csv in that same
%           folder).
% solver_options a structure with solver options which is passed to
%                profile_lasso
% runner_options this is a structure with the experiment options; it is a
%                structure with the following fields:
%   reps         repetitions of each run (on random data) [default: 3]
%   span_n       the range of n values to be tested [default: 
%                round(logspace(2.8, 3.4, 4)) ]
%   span_mu      the range of mu values to be tested [default:
%                logspace(-2,0,3)]
%   span_rca     the range of reciprocal condition numbers of matrices `A`
%                to be tested [default: logspace(-5,-1,4)]
%   span_dens    the range of densities of matrices `A` to be tested
%                [default: [0.1 0.5]]
%   span_sigma   the range of sigma values to be tested [default: [0.05,
%                0.1]]
%
% The argument `runner_options` is optional.
%
%See also
%profile_lasso

rng(1); % for reproducibility (so that every time this script is called,
% the same problems will be run).
records = []; info = []; data = []; K = []; pars = []; problem = [];

reps = 3;
span_n     = round(logspace(2.8, 3.4, 4));
span_mu    = logspace(-2,0,3);
span_rca   = logspace(-5,-1,4);
span_dens  = [0.1 0.5];
span_sigma = [0.05 0.1];

if nargin >=3
    if isfield(runner_options, 'reps'), reps = runner_options.reps; end
    if isfield(runner_options, 'span_n'), span_n = runner_options.span_n; end
    if isfield(runner_options, 'span_mu'), span_mu = runner_options.span_mu; end
    if isfield(runner_options, 'span_rca'), span_rca = runner_options.span_rca; end
    if isfield(runner_options, 'span_dens'), span_dens = runner_options.span_dens; end
    if isfield(runner_options, 'span_sigma'), span_sigma = runner_options.span_sigma; end
end

problem_data = cartesian(span_n, span_mu, span_rca, span_dens, span_sigma, 1:reps);
n_problems = size(problem_data, 1);
fprintf('EXPERIMENTER_LASSO: %d PROBLEMS\n', 2*n_problems);
k = 0;
for i=1:n_problems,
    problem.n = problem_data(i,1);
    problem.mu = problem_data(i,2);
    problem.rcA = problem_data(i,3);
    problem.density = problem_data(i,4);
    problem.sigma = problem_data(i,5);
    problem.m = ceil(problem.n/5);
    for s = [ceil(problem.n/10) ceil(problem.n/20)]
        k = k + 1;
        problem.s = s;
        fprintf('PROBLEM %3d/%3d [n=%4d, mu=%1.2f, rca=%2.7f, density=%1.3f, sigma=%1.3f, s=%3d, rep=%2d]\n', ...
            k, 2*n_problems, problem.n, problem.mu, problem.rcA, problem.density, ...
            problem.sigma, s, problem_data(i,6));
        profile_lasso(problem, solver_options);
        % log results
        load(solver_options.dumpfile);
        data = rmfield(data,'A');
        out = struct('info', info, 'data', data, 'K', K, 'pars', pars, 'problem', problem);
        out.cost = info.solveTime/isempty(strfind(info.status, 'Inaccurate'));
        records = [records, out];
    end
end
delete(solver_options.dumpfile);
fname = [get_scs_rootdir() 'tests/profiling_matlab/profile_results/' ...
    num2str(id) '.mat'];
save(fname, 'records') % save `records` to file {id}.mat
register_profile_data(solver_options, 'LASSO-X', id, records);