figure;
plot(Data_perfect.Ly_stToe/(32*0.8));
hold on;
plot(Data_perfect.vx_com);
legend('Ly stT/(m*H)', 'vx com');
hold off


dx0_next = reshape(Data_perfect.dx0_next.Data,1,[]);
rp_stT = reshape(Data_perfect.rp_stT.Data,3,[]); 
figure;
plot(Data_perfect.Ly_stToe);
hold on;
plot(Data_perfect.rp_stT.Time,32*dx0_next.*rp_stT(3,:));
plot(30*Data.stanceLeg,'g-.')
legend('Ly stT', 'Prediction of Ly stT');
hold off

figure;
plot(Data.hr); 
hold on; plot(Data.h0); hold off