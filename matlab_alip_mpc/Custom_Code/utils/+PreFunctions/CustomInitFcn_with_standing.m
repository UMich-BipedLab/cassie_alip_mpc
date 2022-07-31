%% UDP settings
udp_linux_ip_address = '169.254.252.150';
udp_local_port = 27000;
udp_remote_port = 28000;

sample_time = 0.0005;
udp_sample_time = 0.004; % 250 Hz
sim_step_length = 0.0005;
SpringDamping = 0.2;

%% Bus Initialization
% Create Data Bus
DataWithStanding = PreFunctions.Construct_Data_with_standing;
cassieDataWithStandingBusInfo = Simulink.Bus.createObject(DataWithStanding);
cassieDataWithStandingBus = eval(cassieDataWithStandingBusInfo.busName);

EstStatesWithStanding = PreFunctions.Construct_EstStates_with_standing;
EstStatesWithStandingBusInfo = Simulink.Bus.createObject(EstStatesWithStanding);
EstStatesWithStandingBus = eval(EstStatesWithStandingBusInfo.busName);

IRCWithStanding = PreFunctions.Construct_IRC_with_standing;
IRCWithStandingBusInfo = Simulink.Bus.createObject(IRCWithStanding);
IRCWithStandingBus = eval(IRCWithStandingBusInfo.busName);

Controller2EstimatorWithStanding = PreFunctions.Construct_Controller2Estimator_with_standing;
cassieController2EstimatorWithStandingBusInfo = Simulink.Bus.createObject(Controller2EstimatorWithStanding);
cassieController2EstimatorWithStandingBus = eval(cassieController2EstimatorWithStandingBusInfo.busName);

DML = load('DynamicMatrixLibrary_Sim_v1.mat');
DynamicMatrixLibrary = DML.DynamicMatrixLibrary;
cassieDynamicMatrixLibraryBusInfo = Simulink.Bus.createObject(DynamicMatrixLibrary);
cassieDynamicMatrixLibraryBus = eval(cassieDynamicMatrixLibraryBusInfo.busName);

ML_StandIK = load('MatrixLibrary_StandIK_v1.mat');
MatrixLibrary_StandIK = ML_StandIK.MatrixLibrary_StandIK;
cassieMatrixLibraryStandIKBusInfo = Simulink.Bus.createObject(MatrixLibrary_StandIK);
cassieMatrixLibraryStandIKBus = eval(cassieMatrixLibraryStandIKBusInfo.busName);

PreFunctions.ParamInit_with_standing;
PreFunctions.PolyRegressionFilterInit_with_standing;


%% ALIP MPC
SlrtToLinuxData = get_SlrtToLinuxData_Struct();
SlrtToLinuxDataBusInfo = Simulink.Bus.createObject(SlrtToLinuxData);
SlrtToLinuxDataBus = eval(SlrtToLinuxDataBusInfo.busName);

LinuxToSlrtData = get_LinuxToSlrtData_Struct();
LinuxToSlrtDataBusInfo = Simulink.Bus.createObject(LinuxToSlrtData);
LinuxToSlrtDataBus = eval(LinuxToSlrtDataBusInfo.busName);

% CustomEstStatesWithStanding = PreFunctions.Construct_CustomEstStates_with_standing;
% CustomEstStatesWithStandingBusInfo = Simulink.Bus.createObject(CustomEstStatesWithStanding);
% CustomEstStatesWithStandingBus = eval(CustomEstStatesWithStandingBusInfo.busName);
% 
% MpcFpWithStanding = PreFunctions.Construct_Mpc_Fp_with_standing;
% MpcFpWithStandingBusInfo = Simulink.Bus.createObject(MpcFpWithStanding);
% MpcFpWithStandingBus = eval(MpcFpWithStandingBusInfo.busName);

%% Covariance
fname = which('all_buses.m');
delete(fname)
Simulink.Bus.save([root_dir '\all_buses.m'])
