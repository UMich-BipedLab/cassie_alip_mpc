%CODEGENMODULE Code generation module

% Copyright 2018 Agility Robotics

%#ok<*AGROW>

classdef CodegenModule
  
  % PUBLIC METHODS =============================================================
  methods (Access = public)
    function obj = CodegenModule
      %CODEGENMODULE Construct code generation module
      
      % Set code generation settings
      coder.allowpcode('plain');
    end % UdpPdModule
  end % public methods
  
  % STATIC METHODS =============================================================
  methods (Static = true)
    function generateSystemCode(sysName, inTypes, outTypes, inCalls, outDir, option)
      %GENERATESYSTEMCODE Generates C code for a Matlab System
      
      % If an output directory is not provided, generate files in the current
      % directory
      if nargin < 5
        outDir = ".";
      end % if
      
      % Create outdir if it doesn't exist
      [~, ~, ~] = mkdir(char(outDir));
      
      % Parse options
      standalone = false;
      if nargin > 5
        switch option
          case 'standalone'
            % Put all necessary struct definitions in the header
            standalone = true;
          otherwise
            error('Unrecognized option: %s', option);
        end % switch
      end % if
      
      % Create temporary directory for matlab files
      fileDir = tempname;
      mkdir(fileDir);
      cleanupFileDir = onCleanup(@() rmdir(fileDir, 's'));
      
      % Create temporary directory for codegen files
      codegenDir = tempname;
      mkdir(codegenDir);
      cleanupCodegenDir = onCleanup(@() rmdir(codegenDir, 's'));
      
      % Convert CamelCase to lowercase_with_underscores
      cFunPrefix = lower(strip(regexprep(sysName, '([A-Z])', '_$1'), '_'));
      cTypeName = cFunPrefix + "_t";
      
      % Generate entry-point function for the system
      inNames = "in" + (1:numel(inTypes));
      outNames = "out" + (1:numel(outTypes));
      entryPointFun = join([ ...
        "function [" + strjoin(outNames, ", ") + "] = codegenFun(" + strjoin([inNames outNames], ", ") + ")"
        "  sys = " + sysName + ";"
        "  " + cFunPrefix + "_setup(sys);"
        "  [" + strjoin(outNames, ", ") + "] = " + cFunPrefix + "_step(" + join(["sys" inNames], ", ") + ");"
        "end"
        "function " + cFunPrefix + "_setup(sys)"
        "  coder.inline('never');"
        "  sys.setup(" + strjoin(inCalls, ", ") + ");"
        "end"
        "function [" + strjoin(outNames, ", ") + "] = " + cFunPrefix + "_step(" + join(["sys" inNames], ", ") + ")"
        "  coder.inline('never');"
        "  coder.ceval('pass_entire_struct', coder.rref(" + inNames' + "));"
        "  [" + strjoin(outNames, ", ") + "] = sys.step(" + strjoin(inNames, ", ") + ");"
        "  coder.ceval('pass_entire_struct', coder.rref(" + outNames' + "));"
        "end"], newline);
      
      fid = fopen(fileDir + "/codegenFun.m", 'w');
      fprintf(fid, '%s', entryPointFun);
      fclose(fid);
      
      % Configure codegen
      cfg = coder.config('lib', 'ecoder', false);
      cfg.ReportPotentialDifferences = false;
      cfg.GenerateComments = false;
      cfg.FilePartitionMethod = 'SingleFile';
      cfg.GenCodeOnly = true;
      cfg.SupportNonFinite = false;
      cfg.TargetLangStandard = 'C99 (ISO)';
      
      % Run codegen
      warning('off', 'Coder:common:NoShortPathName');
      codegen(...
        '-config', cfg, '-d', codegenDir, '-I', fileDir, 'codegenFun', ...
        '-args', [inTypes(:); outTypes(:)]);
      warning('on', 'Coder:common:NoShortPathName');
      
      % Function for finding text starting and ending with the specified
      % substrings, and excluding specific characters
      function s = findSnippetExcl(str, pre, post, excl)
        % Find the first substring starting and ending with specified patterns
        s = regexp(str, "(" + pre + "[^" + excl + "]*?" + post + ")", "match");
        if numel(s) > 1
          s = s(1);
        end % if
      end % findSnippetExcl
      
      % Shorthand for finding text snippets with no excluded characters
      findSnippet = @(str, pre, post) findSnippetExcl(str, pre, post, "");
      
      % Read codegen implementation file
      f = fopen(codegenDir + "/codegenFun.c", "rt");
      code = string(fread(f, inf, "uint8=>char")');
      fclose(f);
      
      % Use C99 bool
      code = code.replace("boolean_T", "bool");
      
      % Read special type definition file
      f = fopen(codegenDir + "/rtwtypes.h", "rt");
      rtwtypes = string(fread(f, inf, "uint8=>char")');
      fclose(f);
      
      header = join([
        "#include """ + cFunPrefix + ".h"""
        "#include <math.h>"
        "#include <string.h>"
        "#include <stdlib.h>"
        ""
        rtwtypes
        "typedef struct " + sysName + " " + sysName + ";"
        ""], newline);
      
      % Put necessary headers in the source file
      code = code.replace("#include ""codegenFun.h""", header);
      
      % Remove calls to pass_entire_struct used to make sure that codegen passes
      % an entire struct to functions instead of individual elements
      code = regexprep(code, "pass_entire_struct\(\w+\);", "");
      
      % Make system type into a tagged struct instead of a typedef
      structdef = findSnippetExcl(code, "typedef struct {", "} " + sysName + ";", "}");
      structdefTag = structdef.replace("typedef struct", "struct " + sysName);
      structdefTag = structdefTag.replace(" " + sysName + ";", ";");
      code = code.replace(structdef, structdefTag);
      
      % Remove fake entry point function needed for codegen, along with initialize and terminate
      entryPoint = findSnippet(code, "void codegenFun", newline + "}");
      code = code.replace(entryPoint, "");
      code = code.replace(findSnippet(code, "void codegenFun_initialize", newline + "}"), "");
      code = code.replace(findSnippet(code, "void codegenFun_terminate", newline + "}"), "");
      code = code.strip();
      
      % Add new alloc, copy, and free functions
      code = code + join([
        ""
        ""
        cTypeName + "* " + cFunPrefix + "_alloc()"
        "{"
        "    " + cTypeName + " *sys = malloc(sizeof (" + cTypeName + "));"
        "    return sys;"
        "}"
        ""
        "void " + cFunPrefix + "_copy(" + cTypeName + " *dst, const " + cTypeName + " *src)"
        "{"
        "    *dst = *src;"
        "}"
        ""
        "void " + cFunPrefix + "_free(" + cTypeName + " *sys)"
        "{"
        "    free(sys);"
        "}"], newline);
      
      functionDecl = [
        cTypeName + "* " + cFunPrefix + "_alloc(void);"
        "void " + cFunPrefix + "_copy(" + cTypeName + " *dst, const " + cTypeName + " *src);"
        "void " + cFunPrefix + "_free(" + cTypeName + " *sys);"];
      
      % Get entry point function definitions and remove them from file
      exportedFunName = cFunPrefix + ["_setup", "_step"];
      for i = 1:numel(exportedFunName)
          def = findSnippet(code, "static void " + exportedFunName(i) + "(", ");");
          code = code.replace(def, "");
          code = code.replace("static void " + exportedFunName(i), ...
            "void " + exportedFunName(i));
          def = replace(def, "static void ", "void ");
          def = replace(def, sysName, cTypeName);
          functionDecl(end+1) = def;
      end % for
      
      % Write implementation file
      f = fopen(outDir + "/" + cFunPrefix + ".c", "w");
      fwrite(f, code);
      fclose(f);
      
      if standalone
        % Process type definition header
        types = CodegenModule.processTypeHeader(codegenDir + "/codegenFun_types.h");
      else
        % Include headers for each struct type
        types = string.empty;
        for i = 1:numel(inTypes)
          if isa(inTypes{i}, 'coder.StructType')
            types(end+1) =  "#include """ + inTypes{i}.TypeName + ".h""";
          end % if
        end % for
        for i = 1:numel(outTypes)
          if isa(outTypes{i}, 'coder.StructType')
            types(end+1) = "#include """ + outTypes{i}.TypeName + ".h""";
          end % if
        end % for
      end % if
      
      % Create module header
      guardDef = upper(cFunPrefix) + "_H";
      header = join([
        CodegenModule.getCopyrightNotice('isc')
        ""
        "#ifndef " + guardDef
        "#define " + guardDef
        ""
        types(:)
        ""
        "typedef struct " + sysName + " " + cTypeName + ";"
        ""
        "#ifdef __cplusplus"
        "extern ""C"" {"
        "#endif"
        ""
        functionDecl(:)
        ""
        "#ifdef __cplusplus"
        "}"
        "#endif"
        "#endif // " + guardDef
        ""], newline);
      
      % Write module header
      f = fopen(outDir + "/" + cFunPrefix + ".h", "w");
      fwrite(f, header);
      fclose(f);
    end % generateSystemCode
    
    function generatePackingCode(structure, outDir, varargin)
      %GENERARTEPACKINGCODE Generate C functions and structs for bus packing
      %
      % Syntax:
      %   BusModule.generatePackingCode(structure, [outDir], [options...]);
      %
      % where,
      %   structure = Structure corresponding to the bus
      %   outDir = (Optional) Output directory for generated file
      %   options = Additional options provided as strings
      %
      % The structure and all nested structures may optionally be annotated
      % with fields named 'cstructname_' specifying the name of the
      % generated C structure. All fields named with a training underscore
      % will be treated as annotations and omitted from the resulting C
      % code. If cstructname_ is not provided, default names will be used.
      %
      % The function will generate a C source file and several headers. These
      % files will be in outDir if provided, or in the current directory if
      % outDir is not provided.
      %
      % Example using ctsructname_ annotations:
      %   s.a1.x = 0;
      %   s.a2.x = 0;
      %   s.b.y = 0;
      %   s.c = 0;
      %   s.cstructname_ = 'parent_t';
      %   s.a1.cstructname_ = 'child_a_t';
      %   s.a2.cstructname_ = 'child_a_t';
      %   s.b.cstructname_ = 'child_b_t';
      %   BusModule.generatePackingCode(s);
      %
      % Additional options:
      %   'singlefloats': Convert doubles to singles when packing/unpacking
      
      % If cstructname_ is not provided for the top level struct, use 'bus'
      if ~isfield(structure, 'cstructnames_')
        structure.cstructnames_ = 'bus';
      end % if
      
      % Use the top level struct name as the file name
      busName = structure.cstructname_;
      
      % If an output directory is not provided, generate files in the current
      % directory
      if nargin < 2
        outDir = ".";
      end % if
      
      % Create outdir if it doesn't exist
      [~, ~, ~] = mkdir(char(outDir));
      
      % Create temporary directory for matlab files
      fileDir = tempname;
      mkdir(fileDir);
      cleanupFileDir = onCleanup(@() rmdir(fileDir, 's'));
      
      % Create temporary directory for codegen files
      codegenDir = tempname;
      mkdir(codegenDir);
      cleanupCodegenDir = onCleanup(@() rmdir(codegenDir, 's'));
      
      % Create packing function
      packfunbody = BusModule.getPackingExpression(structure, varargin{:});
      packfunbody(1) = "bytes = " + packfunbody(1);
      packfunbody(1:end-1) = packfunbody(1:end-1) + "...";
      packfunbody(end) = packfunbody(end) + ";";
      packfunname = "pack_" + busName;
      packfile = [...
        "function bytes = " + packfunname + "(bus)"
        "  " + packfunbody;
        "end"];
      
      packfile = packfile.join(newline);
      fid = fopen(fileDir + "/" + packfunname + ".m", 'w');
      fprintf(fid, '%s', packfile);
      fclose(fid);
      
      % Create unpacking function
      unpackfunbody = BusModule.getUnpackingExpression(structure, varargin{:});
      unpackfunbody(1) = "bus = " + unpackfunbody(1);
      unpackfunbody(1:end-1) = unpackfunbody(1:end-1) + "...";
      unpackfunbody(end) = unpackfunbody(end) + ";";
      unpackfunname = "unpack_" + busName;
      unpackfile = [...
        "function bus = " + unpackfunname + "(bytes)"
        "  " + unpackfunbody;
        "end"];
      
      unpackfile = unpackfile.join(newline);
      fid = fopen(fileDir + "/" + unpackfunname + ".m", 'w');
      fprintf(fid, '%s', unpackfile);
      fclose(fid);
      
      % Get size of packed struct in bytes
      bytesize = sum(BusModule.getPackingInfo(structure, varargin{:}));
      
      % Get the coder.StructType object corresponding to the structure
      structType = BusModule.getStructType(structure);
      
      % Configure codegen
      cfg = coder.config('lib', 'ecoder', false);
      cfg.ReportPotentialDifferences = false;
      cfg.EnableVariableSizing = false;
      cfg.SaturateOnIntegerOverflow = false;
      cfg.GenerateComments = false;
      cfg.FilePartitionMethod = 'SingleFile';
      cfg.GenCodeOnly = true;
      cfg.TargetLangStandard = 'C99 (ISO)';
      cfg.SupportNonFinite = false;
      cfg.MaxIdLength = 128;
      
      % Run codegen
      warning('off', 'Coder:common:NoShortPathName');
      codegen(...
        '-config', cfg, '-d', codegenDir, '-I', fileDir, '-o', busName, ...
        packfunname, '-args', {structType}, ...
        unpackfunname, '-args', {uint8(zeros(bytesize, 1))});
      warning('on', 'Coder:common:NoShortPathName');
      
      % Read implementation file
      f = fopen(codegenDir + "/" + busName + ".c", "rt");
      cfile = string(fread(f, inf, "uint8=>char")');
      fclose(f);
      
      % Remove initialize and terminate functions
      cfile = cfile.erase(sprintf('void %s_initialize(void)\n{\n}', busName));
      cfile = cfile.erase(sprintf('void %s_terminate(void)\n{\n}', busName));
      
      % Add string header for memcpy
      cfile = cfile.replace("#include <stddef.h>", ...
        "#include <stddef.h>" + newline + "#include <string.h>");
      
      % Write implementation file
      f = fopen(outDir + "/" + busName + ".c", "w");
      fwrite(f, cfile);
      fclose(f);

      % Create header
      guardDef = upper(busName);
      header = join([
        CodegenModule.getCopyrightNotice('isc')
        ""
        "#ifndef " + guardDef + "_H"
        "#define " + guardDef + "_H"
        ""
        "#define " + upper(busName) + "_PACKED_LEN " + bytesize
        ""
        CodegenModule.processTypeHeader(codegenDir + "/" + busName + "_types.h");
        ""
        "#ifdef __cplusplus"
        "extern ""C"" {"
        "#endif"
        ""
        "void pack_" + busName + "(const " + busName + " *bus, unsigned char *bytes);"
        "void unpack_" + busName + "(const unsigned char *bytes, " + busName + " *bus);"
        ""
        "#ifdef __cplusplus"
        "}"
        "#endif"
        "#endif // " + guardDef + "_H"
        ""], newline);
      
      % Write module header
      f = fopen(outDir + "/" + busName + ".h", "w");
      fwrite(f, header);
      fclose(f);
    end % generatePackingCode
    
    function types = processTypeHeader(filePath)
      %PROCESSTYPEHEADER Reads and normalizes a type header produced by codegen
      
      % Process type definition header
      f = fopen(filePath, "rt");
      types = string(fread(f, inf, "uint8=>char")');
      fclose(f);
      
      % Use C99 bool
      types = types.replace("boolean_T", "bool");
      
      % Save enumeration defines
      res = regexp(types, '(#define\s+\w+\s+\(\(\w+\)\d+\))', 'match');
      enumDefs = join(res, newline);
      
      % Remove preprocessor directives
      types = types.split(newline);
      types(types.startsWith("#")) = [];
      types = join(types, newline);
      types = types.replace([newline newline], newline);
      types = types.strip();
      
      % Add enumeration defines again
      types = join([...
        "#include <stdbool.h>"
        ""
        types
        ""
        enumDefs], newline);
    end % processTypeHeader
    
    function notice = getCopyrightNotice(license)
      %GETCOPYRIGHTNOTICE Get a copyright notice for a generated file
      if nargin < 1
        license = 'proprietary';
      end % if
      
      switch lower(license)
        case 'proprietary'
          notice = join([...
            "/*"
            " * Copyright (c) " + datestr(clock, 'yyyy') + " Agility Robotics"
            " */"]);
        case 'isc'
          notice = join([
            "/*"
            " * Copyright (c) " + datestr(clock, 'yyyy') + " Agility Robotics"
            " *"
            " * Permission to use, copy, modify, and distribute this software for any"
            " * purpose with or without fee is hereby granted, provided that the above"
            " * copyright notice and this permission notice appear in all copies."
            " *"
            " * THE SOFTWARE IS PROVIDED ""AS IS"" AND THE AUTHOR DISCLAIMS ALL WARRANTIES"
            " * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF"
            " * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR"
            " * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES"
            " * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN"
            " * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF"
            " * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE."
            " */"], newline);
        otherwise
          error('Invalid license type: %s', license);
      end % switch
    end % getCopyrightNotice
  end % static methods
end % classdef
