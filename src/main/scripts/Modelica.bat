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
  omc %1%.mos
) else (
  omc %1%
)

