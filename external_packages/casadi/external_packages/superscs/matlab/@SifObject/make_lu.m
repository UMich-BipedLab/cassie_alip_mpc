function make_lu(obj)

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

if ~obj.bounds_specified
    return
end

obj.l = sparse(obj.n_vars,1);
obj.u = Inf(obj.n_vars,1);

for i=1:size(obj.bounds,1)
    bound_designation = obj.bounds{i,1};
    row_name = obj.bounds{i,3};
    id_variable = obj.get_variable_idx(row_name);
    switch bound_designation
        case {'FR', 'MI'}
            obj.l(id_variable) = -Inf;
        case 'LO'
            obj.l(id_variable) = str2double(obj.bounds{i,4});
        case 'UP'
            obj.u(id_variable) = str2double(obj.bounds{i,4});
        case 'FX'            
            obj.c_fix = [obj.c_fix; id_variable, str2double(obj.bounds{i,4})];
        case 'BV'
            error('Binary variables (BV) are not supporter');
        otherwise
            error(['Unknown designation: ''' bound_designation ...
                ''' in section ''BOUNDS''.']);
    end
end

end
