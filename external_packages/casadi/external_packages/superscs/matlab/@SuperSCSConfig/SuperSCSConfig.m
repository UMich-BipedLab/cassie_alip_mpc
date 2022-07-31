classdef SuperSCSConfig < handle
    %SuperSCSConfig is a class to facilitate the construction of SuperSCS
    %configuration.
    %
    %Examples:
    %solver_options = SuperSCSConfig.scsConfig('tolerance', 1e-4)
    %solver_options = SuperSCSConfig.broydenConfig('memory', 80, 'k0', 1)
    %solver_options = SuperSCSConfig.andersonConfig('memory', 15)
    %
    %See also
    %scsConfig, broydenConfig, andersonConfig, fprDirectionConfig,
    %douglasRachfordConfig


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
    
    properties(Access = public)
        solver = 'scs';
        tolerance;
        alpha;
        beta;
        c1;
        c_bl;
        cg_rate;
        direction;
        do_super_scs;
        k0;
        k1;
        k2;
        ls;
        memory;
        normalize;
        rho_x;
        scale;
        sigma;
        sse;
        thetabar;
        verbose;
        do_record_progress;
        use_indirect;
        max_iters;
        max_time_milliseconds;
        warm_start;
        dumpfile;
    end
    
    methods (Access = private)
        function obj = SuperSCSConfig()
        end
    end
    
    methods (Access = public)
        function dir_name = get_direction_name(obj)
            if ~obj.do_super_scs
                dir_name = 'None';
                return;
            end
            switch obj.direction
                case 100
                    dir_name = 'Broyden';
                case 150
                    dir_name = 'Anderson';
                case 200
                    dir_name = 'FPR';
                otherwise
                    dir_name = 'Undefined';
            end
        end
        
        function config_id = get_config_id(obj)
            if ~obj.do_super_scs
                config_id = 'SCS';
                return;
            end
            if ~(obj.k0 || obj.k1 || obj.k2)
                config_id = 'DR';
                return;
            end
            config_id = sprintf('%s, mem:%d', obj.get_direction_name(), ...
                obj.memory); 
            
        end
        
        function obj_as_struct = to_struct(obj)
            obj_as_struct = struct();
            obj_props = properties(obj);
            for i=1:numel(obj_props)
                obj_as_struct.(obj_props{i}) = obj.(obj_props{i});
            end
            obj_as_struct.eps = obj.tolerance;
        end
    end
    
    methods (Static, Access = public)
        
        function ops = mosekConfig(varargin)
            ops = SuperSCSConfig.profile_ops(0);
            ops.solver = 'mosek';
            ops = SuperSCSConfig.set_config_parameters(ops, varargin);
        end
        
        function ops = sedumiConfig(varargin)
            ops = SuperSCSConfig.profile_ops(0);
            ops.solver = 'sedumi';
            ops = SuperSCSConfig.set_config_parameters(ops, varargin);
        end
        
        function ops = sdpt3Config(varargin)
            ops = SuperSCSConfig.profile_ops(0);
            ops.solver = 'sdpt3';
            ops = SuperSCSConfig.set_config_parameters(ops, varargin);
        end
        
        function ops = douglasRachfordConfig(varargin)
            %SCSCONFIG returns the standard SCS configuration
            %
            %Syntax:
            %options = SuperSCSConfig.scsConfig(parameter_name, ...
            %   parameter_value, ...)
            %
            %Example:
            %solver_options = SuperSCSConfig.scsConfig('tolerance', 1e-4)
            %
            %See also
            %scsConfig
            ops = SuperSCSConfig.profile_ops(0);
            ops.k0 = 0;
            ops.k1 = 0;
            ops.k2 = 0;
            ops.ls = 0;
            ops.direction = 200;
            ops = SuperSCSConfig.set_config_parameters(ops, varargin);
        end
        
        function ops = scsConfig(varargin)
            %SCSCONFIG returns the SCS configuration using the legacy SCS
            %implementation
            %
            %See also
            %douglasRachfordConfig
            ops = SuperSCSConfig.profile_ops(0);
            ops.do_super_scs = 0;
            ops = SuperSCSConfig.set_config_parameters(ops, varargin);
        end
        
        function ops = broydenConfig(varargin)
            %BROYDENCONFIG returns the SuperSCS configuration with
            %Broyden's directions with memory equal to 50, k1 and k2
            %activated and k0 not activated.
            %
            %See also
            %andersonConfig, fprDirectionConfig
            ops = SuperSCSConfig.profile_ops();
            ops.direction = 100;
            ops.memory = 50;
            ops.k0 = 0;
            ops = SuperSCSConfig.set_config_parameters(ops, varargin);
        end
        
        function ops = andersonConfig(varargin)
            %ANDERSONCONFIG returns the SuperSCS configuration with
            %Anderson's directions with memory equal to 10 and k0, k1 and k2
            %all activated
            %
            %See also
            %broydenConfig, fprDirectionConfig
            ops = SuperSCSConfig.profile_ops();
            ops.direction = 150;
            ops.memory = 10;
            ops = SuperSCSConfig.set_config_parameters(ops, varargin);
        end
        
        function ops = fprDirectionConfig(varargin)
            %FPRDIRECTIONCONFIG returns the SuperSCS configuration using
            %the FPR as a direction and with all k0, k1 and k2 steps
            %activated.
            %
            %See also
            %broydenConfig, andersonConfig
            ops = SuperSCSConfig.profile_ops();
            ops.direction = 200;
            ops = SuperSCSConfig.set_config_parameters(ops, varargin);
        end
        
    end
    
    methods (Static, Access = private)
        options = profile_ops(do_super_scs);
        
        function options = set_config_parameters(varargin)
            %SET_CONFIG_PARAMETERS has the following syntax:
            %
            %options = set_config_parameters(options, 'param_name', value)
            narginchk(1,50);
            options = varargin{1};
            parameter_override = varargin{2};
            if nargin >= 2 && mod(length(parameter_override),2)
                error('SuperSCSConfig:illegalCall',...
                    'provide SuperSCS configuration parameters in pairs')
            end
            for i=1:length(parameter_override)/2
                param_name = parameter_override{2*i-1};
                param_value = parameter_override{2*i};
                options.(param_name)= param_value;
            end
        end
    end
    
end
