function print_mm_results(results, prefix, fid)


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
if nargin < 3
    fid = 1;
end

if nargin < 2
    prefix = ' * ';
end

fprintf(fid, '%s<div><table>\n', prefix);
fprintf(fid, '%s<tr>\n', prefix);
print_th(fid, prefix, 'Name');
print_th(fid, prefix, 'SCS');
print_th(fid, prefix, 'Broyden 50');
print_th(fid, prefix, 'Broyden 100');
print_th(fid, prefix, 'AA 5');
print_th(fid, prefix, 'AA 10');
fprintf(fid, '%s</tr>\n', prefix);

n_results = numel(results);

for i = 1:n_results,
    result = results(i);
    if result.scs >= 0 && (~isinf(result.scs) || ~isinf(result.broyden_50) ...
            || ~isinf(result.broyden_100) ...
            || ~isinf(result.aa_5) ...
            || ~isinf(result.aa_10)) ...
            && (min([result.scs, result.broyden_50, result.broyden_100, result.aa_5, result.aa_10]) >= 0.1),
        print_results_row(fid, result, prefix);
    end
end

fprintf(fid, '%s</table></div>\n', prefix);

function print_results_row(fid, result, prefix)
fprintf(fid, '%s<tr>\n', prefix);
name_no_dot_mat = strrep(result.sif,'.mat','');
link = sprintf('ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/%s', ...
    name_no_dot_mat);
name_no_dot_sif = strrep(name_no_dot_mat,'.SIF','');
sif_link = sprintf('<a href="%s">%s</a>', link, name_no_dot_sif);
print_td(fid, prefix, sif_link);
print_td_num(fid, prefix, result.scs);
print_td_num(fid, prefix, result.broyden_50);
print_td_num(fid, prefix, result.broyden_100);
print_td_num(fid, prefix, result.aa_5);
print_td_num(fid, prefix, result.aa_10);
fprintf(fid, '%s</tr>\n', prefix);

function print_td_num(fid, prefix, td_content_num)
fprintf(fid, '%s\t<td>%8.2f</td>\n', prefix, td_content_num);

function print_td(fid, prefix, td_content)
fprintf(fid, '%s\t<td>%s</td>\n', prefix, td_content);

function print_th(fid, prefix, td_content)
fprintf(fid, '%s\t<th>%s</th>\n', prefix, td_content);
