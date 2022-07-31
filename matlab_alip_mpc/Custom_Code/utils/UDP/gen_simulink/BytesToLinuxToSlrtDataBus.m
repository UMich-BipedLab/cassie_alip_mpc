%BYTESTOLINUXTOSLRTDATABUS Convert a byte array to a LinuxToSlrtDataBus bus.

% Copyright 2018 Agility Robotics
% Generated automatically by BusModule.generateUnpackingSystem

classdef BytesToLinuxToSlrtDataBus < ...
    matlab.System & ...
    matlab.system.mixin.Propagates %#codegen

  % PROTECTED METHODS =====================================================
  methods (Access = protected)
    % SYSTEM CLASS METHODS ================================================
    function setupImpl(~)
      %SETUPIMPL Initialize System object.
    end % setupImpl

    function bus = stepImpl(~, bytes)
      %STEPIMPL System output and state update equations.

      bus = struct(...
        'time', double(typecast(bytes(1:4), 'single')), ...
        'ufp_wrt_st', double(typecast(bytes(5:12), 'single')), ...
        'ufp_wrt_com', double(typecast(bytes(13:20), 'single')));
    end % stepImpl

    function resetImpl(~)
      %RESETIMPL Reset System object states.
    end % resetImpl

    function name_1 = getInputNamesImpl(~)
      %GETINPUTNAMESIMPL Return input port names for System block.
      name_1 = '';
    end % getInputNamesImpl

    function name_1 = getOutputNamesImpl(~)
      %GETOUTPUTNAMESIMPL Return output port names for System block.
      name_1 = '';
    end % getOutputNamesImpl

    % PROPAGATES CLASS METHODS ============================================
    function sz_1 = getOutputSizeImpl(~)
      %GETOUTPUTSIZEIMPL Get sizes of output ports.
      sz_1 = [1, 1];
    end % getOutputSizeImpl

    function dt_1 = getOutputDataTypeImpl(~)
      %GETOUTPUTDATATYPEIMPL Get data types of output ports.
      dt_1 = 'LinuxToSlrtDataBus';
    end % getOutputDataTypeImpl

    function cp_1 = isOutputComplexImpl(~)
      %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
      cp_1 = false;
    end % isOutputComplexImpl

    function flag_1 = isOutputFixedSizeImpl(~)
      %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
      flag_1 = true;
    end % isOutputFixedSizeImpl
  end % methods
end % classdef