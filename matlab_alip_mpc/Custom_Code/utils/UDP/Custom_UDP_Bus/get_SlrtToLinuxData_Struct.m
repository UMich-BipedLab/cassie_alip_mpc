function [Data] = get_SlrtToLinuxData_Struct(varargin)
%GETDATASTRUCTURE Summary of this function goes here
%   Detailed explanation goes here

Data = struct;
if nargin > 0
    if ischar(varargin{1}) && strcmp(varargin{1}, 'annotated')
        Data.busname_ = 'SlrtToLinuxDataBus';
        Data.cstructname_ = 'slrt_to_linux_data_t';
%         Data.outputs = CassieModule.getOutStruct('annotated');
    else
        error('Unrecognized input');
    end
else
%    Data.outputs = CassieModule.getOutStruct(); 
end

Data.time = zeros(1,1);
Data.s = zeros(1,1);

Data.xlip_current = zeros(4,1);
Data.stance_leg = zeros(1,1);
Data.zH = zeros(1,1);
Data.Ts = zeros(1,1);
Data.Tr = zeros(1,1);
Data.leg_width = zeros(1,1);
Data.Lx_offset = zeros(1,1);
Data.Ly_des = zeros(1,1);
Data.kx = zeros(1,1);
Data.ky = zeros(1,1);
Data.mu = zeros(1,1);

% Data.cstructnames_ = 'bus';

end