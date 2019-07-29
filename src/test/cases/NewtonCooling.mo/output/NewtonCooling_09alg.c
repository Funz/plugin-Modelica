/* Algebraic */
#include "NewtonCooling_model.h"

#ifdef __cplusplus
extern "C" {
#endif

/* for continuous time variables */
int NewtonCooling_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  
  data->simulationInfo->callStatistics.functionAlgebraics++;
  
  /* no Alg systems */

  NewtonCooling_function_savePreSynchronous(data, threadData);
  
  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
