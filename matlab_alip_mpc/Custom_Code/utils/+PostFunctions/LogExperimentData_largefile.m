% tg = slrt;
% sc1 = getscope(tg,1);
% sc5 = getscope(tg,3);
% scope_object_vector = stop(sc1);
% scope_object_vector = stop(sc5);

%% Create folder
% clk = clock;
% date_str = [num2str(clk(1)),'-',num2str(clk(2)),'-',num2str(clk(3))];
% time_str = [num2str(clk(4)),'-',num2str(clk(5))];
% save_path = [root_dir,'/ExpLog/',date_str,'/',time_str,'/'];
% mkdir(save_path)
% cd(save_path)

%% copy the dat files from target computer
% SimulinkRealTime.copyFileToHost(tg, ['CASSIE01.dat'])
% SimulinkRealTime.copyFileToHost(tg, ['CASSIE02.dat'])
% SimulinkRealTime.copyFileToHost(tg, ['CASSIE03.dat'])
% SimulinkRealTime.copyFileToHost(tg, ['DATA.dat'])
% SimulinkRealTime.copyFileToHost(tg, ['C:\Users\gibso\workspace\research\cassie_mpc_lip\matlab_mpc_with_standing\ExpLog\2022_02_02_mpctest\DATA.DAT'];
% SimulinkRealTime.copyFileToHost(tg, ['SE_DATA.dat'])
% beep

%% Parse Data.dat
DataMatrix = SimulinkRealTime.utils.getFileScopeData('DATA.dat');
DataBusSelectorName = 'Data Bus Selector';


% mdl = char(tg.Application);
open('Mpc_RealTime_with_standing.slx')
mdl = 'Mpc_RealTime_with_standing';
sys = get_param(mdl, 'Handle');
BusSelectors = find_system(sys,'FollowLinks','on','SearchDepth',10,'BlockType','BusSelector');

% Find the bus selector
index = 1;
signal_names = cell(1,1);
DataBusSelectorIndex =[];

for i = 1:length(BusSelectors)
    if strcmp(DataBusSelectorName, char(get_param(BusSelectors(i), 'Name')))
        DataBusSelectorIndex = [DataBusSelectorIndex i];
    end
end
if length(DataBusSelectorIndex) > 1
    error('There are more than one Bus Selector named ''Data Bus Selector''')
elseif length(DataBusSelectorIndex) < 1
    error('There is no Bus Selector named ''Data Bus Selector''')
end

% Find the name of signals in the data bus selector
ph = get_param(BusSelectors(DataBusSelectorIndex), 'PortHandles');
sh = get_param(ph.Inport, 'SignalHierarchy');
for j = 1:length(ph.Outport)
    signal_name = get_param(ph.Outport(j), 'Name');
    signal_name = strrep(signal_name, '<', '');
    signal_name = strrep(signal_name, '>', '');
    signal_names{index} = signal_name;
    index = index + 1;
end


% Find the corresponding bus in all_buses()
all_bus_data = all_buses();
for i = 1:length(all_bus_data)
    bus_name = all_bus_data{i}{1};
    if strcmp(sh.BusObject, bus_name)
       BusIndex = i;
    end
end
DataBus = all_bus_data{BusIndex};
DataBusSignals = DataBus{6};
% Parse data.dat and store using signal names
signal_column_index_begin = 0;
signal_column_index_end = 0;
for i = 1:length(signal_names)
    for j = 1:length(DataBusSignals)
        if strcmp(signal_names{i}, DataBusSignals{j}{1})
            dims = DataBusSignals{j}{2};
            signal_column_index_begin = signal_column_index_end+1;
            signal_column_index_end = signal_column_index_end + dims(1);
            log.Data.(DataBusSignals{j}{1}) = DataMatrix.data(:,signal_column_index_begin:signal_column_index_end);
        end
    end
end
log.Data.t = DataMatrix.data(:,end);
beep

%% Parse ES_Data.dat
% DataMatrix = SimulinkRealTime.utils.getFileScopeData('SE_DATA.dat');
% DataBusSelectorName = 'SE_Data Bus Selector';
% 
% 
% % mdl = char(tg.Application);
% open('Mpc_RealTime.slx')
% mdl = 'Mpc_RealTime';
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
%             log.SE_Data.(DataBusSignals{j}{1}) = DataMatrix.data(:,signal_column_index_begin:signal_column_index_end);
%         end
%     end
% end
% log.SE_Data.t = DataMatrix.data(:,end);
%% Save log
% user_input = inputdlg({'Date/Time','Setup','Results'}, 'Data Log', ...
%     [1 20; 3 50; 3 50], ...
%     {[date_str,'-',time_str],'',''});
% 
% log.description.DateTime = user_input{1};
% log.description.Setup = user_input{2};
% log.description.Results = user_input{3};
save('Log', 'log')
cd(root_dir);
beep