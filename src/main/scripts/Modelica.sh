#!/bin/bash

if [ ! ${1: -4} == ".mos" ]; then
  model=`grep "model" $1 | awk '{print $2}'`
  cat > $1.mos <<- EOM
loadModel(Modelica);
loadFile("$1");
simulate($model, stopTime=1,tolerance=0.001,outputFormat="csv");
EOM
  omc $1.mos
else
  omc $1
fi


