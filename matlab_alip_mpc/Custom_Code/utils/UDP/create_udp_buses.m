%% Create Buses
SlrtToLinuxData = get_SlrtToLinuxData_Struct();
SlrtToLinuxDataBusInfo = Simulink.Bus.createObject(SlrtToLinuxData);
SlrtToLinuxDataBus = eval(SlrtToLinuxDataBusInfo.busName);

LinuxToSlrtData = get_LinuxToSlrtData_Struct();
LinuxToSlrtDataBusInfo = Simulink.Bus.createObject(LinuxToSlrtData);
LinuxToSlrtDataBus = eval(LinuxToSlrtDataBusInfo.busName);



%% Run when buses change
% generateBusPackingSysems;
%  generateUdpUserCode('gen');