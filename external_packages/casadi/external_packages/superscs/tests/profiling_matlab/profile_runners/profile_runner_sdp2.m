function profile_runner_sdp2(solver_options, id, runner_options)
%PROFILE_RUNNER_SDP2 runs a collection of SDP problems by invoking the
%helper function profile_sdp2
%
%Syntax:
%profile_runner_sdp2(solver_options, id)
%profile_runner_sdp2(solver_options, id, runner_options)
%
%


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

reps = 1;
span_n = [50 80 100 120];
span_log_eig_min = [-1.5 -0.5];
span_log_eig_max = [0 0.75];
name = 'SDP2';

if nargin >=3
    if isfield(runner_options, 'reps'), reps = runner_options.reps; end
    if isfield(runner_options, 'span_n'), span_n = runner_options.span_n; end
    if isfield(runner_options, 'span_log_eig_min'),
        span_log_eig_min = runner_options.span_log_eig_min;
    end
    if isfield(runner_options, 'span_log_eig_max'),
        span_log_eig_max = runner_options.span_log_eig_max;
    end
    if isfield(runner_options, 'name'), name = runner_options.name; end
end


problem_data = cartesian(span_n, span_log_eig_min, span_log_eig_max, 1:reps);
n_problems = size(problem_data, 1);

for i = 1:n_problems,
    problem.n = problem_data(i,1);
    problem.log_eig_min = problem_data(i,2);
    problem.log_eig_max = problem_data(i,3);
    fprintf(...
        ['SDP-2 PROBLEM %3d/%3d ', ...
        '[n=%3d, log_eig = (%1.1f, %1.1f), rep=%1d] '],...
        i, n_problems, problem.n, problem.log_eig_min, problem.log_eig_max, ...
        problem_data(i,4));
    profile_sdp2_results = profile_sdp2(problem, solver_options);
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
        out.cost = 1e3*out.info.cpusec/(info.r0<solver_options.tolerance);
    end
    
    records = [records, out];
    out
    
end

delete(solver_options.dumpfile);
fname = [get_scs_rootdir() 'tests/profiling_matlab/profile_results/' ...
    num2str(id) '.mat'];
save(fname, 'records') % save `records` to file {id}.mat
register_profile_data(solver_options, name, id, records);
