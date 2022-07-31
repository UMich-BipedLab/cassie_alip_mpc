function profile_runner_logreg(solver_options, id, runner_options)
%PROFILE_RUNNER_LOGREG runs a collection of logistic regression problems by 
%invoking the helper function profile_logreg. Logistic regression problems
%are cast as conic problems with the exponential cone onto which the
%projection is computed numerically.
%
%Syntax:
%profile_runner_logreg(solver_options, id)
%profile_runner_logreg(solver_options, id, runner_options)
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
%           name  problem name
%           reps  repetitions of each run (on random data) [default: 2]
%         span_p  the range of `p` values to be tested [default: [80 120]]
%         span_b  the values of `q` are computed as `b * p` where the span
%                 of the values of `b` is specified by this parameter.
%                 [Default: [20 50 100]]
%       span_lam  the range of `lam` to be tested [default: [0.01 0.2 3]]
%   span_density  the range of `density` [default: [0.1 0.25]]
% span_w_density  the range of `w_density` to be tested [default: [0.1 3]]
%     span_sigma  the range of `sigma`  to be tested [default: [0.1 3]]
%
% The argument `runner_options` is optional.
%
%See also
%profile_logreg

% The MIT License (MIT)
%
% Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
%                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
%                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
% Copyright (c) 2012 Brendan O'Donoghue (bodonoghue85@gmail.com)
%
% Permission is hereby granted, free of charge, to any person obtaining a copy
% of this software and associated documentation files (the "Software"), to deal
% in the Software without restriction, including without limitation the rights
% to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
% copies of the Software, and to permit persons to whom the Software is
% furnished to do so, subject to the following conditions:
%
% The above copyright notice and this permission notice shall be included in all
% copies or substantial portions of the Software.
%
% THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
% IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
% FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
% AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
% LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
% OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
% SOFTWARE.

% LOGISTIC REGRESSION (288 problems)
rng(1); % for reproducibility (so that every time this script is called,
% the same problems will be run).
records = []; info = []; data = []; K = []; pars = []; problem = [];

reps = 2;
span_p         = [80 100];
span_b         = [50 100 120];
span_lam       = [10 20 50];
span_density   = [0.05 0.1];
span_w_density = [0.1 0.25]; 
span_sigma     = [0.1 3];

name = 'LOGREG';

if nargin >=3
    if isfield(runner_options, 'reps'), reps = runner_options.reps; end
    if isfield(runner_options, 'span_p'), span_p = runner_options.span_p; end
    if isfield(runner_options, 'span_b'), span_b = runner_options.span_b; end
    if isfield(runner_options, 'span_lam'), span_lam = runner_options.span_lam; end
    if isfield(runner_options, 'span_density'), span_density = runner_options.span_density; end
    if isfield(runner_options, 'span_w_density'), span_w_density = runner_options.span_w_density; end
    if isfield(runner_options, 'span_sigma'), span_sigma = runner_options.span_sigma; end
    if isfield(runner_options, 'name'), name = runner_options.name; end
end

problem_data = cartesian(span_p, span_b, span_lam, span_density, ...
    span_w_density, span_sigma, 1:reps);
n_problems = size(problem_data, 1);
fprintf('EXPERIMENTER_LOGREG: %d PROBLEMS\n', n_problems);

for i=1:n_problems,
    problem.p = problem_data(i,1);   % features
    b = problem_data(i,2);
    problem.q = b*problem.p; % samples
    problem.lam = problem_data(i,3);
    problem.density = problem_data(i,4);
    problem.sigma = problem_data(i,5);
    problem.w_density = problem_data(i,6);
    
    fprintf(['RUNNING PROBLEM %3d/%3d [p=%3d, q=%5d, lambda=%1.4f, ', ... 
        'density=%1.2f, w-density=%1.2f, sigma=%1.2f, r=%1d] '], ...
        i, n_problems, ...
        problem.p, problem.q, problem.lam, problem.density, problem.w_density, ...
        problem.sigma, problem_data(i,7));
    profile_logreg(problem, solver_options);
    % log results
    load(solver_options.dumpfile);
    data = rmfield(data,'A');
    out = struct('info', info, 'data', data, 'K', K, 'pars', pars, 'problem', problem);
    out.cost = info.solveTime/isempty(strfind(info.status, 'Inaccurate'));
    records = [records, out];
    fprintf('%s in %.1fs\n', info.status, info.solveTime/1e3);
end
delete(solver_options.dumpfile);
fname = [get_scs_rootdir() 'tests/profiling_matlab/profile_results/' ...
    num2str(id) '.mat'];
save(fname, 'records') % save `records` to file {id}.mat
register_profile_data(solver_options, name, id, records);
