function [vector,t] = timeseries2vector(Timeseries)
%only works for scalar and vector
vector = reshape(Timeseries.Data,size(Timeseries.Data,1),size(Timeseries.Data,3));
t = Timeseries.Time;
end

