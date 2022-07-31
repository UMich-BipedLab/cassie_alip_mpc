function profile_runner_pca(solver_options, id, runner_options)
%PROFILE_RUNNER_PCA runs a collection of regularized PCA problems by invoking
%the helper function profile_pca
%
%Syntax:
%profile_runner_pca(solver_options, id)
%profile_runner_pca(solver_options, id, runner_options)
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
%   reps         repetitions of each run (on random data) [default: 2]
%   span_d       range of `data` [default: [50 120 140 180]]
%   span_p       range of `p` [default: [5 8]]
%   span_rca     range of reciprocal condition numbers (`rca`) [default: 
%                logspace(-5,-2,3);]
%   span_lam     range of `lam` [default: [0.1 2 5]]
%   span_dens    range of `density` [default: [0.05 0.1]]
%
% The argument `runner_options` is optional.
%
%See also
%profile_pca

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

rng(1); % for reproducibility (so that every time this script is called,
% the same problems will be run).
records = []; info = []; data = []; K = []; pars = []; problem = [];

reps = 2;
span_d    = [50 120 140 180];
span_p    = [5 8];
span_rca  = logspace(-5,-2,3);
span_lam  = [0.1 2 5];
span_dens = [0.05 0.1];
name      = 'PCA-X';

if nargin >=3
    if isfield(runner_options, 'reps'), reps = runner_options.reps; end
    if isfield(runner_options, 'span_d'), span_d = runner_options.span_d; end
    if isfield(runner_options, 'span_p'), span_p = runner_options.span_p; end
    if isfield(runner_options, 'span_rca'), span_rca = runner_options.span_rca; end
    if isfield(runner_options, 'span_lam'), span_lam = runner_options.span_lam; end
    if isfield(runner_options, 'span_dens'), span_dens = runner_options.span_dens; end
    if isfield(runner_options, 'name'), name = runner_options.name; end
end

problem_data = cartesian(span_d, span_p, span_rca, span_lam, span_dens, 1:reps);
n_problems = size(problem_data, 1);
fprintf('EXPERIMENTER_PCA: %d PROBLEMS (%s)\n', n_problems, name);

% SHUFFLE the problems first
random_perm_idx = randperm(n_problems);
problem_data = problem_data(random_perm_idx, :);

for i=1:n_problems
    problem.d       = problem_data(i,1);
    problem.p       = problem_data(i,2);
    problem.rcA     = problem_data(i,3);
    problem.lam     = problem_data(i,4);
    problem.density = problem_data(i,5);        
    fprintf(...
        ['PCA PROBLEM %3d/%3d ', ...
        '[d=%3d, p=%2d, rca=%1.5f, lam=%1.2f, den=%2.3f, rep=%1d]'],...
        i, n_problems, problem.d, problem.p, problem.rcA, problem.lam, ...
        problem.density, problem_data(i,6));
    profile_pca(problem, solver_options);
    % log results
    load(solver_options.dumpfile);
    if ~isempty(data) && isstruct(data) && isfield(data, 'A'), data = rmfield(data,'A'); end
    out = struct('info', info, 'data', data, 'K', K, 'pars', pars, 'problem', problem);
    if isempty(out.info)
        out.cost = profile_sdp2_results.time;
    elseif isfield(out.info, 'solveTime')
        out.cost = info.solveTime/isempty(strfind(info.status, 'Inaccurate'));
        fprintf('%s in %.1fs\n', info.status, info.solveTime/1e3);
    elseif isfield(out.info, 'cpusec')
        % Cost = time in milliseconds if succeeded
        %        +infty otherwise
        out.cost = 1e3*out.info.cpusec/(info.r0 <= solver_options.tolerance+1e-11);
    elseif isfield(out.info, 'cputime')
        out.cost = 1e3*out.info.cputime/(out.info.relgap <= solver_options.tolerance+1e-11 ...
            && out.info.pinfeas <= solver_options.tolerance+1e-11 ...
            && out.info.dinfeas <= solver_options.tolerance+1e-11);
    end
    records = [records, out];
    fprintf(' (%3.2fs)\n', out.cost/1e3);
end
delete(solver_options.dumpfile);


fname = fullfile(get_scs_rootdir(), ...
    'tests/profiling_matlab/profile_results/', ...
    [num2str(id) '.mat']);
save(fname, 'records') % save `records` to file {id}.mat
register_profile_data(solver_options, name, id, records);
