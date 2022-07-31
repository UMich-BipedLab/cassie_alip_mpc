function compile_gpu(flags, common_scs)

        
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
        
flags.link = sprintf('-lcudart -lcublas -lcusparse %s', flags.link);
flags.INCS = sprintf('-I/usr/local/cuda/include %s', flags.INCS);
if ( ismac )
flags.link = sprintf('-L/usr/local/cuda/lib %s', flags.link);
else
% TODO probably not right for windows
flags.link = sprintf('-L/usr/local/cuda/lib64 %s', flags.link);
end

% compile gpu
if (flags.COMPILE_WITH_OPENMP)
    cmd = sprintf('mex -O %s %s %s COMPFLAGS="/openmp \\$COMPFLAGS" CFLAGS="\\$CFLAGS -fopenmp" ../linsys/gpu/private.c %s -I.. -I../include %s %s %s -output scs_gpu',  flags.arr, flags.LCFLAG, common_scs, flags.INCS, flags.link, flags.LOCS, flags.BLASLIB);
else
    cmd = sprintf('mex -O %s %s %s ../linsys/gpu/private.c %s -I.. -I../include %s %s %s -output scs_gpu',  flags.arr, flags.LCFLAG, common_scs, flags.INCS, flags.link, flags.LOCS, flags.BLASLIB);
end
eval(cmd);
