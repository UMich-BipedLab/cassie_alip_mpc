function out = parse_yaml(filename)

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
out = [];
fid = fopen(filename,'r');
var_id = [];

% Take me to the first occurence of 'problem'
while ~strcmp(var_id,'problem')
    var_id = read_up_to_colon(fid);
    fgetl(fid);
    fscanf(fid,'\n');
end

%start parsing problem
while ~feof(fid)
    var_id = read_up_to_colon(fid);
    if isempty(var_id), continue; end
    switch var_id,
        case 'name'
            name = strtrim( fgetl(fid) );            
            out.name = name(2:end-1);
        case 'A'
            out = parse_A(fid, out);
        case 'b'
            out.b = read_array(fid);
        case 'c'
            out.c = read_array(fid);
        case 'K'
            out = parse_K(fid, out);
        otherwise
            break;
    end
end

fclose(fid);






function out = parse_A(fid, out)
k = 0;
while k < 6,
    var_id = read_up_to_colon(fid);
    if isempty(var_id), 
        continue; 
    end
    out.A.(var_id) = read_array(fid);
    k = k + 1;
end
% verify A:
if ~isfield(out.A, 'm') ...
        || ~isfield(out.A, 'n') ...
        || ~isfield(out.A, 'nnz') ...
        || ~isfield(out.A, 'a') ...
        || ~isfield(out.A, 'I') ...
        || ~isfield(out.A, 'J'),
    error('yaml:invalid', 'Section `problem.A` should contain (m,n,nnz,a,I,J)');
end

function out = parse_K(fid, out)
k = 0;
while ~feof(fid) && k < 10,
    var_id = read_up_to_colon(fid);
    if isempty(var_id), break; end
    out.K.(var_id) = read_array(fid);
    k = k + 1;
end
