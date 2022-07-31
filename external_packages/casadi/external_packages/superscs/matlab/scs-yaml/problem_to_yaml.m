function problem_to_yaml(destination, problem_name, data, K, options)
%PROBLEM_TO_YAML serializes SuperSCS problem data to YAML
%
%Syntax:
%problem_to_yaml(destination, problem_name, data, K)
%problem_to_yaml(destination, problem_name, data, K, options)
%
%Input arguments:
% destination       a file path (a string; either a relative or an absolute
%                   file path) OR the output of fopen(path, 'w')
% problem_name      a name for your problem 
% data              a structure with the problem data; the structure should
%                   contain the fields: `A`, `b` and `c`
% K                 the cones
% options           additional options; this is an optional argument. It is 
%                   a structure with the following fields:
%                    - license: URL, URI or other identifier of the licence
%                      associated with these data
%                    - creator: the creator of the data
%                    - id: unique identifier of the problem
%
%Examples:
% problem_to_yaml('my_problem.yml', 'problem-1', data, K)
%   :: this will save the problem data contained in `data` and `K` in the 
%   file `my_problem.yml` in the current directory
%
% problem_to_yaml(1, 'problem-1', data, K)
%   :: this will print the data to the standard output stream
%
% problem_to_yaml(2, 'problem-1', data, K)
%   :: this will print the data to the standard error stream
%
% fid = fopen('path/to/myfile.yml', 'w');
% problem_to_yaml(fid, 'problem-1', data, K)
% fclose(fid);
%  :: this
%
%See also
%problem_from_yaml, sparse_to_csc, csc_to_sparse


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

if ~isfield(K,'f');K.f = 0;end
if ~isfield(K,'l');K.l = 0;end
if ~isfield(K,'q');K.q = [];end
if ~isfield(K,'s');K.s = [];end
if ~isfield(K,'ep');K.ep = 0;end
if ~isfield(K,'ed');K.ed = 0;end
if ~isfield(K,'p');K.p = [];end

if ~isfield(K, 'psize'), K.psize = numel(K.p); end
if ~isfield(K, 'qsize'), K.qsize = numel(K.q); end
if ~isfield(K, 'ssize'), K.ssize = numel(K.s); end

should_close_fid = 0;
if ischar(destination),
    fid = fopen(destination, 'w');
    should_close_fid = 1;
elseif isnumeric(destination)
    fid = destination;    
end

id = sprintf('http://superscs.org/problem/#%s', urlencode(problem_name));
creator = 'SuperSCS';
license = 'https://github.com/kul-forbes/scs/blob/master/LICENSE.txt';

if nargin == 5
    if isfield(options, 'creator'), creator = options.creator; end
    if isfield(options, 'license'), license = options.license; end
    if isfield(options, 'id'), id = options.id; end
end

space = '    ';
fprintf(fid, '--- # SuperSCS Problem\n');
fprintf(fid, 'meta:\n');
fprintf(fid, '%sid: ''%s''\n', space, id);
fprintf(fid, '%sdate: ''%s''\n', space, datetime());
fprintf(fid, '%screator: ''%s''\n', space, creator);
fprintf(fid, '%syamlVersion: ''%s''\n', space, '1.2');
fprintf(fid, '%slicense: ''%s''\n', space, license);
fprintf(fid, 'problem:\n');
fprintf(fid, '%sname: ''%s''\n', space, problem_name);
yamlify_sparse_matrix(fid, data.A)
fprintf(fid, '%sb: ', space);
yamlify_array(fid, data.b)
fprintf(fid, '%sc: ', space);
yamlify_array(fid, data.c)
fprintf(fid, '%sK:\n', space);
fields_K = fieldnames(K);
for i=1:numel(fields_K)
    field_value = K.(fields_K{i});
    if isempty(field_value)
        val = '[]'; 
    elseif numel(field_value) == 1
        val = sprintf('%g',field_value);
    else
        val = sprintf('%g,' , field_value);
        val = strcat('[',val(1:end-1),']');
    end
    
    fprintf(fid, '%s%s%s: %s\n', space, space, fields_K{i}, val);    
end
fprintf(fid, '...');
if should_close_fid,
    fclose(fid);
end

function yamlify_sparse_matrix(fid, A)
space = '    ';
double_space = [space space];
[m, n, nnz, a, ir, jc] = sparse_to_csc(A);
fprintf(fid, '%sA: \n', space);
fprintf(fid, '%sm: %d\n', double_space, m);
fprintf(fid, '%sn: %d\n', double_space, n);
fprintf(fid, '%snnz: %d\n', double_space, nnz);
fprintf(fid, '%sa: ', double_space);
yamlify_array(fid, a);
fprintf(fid, '%sI: ', double_space);
yamlify_array_int(fid, ir);
fprintf(fid, '%sJ: ', double_space);
yamlify_array_int(fid, jc);


function yamlify_array(fid, x)
fprintf(fid, '[');
fprintf(fid, '%.22g,', x(1:end-1));
fprintf(fid, '%.22g]\n', x(end));

function yamlify_array_int(fid, x)
fprintf(fid, '[');
fprintf(fid, '%d,', x(1:end-1));
fprintf(fid, '%d]\n', x(end));
