function [data,S,U,sig] = ls_broyden(Rx,Rxold,tau,Sk,Yk,S,U,sig,iter,optsDir)
im = mod(iter-1,optsDir.memory);

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

YSk = Yk'*Sk;
qf = -tau*(Sk'*Rxold);
if YSk<optsDir.delta*abs(qf)
    theta = (1-sgn(qf)*optsDir.delta)*qf/(qf-YSk);
    Yk = theta*Yk-tau*(1-theta)*Rxold;
end

if im == 0 % H = Id
    data = - Rx;
    S = [];U = [];
else
    HYk = Yk;
    for j=1:im-1
        HYk = HYk + U(:,j)*(S(:,j)'*HYk);
    end
    S = [S Sk];
    U = [U (Sk-HYk)/(Sk'*HYk)];
    data = -Rx;
    for j=1:im
        data = data + U(:,j)*(S(:,j)'*d);
    end
end
function x=sgn(x)
if x == 0
    x = 1;
    return
end
x = sign(x);
