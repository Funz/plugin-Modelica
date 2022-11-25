@echo off

if not %~x1 equals .mos (
  set "model="
  for /F "delims=" %%I in ('findstr /N /R /C:"model " "%LogFile%"') do set "model=%%I"
  for /F "tokens=2" %%a in ("%string%") do set "model=%%a"
(
loadModel(Modelica);
loadFile("%1%");
simulate(%model%, stopTime=1,tolerance=0.001,outputFormat="csv");
) > %1%.mos
  start /b omc %1%.mos > %1%.moo
) else (
  start /b omc %1% > %1%.moo
)

for /F "TOKENS=1,2,*" %%a in ('tasklist /FI "IMAGENAME eq omc.exe"') do set PID_OMC=%%b
echo %PID_OMC% > PID

:loop
tasklist | find " %PID_OMC% " >nul
if not errorlevel 1 (
    timeout /t 1 >nul
    goto :loop
)

del /f PID

findstr "Failed" *.moo
if  errorlevel 1 (
    exit 1
)