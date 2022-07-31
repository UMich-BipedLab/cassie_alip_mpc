% Add folders to path for cassie controller
closeNoPrompt(matlab.desktop.editor.getAll);
clear; clc;

% Get project root location
projectRoot = fileparts(mfilename('fullpath'));
restoredefaultpath;

% Construct paths to cache and code folders
myCacheFolder = fullfile(projectRoot, 'Build', 'Cache');
myCodeFolder = fullfile(projectRoot, 'Build', 'Code');

% Set the file generation folder paths
Simulink.fileGenControl('set',...
    'CacheFolder', myCacheFolder,...
    'CodeGenFolder', myCodeFolder,...
    'createDir', true);
root_dir = pwd;

% Add all subfolders to MATLAB path
addpath(genpath('./'));
rmpath(genpath('Explog'));

open Mpc_SimMechanics_with_standing.slx
open Cassie_MPC_With_Standing.m
open RadioCommandInterpreter_with_standing.m
open RemoteSpoofer_with_standing.m
open Custom_Code\utils\+PreFunctions\simulationInitFcn_with_standing.m
open Custom_Code\utils\+PreFunctions\CustomInitFcn_with_standing.m

disp('-- Startup Complete --');