@ECHO off
doslfn
IF NOT EXIST C:\LOGS MKDIR C:\LOGS

REM Delete the bogus 1 GB files reserved by Simulink Real-Time's logging system
REM Add prefixes for any additional log file types here
SET ext=DAT
SET prefix=D:\CASSIE
CALL clrlastf
SET prefix=D:\USER
CALL clrlastf
SET prefix=D:\UDP
CALL clrlastf

REM Copy log files and other data to the USB drive
FOR %f in (D:\*.DAT) DO COPY %f C:\LOGS /Y /V
FOR %f in (D:\*.DAT) DO DEL %f
FOR %f in (D:\*.txt) DO COPY %f C:\LOGS /Y /V
FOR %f in (D:\*.txt) DO DEL %f
FOR %f in (D:\*.bin) DO COPY %f C:\LOGS /Y /V

REM Beep continuously to indicate completion
:loop
beep
goto loop
