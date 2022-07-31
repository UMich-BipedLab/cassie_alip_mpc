%SLRTTOLINUXDATABUSTOBYTES Convert a SlrtToLinuxDataBus bus to a byte array.

% Copyright 2018 Agility Robotics
% Generated automatically by BusModule.generatePackingSystem

classdef SlrtToLinuxDataBusToBytes < ...
    matlab.System & ...
    matlab.system.mixin.Propagates %#codegen

  % PROTECTED METHODS =====================================================
  methods (Access = protected)
    % SYSTEM CLASS METHODS ================================================
    function setupImpl(~)
      %SETUPIMPL Initialize System object.
    end % setupImpl

    function bytes = stepImpl(~, bus)
      %STEPIMPL System output and state update equations.

      bytes = [...
        typecast(single(bus.time)', 'uint8')'; ...
        typecast(single(bus.s)', 'uint8')'; ...
        typecast(single(bus.xlip_current)', 'uint8')'; ...
        typecast(single(bus.stance_leg)', 'uint8')'; ...
        typecast(single(bus.zH)', 'uint8')'; ...
        typecast(single(bus.Ts)', 'uint8')'; ...
        typecast(single(bus.Tr)', 'uint8')'; ...
        typecast(single(bus.leg_width)', 'uint8')'; ...
        typecast(single(bus.Lx_offset)', 'uint8')'; ...
        typecast(single(bus.Ly_des)', 'uint8')'; ...
        typecast(single(bus.kx)', 'uint8')'; ...
        typecast(single(bus.ky)', 'uint8')'; ...
        typecast(single(bus.mu)', 'uint8')'];
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
      sz_1 = [64, 1];
    end % getOutputSizeImpl

    function dt_1 = getOutputDataTypeImpl(~)
      %GETOUTPUTDATATYPEIMPL Get data types of output ports.
      dt_1 = 'uint8';
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