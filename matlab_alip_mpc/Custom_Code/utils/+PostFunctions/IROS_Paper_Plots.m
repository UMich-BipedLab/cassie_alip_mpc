%% 1step vs mpc lateral walk-in-place comparison
clear; close all;
log_lat_1step = load('SimLog/2022-2-25/lat_5deg_0mps_1step/Data.mat');
log_lat_mpc = load('SimLog/2022-2-25/lat_5deg_0mps_mpc_N4/Data.mat');
m_zH = 31.8852 * 0.8;
wd = 2;
fntx = 15;
fnty = 20;
fnt_leg = 12;
tbegin = 7.5;
tend = 10;

figure;
hold on; grid on;
plot(log_lat_1step.Data.Lx_stToe_stTD0_kf./m_zH,'LineWidth',wd);
plot(log_lat_mpc.Data.Lx_stToe_stTD0_kf./m_zH,'LineWidth',wd);
plot(log_lat_mpc.Data.Lx_tgd_des./m_zH,'LineWidth',wd,'color','k','LineStyle','--');
% xlabel('Time ($t$) [sec]','interpreter','latex','FontSize',fntx);
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$L^x/(m z_H)$ [m/s]','interpreter','latex','FontSize',fnty);
% ylabel('$\frac{L^x}{m z_H}$ [m/s]','interpreter','latex','FontSize',fnty);
% ylabel('Lateral Psuedo-velocity ($\frac{L^x}{m z_H}$) [m/s]','interpreter','latex','FontSize',fnty);
legend({'ALIP-1step','ALIP-MPC','$L^{x, \rm des}/(m z_H)$'},'interpreter','latex','FontSize',fnt_leg);
% legend({'ALIP-1step','ALIP-MPC','${L^x}{m z_H}^{\rm des}$'},'interpreter','latex','FontSize',fnt_leg);
xlim([tbegin tend])
set(gcf,'color','w');

figure;
hold on; grid on;
plot(log_lat_1step.Data.vz_com_tgd,'LineWidth',wd);
plot(log_lat_mpc.Data.vz_com_tgd,'LineWidth',wd);
% title('1step vs MPC Comparison: CoM z velocity');
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
% xlabel('Time ($t$) [sec]','interpreter','latex','FontSize',fntx);
ylabel('$\dot p^z_{COM}$ [m/s]','interpreter','latex','FontSize',fnty);
% ylabel('CoM z velocity ($\dot p^z_{COM}$) [m/s]','interpreter','latex','FontSize',fnty);
legend({'ALIP-1step','ALIP-MPC'},'interpreter','latex','FontSize',fnt_leg);
xlim([tbegin tend])
set(gcf,'color','w');

%% 1step vs mpc: lateral walk down slope
clear; close all
% log_1step_lat = load('SimLog/2022-2-23/lat_11deg_1step_fail/Data.mat');
% log_mpc_lat = load('SimLog/2022-2-23/lat_11deg_mpc_N4/Data.mat');
log_1step_lat = load('SimLog/2022-2-22/lat_11deg_1step/Data.mat');
log_mpc_lat = load('SimLog/2022-2-22/lat_11deg_mpc/Data.mat');
time_1step = squeeze(log_1step_lat.Data.t_total.Data).';
Lx_1step = squeeze(log_1step_lat.Data.Lx_stToe_stTD0_kf.Data);
pct = round(0.86*6540);
m_zH = 31.8852 * 0.8;
wd = 2;
fntx = 15;
fnty = 20;
fnt_leg = 12;
tbegin = 1.5;
tend = 7;
Rz = @(th) [cos(th), -sin(th), 0; sin(th), cos(th), 0; 0, 0, 1];

% Lx/(m*zH)
figure;
hold on; grid on;

% plot(log_1step_lat.Data.Lx_stToe_stTD0_kf./m_zH,'LineWidth',wd)
plot(time_1step(1:pct),Lx_1step(1:pct)./m_zH,'linewidth',wd);
plot(log_mpc_lat.Data.Lx_stToe_stTD0_kf./m_zH,'LineWidth',wd)
plot(log_mpc_lat.Data.Lx_tgd_des./m_zH,'LineWidth',wd,'color','k','LineStyle','--');
xlim([tbegin tend])
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
% xlabel('Time ($t$) [sec]','interpreter','latex','FontSize',fntx);
% ylabel('Lateral Psuedo-velocity ($\frac{L_x}{m z_H}$) [m/s]','interpreter','latex','FontSize',fnty);
ylabel('$L^x/(m z_H$) [m/s]','interpreter','latex','FontSize',fnty);
legend({'ALIP-1step','ALIP-MPC','$L^{x, \rm des}/(m z_H)$',},'interpreter','latex','FontSize',fnt_leg);
ylim([-inf 4])
set(gcf,'color','w');

% pdot_com^z
figure;
hold on; grid on;
time_1step = squeeze(log_1step_lat.Data.t_total.Data)';
time_mpc = squeeze(log_mpc_lat.Data.t_total.Data)';
stTD0_1step = squeeze(log_1step_lat.Data.stTD0.Data)';
stTD0_mpc = squeeze(log_mpc_lat.Data.stTD0.Data)';
v_com_1step = [
    squeeze(log_1step_lat.Data.vx_com_world.Data).';
    squeeze(log_1step_lat.Data.vy_com_world.Data).';
    squeeze(log_1step_lat.Data.vz_com_world.Data).'];
v_com_mpc = [
    squeeze(log_mpc_lat.Data.vx_com_world.Data).';
    squeeze(log_mpc_lat.Data.vy_com_world.Data).';
    squeeze(log_mpc_lat.Data.vz_com_world.Data).'];
for i = 1:length(stTD0_1step)
    Rz_1step_traj{i} = Rz(-stTD0_1step(i));
    v_com_1step_traj(:,i) = Rz_1step_traj{i}*v_com_1step(:,i);
end
for i = 1:length(stTD0_mpc)
    Rz_mpc_traj{i} = Rz(-stTD0_mpc(i));
    v_com_mpc_traj(:,i) = Rz_mpc_traj{i}*v_com_mpc(:,i);
end    

plot(time_1step(1:pct),v_com_1step_traj(3,1:pct),'LineWidth',wd);
plot(time_mpc,v_com_mpc_traj(3,:),'LineWidth',wd);
xlim([tbegin tend])
% title('Lx-aligned: 1step vs N4 mpc comparison (11 deg y slope)');
xlabel('Time ($t$) [sec]','interpreter','latex','FontSize',fntx);
% ylabel('CoM z velocity ($\dot p^z_{COM}$) [m/s]','interpreter','latex','FontSize',fntx);
ylabel('$\dot p^z_{COM}$ [m/s]','interpreter','latex','FontSize',fnty);
legend({'ALIP-1step','ALIP-MPC'},'interpreter','latex','FontSize',fnt_leg);
set(gcf,'color','w');


% p^z_com
% figure; hold on; grid on;
% plot(log_1step_lat.Data.rp_stToe_fil_stTD0)


%% Sag walk along lateral 11 deg slope
clear; close all;
log_mpc_sag = load('SimLog/2022-2-23/sag_ky11deg_mpc_N4/Data.mat');
m_zH = 31.8852 * 0.8;
wd = 2;
fntx = 15;
fnty = 20;
fnt_leg = 15;
tbegin = 7;
tend = 16;
Rz = @(th) [cos(th), -sin(th), 0; sin(th), cos(th), 0; 0, 0, 1];
time_mpc = squeeze(log_mpc_sag.Data.t_total.Data)';
stTD0_mpc = squeeze(log_mpc_sag.Data.stTD0.Data)';
com_wrt_st_stTD0 = squeeze(log_mpc_sag.Data.rp_stToe_fil_stTD0.Data);
v_com_mpc = [
    squeeze(log_mpc_sag.Data.vx_com_world.Data).';
    squeeze(log_mpc_sag.Data.vy_com_world.Data).';
    squeeze(log_mpc_sag.Data.vz_com_world.Data).'];
for i = 1:length(stTD0_mpc)
    Rz_mpc_traj{i} = Rz(-stTD0_mpc(i));
    v_com_mpc_traj(:,i) = Rz_mpc_traj{i}*v_com_mpc(:,i);
end    

% Lx/(m*zH)
figure;
hold on; grid on;
plot(log_mpc_sag.Data.Lx_stToe_stTD0_kf./m_zH,'LineWidth',wd,'color',[0.8500 0.3250 0.0980])
plot(log_mpc_sag.Data.Lx_tgd_des./m_zH + .1748,'LineWidth',wd,'color','k','LineStyle','--');
xlim([tbegin tend]);
ylim([-0.35 inf]);
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
% ylabel('Lateral Psuedo-velocity ($\frac{L_x}{m z_H}$) [m/s]','interpreter','latex','FontSize',fntx);
ylabel('$L^x/(m z_H)$ [m/s]','interpreter','latex','FontSize',fnty);
legend({'ALIP-MPC','$L^{x,\rm des}/(m z_H)$'},'interpreter','latex','FontSize',fnt_leg);
set(gcf,'color','w');

% Ly/(m*zH)
figure;
hold on; grid on;
plot(log_mpc_sag.Data.Ly_stToe_stTD0_kf./m_zH,'LineWidth',wd,'color',[0.8500 0.3250 0.0980])
plot(log_mpc_sag.Data.Ly_tgd_des./m_zH - 0.07,'LineWidth',wd,'color','k','LineStyle','--');
xlim([tbegin tend]);
ylim([-0.05 inf])
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$L^y/(m z_H$) [m/s]','interpreter','latex','FontSize',fnty);
legend({'ALIP-MPC','$L^{y,\rm des}/(m z_H)$'},'interpreter','latex','FontSize',fnt_leg);
set(gcf,'color','w');

% p_COM,z
% figure
% plot(time_mpc,com_wrt_st_stTD0(3,:),'LineWidth',wd);
% xlim([tbegin tend])
% % title('Lx-aligned: 1step vs N4 mpc comparison (11 deg y slope)');
% xlabel('Time ($t$) [sec]','interpreter','latex','FontSize',fnt);
% ylabel('CoM z Position ($p_{COM,z}$) [m/s]','interpreter','latex','FontSize',fnt);
% legend({'ALIP-mpc'},'interpreter','latex');
% set(gcf,'color','w');

% pdot_COM,z
% figure
% plot(time_mpc,v_com_mpc_traj(3,:),'LineWidth',wd);
% xlim([tbegin tend])
% % title('Lx-aligned: 1step vs N4 mpc comparison (11 deg y slope)');
% xlabel('Time ($t$) [sec]','interpreter','latex','FontSize',fnt);
% ylabel('CoM z velocity ($\dot p_{COM,z}$) [m/s]','interpreter','latex','FontSize',fnt);
% legend({'ALIP-mpc'},'interpreter','latex');
% set(gcf,'color','w');


%% Prediction horizon comparison
clear; close all;
log_N2 = load('SimLog/2022-2-25/sag_1mps_muchange_mpc_N2/Data.mat');
log_N8 = load('SimLog/2022-2-25/sag_1mps_muchange_mpc_N8/Data.mat');
m_zH = 31.8852 * 0.8;
wd = 2;
fntx = 15;
fnty = 20;
fnt_leg = 15;
tbegin = 9.76;
tend = 13.5;
tslip_N2 = 10.7;
tslip_N8 = 12.6;
ufp_max = 0.7;

% Ly/(m*zH) N8
figure;
hold on; grid on;
plot(log_N2.Data.Ly_stToe_stTD0_kf./m_zH,'LineWidth',wd)
plot(log_N8.Data.Ly_tgd_des./m_zH - 0.07,'LineWidth',wd,'color','k','LineStyle','--');
xlim([tbegin tend]);
% xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$L^y/(m z_H)$) [m/s]','interpreter','latex','FontSize',fnty);
legend({'$N_s = 2$','$L^{y,\rm des}/(m z_H)$'},'interpreter','latex','FontSize',fnt_leg);
set(gcf,'color','w');

% Ly/(m*zH) N8
figure;
hold on; grid on;
plot(log_N8.Data.Ly_stToe_stTD0_kf./m_zH,'LineWidth',wd,'color',[0.8500 0.3250 0.0980])
plot(log_N8.Data.Ly_tgd_des./m_zH - 0.07,'LineWidth',wd,'color','k','LineStyle','--');
xlim([tbegin tend]);
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$L^y/(m z_H)$ [m/s]','interpreter','latex','FontSize',fnty);
legend({'$N_s = 8$','$L^{y,\rm des}/(m z_H)$'},'interpreter','latex','FontSize',fnt_leg);
set(gcf,'color','w');


%p_COM_x (N2)
time_N2 = squeeze(log_N2.Data.t_total.Data);
px_N2 = squeeze(log_N2.Data.rp_stToe_fil_stTD0.Data);
time_N8 = squeeze(log_N8.Data.t_total.Data);
px_N8 = squeeze(log_N8.Data.rp_stToe_fil_stTD0.Data);
xc_slip = 0.2*0.8;
xc_slip_og = 0.6*0.8;
mu_change = 10.07;

% (N2)
figure;
hold on; grid on;
scatter(time_N2, px_N2(1,:),4*wd,'filled');
line([tbegin tslip_N2],[xc_slip_og,xc_slip_og],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tbegin tslip_N2],[-xc_slip_og,-xc_slip_og],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([mu_change mu_change], [-0.5 0.5],'LineStyle',':','LineWidth',wd,'color','k');
line([tslip_N2 tend],[xc_slip,xc_slip],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tslip_N2 tend],[-xc_slip,-xc_slip],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
% xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$p^x_{st \to COM}$ [m]','interpreter','latex','FontSize',fnty);
legend({'$N_s = 2$','$x_c^{\rm slip}$'},'interpreter','latex','FontSize',fnt_leg)
xlim([tbegin tend]);
ylim([-0.5 0.5])
set(gcf,'color','w');

% (N8)
figure;
hold on; grid on;
scatter(time_N8, px_N8(1,:),4*wd,[0.8500 0.3250 0.0980],'filled');
line([tbegin tslip_N8],[xc_slip_og,xc_slip_og],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tbegin tslip_N8],[-xc_slip_og,-xc_slip_og],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([mu_change mu_change], [-0.5 0.5],'LineStyle',':','LineWidth',wd,'color','k');
line([tslip_N8 tend],[xc_slip,xc_slip],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tslip_N8 tend],[-xc_slip,-xc_slip],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$p^x_{st \to COM}$ [m]','interpreter','latex','FontSize',fnty);
legend({'$N_s = 8$','$x_c^{\rm slip}$'},'interpreter','latex','FontSize',fnt_leg)
xlim([tbegin tend]);
ylim([-0.5 0.5])
set(gcf,'color','w');

% ufp_sol
figure; 
hold on; grid on;
plot(log_N2.Data.ufp_sol_rel_st_x,'linewidth',wd);
plot(log_N8.Data.ufp_sol_rel_st_x,'linewidth',wd);
line([tbegin tend],[ufp_max,ufp_max],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([mu_change mu_change], [0 1],'LineStyle',':','LineWidth',wd,'color','k');
line([tbegin tend],[-ufp_max,-ufp_max],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$u_{fp}^x$ [m]','interpreter','latex','FontSize',fnty);
legend({'$N_s = 2$','$N_s = 8$','$u_{fp}^{x,\rm max}$'},'interpreter','latex','FontSize',fnt_leg)
xlim([tbegin tend]);
ylim([0 0.8])
set(gcf,'color','w');


%% ALIP Sagittal Slope Comparison
clear; close all
log_1step = load('SimLog/2022-2-27/sag_1-5mps_5deg_muchanges_1step/Data.mat');
log_mpc = load('SimLog/2022-2-27/sag_1-5mps_5deg_muchanges_N4mpc/Data.mat');
m_zH = 31.8852 * 0.8;
wd = 2;
fntx = 15;
fnty = 20;
fnt_leg = 12;
tbegin = 8;
tend = 18;

% Ly/(m*zH)
figure;
hold on; grid on;
plot(log_1step.Data.Ly_stToe_stTD0_kf./m_zH,'LineWidth',wd);
plot(log_mpc.Data.Ly_stToe_stTD0_kf./m_zH,'LineWidth',wd);
plot(log_mpc.Data.Ly_tgd_des./m_zH,'LineWidth',wd,'color','k','LineStyle','--');
xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$L^x/(m z_H)$ [m/s]','interpreter','latex','FontSize',fnty);
legend({'ALIP-1step','ALIP-MPC','$L^{x, \rm des}/(m z_H)$'},'interpreter','latex','FontSize',fnt_leg);
xlim([tbegin tend])
% ylim([-inf inf])
set(gcf,'color','w');

% p^x_com
time_1step = squeeze(log_1step.Data.t_total.Data);
p_1step = squeeze(log_1step.Data.rp_stToe_fil_stTD0.Data);
time_mpc = squeeze(log_mpc.Data.t_total.Data);
p_mpc = squeeze(log_mpc.Data.rp_stToe_fil_stTD0.Data);
kx = tan(deg2rad(5));
xc_slip1 = (0.4-kx)*0.8 / (1+kx^2);
xc_slip2 = (0.3-kx)*0.8 / (1+kx^2);
xc_slip3 = (0.2-kx)*0.8 / (1+kx^2);
tslip2 = 9.432;
tslip3 = 14.48;
mu_change = 10.07;

figure;
hold on; grid on;
scatter(time_1step,p_1step(1,:),4*wd,'filled');
scatter(time_mpc,p_mpc(1,:),4*wd,'filled');
line([tbegin tslip2],[xc_slip1,xc_slip1],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tbegin tslip2],[-xc_slip1,-xc_slip1],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tslip2 tslip3],[xc_slip2,xc_slip2],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tslip2 tslip3],[-xc_slip2,-xc_slip2],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tslip3 tend],[xc_slip3,xc_slip3],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);
line([tslip3 tend],[-xc_slip3,-xc_slip3],'LineWidth',wd,'LineStyle','--','color',[0.4660 0.6740 0.1880]);



xlabel('Time [sec]','interpreter','latex','FontSize',fntx);
ylabel('$p^x_{st \to COM}$ [m]','interpreter','latex','FontSize',fnty);
legend({'ALIP-1step','ALIP-MPC($N_s$ = 4)','$x_c^{\rm slip}$'},'interpreter','latex','FontSize',fnt_leg)% xlim([tbegin tend])
xlim([tbegin tend]);
% ylim([-inf inf])
set(gcf,'color','w');


% u^x_fp
figure;
hold on; grid on;
plot(log_1step.Data.ufp_sol_rel_st_x,'linewidth',wd);
plot(log_mpc.Data.ufp_sol_rel_st_x,'linewidth',wd);


% mu
figure
hold on; grid on;
plot(log_mpc.Data.mu,'linewidth',wd);

% stanceLeg
figure
hold on; grid on;
plot(log_mpc.Data.stanceLeg)
xlim([tbegin tend])





