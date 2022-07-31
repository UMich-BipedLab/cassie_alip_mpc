%% Generate expm_A_ALIP
clear; clc;

syms m zH dt real;
g = 9.806;
A = [
    0, 0, 0, 1/(m*zH);
    0, 0, -1/(m*zH), 0;
    0, -m*g, 0, 0;
    m*g, 0, 0, 0];
nx = size(A,1);

% compute discrete matrices 
Ad = expm(A*dt);
Ad = simplify(Ad,100);

Ad_func = matlabFunction(Ad,'File','Ad_ALIP','Vars',[m zH dt]);










