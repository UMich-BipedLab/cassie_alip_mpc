%PERF_PROFILE_PLOT 

% problem_group,
%
% 1. id               10. direction         19. scale
% 2. nrecords         11. do_super_scs      20. sigma
% 3. total_time       12. k0                21. sse
% 4. tol              13. k1                22. thetabar
% 5. alpha            14. k2                23. verbose
% 6. beta             15. ls                24. record_progress
% 7. c1               16. memory            25. use_indirect
% 8. c_bl             17. normalize         26. max_iters
% 9. cg_rate,         18. rho_x             27. warm_start

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

close;
costdata = importdata(fullfile(get_scs_rootdir(), 'tests', 'profiling_matlab', ...
    'profile_results', 'register.csv'));

% problem_group = 'LASSO';
% idx_scs      = costdata.data(strcmp(costdata.textdata(2:end,1),problem_group) ...
%     & costdata.data(:,11)==0);
% idx_superscs = costdata.data(strcmp(costdata.textdata(2:end,1),problem_group) ...
%     & costdata.data(:,11)==1 ...
%     & costdata.data(:,21)==0.999 ...
%     & costdata.data(:,22)==0.1 ...
%     & costdata.data(:,15)==10 ...
%     & costdata.data(:,16)==50);

idx_scs = 87211960;
idx_superscs = [87211961,87211962,87211964,87211965];

load(['profile_results/' num2str(idx_scs) '.mat'])
c = [records.cost]';
for i=1:length(idx_superscs),   
    load(['profile_results/' num2str(idx_superscs(i)) '.mat'])
    c = [c [records.cost]'];
end

[t, p] = perf_profile(c);
set(0,'DefaultAxesFontSize',12)
semilogx(t, 100*p(:,1), 'linewidth', 3); hold on;
semilogx(t, 100*p(:,2:end), 'linewidth', 2);
xlabel('performance ratio'); ylabel('Problems solved'); grid on
axis tight
ylim([0,100])
ax = gca;
ax.YTick = 0:10:100;
lgnd=cell(1+length(idx_superscs),1);
lgnd{1} = 'SCS';
for i=1:length(idx_superscs),
    lgnd{i+1,1} = ['SuperSCS, mem = ' num2str(costdata.data(costdata.data(:,1)==idx_superscs(i), 16))];
end
legend(lgnd,'Location','SouthEast');

%%
% Do the following trick to avoid having any inf's in p...
[np, ns] = size(c);
cost_no_inf = c/1e3;   % convert from ms to s
for i=1:ns
    cost_no_inf(cost_no_inf(:,i)==Inf,i) = 100*max(cost_no_inf(cost_no_inf(:,i)<inf,i));
end
sgm(cost_no_inf,10)
%%
idx = ~isinf(c(:,1))
h=boxplot(c(idx,:)/1e3,'whisker',1,'Notch','on', ...
    'labels', lgnd);
set(h,{'linew'}, {2});
set(gca,'yscale','log');
grid;
ylabel('Solve time (s)')
%%
datas = [records.data];
lens = [];
for i=1:length(datas),
    lens = [lens; length(datas(i).b)];
end
plot(lens, c(:,1)./c(:,2),'o')
xlabel('Problem size');
%%
probs = [records.problem];
mus = [];
for i=1:length(datas),
    mus = [mus; probs(i).mu];
end
semilogx(mus, c(:,1)./c(:,2),'o')
xlabel('LASSO parameter \mu')

%%
rcas = [];
for i=1:length(datas),
    rcas = [rcas; probs(i).rcA];
end
semilogx(rcas, c(:,1)./c(:,2),'o')
xlabel('Rec. Cond. Number');
