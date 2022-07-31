function generate_udp_packing_code(outdir)
% Generate Bus Packing System for data logging
BusModule.generatePackingSystem(...
    get_SlrtToLinuxData_Struct('annotated'), [], [], 'singlefloats')
BusModule.generateUnpackingSystem(...
    get_LinuxToSlrtData_Struct('annotated'), [], [], 'singlefloats')

% Generate Source code for C++ Packing/Unpacking
CodegenModule.generatePackingCode(...
    get_SlrtToLinuxData_Struct('annotated'), outdir, 'singlefloats');
CodegenModule.generatePackingCode(...
    get_LinuxToSlrtData_Struct('annotated'), outdir, 'singlefloats');

end




