#!/bin/bash

if [ ! ${1: -4} == ".mos" ]; then
  model=`grep "model" $1 | awk '{print $2}'`
  cat > $1.mos <<- EOM
loadModel(Modelica);
loadFile("$1");
simulate($model, stopTime=1,tolerance=0.001,outputFormat="csv");
EOM
  omc $1.mos > $1.moo 2>&1 &
else
  omc $1 > $1.moo 2>&1 &
fi

PID_OMC=$!
echo $PID_OMC >> PID #this will allow Funz to kill process if needed

wait $PID_OMC

rm -f PID

ERROR=`cat *.moo | grep "Failed"`
if [ ! "$ERROR" == "" ]; then
    echo $ERROR >&2
    exit 1
fi