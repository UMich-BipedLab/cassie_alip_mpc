function register_profile_data(o, problem_type, id, records)
%REGISTER_PROFILE_DATA is a helper function which is used to register
%problem statistics in profile_results/register.csv
%
%File `profile_results/register.csv` serves as an index of benchmarking
%results. Benchmarking results are stored in `profile_resutls/` in .mat
%files. Statistics and metadata about these files are stored in
%`register.csv`.


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

fid = fopen([get_scs_rootdir() 'tests/profiling_matlab/profile_results/register.csv'], 'a');
c = [records(:).cost];
total_runtime = sum(c(~isinf(c))/1e3);
fprintf(fid, ...
    '%s,%d,%d,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d\n',...
    problem_type,id,length(records),total_runtime,o.tolerance,...
    o.alpha,o.beta,o.c1,o.c_bl,o.cg_rate,o.direction,o.do_super_scs,...
    o.k0,o.k1,o.k2,o.ls,o.memory,...
    o.normalize,o.rho_x,o.scale,o.sigma,o.sse,o.thetabar,o.verbose,...
    o.do_record_progress,o.use_indirect,...
    o.max_iters,o.warm_start);

end
