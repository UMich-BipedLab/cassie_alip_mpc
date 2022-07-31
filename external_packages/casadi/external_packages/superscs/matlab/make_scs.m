%MAKE_SCS is a script used to compile the MEX interface that allows you to
%call SuperSCS from MATLAB and adds the necessary directories to the MATLAB
%path.
%
%Important note:
%First run `make` in a terminal to compile SuperSCS.
%
%You may find detailed installation instructions online.

% The MIT License (MIT)
%
% Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
%                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
%                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
% Copyright (c) 2012 Brendan O'Donoghue (bodonoghue85@gmail.com)
%
% Permission is hereby granted, free of charge, to any person obtaining a copy
% of this software and associated documentation files (the "Software"), to deal
% in the Software without restriction, including without limitation the rights
% to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
% copies of the Software, and to permit persons to whom the Software is
% furnished to do so, subject to the following conditions:
%
% The above copyright notice and this permission notice shall be included in all
% copies or substantial portions of the Software.
%
% THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
% IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
% FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
% AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
% LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
% OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
% SOFTWARE.
        
% Directories (absolute paths)
clc
scs_root_dir = get_scs_rootdir();
scs_matlab_dir = fullfile(scs_root_dir, 'matlab/');
source_dir = fullfile(scs_root_dir, 'src/');
linsys_src_dir = fullfile(scs_root_dir, 'linsys/');
include_dir = fullfile(scs_root_dir, 'include/');
temp_dir = fullfile(scs_root_dir, 'temp/');

warning('off', 'MATLAB:mex:GccVersion_link');

use_svd = true;
gpu = false;   % compile the gpu version of SCS
float = false; % using single precision (rather than double) floating points
int = false;   % use 32 bit integers for indexing
% WARNING: OPENMP WITH MATLAB CAN CAUSE ERRORS AND CRASH, USE WITH CAUTION:
% openmp parallelizes the matrix multiply for the indirect solver (using CG):
flags.COMPILE_WITH_OPENMP = false;

flags.BLASLIB = '-lmwblas -lmwlapack';
% MATLAB_MEX_FILE env variable sets blasint to ptrdiff_t
flags.LCFLAG = '';
if use_svd,
    flags.LCFLAG = '-DSVD_ACTIVATED';
end
flags.LCFLAG = strcat(flags.LCFLAG, ...
    ' -DSILENCE_AMATRIX_WARNING -DMATLAB_MEX_FILE', ...
    ' -DLAPACK_LIB_FOUND -DCTRLC=1 -DCOPYAMATRIX');
flags.INCS = '';
flags.LOCS = '';


common_scs = [source_dir 'linAlg.c ' ...
    source_dir 'cones.c ' ...
    source_dir 'cs.c ' ...
    source_dir 'util.c ' ...
    source_dir 'scs.c ' ...
    source_dir 'ctrlc.c ' ...
    source_dir 'directions.c ' ...
    linsys_src_dir 'common.c ' ...
    source_dir 'scs_version.c ' ...
    scs_matlab_dir 'scs_mex.c'];
if (~isempty (strfind (computer, '64')))
    flags.arr = '-largeArrayDims';
else
    flags.arr = '';
end

if ( isunix && ~ismac )
    flags.link = '-lm -lut -lrt';
elseif  ( ismac )
    flags.link = '-lm -lut';
else
    flags.link = '-lut';
    flags.LCFLAG = sprintf('-DNOBLASSUFFIX %s', flags.LCFLAG);
end

if (float)
    flags.LCFLAG = sprintf('-DFLOAT %s', flags.LCFLAG);
end
if (int)
    flags.INT = '';
else
    flags.INT = '-DDLONG';
end

if (flags.COMPILE_WITH_OPENMP)
    flags.link = strcat(flags.link, ' -lgomp');
end

compile_direct(flags, common_scs);
compile_indirect(flags, common_scs);
if (gpu)
    compile_gpu(flags, common_scs);
end

% compile scs_version
mex('-O', ['-I' include_dir], fullfile(source_dir, 'scs_version.c'), ...
    fullfile(scs_matlab_dir, 'scs_version_mex.c'), ...
    '-output', fullfile(scs_matlab_dir, 'scs_version'));


clear data cones
rng('default')
rng(11);
m = 9;
n = 4;
data.A = sparse(randn(m,n));
data.b = randn(m,1);
data.c = randn(n,1);
cones.q = m;
fprintf('[SuperSCS] Testing scs_direct... ');
[x_direct,y_direct,s_direct,info] = scs_direct(data, cones, ...
    struct('eps',1e-4,'do_super_scs',1,'memory',5,'rho_x',.001,'verbose',0));
assert(strcmp(info.status,'Solved')==1, '[direct] problem not solved');
assert(abs(info.pobj-info.dobj)<1e-4, '[direct] too high duality gap');
assert(info.relGap<1e-4, '[direct] relative gap is too high');
fprintf('OK!\n');
%
fprintf('[SuperSCS] Testing scs_indirect... ');
[x_indirect, y_indirect, s_indirect, info] = scs_indirect(data, cones,...
    struct('eps',1e-5,'do_super_scs',1,'rho_x',.001,'verbose',0));
assert(strcmp(info.status,'Solved')==1, '[indirect] problem not solved');
assert(abs(info.pobj-info.dobj)<1e-4, '[indirect] too high duality gap');
assert(info.relGap<1e-4, '[indirect] relative gap is too high');
assert(norm(x_direct-x_indirect, Inf) < 1e-4, 'direct-indirect discrepancy in x');
assert(norm(y_direct-y_indirect, Inf) < 1e-4, 'direct-indirect discrepancy in y');
assert(norm(s_direct-s_indirect, Inf) < 1e-4, 'direct-indirect discrepancy in s');
fprintf('OK!\n');

if (gpu)
    [x_gpu,y_gpu,s_gpu,info] = scs_gpu(data,cones,[]);
end

fprintf('[SuperSCS] Creating temp/ folder\n');
[success_temp_dir,~] = mkdir(temp_dir);
if ~success_temp_dir,
    fprintf('[SuperSCS Warning] Folder %s was not created!\n', temp_dir);
end

fprintf('[SuperSCS] Compiling sparse_to_csc...\n');
mex('-largeArrayDims', fullfile(scs_matlab_dir, 'sparse_to_csc.c'),...
    '-output', fullfile(scs_matlab_dir, 'sparse_to_csc'))
fprintf('done!\n');

fprintf('[SuperSCS] Compiling csc_to_sparse...\n');
mex('-largeArrayDims', fullfile(scs_matlab_dir, 'csc_to_sparse.c'),...
    '-output', fullfile(scs_matlab_dir, 'csc_to_sparse') );
fprintf('done!\n');

fprintf('[SuperSCS] Adding %s to the path\n',scs_matlab_dir);
addpath(genpath(scs_matlab_dir))
% Adding profiling path to the path
scs_profiling_path = fullfile(get_scs_rootdir, 'tests', 'profiling_matlab');
addpath(scs_profiling_path);
addpath(fullfile(scs_profiling_path, 'experimenters'));
addpath(fullfile(scs_profiling_path, 'profile_helpers'));
addpath(fullfile(scs_profiling_path, 'profile_runners'));
addpath(fullfile(scs_profiling_path, 'maros_meszaros'));
savepath();
fprintf('[SuperSCS] SUCCESSFULLY INSTALLED SuperSCS\n');
fprintf('[SuperSCS] SuperSCS is only compatible with CVX v3.0 or later.\n');

