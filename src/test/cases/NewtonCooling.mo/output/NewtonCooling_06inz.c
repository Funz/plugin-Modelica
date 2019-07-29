/* Initialization */
#include "NewtonCooling_model.h"
#include "NewtonCooling_11mix.h"
#include "NewtonCooling_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void NewtonCooling_functionInitialEquations_0(DATA *data, threadData_t *threadData);


/*
 equation index: 1
 type: SIMPLE_ASSIGN
 T = T0
 */
void NewtonCooling_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* T STATE(1) */ = data->simulationInfo->realParameter[1];
  TRACE_POP
}

/*
 equation index: 2
 type: SIMPLE_ASSIGN
 der(T) = DIVISION(h * A * (T_inf - T), m * c_p)
 */
void NewtonCooling_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[1] /* der(T) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[4]) * ((data->simulationInfo->realParameter[0]) * (data->simulationInfo->realParameter[2] - data->localData[0]->realVars[0] /* T STATE(1) */)),(data->simulationInfo->realParameter[5]) * (data->simulationInfo->realParameter[3]),"m * c_p",equationIndexes);
  TRACE_POP
}
void NewtonCooling_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  NewtonCooling_eqFunction_1(data, threadData);
  NewtonCooling_eqFunction_2(data, threadData);
  TRACE_POP
}


int NewtonCooling_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  NewtonCooling_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int NewtonCooling_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int NewtonCooling_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

