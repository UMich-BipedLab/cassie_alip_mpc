function compile_direct(flags, common_scs)

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
  
 
         
scs_root_dir = get_scs_rootdir();
scs_matlab_dir = fullfile(scs_root_dir, 'matlab/');
linsys_direct_dir = fullfile(scs_root_dir, 'linsys/direct/');
include_dir = fullfile(scs_root_dir, 'include/');

if (flags.COMPILE_WITH_OPENMP)
    cmd = sprintf(['mex -Ofast %s %s %s %s COMPFLAGS="/openmp \\$COMPFLAGS" ' ...
    'CFLAGS="\\$CFLAGS -fopenmp" -I' scs_root_dir ' -I' include_dir ' %s'], ...
    flags.arr, flags.LCFLAG, flags.INCS, flags.INT);
else
    cmd = sprintf (['mex -O %s %s %s %s -I' scs_root_dir ' -I' include_dir ' %s'], ...
        flags.arr, flags.LCFLAG, flags.INCS, flags.INT);
end

amd_files = {'amd_order', 'amd_dump', 'amd_postorder', 'amd_post_tree', ...
    'amd_aat', 'amd_2', 'amd_1', 'amd_defaults', 'amd_control', ...
    'amd_info', 'amd_valid', 'amd_global', 'amd_preprocess' } ;
for i = 1 : length (amd_files)
    cmd = sprintf (['%s ' linsys_direct_dir 'external/%s.c'], cmd, amd_files {i}) ;
end

cmd = sprintf (['%s ' linsys_direct_dir 'external/ldl.c %s ' ...
    linsys_direct_dir 'private.c %s %s %s -output ' scs_matlab_dir 'scs_direct'], ...
    cmd, common_scs, flags.link, flags.LOCS, flags.BLASLIB);
eval(cmd);
