
%% Create folder
clk = clock;
date_str = [num2str(clk(1)),'-',num2str(clk(2)),'-',num2str(clk(3))];
time_str = [num2str(clk(4)),'-',num2str(clk(5))];
save_path = [root_dir,'/SimLog/',date_str,'/',time_str,'/'];
mkdir(save_path)
cd(save_path)
%% Save log
user_input = inputdlg({'Date/Time','Setup','Results'}, 'Data Log', ...
    [1 20; 3 50; 3 50], ...
    {[date_str,'-',time_str],'',''});

log.description.DateTime = user_input{1};
log.description.Setup = user_input{2};
log.description.Results = user_input{3};
save('Data', 'Data')
fileID = fopen('description.txt','w');
fprintf(fileID, [log.description.DateTime '\n' log.description.Setup '\n' log.description.Results]);
fclose(fileID);
cd(root_dir);