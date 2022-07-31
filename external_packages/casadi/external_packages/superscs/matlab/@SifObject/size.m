function [nvar, neq, nineq, nlineq, nuineq, nfix] = size(obj)
%SIZE returns the sizes of a SifObject object
%
%Syntax:
%[nvar, neq, nineq, nlineq, nuineq, nfix] = sif_object.size();
%
%Output arguments:
%  nvar     number of decision variables
%  neq      number of equality constraints
%  nineq    number of inequality constraints
%  nlineq   number of lower inequality constraints
%  nuineq   number of upper inequality constraints
%  nfix     number of fixed variables
%

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

nvar = obj.n_vars;
neq =  obj.n_equality_rows;
nineq = obj.n_constraints;
nlineq = obj.n_l_inequality_rows;
nuineq = obj.n_g_inequality_rows;
nfix = size(obj.c_fix, 1);
end
