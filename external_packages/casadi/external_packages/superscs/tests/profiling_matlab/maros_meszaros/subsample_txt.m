clc;
filename = 'rpca2_rb_100.txt';
filename_new = strcat('trimmed_', filename);
fid_i = fopen(filename, 'r');
fid_o = fopen(filename_new, 'w');

eps_dt = 0.1;
eps_dp = 0.9;
line = fgetl(fid_i);
t_previous = -1;
p_previous = -1;
while ischar(line)  
    tokens = strsplit(line, '\t');
    t = str2double(tokens{1});
    p = str2double(tokens{2});
    dt = abs(t - t_previous);
    dp = abs(p - p_previous);
    if dt > eps_dt || dp > eps_dp
        fprintf(fid_o, '%f\t%f\\\\\n', t, p);
        t_previous = t;
        p_previous = p;
    end
    line = fgetl(fid_i);    
    
end

fclose(fid_i);
fclose(fid_o);