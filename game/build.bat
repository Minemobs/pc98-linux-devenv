@echo off
make.exe > D:\LOGS\MAKE-LOG.TXT
if errorlevel 1 goto failed
echo 0 > D:\STATUS.TXT
goto done

:failed
echo 1 > D:\STATUS.TXT

:done
exit
