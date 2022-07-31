function [x, info, data, cones, pars] = solve_maros_meszaros(sif_object, solver_options)

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

x=[]; info = []; data=[]; K = []; pars = [];
qp_data = sif_object.get_qp_data();
n = size(qp_data.Q, 1);

cvx_begin quiet
    cvx_solver scs 
    scs_set_options(solver_options)
    variable x(n)
    minimize( 0.5*x'*qp_data.Q*x + qp_data.q'*x );
    subject to
        qp_data.A*x == qp_data.b
        qp_data.C*x <= qp_data.c       
        for i=1:length(qp_data.u)
            if ~isinf(qp_data.u(i)),
                x(i) <= qp_data.u(i)
            end
        end
        for i=1:length(qp_data.l)
            if ~isinf(qp_data.l(i)),
                x(i) >= qp_data.l(i)
            end
        end
        for i=1:size(qp_data.c_fix)
            x(qp_data.c_fix(i,1)) == qp_data.c_fix(i,2)
        end
cvx_end

load(solver_options.dumpfile)
cones = K;
delete(solver_options.dumpfile)

