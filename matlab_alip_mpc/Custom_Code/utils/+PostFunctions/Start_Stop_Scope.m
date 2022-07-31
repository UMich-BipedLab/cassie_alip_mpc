%% Stop
clc;
tg = slrt;
sc1 = getscope(tg,1);
sc5 = getscope(tg,5);
% sc6 = getscope(tg,6);
scope_object_vector = stop(sc1);
scope_object_vector = stop(sc5);
% scope_object_vector = stop(sc6);

%% Start
clc;
tg = slrt;
sc1 = getscope(tg,1);
sc5 = getscope(tg,5);
% sc6 = getscope(tg,6);
scope_object_vector = start(sc1);
scope_object_vector = start(sc5);
% scope_object_vector = start(sc6);