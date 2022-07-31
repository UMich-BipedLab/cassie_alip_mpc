function parse(obj)

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

obj.clear_data();
obj.sif_fid = fopen([SifObject.local_destination   obj.sif_name]);
if obj.sif_fid < 0, error('Cannot open this .SIF file'); end
while ~feof(obj.sif_fid)
    line = fgetl(obj.sif_fid);
    line = strtrim(line);
    r = obj.detect_new_section(line);
    if ~isempty(r)
        obj.delegate_section(r, line);
    end
end % end of file - end parsin
fclose(obj.sif_fid);
obj.variables = unique(obj.columns(:,1));
obj.n_vars = length(obj.variables);
obj.n_constraints = size(obj.rows, 1) - 1;
obj.update_count_rows_by_type();
obj.post_process();
end
