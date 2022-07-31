% Plots
iter_delay = 4;
[Data_array,Time_array] = DataTS2DataArray(Data); % convert struct to arrays

t = Data_array.t; % time





% COM position
set(0,'DefaultFigureWindowStyle','docked')
figure;
plot(Data_array.p_com(1,iter_delay:end),Data_array.p_com(3,iter_delay:end));
slope = deg2rad(5).*Data_array.p_com(1,:) + 0.8;
hold on;
plot(Data_array.p_com(1,:),slope);
xlabel('COM x position');
ylabel('COM z position');
legend('truth','desired slope');

figure;
plot(Data_array.p_com(3,iter_delay:end))
ylabel('COM z position')

% COM velocity
figure
plot(Data_array.v_com(1,:));
hold on;
plot(Data_array.Vx_tgd)
ylabel('COM x velocity')
%% Convert time series to Matrix 
function [Data_array,Time_array] = DataTS2DataArray(Data)
%Change the fields of Data from TimeSeries to Array.
fn = fieldnames(Data);
for i = 1:length(fn)
    Data_array.(fn{i}) = reshape(Data.(fn{i}).Data,size(Data.(fn{i}).Data,1),[]);
end
Time_array = Data.(fn{i}).Time;
end