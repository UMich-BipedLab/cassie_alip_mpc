fclose('all')
fid=fopen('DATA.dat');
% ftest=fread(fid,1830724);
ftest=fread(fid,400000000);
extractinfo=SimulinkRealTime.utils.getFileScopeData(ftest) %inspect at command window output

% header note that headersize = 4608 (for this case)
headersize=4608;
fclose('all')
fid=fopen('DATA.dat');
[header,count1]=fread(fid,headersize);

% data chunk 1
num_signals = 93;
num_bytes = 8;
num_steps = 1000;
chunk1 = num_signals * num_bytes * num_steps;  % = 93signals * 8 bytes * 1000 time steps
[a,count2]=fread(fid,chunk1);
str1=SimulinkRealTime.utils.getFileScopeData([header;a]);

%%
%At this point you may save your variables str1 and str2, etc. to a MAT
%file and clear your workspace to free up the memory. You may wish to
%relaunch MATLAB as well
save str1.mat str1
fclose(fid)
% clear

fid=fopen('DATA.dat');

%seek to the place in the file where you left off last time.
fseek(fid, count1+count2,'bof')
[a,count3]=fread(fid,chunk1);
str2=SimulinkRealTime.utils.getFileScopeData([header;a]);
save str2.mat str2
% clear
fclose(fid)
fid=fopen('DATA.dat');
%To confirm that the data lines up correctly, plot it
figure
plot([str1.data;str2.data])