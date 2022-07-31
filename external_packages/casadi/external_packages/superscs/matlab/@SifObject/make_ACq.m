function make_ACq(obj)

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

obj.A = sparse(obj.n_equality_rows, obj.n_vars);
obj.C = sparse(obj.n_l_inequality_rows + obj.n_g_inequality_rows, obj.n_vars);
obj.q = sparse(obj.n_vars, 1);

for i=1:size(obj.columns,1)
    var_name = obj.columns{i,1};
    row_name = obj.columns{i,2};
    value = obj.columns{i,3};
    try
    row_type = obj.retrieve_row_type(row_name);
    catch
        keyboard;
    end
    idx_var = obj.get_variable_idx(var_name);
    idx_row = obj.get_row_idx(row_name);
    switch row_type
        case 'N'
            obj.q(idx_var) = value;
        case 'E'
            obj.A(idx_row, idx_var) = value;
        case 'L'
            obj.C(idx_row, idx_var) = value;
        case 'G'
            obj.C(idx_row, idx_var) = -value;
        otherwise
            % do nothing
    end
end

end
