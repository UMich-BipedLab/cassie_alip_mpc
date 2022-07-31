isSim = 0;
torso_estimation = 0;
% torso_estimation = ~isSim;
torque_fil = 0;
w2 = 50;
w1 = 2;

%% get data
if isSim
%     file = '\SimLog\2019-2-1\15-12\';
%     file = '\SimLog\2019-2-1\14-57\';
%     file = '\SimLog\2019-2-11\18-18\';
%     file = '\SimLog\2019-2-26\13-27\';
%     file = '\SimLog\2019-2-26\14-44\';
%     file = '\SimLog\2019-2-26\14-51\';
%     file = '\SimLog\2019-2-26\15-54\';
%     file = '\SimLog\2019-2-27\20-22\';
%     file = '\SimLog\2019-2-27\20-51\';
%     file = '\SimLog\2019-2-27\20-59\';
%     file = '\SimLog\2019-2-27\21-10\';
    file = '\SimLog\2019-2-28\8-32\';
    load([root_dir file 'Data.mat']);
    load([root_dir file 'torso_measurement.mat']);
    load([root_dir file 'real_knee_torque.mat']);
    start_time = 3;
    end_time = Data.t.Time(end);
    [~,t] = YToolkits.timeseries2vector(Data.qall);
    start_index = find(t == start_time);
    end_index = find(t == end_time);
    t = t(start_index:end_index);
    
    [Qall,~] = YToolkits.timeseries2vector(Data.qall);              Qall = Qall(:,start_index:end_index);
    [uc,~] = YToolkits.timeseries2vector(Data.u);                   uc = uc(:,start_index:end_index);
    [StanceLeg,~] = YToolkits.timeseries2vector(Data.stanceLeg);    StanceLeg = StanceLeg(:,start_index:end_index);
    [Torso_vx,~] = YToolkits.timeseries2vector(Data.torso_vx);      Torso_vx = Torso_vx(:,start_index:end_index);
    [Torso_vy,~] = YToolkits.timeseries2vector(Data.torso_vy);      Torso_vy = Torso_vy(:,start_index:end_index);
    [Torso_vz,~] = YToolkits.timeseries2vector(Data.torso_vz);      Torso_vz = Torso_vz(:,start_index:end_index);
    [Torso_p_SM,~] = YToolkits.timeseries2vector(torso_p_SM);       Torso_p_SM = Torso_p_SM(:,start_index:end_index);
    [Torso_v_SM,~] = YToolkits.timeseries2vector(torso_v_SM);       Torso_v_SM = Torso_v_SM(:,start_index:end_index);
    [Torso_a_SM,~] = YToolkits.timeseries2vector(torso_a_SM);      Torso_a_SM = Torso_a_SM(:,start_index:end_index);
    [GRF,~] = YToolkits.timeseries2vector(Data.GRF);                GRF = GRF(:,start_index:end_index);
    [linearAcceleration_b,~]=YToolkits.timeseries2vector(Data.linearAcceleration);   linearAcceleration_b = linearAcceleration_b(:,start_index:end_index);
    [torso_angle,~]=YToolkits.timeseries2vector(Data.torso_angle);  torso_angle = torso_angle(:,start_index:end_index);
    [orientation,~]=YToolkits.timeseries2vector(Data.orientation);  orientation = orientation(:,start_index:end_index);
    [angularVelocity,~]=YToolkits.timeseries2vector(Data.angularVelocity);  angularVelocity = angularVelocity(:,start_index:end_index);
end

if ~isSim
    file = '\ExpLog\2019-9-23\17-31\';
    start_time = 60;end_time = 70;


    load([root_dir file 'Log.mat']);

   
    t = log.Data.t;
    start_index = find(t == start_time);
    end_index = find(t == end_time);
    v_index = start_index:end_index;
    t = t(v_index);

    Qall = log.Data.qall(v_index,:)';
    
    StanceLeg = log.Data.stanceLeg(v_index);
    
    linearAcceleration_b = log.Data.linearAcceleration(v_index,:)';
    orientation = log.Data.orientation(v_index,:)';
    angularVelocity = log.Data.angularVelocity(v_index,:)';

end 


linearAcceleration = zeros(size(linearAcceleration_b));
linearAcceleration_torso = zeros(size(linearAcceleration_b));
angular_acc = zeros(size(angularVelocity));
for i = 1:3
    angular_acc(i,:)=YToolkits.derivative_cwt(angularVelocity(i,:),'gaus1',2,5e-4);
end
bPib = -0.01*[3.155;0;-7.996];
for i = 1:length(t)
    Q = Quaternion(orientation(:,i));
    %         linearAcceleration(:,i) =YToolkits.Angles.Rx(pi)* Q.getRotation.getValue * YToolkits.Angles.Rx(pi)*linearAcceleration_b(:,i) -[0;0;9.8];
    linearAcceleration(:,i) =Q.getRotation.getValue * linearAcceleration_b(:,i) -[0;0;9.8];
    linearAcceleration_torso(:,i) = linearAcceleration(:,i)...
        + Q.getRotation.getValue * YToolkits.Angles.skew(angular_acc(:,i)) * bPib...
        + Q.getRotation.getValue * YToolkits.Angles.skew(angularVelocity(:,i))^2 * bPib;
end
% [dQall,t] = YToolkits.timeseries2vector(Data.dqall);
torso_v_fake = cumsum(linearAcceleration_torso')'*0.0005;
torso_p_fake = cumsum(torso_v_fake')'*0.0005;
%     Qall(1:3,:) = Torso_p_SM;
Qall(1:3,:) = torso_p_fake;

%% begin estimation
double_derivative_with_cwt;
% JessyFilter;
% ddQall(1:3,:) =linearAcceleration_torso;
GRF_L = zeros(2,end_index-start_index+1);
GRF_R = zeros(2,end_index-start_index+1);
for i = 1:length(t)
    qall = Qall(:,i);
    qall(4) = 0;
    qsL = getSpringDeflectionAngle(qall(10),qall(11),qall(12));
    qsR = getSpringDeflectionAngle(qall(17),qall(18),qall(19));
    JR = J_RightToeJoint(qall);
    JL = J_LeftToeJoint(qall);
    Ks1 = 1800;
    Ks2 = 1600;
    Fs1R =- Ks1 * qsR(1);
    Fs2R =- Ks2 * qsR(2);
    Fs1L =- Ks1 * qsL(1);
    Fs2L =- Ks2 * qsL(2);
    JR_s = JR([1,3],[18,19]);
    JL_s = JL([1,3],[11,12]);
    GRF_R(:,i) = (-JR_s')^-1*[Fs1R+Fs2R; Fs2R];
    GRF_L(:,i) = (-JL_s')^-1*[Fs1L+Fs2L; Fs2L];
end


u_14=zeros(14,length(t));
F = zeros(5,length(t));
bodytwist = zeros(6,length(t));
sanity_check = zeros(1,length(t));
Seig = zeros(19,length(t));
ratio = zeros(19,length(t));
t0 = 0;
for i = 1:length(t)
    qall = Qall(:,i);
    dqall = dQall(:,i);
    ddqall = ddQall(:,i);
    stanceLeg = StanceLeg(i);
    grf_L = GRF_L(:,i);
    grf_R = GRF_R(:,i);
    if stanceLeg ~= StanceLeg(max(i-1,1))
        t0 = t(i);
    end
    if stanceLeg == -1
    qc_index = [5;6;8;10;14;15;16;17];
    motor_index = [3;1;2;4;6;7;8;9];
else
    qc_index = [5;6;7;8;9;10;15;17];
    motor_index = [8;6;1;2;3;4;7;9];
end
                        M = EnertiaMatrix(qall);
                        C = CoriolisTerm(qall,dqall);
                        G = GravityVector(qall);
                        B=zeros(20,10); B(7:10,1:4) = eye(4); B(13:17,5:9) = eye(5); B(20,10) = 1;
                        
                        joint_damping = [ zeros(6,1); 1; 1; 1; 1; 0.1; 0.1; 1.1;1; 1; 1; 1; 0.1; 0.1; 1.1];
                        JD = zeros(20,1); JD(13) = 5; JD(20) = 5;
                        % Jacobian for fixing torso
%                         fixed_joint = [1,2,4,5,6]; %cartesian position and Euler Angle
                        fixed_joint = [1,2]; %cartesian position x y
%                         fixed_joint = [2]; %cartesian position y

                        %                     fixed_joint = [];
                        fix_z = 0;
                        Jt = zeros(length(fixed_joint),20);% Torso constraint Jacobian
                        for i = 1: length(fixed_joint)
                            Jt(i,fixed_joint(i)) = 1;
                        end
                        [Jtd1,Jtd2] = size(Jt);
                        % body Jacobian on foot
                        Jb_L = Jb_LeftToeBottomBack(qall);
                        Jb_R = Jb_RightToeBottomBack(qall);
                        dJb_L = dJb_LeftToeBottomBack(qall,dqall);
                        dJb_R = dJb_RightToeBottomBack(qall,dqall);
                        % cartesian Jacobian on foot
                        Jc_L = J_LeftToeBottomBack(qall);
                        Jc_R = J_RightToeBottomBack(qall);
                        dJc_L = dJ_LeftToeBottomBack(qall,dqall);
                        dJc_R = dJ_RightToeBottomBack(qall,dqall);
                        % Homogeneous Transformation Matrix
                        T_L = T_LeftToeBottomBack(qall);
                        T_R = T_RightToeBottomBack(qall);
                        % Jacobian for ground constraint
                        Jg_L = zeros(5,20); Jg_L(1:3,:)= Jc_L; Jg_L([4,5],:)= Jb_L([5,6],:);
                        Jg_R = zeros(5,20); Jg_R(1:3,:)= Jc_R; Jg_R([4,5],:)= Jb_R([5,6],:);
                        dJg_L = zeros(5,20); dJg_L(1:3,:)= dJc_L; dJg_L([4,5],:)= dJb_L([5,6],:);
                        dJg_R = zeros(5,20); dJg_R(1:3,:)= dJc_R; dJg_R([4,5],:)= dJb_R([5,6],:);
                        if stanceLeg == -1
                            Jg = Jg_L;
                            dJg = dJg_L;
                        else
                            Jg = Jg_R;
                            dJg = dJg_R;
                        end
                        if fix_z == 1
                            Jg =[];
                            dJg = [];
                        end
                        [Jgd1,Jgd2] = size(Jg);

%                       % Jacobian for spring 
                        JsL = zeros(2,20); JsL(1,11) = 1; JsL(2,[10 11 12]) = J_HeelSpringDeflectionEst(qall(10),qall(11),qall(12));
                        JsR = zeros(2,20); JsR(1,18) = 1; JsR(2,[17 18 19]) = J_HeelSpringDeflectionEst(qall(17),qall(18),qall(19));
                        Js = [JsL; JsR];

                        [Jsd1,Jsd2] = size(Js);
                        [JsLd1,JsLd2] = size(JsL);
                        [JsRd1,JsRd2] = size(JsR);

                        % Extended Matrix ( walking with no torso constraint)
                        Me = [M, -Js', -Jg';
                            Js, zeros(Jsd1,Jsd1), zeros(Jsd1,Jgd1);
                            Jg, zeros(Jgd1,Jsd1), zeros(Jgd1,Jgd1)];
                        He = [-G;zeros(Jsd1+Jgd1,1)];
                        B_cut = B(:,motor_index); % remove toe for now.
                        Be = [B_cut;zeros(Jsd1+Jgd1,length(motor_index))];
                        
end
u = u_14([1,2,3,4,7,8,9,10,11,14],:);
ue = u;
u_s = u_14([5,6,12,13],:);
if torque_fil
    u_fil = zeros(size(u));
    for i = 1:10
%         u_fil(i,:)=YToolkits.derivative_cwt(u(i,:),'gaus1',10,5e-4);
        u_fil(i,:) = smooth(u(i,:),200,'sgolay',6);
    end
    ue = u_fil;
end

figure;
plot(t,ue);
children = get(gca, 'children');
% delete(children(1:9));
hold on
plot(t,uc)
hold off
children = get(gca, 'children');
% delete(children(1:9));
lg = legend('ue_1','ue_2','ue_3','ue_4','ue_5','ue_6','ue_7','ue_8','ue_9','ue_10','uc_1','uc_2','uc_3','uc_4','uc_5','uc_6','uc_7','uc_8','uc_9','uc_10');
set(lg,'visible','off');
plotbrowser('on')
ax1 = gca;

if isSim == 100
figure;
plot(t,dQall(1:3,:));
hold on
plot(torso_v_SM)
hold off
lg = legend('vx_f','vy_f','vz_f','vx','vy','vz');
set(lg,'visible','off');
plotbrowser('on')
ax2 = gca;

figure;
plot(t,ddQall(1:3,:));
hold on
plot(torso_a_SM)
hold off
lg = legend('ax_f','ay_f','az_f','ax','ay','az');
set(lg,'visible','off');
plotbrowser('on')
ax3 = gca;

linkaxes([ax1,ax2,ax3],'x')

set(gcf,'toolbar','figure')
end