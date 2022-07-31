@ECHO off
REM clrlastf script
REM Set the environment variables 'prefix' and 'ext' before calling
REM Finds the last file in the sequence prefix{n}.ext and clears its contents
SET n=1
IF NOT EXIST %prefix%%n%.%ext% GOTO :eof
:clfloop
rpn /En %n% ++
IF EXIST %prefix%%n%.%ext% GOTO clfloop
rpn /En %n% --
COPY /Y NUL %prefix%%n%.%ext%
ECHO Cleared contents of %prefix%%n%.%ext%
:eof
