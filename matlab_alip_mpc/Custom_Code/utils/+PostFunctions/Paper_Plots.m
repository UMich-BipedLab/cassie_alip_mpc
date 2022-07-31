%% Inclined Ramp
% close all;
% % Walking onto inclined ramp
% log_forward_incline = load('ExpLog/2021-9-14/14-49-Forward13degIncline_Vxtgd1mps/Log.mat');
% Data_forward_incline = log_forward_incline.log.Data;
% figure
% hold on;
% plot(Data_forward_incline.t,Data_forward_incline.vx_com);
% plot(Data_forward_incline.t,Data_forward_incline.Vx_tgd_des,'LineWidth',3,'Linestyle',':');
% legend('Estimated center of mass velocity','Commanded Targe Velocity','interpreter','latex')

%% Lat fall down hill
% close all;
% log_lat_hill = load('C:\Users\gibso\workspace\research\cassie_mpc_lip\matlab\ExpLog\18-6-Lat_1ps_22deg_DownFail\Log.mat');
% Data_lat_hill = log_lat_hill.log.Data;
% 
% st = 200000;
% cutoff = 370000;
% 
% % com vel y
% figure; 
% plot(Data_lat_hill.t(st:cutoff)-Data_lat_hill.t(st),sqrt(Data_lat_hill.pz_com(st:cutoff).^2 + Data_lat_hill.py_com(st:cutoff).^2));
% grid on;
% 
% figure; hold on;
% ky = tan(deg2rad(22));
% plot(Data_lat_hill.py_com(st:cutoff), Data_lat_hill.pz_com(st:cutoff),...
%     'LineWidth',2);
% plot(Data_lat_hill.py_com(st:cutoff), ky.*Data_lat_hill.py_com(st:cutoff) + (Data_lat_hill.pz_com(st) - ky.*Data_lat_hill.py_com(st)),...
%     'LineWidth',2,'LineStyle',':');
% legend('Estimated COM position', 'Estimated maximum slope of hill')
% grid on;
% xlabel('World $y_{COM}$ Position [m]','interpreter','latex','FontSize',11);
% ylabel('World $z_{COM}$ Position [m]','interpreter','latex','FontSize',11);
% set(gcf,'color','w');
% % plot(Data_lat_hill.t,Data_lat_hill.Vy_tgd_des,'LineWidth',3,'Linestyle',':');


%% Lateral Indoor Treadmill
clc; close all;
log_lat = load('C:\Users\gibso\workspace\Cassie_Experiments\2021-9-14\Indoor_Treadmill\Log\14-57-Lateral13degIncline_Vytgd05mps\Log.mat');
Data_lat = log_lat.log.Data;
Data_ufpy = Data_lat.ufp_sol_rel_st_y;
Data_t = Data_lat.t - Data_lat.t(1);
Data_stanceLeg = Data_lat.stanceLeg;
idx_left = [];
idx_right = [];
t_start = 70;
t_end = 140;
for i = 1:length(Data_stanceLeg)-2
    if Data_t(i) >= t_start && Data_stanceLeg(i) == -1
        idx_left = [idx_left i];
    end
    
    if Data_t(i) >= t_start && Data_stanceLeg(i) == 1
        idx_right = [idx_right, i];
    end
end

t_left = Data_t(idx_left);
ufpy_left = Data_ufpy(idx_left);
t_right = Data_t(idx_right);
ufpy_right = Data_ufpy(idx_right); 


figure; hold on;
org = [0.8500 0.3250 0.0980];
gre = [0.4660 0.6740 0.1880];
alph = 0.5;
sz = 20;
line([t_start t_end],[-0.6,-0.6],'LineStyle','--','color',[gre,alph],'LineWidth',2) % left stance bound
line([t_start t_end],[0.6,0.6],'LineStyle','--','color',[org,alph],'LineWidth',2) % righ stance bound
plt_ufpy_left = plot(t_left,ufpy_left,'LineWidth',2,'color',gre);
plt_ufpy_right = plot(t_right,ufpy_right,'LineWidth',2,'color',org);

line([t_start t_end],[-0.1,-0.1],'LineStyle','--','color',[gre,alph],'LineWidth',2)
line([t_start t_end],[0.1,0.1],'LineStyle','--','color',[org,alph],'LineWidth',2)

legend({'Left Stance bound','Right Stance bound','$u^{y,LS}_{fp}$','$u^{y,RS}_{fp}$'},'interpreter','latex')
grid on;
ylim([-0.8 0.8])
xlim([t_start t_end])
% set(gcf,'color','w');
xlabel('time [sec]','interpreter','latex','FontSize',20);
ylabel('$u^y_{fp}$','interpreter','latex','FontSize',20)
set(gca,'FontSize',20)
%%

figure 
    x = [1;2;3;4;5;6;7;8;9];
    y = [10;20;30;40;50;60;70;80;90];
    plot(x(1:end - 1),y(1:end - 1),'-o'); hold on
    plot(x(end), y(end), 'o')
    xlim([x(1) x(end)+x(1)]), ylim([y(1) y(end)+y(1)])

