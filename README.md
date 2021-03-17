[![.github/workflows/ant.yml](https://github.com/Funz/plugin-Modelica/actions/workflows/ant.yml/badge.svg)](https://github.com/Funz/plugin-Modelica/actions/workflows/ant.yml)


# Funz plugin: Modelica

This plugin is dedicated to launch Modelica calculations from Funz.
It supports the following syntax and features:

  * Input
    * file type supported: *.R, any other format for resources
    * parameter syntax: 
      * variable syntax: `$[...]`
      * formula syntax: `@{...}`
      * comment char: `*`
    * example input file:
        ```
        // @ref http://book.xogeny.com/behavior/equations/physical/
        model NewtonCooling "An example of Newton's law of cooling"
          parameter Real T_inf=25 "Ambient temperature";
          parameter Real T0=90 "Initial temperature";
          parameter Real h=$(convection~0.7) "Convective cooling coefficient";
          parameter Real A=1.0 "Surface area";
          parameter Real m=0.1 "Mass of thermal capacitance";
          parameter Real c_p=1.2 "Specific heat";
          Real T "Temperature";
        initial equation
          T = T0 "Specify initial value for T";
        equation
          m*c_p*der(T) = h*A*(T_inf-T) "Newton's law of cooling";
        end NewtonCooling;
        ```
      * will identify input:
        * convection, expected to have default value 0.7

  * Output
    * file type supported: *_res.csv
    * read tima and any `Real` value declared
    * example output file:
        ```
        "time","T","der(T)"
        0,90,-270.8333333333334
        0.002,89.46058279809098,-268.5857616587124
        0.004,88.92563452032816,-266.3568105013674
        0.006,88.39509750379689,-264.1462395991537
        0.008,87.86896765991509,-261.9540319163129
        0.01,87.34710940753673,-259.779622531403
        0.012,86.82954766895662,-257.6231152873193
        0.014,86.31629194031989,-255.4845497513329
        0.016,85.80734222162654,-253.3639259234439
        0.018,85.30231030402804,-251.2596262667835
        0.02,84.80131576576396,-249.1721490240165
        0.022,84.30443157481071,-247.101798228378
        0.024,83.81165773116827,-245.0485738798678
        0.026,83.32299423483667,-243.0124759784861
        ...
        ```
        * will return output:
          * time=[0, 0.002, 0.004, 0.006, 0.008, 0.01, 0.012, 0.014, ...
          * T=[90.0,89.46058279809098,88.92563452032816,88.39509750379689, ...


![Analytics](https://ga-beacon.appspot.com/UA-109580-20/plugin-Modelica)
