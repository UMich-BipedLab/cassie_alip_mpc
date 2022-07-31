function options = profile_ops(do_super_scs)


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

options = SuperSCSConfig();
perform_super_scs = 1;
if nargin >= 1
    perform_super_scs = do_super_scs;
end
options.tolerance = 1e-3;
options.alpha     = 1.5;
options.beta      = 0.5;
options.c1        = 0.99;
options.c_bl      = 0.99;
options.cg_rate   = 2;
options.direction = 100;
options.do_super_scs = 1;
if perform_super_scs
    options.k0 = 1;
    options.k1 = 1;
    options.k2 = 1;
    options.ls = 10;
else
    options.k0 = 0;
    options.k1 = 0;
    options.k2 = 0;
    options.ls = 0;
end
options.memory    = 50;
options.normalize = 1;
options.rho_x     = 0.001;
options.scale     = 1;
options.sigma     = 0.1;
options.sse       = 0.999;
options.thetabar  = 0.2;
options.verbose   = 0;
options.do_record_progress = 0;
options.use_indirect = 1;
options.max_iters    = 5000;
options.warm_start   = 0;
options.max_time_milliseconds = 1.50e5;
symbols = ['a':'z' 'A':'Z' '0':'9'];
rand_string_length = 12;
nums = randi(numel(symbols),[1 rand_string_length]);
random_string = symbols (nums);
options.dumpfile     = [get_scs_rootdir() 'temp/temp_' random_string '.mat'];
