classdef MarosMeszarosRunner < handle
    
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
    properties (Access = public)
        config_cache;
        max_filesize_mb;
        info_cache;
        verbose
        stream_fid;
        problem_metadata;
    end % END of properties
    
    methods (Static, Access = private)
        function info = make_info_template()
            info = struct('iter', [], ...
                'status', 'Pending', ...
                'pobj', [], ...
                'dobj', [], ...
                'resPri', [],...
                'resDual', [],...
                'resInfeas', [],...
                'resUnbdd', [],...
                'relGap', [],...
                'setupTime', [],...
                'solveTime', [],...
                'progress_iter', [],...
                'progress_relgap', [],...
                'progress_respri', [],...
                'progress_resdual', [],...
                'progress_pcost', [],...
                'progress_dcost', [],...
                'progress_time', [],...
                'progress_mode', [],...
                'progress_ls', [],...
                'allocated_memory_bytes', []);
        end
        
        function clr = get_status_color(status)
            if (strcmp(status,'Solved'))
                clr = 'black';
            elseif (strcmp(status,'Unbounded'))
                clr = 'green';
            elseif (strcmp(status,'Infeasible'))
                clr = 'magenta';
            else
                clr = 'gray';
            end
        end % end of function
    end % END of static private methods
    
    methods (Access = private)
        function bootstrap_info(obj, num_problems)
            info_template = MarosMeszarosRunner.make_info_template();
            obj.info_cache = repmat(info_template, num_problems, numel(obj.config_cache));
        end
        
        function print_header_line(obj)
            for j=1:numel(obj.config_cache)+1,
                fprintf(obj.stream_fid,'|---------------------');
            end
            fprintf(obj.stream_fid,'|\n');
        end
        
        function print_header(obj)
            if isempty(obj.config_cache), return; end
            obj.print_header_line();
            fprintf(obj.stream_fid, '| %19s ', 'PROBLEM');
            for j=1:numel(obj.config_cache),
                fprintf(obj.stream_fid, '| %19s ', obj.config_cache(j).get_config_id);
            end
            fprintf('|\n');
            obj.print_header_line();
        end
        
        function print_info(obj, info)
            if isempty(strfind(info.status, 'Inaccurate'))
                if (info.solveTime < 100)
                    fprintf(obj.stream_fid, '| %8.1fms (%6d) ', info.solveTime, ...
                        info.iter);
                else
                    fprintf(obj.stream_fid, '| %8dms (%6d) ', round(info.solveTime), ...
                        info.iter);
                end
            else
                fprintf(obj.stream_fid, '|          X          ');
            end
        end
        
        function print_th(obj, prefix, content)
            fprintf(obj.stream_fid, '%s  <th>%s</th>\n', prefix, content);
        end
        
        function print_td_num(obj, prefix, td_content_num)
            fprintf(obj.stream_fid, '%s  <td>%8.2f</td>\n', prefix, td_content_num);
        end
        
        function print_td(obj, prefix, td_content)
            fprintf(obj.stream_fid, '%s  <td>%s</td>\n', prefix, td_content);
        end
        
        function print_html_table_header(obj, prefix)
            fid = obj.stream_fid;
            fprintf(fid, '%s <tr>\n', prefix);
            obj.print_th(prefix, 'PROBLEM');
            for i=1:numel(obj.config_cache)
                cnfg = obj.config_cache(i);
                if obj.config_cache(i).do_super_scs,
                    span_config_header = sprintf(...
                        '<span title="(k0,k1,k2)=(%d,%d,%d), ls=%d">%s</span>', ...
                        cnfg.k0, cnfg.k1, cnfg.k2,...
                        cnfg.ls, cnfg.get_config_id());
                else
                    span_config_header = sprintf('<span title="%s">%s</span>', ...
                        'SCS',cnfg.get_config_id());
                end
                obj.print_th(prefix, span_config_header);
            end
            fprintf(fid, '%s </tr>\n', prefix);
        end
        
        function print_html_result_row(obj, prefix, i)
            fid  = obj.stream_fid;
            meta = obj.problem_metadata{i};
            if isempty(meta), return; end
            fprintf(fid, '%s <tr>\n', prefix);
            problem_name = meta.name;
            link = sprintf('ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/%s.SIF', ...
                problem_name);
            sif_meta_txt = sprintf('%d vars', meta.nvar);
            if meta.neq,
                sif_meta_txt = sprintf('%s, %d eqs', sif_meta_txt, meta.neq);
            end
            if meta.nineq,
                sif_meta_txt = sprintf('%s, %d ineqs', sif_meta_txt, meta.nineq);
            end
            sif_link = sprintf('<a href="%s" title="%s">%s</a>', link, sif_meta_txt, problem_name);
            obj.print_td(prefix, sif_link);
            % --- PERFORMANCE DATA ---
            for j=1:numel(obj.config_cache)
                info = obj.info_cache(i,j);
                clr = MarosMeszarosRunner.get_status_color(info.status);
                % If the status code contains 'Inaccurate' (e.g.,
                % 'Solved/Inaccurate'), then the solver has failed to solve
                % the problem; Statues such as 'Unbounded' or 'Infeasible'
                % are considered successful.
                if isempty(strfind(info.status,'Inaccurate'))
                    if (info.solveTime < 100)
                        fprintf(obj.stream_fid, ...
                            ['%s  <td><span class="mm_runtime" title="runtime in milliseconds" style="color:%s">%.1f</span> ' ...
                            '(<span class="mm_iterations" title="iterations" ' ... 
                            'style="color:%s">%d</span>)</td>\n'], ...
                            prefix, ...
                            clr, info.solveTime, ...
                            clr, info.iter);
                    else
                        fprintf(obj.stream_fid, ...
                            ['%s  <td><span class="mm_runtime" title="runtime in milliseconds" style="color:%s">%d</span> ' ...
                            '(<span class="mm_iterations" title="iterations" style="color:%s">%d</span>)</td>\n'], ...
                            prefix, ...
                            clr, round(info.solveTime), ...
                            clr, info.iter);
                    end
                else
                    fprintf(obj.stream_fid, ...
                        ['%s  <td><span class="mm_runtime mm_runtime_failed" title="failed, time=%.2f min" style="color:red;">%s</span> ' ...
                        '(<span class="mm_iterations mm_iterations_failed"'...
                        ' title="iterations" style="color:%s">%d</span>)</td>\n'], ...
                        prefix, info.solveTime/1000/60, ...
                        'FAIL', clr, info.iter);
                end
            end
            fprintf(fid, '%s </tr>\n', prefix);
        end
        
    end % END of private methods
    
    methods (Access = public)
        
        function obj = MarosMeszarosRunner()
            obj.config_cache = [];
            obj.max_filesize_mb = 40;
            obj.stream_fid = 1;
        end
        
        function obj = add_config(obj, config)
            if ~isa(config,'SuperSCSConfig')
                error('ME:IllegalProperty', ...
                    'You must provide a SuperSCSConfig object');
            end
            obj.config_cache = [obj.config_cache, config];
        end
        
        function obj = set_verbose(obj, verbosity_level)
            obj.verbose = verbosity_level;
        end
        
        function obj = set_max_filesize_MB(obj, max_size)
            obj.max_filesize_mb = max_size;
        end
        
        function run(obj)
            if isempty(obj.config_cache), return; end
            if obj.verbose > 0, obj.print_header(); end
            parsed_data_path = [get_scs_rootdir ...
                'tests/profiling_matlab/maros_meszaros/parsed_data/'];
            parsed_data_dir = dir([parsed_data_path '*.mat']);
            num_sif_objects = numel(parsed_data_dir);
            num_configs = numel(obj.config_cache);
            sif_object = [];
            obj.problem_metadata = cell(num_sif_objects, 1);
            
            idx_solved_problem = 0;
            
            bootstrap_info(obj, num_sif_objects);
            
            for i = 1:num_sif_objects
                
                file_name = parsed_data_dir(i).name;                
                if parsed_data_dir(i).bytes/1e6 <= obj.max_filesize_mb
                    continue;
                end
                fprintf('[info] processing: %s\n', file_name);
                load([parsed_data_path file_name]);
                
                % Run for the first configuration / the first time CVX
                % parses the problem and returns `data` and `cones` which
                % are subsequently passed to SCS directly (without the
                % overhead of parsing the problem).
                config = obj.config_cache(1);
                try
                    [~, sol_info, data, cones] = solve_maros_meszaros(sif_object, config);
                    idx_solved_problem = idx_solved_problem + 1;
                catch
                    % CVX could not parse this problem!
                    continue
                end
                
                [nvar, neq, nineq, ~, ~, nfix] = sif_object.size();
                obj.problem_metadata{idx_solved_problem} = ...
                    struct('nvar',nvar,'neq',neq,'nineq',nineq,'nfix',nfix, ...
                    'name', sif_object.get_problem_name);
                obj.info_cache(idx_solved_problem, 1) = sol_info;
                
                if obj.verbose > 0,
                    fprintf(obj.stream_fid, '| %16s ', sif_object.get_problem_name);
                    obj.print_info(sol_info);
                end
                
                for j = 2:num_configs
                    config = obj.config_cache(j);
                    [~,~,~,sol_info] = scs_indirect(data, cones, config.to_struct());
                    obj.info_cache(idx_solved_problem, j) = sol_info;
                    obj.print_info(sol_info);
                end
                
                if obj.verbose > 0, fprintf(obj.stream_fid, '|\n'); end
            end
            % trim
            obj.problem_metadata = obj.problem_metadata(1:idx_solved_problem);
            obj.info_cache = obj.info_cache(1:idx_solved_problem,:);
        end % END of `run`
        
        
        function print_txt(obj)
            obj.print_header();
            [n_problems, n_solvers] = size(obj.info_cache);
            for i = 1:n_problems
                meta = obj.problem_metadata{i};
                fprintf(obj.stream_fid,'| %19s ', meta.name);
                for j = 1:n_solvers,
                    obj.print_info(obj.info_cache(i,j));
                end
                fprintf(obj.stream_fid, '\n');
            end
        end
        
        function print_html(obj, prefix)
            if nargin<=1, prefix = ' * '; end
            fid = obj.stream_fid;
            fprintf(fid, '%s<div class="mm_table_container">\n', prefix);
            fprintf(fid, '%s <table class="doxtable" style="font-size:14px;">\n', prefix);
            print_html_table_header(obj, prefix);
            for i = 1:size(obj.info_cache, 1),
                obj.print_html_result_row(prefix, i)
            end
            fprintf(fid, '%s </table>\n', prefix);
            fprintf(fid, '%s</div>\n', prefix);
        end
        
    end % END of public methods
end
