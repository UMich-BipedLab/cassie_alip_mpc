% file = '\SimLog\2019-2-11\15-28\';
% load([root_dir file 'Data.mat']);

% [Qall,t] = YToolkits.timeseries2vector(Data.qall);
figure(1)
plot(Data.hd)
hold on
plot(Data.h0)
hold off
lg = legend('hd_1','hd_2','hd_3','hd_4','hd_5','hd_6','hd_7','hd_8','hd_9','hd_10','h0_1','h0_2','h0_3','h0_4','h0_5','h0_6','h0_7','h0_8','h0_9','h0_10')
set(lg,'visible','off');
plotbrowser('on')

max_amp = max([abs(max(Data.h0));abs(min(Data.h0))]);
hold on
hs = plot(max_amp*Data.stanceLeg,'--')
hold off
set(hs,'Visible','off')

figure(2)
plot(Data.dhd)
hold on
plot(Data.dh0)
hold off
lg = legend('dhd_1','dhd_2','dhd_3','dhd_4','dhd_5','dhd_6','dhd_7','dhd_8','dhd_9','dhd_10','dh0_1','dh0_2','dh0_3','dh0_4','dh0_5','dh0_6','dh0_7','dh0_8','dh0_9','dh0_10')
set(lg,'visible','off');
plotbrowser('on')

figure(3)
plot(Data.hd_joint)
hold on
plot(Data.h0_joint)
hold off
lg = legend('hd_joint_1','hd_joint_2','hd_joint_3','hd_joint_4','hd_joint_5','hd_joint_6','hd_joint_7','hd_joint_8','hd_joint_9','hd_joint_10','h0_joint_1','h0_joint_2','h0_joint_3','h0_joint_4','h0_joint_5','h0_joint_6','h0_joint_7','h0_joint_8','h0_joint_9','h0_joint_10')
set(lg,'visible','off');
plotbrowser('on')

figure(4)
plot(Data.dhd_joint)
hold on
plot(Data.dh0_joint)
hold off
lg = legend('dhd_joint_1','dhd_joint_2','dhd_joint_3','dhd_joint_4','dhd_joint_5','dhd_joint_6','dhd_joint_7','dhd_joint_8','dhd_joint_9','dhd_joint_10','dh0_joint_1','dh0_joint_2','dh0_joint_3','dh0_joint_4','dh0_joint_5','dh0_joint_6','dh0_joint_7','dh0_joint_8','dh0_joint_9','dh0_joint_10')
set(lg,'visible','off');
plotbrowser('on')

figure(5)
plot(Data.h0_joint-Data.hd_joint)
hold on;
ps = plot(0.5*Data.stanceLeg,'--')
set(ps,'visible','off');
hold off;
lg = legend('y_joint_1','y_joint_2','y_joint_3','y_joint_4','y_joint_5','y_joint_6','y_joint_7','y_joint_8','y_joint_9','y_joint_10','s');
set(lg,'visible','off');
plotbrowser('on')

figure(6)
plot(Data.dh0_joint-Data.dhd_joint)
hold on
ps = plot(0.5*Data.stanceLeg,'--')
set(ps,'visible','off');
hold off;
lg = legend('dy_joint_1','dy_joint_2','dy_joint_3','dy_joint_4','dy_joint_5','dy_joint_6','dy_joint_7','dy_joint_8','dy_joint_9','dy_joint_10');
set(lg,'visible','off');
plotbrowser('on')

figure(7)
plot(Data.u)
lg = legend('u_1','u_2','u_3','u_4','u_5','u_6','u_7','u_8','u_9','u_10')
set(lg,'visible','off');
plotbrowser('on')