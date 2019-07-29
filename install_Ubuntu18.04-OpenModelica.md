# Install OpenModelica release on Ubuntu 18.04

ref: https://openmodelica.org/download/download-linux

## Add to deb sources

for deb in deb deb-src; do echo "$deb http://build.openmodelica.org/apt `lsb_release -cs` release"; done | sudo tee /etc/apt/sources.list.d/openmodelica.list

wget -q http://build.openmodelica.org/apt/openmodelica.asc -O- | sudo apt-key add - 

## Install

sudo apt update
sudo apt install openmodelica
sudo apt install omlib-.* # Installs optional Modelica libraries (most have not been tested with OpenModelica)
