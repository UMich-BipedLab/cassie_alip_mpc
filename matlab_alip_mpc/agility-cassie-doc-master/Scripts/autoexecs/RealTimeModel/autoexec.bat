doslfn
FOR %f in (D:\*.DAT) DO DEL %f
FOR %f in (D:\*.mldatx) DO DEL %f
COPY C:\*.mldatx D: /Y /V
IF EXIST C:\calib.bin COPY C:\calib.bin D: /Y /V
xpcboot slrtkrnl.rtb
