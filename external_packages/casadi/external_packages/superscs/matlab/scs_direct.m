function [x, y, s, info] = scs_direct(data, cone, params)			    
% Operator-splitting method for solving cone problems (direct)
%
% This implements a cone solver. It solves:
%
% min. c'x
% subject to Ax + s = b
% s \in K
%
% where x \in R^n, s \in R^m
%
% this uses the direct linear equation solver version of SCS
%
% K is product of cones in this particular order:
% free cone, lp cone, second order cone(s), semi-definite cone(s), primal
% exponential cones, dual exponential cones
%
% data must consist of data.A, data.b, data.c, where A,b,c used as above.
%  
% cone struct must consist of:
% cone.f, length of free cone (for equality constraints)
% cone.l, length of lp cone
% cone.q, array of SOC lengths
% cone.s, array of SD lengths
% cone.ep, number of primal exp cones
% cone.ed, number of dual exp cones
%
% Optional fields in the params struct are:
%   alpha       : over-relaxation parameter, between (0,2).
%   rho_x       : momentum of x term (1e-3 works well)
%   max_iters   : maximum number of ADMM iterations.
%   eps         : accuracy of solution
%   verbose     : verbosity level (0 or 1)
%   normalize   : heuristic data rescaling (0 or 1, off or on)
%   scale       : rescales data up by this factor (only used if normalize=1)
%
% to warm-start the solver add guesses for (x, y, s) to the data struct
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
error ('scs_direct mexFunction not found') ;
