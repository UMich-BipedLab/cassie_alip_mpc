function profile_runner_normcon(solver_options, id, runner_options)
%PROFILE_RUNNER_NORMCON runs a collection of norm-constrained norm
%minimization problems by calling profile_normcon
%
%Syntax:
%profile_runner_normcon(solver_options, id)
%profile_runner_normcon(solver_options, id, runner_options)
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
%  reps          repetitions of each run (on random data) [default: 2]
%  span_m        the range of m values to be tested [default: [500 1000 3000]]
%  span_n_factor dimension `n` is computed as n = n_factor * m. [default:
%                [0.1 0.5]]
%  span_p        the range of `p` (the row dimension of matrix `G`).
%                [default: [10 100]]
%  span_rca      the range of (approximate) reciprocal condition numbers of
%                `A` [default: logspace(-5, -1, 4)]
%  span_bmag     the range of magnitudes of `b` (see profile_normcon)
%  span_Gmag     the range of magnitudes of `G` (see profile_normcon)
%  span_density  the range of densities of sparse matrix `A` [default: 
%                [0.05 0.1]]
%  span_density_c the range of densities of sparse matrix `G` [default: 0.5]
%
%
% The argument `runner_options` is optional.
%
%See also
%profile_normcon

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

rng(1); % for reproducibility (so that every time this function is called,
% the same problems will be run).
records = []; info = []; data = []; K = []; pars = []; problem = [];

reps = 2;
span_m         = [500 1000];
span_n_factor  = [0.2 0.5];                 % n = n_factor * m
 span_ne        = [0 2];
 span_magE      = [1 20];
span_p         = [100 500];
span_rca       = [0.01];
span_bmag      = 10;
span_Gmag      = [0.1 2];
span_density   = [0.3 0.5];
span_density_c = 0.1;

if nargin >=3
    if isfield(runner_options, 'reps'), 
        reps = runner_options.reps; 
    end
    if isfield(runner_options, 'span_m'), 
        span_m = runner_options.span_m; 
    end
    if isfield(runner_options, 'span_n_factor'),
        span_n_factor = runner_options.span_n_factor;
    end
    if isfield(runner_options, 'span_p'),
        span_p = runner_options.span_p;
    end
    if isfield(runner_options, 'span_rca'),
        span_rca = runner_options.span_rca;
    end
    if isfield(runner_options, 'span_bmag'),
        span_bmag = runner_options.span_bmag;
    end
    if isfield(runner_options, 'span_Gmag'),
        span_Gmag = runner_options.span_Gmag;
    end
    if isfield(runner_options, 'span_density'),
        span_density = runner_options.span_density;
    end
    if isfield(runner_options, 'span_density_c'),
        span_density_c = runner_options.span_density_c;
    end
end

problem_data = cartesian(span_m, span_n_factor, span_p, span_rca, ...
    span_bmag, span_Gmag, span_density, span_density_c, span_ne, span_magE, 1:reps);
n_problems = size(problem_data, 1);

for i=1:n_problems,
    problem.m         = problem_data(i,1);
    problem.n         = round(problem_data(i,2) * problem.m);
    problem.p         = problem_data(i,3);
    problem.rca       = problem_data(i,4);
    problem.bmag      = problem_data(i,5);
    problem.Gmag      = problem_data(i,6);
    problem.density   = problem_data(i,7);
    problem.density_c = problem_data(i,8);
    problem.ne        = problem_data(i,9);
    problem.magE      = problem_data(i,10);
    r                 = problem_data(i,11);
    
    fprintf(['NORMCON %3d/%3d ', ...
        '[m=%4d, n=%4d, p=%3d, rca=%1.5f, bm=%1.2f, Gm=%2.1f, ', ...
        'A-den=%1.2f, G-den=%1.2f, ne=%2d, magE=%4.1f, r=%1d] '], ...
        i, n_problems, problem.m, problem.n, problem.p,...
        problem.rca, problem.bmag, problem.Gmag, problem.density, ...
        problem.density_c, problem.ne, problem.magE, r);
    profile_normcon(problem, solver_options);
    
    % log results
    load(solver_options.dumpfile);
    data = rmfield(data,'A');
    out = struct('info', info, 'data', data, 'K', K, 'pars', pars, ...
        'problem', problem);
    out.cost = info.solveTime/isempty(strfind(info.status, 'Inaccurate'));
    records = [records, out];
    fprintf('%s in %.1fs\n', info.status, info.solveTime/1e3);
end


delete(solver_options.dumpfile);
fname = [get_scs_rootdir() 'tests/profiling_matlab/profile_results/' ...
    num2str(id) '.mat'];
save(fname, 'records') % save `records` to file {id}.mat
register_profile_data(solver_options, 'NORMCON', id, records);

