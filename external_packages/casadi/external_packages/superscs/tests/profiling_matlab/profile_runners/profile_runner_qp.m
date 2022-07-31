% PCA PROBLEMS [PCA-1B]

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
records = [];
reps = 3;
k=0;
for n=[200 500],
    for rho = [1e-4 1e-3]
        for Q_log_eig_min = [-5 -2]
            for Q_log_eig_max = [1 2]
                for m=[floor(n/7) floor(n/5) floor(n/3)]
                    problem.n = n;
                    problem.m = m;
                    problem.rho = rho;
                    problem.Q_log_eig_min = Q_log_eig_min;
                    problem.Q_log_eig_max = Q_log_eig_max;
                    for r=1:reps,
                        k = k+1;
                        fprintf(...
                            ['QP PROBLEM #%d ', ...
                            '[n=%d, m=%d, log eigs Q=(%g, %g), rho=%g, rep=%d] (%s)\n'],...
                            k, n, m, Q_log_eig_min, Q_log_eig_max, rho, r, datetime);
                        start_time = tic;
                        profile_qp(problem, tol, o);
                        elapsed_time_qp = toc(start_time);
                        fprintf('Total elapsed time: %.2f min\n\n', elapsed_time_qp/60);
                        % log results
                        load(o.dumpfile);
                        data = rmfield(data,'A');
                        out = struct('info', info, 'data', data, 'K', K, 'pars', pars, 'problem', problem);
                        out.cost = info.solveTime/isempty(strfind(info.status, 'Inaccurate'));
                        records = [records, out];
                    end
                end
            end
        end
    end
end

delete(o.dumpfile);
fname = ['profile_results/' num2str(id) '.mat'];
save(fname, 'records') % save `records` to file {id}.mat
register_profile_data(o, tol, 'QP', id, records);
