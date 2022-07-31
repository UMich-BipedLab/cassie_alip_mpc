function [Data] = get_LinuxToSlrtData_Struct(varargin)
%GETDATASTRUCTURE Summary of this function goes here
%   Detailed explanation goes here

Data = struct;
if nargin > 0
    if ischar(varargin{1}) && strcmp(varargin{1}, 'annotated')
        Data.busname_ = 'LinuxToSlrtDataBus';
        Data.cstructname_ = 'linux_to_slrt_data_t';
    else
        error('Unrecognized input');
    end
else
%    Data.outputs = CassieModule.getOutStruct(); 
end

Data.time = 0;
Data.ufp_wrt_st = zeros(2,1);
Data.ufp_wrt_com = zeros(2,1);
% Data.cstructnames_ = 'bus';

end