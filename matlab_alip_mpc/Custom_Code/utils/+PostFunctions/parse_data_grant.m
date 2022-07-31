%% Parse Data01
% data_file = 'DATA01.dat';
% DataMatrix = SimulinkRealTime.utils.getFileScopeData(data_file);
% DataBusSelectorName = 'Data Bus Selector';
% 
% % mdl = char(tg.Application);
% open('Mpc_RealTime_with_standing.slx')
% mdl = 'Mpc_RealTime_with_standing';
% % sys = get_param('Mpc_RealTime_with_standing/Controller/Data_Filescope', 'PortHandles');
% % sys = get_param(mdl, 'ObjectParameters');
% sys = get_param(mdl, 'Handle');
% 
% % BusSelectors = find_system(sys,'FollowLinks','on','SearchDepth',10,'BlockType','BusSelector');
% BusSelectors = find_system(sys,'SearchDepth',10,'BlockType','BusSelector');
% 
% % Find the bus selector
% index = 1;
% signal_names = cell(1,1);
% DataBusSelectorIndex =[];
% 
% for i = 1:length(BusSelectors)
%     if strcmp(DataBusSelectorName, char(get_param(BusSelectors(i), 'Name')))
%         DataBusSelectorIndex = [DataBusSelectorIndex i];
%     end
% end
% if length(DataBusSelectorIndex) > 1
%     error('There are more than one Bus Selector named ''Data Bus Selector''')
% elseif length(DataBusSelectorIndex) < 1
%     error('There is no Bus Selector named ''Data Bus Selector''')
% end
% 
% % Find the name of signals in the data bus selector
% ph = get_param(BusSelectors(DataBusSelectorIndex), 'PortHandles');
% sh = get_param(ph.Inport, 'SignalHierarchy');
% for j = 1:length(ph.Outport)
%     signal_name = get_param(ph.Outport(j), 'Name');
%     signal_name = strrep(signal_name, '<', '');
%     signal_name = strrep(signal_name, '>', '');
%     signal_names{index} = signal_name;
%     index = index + 1;
% end
% 
% 
% % Find the corresponding bus in all_buses()
% all_bus_data = all_buses();
% for i = 1:length(all_bus_data)
%     bus_name = all_bus_data{i}{1};
%     if strcmp(sh.BusObject, bus_name)
%        BusIndex = i;
%     end
% end
% DataBus = all_bus_data{BusIndex};
% DataBusSignals = DataBus{6};
% % Parse data.dat and store using signal names
% signal_column_index_begin = 0;
% signal_column_index_end = 0;
% for i = 1:length(signal_names)
%     for j = 1:length(DataBusSignals)
%         if strcmp(signal_names{i}, DataBusSignals{j}{1})
%             dims = DataBusSignals{j}{2};
%             signal_column_index_begin = signal_column_index_end+1;
%             signal_column_index_end = signal_column_index_end + dims(1);
%             log1.Data.(DataBusSignals{j}{1}) = DataMatrix.data(:,signal_column_index_begin:signal_column_index_end);
%         end
%     end
% end
% log1.Data.t = DataMatrix.data(:,end);
% beep
% disp([data_file ' parsed!']);

%% Data02
% data_file = 'DATA02.dat';
% DataMatrix = SimulinkRealTime.utils.getFileScopeData(data_file)
% DataBusSelectorName = 'Data Bus Selector';
% 
% % mdl = char(tg.Application);
% open('Mpc_RealTime_with_standing.slx')
% mdl = 'Mpc_RealTime_with_standing';
% sys = get_param(mdl, 'Handle');
% BusSelectors = find_system(sys,'FollowLinks','on','SearchDepth',10,'BlockType','BusSelector');
% 
% % Find the bus selector
% index = 1;
% signal_names = cell(1,1);
% DataBusSelectorIndex =[];
% 
% for i = 1:length(BusSelectors)
%     if strcmp(DataBusSelectorName, char(get_param(BusSelectors(i), 'Name')))
%         DataBusSelectorIndex = [DataBusSelectorIndex i];
%     end
% end
% if length(DataBusSelectorIndex) > 1
%     error('There are more than one Bus Selector named ''Data Bus Selector''')
% elseif length(DataBusSelectorIndex) < 1
%     error('There is no Bus Selector named ''Data Bus Selector''')
% end
% 
% % Find the name of signals in the data bus selector
% ph = get_param(BusSelectors(DataBusSelectorIndex), 'PortHandles');
% sh = get_param(ph.Inport, 'SignalHierarchy');
% for j = 1:length(ph.Outport)
%     signal_name = get_param(ph.Outport(j), 'Name');
%     signal_name = strrep(signal_name, '<', '');
%     signal_name = strrep(signal_name, '>', '');
%     signal_names{index} = signal_name;
%     index = index + 1;
% end
% 
% 
% % Find the corresponding bus in all_buses()
% all_bus_data = all_buses();
% for i = 1:length(all_bus_data)
%     bus_name = all_bus_data{i}{1};
%     if strcmp(sh.BusObject, bus_name)
%        BusIndex = i;
%     end
% end
% DataBus = all_bus_data{BusIndex};
% DataBusSignals = DataBus{6};
% % Parse data.dat and store using signal names
% signal_column_index_begin = 0;
% signal_column_index_end = 0;
% for i = 1:length(signal_names)
%     for j = 1:length(DataBusSignals)
%         if strcmp(signal_names{i}, DataBusSignals{j}{1})
%             dims = DataBusSignals{j}{2};
%             signal_column_index_begin = signal_column_index_end+1;
%             signal_column_index_end = signal_column_index_end + dims(1);
%             log2.Data.(DataBusSignals{j}{1}) = DataMatrix.data(:,signal_column_index_begin:signal_column_index_end);
%         end
%     end
% end
% log2.Data.t = DataMatrix.data(:,end);
% beep
% disp([data_file ' parsed!']);

%% Separate useful data
t = log1.Data.t;
q = log1.Data.q(i,:);
dq = log1.Data.dq(i,:);

Vx_tgd_des = log1.Data.Vx_tgd_des;
Vy_tgd_des = log1.Data.Vy_tgd_des;

% Plots
figure 
plot(t,Vx_tgd_des)

%% Compute angular momentum
idx_first = find(t > 674.6);
idx_first = idx_first(1);

idx_last = find(t > 700);
idx_last = idx_last(1);

Lst_all = [];
for i = idx_first:idx_last
    q = log1.Data.q(i,:)';
    dq = log1.Data.dq(i,:)';
    if log1.Data.stanceLeg == -1
        p_st = p_LeftToeJoint(q);
    elseif log1.Data.stanceLeg == 1
        p_st = p_RightToeJoint(q);
    else
        p_st = zeros(3,1);
    end
    L_st = AMworld_about_pA(q,dq,p_st);
    
    Lst_all = [Lst_all; L_st'];
    
    disp(i)
end

%%
figure 
plot(t(idx_first:idx_last),log1.Data.stanceLeg(idx_first:idx_last))
title('Stanceleg');

figure
plot(t(idx_first:idx_last),Lst_all(:,1))
title('Lx');

figure
plot(t(idx_first:idx_last),Lst_all(:,2));
hold on;
plot(t(idx_first:idx_last),log1.Data.Ly_tgd_des(idx_first:idx_last));
title('Ly');

figure
plot(t(idx_first:idx_last),Lst_all(:,3));
title('Lz');


%% plot
time_traj = log1.Data.t;
s_traj = log1.Data.s;
mu_traj = log1.Data.mu;
Vx_target_traj = log1.Data.Vx_tgd_des;
Vy_target_traj = log1.Data.Vy_tgd_des;

% friction
figure
plot(time_traj, mu_traj)
title('mu');

% target velocities
figure
subplot(121);
plot(time_traj, Vx_target_traj);
title('Vx-target');
subplot(122);
plot(time_traj, Vy_target_traj);
title('Vy-target');

% vcom


%% Save log
% user_input = inputdlg({'Date/Time','Setup','Results'}, 'Data Log', ...
%     [1 20; 3 50; 3 50], ...
%     {[date_str,'-',time_str],'',''});
% 
% log.description.DateTime = user_input{1};
% log.description.Setup = user_input{2};
% log.description.Results = user_input{3};
% save('Log', 'log')
% cd(root_dir);
beep