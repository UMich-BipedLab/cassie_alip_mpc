rng('default');
rng(1);

dump_temp_dir = fullfile(get_scs_rootdir(), 'temp/');
eps_solver = 1e-4;
n_dim = 1000; 
m_dim = ceil(n_dim/5);
density_A = 0.5;
sigma_var = 0.05;
rcA = 1e-5;
s_dim = ceil(n_dim/20);
mu_lasso = 0.1;

x_true = [randn(s_dim,1); zeros(n_dim-s_dim,1)]; % true sparse signal
x_true = x_true(randperm(n_dim));
A_lasso = sprandn(m_dim,n_dim,density_A,rcA);
b_lasso = A_lasso * x_true + sigma_var*randn(m_dim,1);

superscs_dir = 100;
direction_memory = 100;
do_super_scs = 0;

dump_filename = 'progress_';
if do_super_scs
     dump_filename = strcat(dump_filename, 'superscs_');
     if superscs_dir == 100
         dump_filename = strcat(dump_filename, 'rb_mem_');
     elseif superscs_dir == 150
         dump_filename = strcat(dump_filename, 'aa_mem_');
     else
         error('what sort of direction is that?');
     end
     dump_filename = strcat(dump_filename, num2str(direction_memory));
else
    dump_filename = strcat(dump_filename, 'scs');
end
dump_filename = strcat(dump_filename, '.mat');

dump_filename_path = fullfile(dump_temp_dir, dump_filename);

cvx_begin
    cvx_solver scs
    cvx_solver_settings('eps', eps_solver,...
        'verbose', 1,...
        'do_super_scs', do_super_scs, ...
        'direction', superscs_dir, ...
        'memory', direction_memory,...
        'do_record_progress', do_super_scs,...
        'dumpfile', dump_filename_path);
    
     variable X(n_dim)
     minimize(0.5*sum_square(A_lasso*X-b_lasso) + mu_lasso*norm(X,1))
     
cvx_end 


%%
load(dump_filename_path)
semilogy(info.progress_time/1e3, info.progress_respri,'linewidth',2); hold on
semilogy(info.progress_time/1e3, info.progress_resdual,'linewidth',2);
semilogy(info.progress_time/1e3, info.progress_relgap,'linewidth',2);
legend('Primal Residual', 'Dual Residual', 'Rel. Duality Gap');
xlabel('time [s]'); ylabel('residual');
grid on




%% %%%% ------------------------------------------
rng('default');
rng(1);

dump_temp_dir = fullfile(get_scs_rootdir(), 'temp/');


superscs_dir = 150;
direction_memory = 10;
do_super_scs = 1;


rcA = 1e-5;
d_dim =  200;
p_dim = 5;
A_mat = sprandn(p_dim, d_dim, 0.5, rcA);
S_mat = full(A_mat'*A_mat);

lam = problem.lam;

cvx_begin sdp
    
        cvx_solver scs
        % set options
        cvx_solver_settings('eps', eps_solver,...
        'verbose', 1,...
        'do_super_scs', do_super_scs, ...
        'direction', superscs_dir, ...
        'memory', direction_memory,...
        'do_record_progress', 1,...
        'dumpfile', dump_filename_path);
    
    variable X(d_dim,d_dim) symmetric
    minimize(-trace(S_mat*X) + lam*norm(X,1))
    trace(X)==1
    X>=0
cvx_end  



semilogy(info.progress_time/1e3, info.progress_respri,'linewidth',2); hold on
% semilogy(info.progress_time/1e3, info.progress_resdual,'linewidth',2);
% semilogy(info.progress_time/1e3, info.progress_relgap,'linewidth',2);
legend('Primal Residual', 'Dual Residual', 'Rel. Duality Gap');
xlabel('time [s]'); ylabel('residual');
grid on

