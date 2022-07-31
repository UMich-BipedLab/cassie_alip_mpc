function [ x, y, s, info ] = scs( varargin )
% scs 1.2.6
% for version call: scs_version()

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
        
data = varargin{1};
K = varargin{2};
if nargin >= 3
    pars = varargin{3};
else
    pars = [];
end

if (isfield(pars, 'write_data') && pars.write_data)
     write_scs_data(data, K, pars, 'scs_prob_data')
elseif (isfield(pars,'use_indirect') && ~pars.use_indirect)
    [  x, y, s, info  ] = scs_direct( data, K, pars);
elseif (isfield(pars,'gpu') && pars.gpu)
    [  x, y, s, info  ] = scs_gpu( data, K, pars);
else
    [  x, y, s, info  ] = scs_indirect( data, K, pars);
end
