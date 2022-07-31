%% Benchmark parameters

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

clc;
clear;
cg_rate      = 1.2;                     % CG tolerance rate
aa_memories  = [3, 5, 10];              % AA memories to be tested
bro_memories = [50, 100];               % Broyden memories to be tested
tol          = 1e-4;                    % tolerance
max_iters    = 5e4;                     % maximum number of iterations
max_time_milliseconds = 90*60*1e3;      % maximum allowed runtime (90 minutes)
verbosity_solver = 1;                   % verbosity level

%% Execute the benchmarks

mm_runner = MarosMeszarosRunner();
mm_runner.set_max_filesize_MB(1.5);
mm_runner.set_verbose(true);

% Run original SCS
mm_runner.add_config(SuperSCSConfig.scsConfig(...
    'cg_rate',cg_rate, ...
    'tolerance', tol, ...
    'max_time_milliseconds', max_time_milliseconds, ...
    'max_iters', max_iters, 'verbose', verbosity_solver));

% Run DR
% mm_runner.add_config(SuperSCSConfig.douglasRachfordConfig(...
%     'cg_rate', cg_rate, ...
%     'tolerance', tol, ...
%     'max_time_milliseconds', max_time_milliseconds, ...
%     'max_iters', max_iters, 'verbose', verbosity_solver));

% Run SuperSCS with Anderson's acceleration and various different memory
% values
for aa_mem = aa_memories
    mm_runner.add_config(SuperSCSConfig.andersonConfig(...
        'memory', aa_mem, ...
        'cg_rate',cg_rate, ...
        'tolerance', tol, ...
        'max_time_milliseconds', max_time_milliseconds, ...
        'max_iters', max_iters, 'verbose', verbosity_solver));
end

% Run SuperSCS with restarted limited-memory Broyden directions and
% different memory lengths
for bro_mem = bro_memories
    mm_runner.add_config(SuperSCSConfig.broydenConfig(...
        'memory', bro_mem,...
        'cg_rate', cg_rate, ...
        'tolerance', tol,...
        'max_time_milliseconds', max_time_milliseconds, ...
        'max_iters', max_iters, 'verbose', verbosity_solver));
end

% Execute benchmarks
mm_runner.run();

% Save the results
save MM_RUNNER_COMPLETE.mat mm_runner
%% Results in text format
clc
mm_runner.stream_fid = 1;
mm_runner.print_txt();

%% Results in annotated HTML format

mm_runner.stream_fid = fopen('a.html', 'w');
mm_runner.print_html(' * ');
fclose(mm_runner.stream_fid);

%% PLOT performance plot
c = [];
for i=1:size(mm_runner.info_cache, 2)
    s = (cellfun(@(s)~contains(s,'Inaccurate'), {mm_runner.info_cache(:,i).status})');
    dc = [mm_runner.info_cache(:,i).iter]'./s;
    c = [c dc];
end

[t, p] = perf_profile(c);

figure(1);
p = 100*p;
set(0,'DefaultAxesFontSize',12)
%t = t(1:4:end);
%p = p(1:4:end, :);
idx_not_nan = ~isnan(t);
semilogx(t(idx_not_nan), p(idx_not_nan,1), 'linewidth', 3); hold on; % 1. SCS 
semilogx(t(idx_not_nan), p(idx_not_nan,4), 'linewidth', 2);          % 4. AA mem = 5
semilogx(t(idx_not_nan), p(idx_not_nan,5), 'linewidth', 2);          % 5. AA mem = 10
semilogx(t(idx_not_nan), p(idx_not_nan,6), 'linewidth', 2);          % 6. RB mem = 50
semilogx(t(idx_not_nan), p(idx_not_nan,7), 'linewidth', 2);          % 7. RB mem = 100

legend('SCS', 'AA 5', 'AA 10', 'RB 50', 'RB 100', 'Location', 'SouthEast');
xlabel('Performance ratio'); 
ylabel('Problems solved'); 
grid on;
axis tight;
ylim([0,100]);


%% Compute shifted geometric mean
[np, ns] = size(c);
cost_no_inf = c/1e3;   % convert from ms to s
for i=1:ns
    cost_no_inf(cost_no_inf(:,i)==Inf,i) = 100*max(cost_no_inf(cost_no_inf(:,i)<inf,i));
end
sgm_cost = sgm(cost_no_inf, 10);

fprintf('SGM SCS           : %2.2f\n', sgm_cost(1));
fprintf('SGM AA mem = 5    : %2.2f\n', sgm_cost(4));
fprintf('SGM AA mem = 10   : %2.2f\n', sgm_cost(5));
fprintf('SGM AA mem = 50   : %2.2f\n', sgm_cost(6));
fprintf('SGM AA mem = 100  : %2.2f\n', sgm_cost(7));

