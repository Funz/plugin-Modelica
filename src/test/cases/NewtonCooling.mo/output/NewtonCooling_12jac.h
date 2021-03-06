/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define NewtonCooling_INDEX_JAC_A 3
  int NewtonCooling_functionJacA_column(void* data, threadData_t *threadData);
  int NewtonCooling_initialAnalyticJacobianA(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* A */
#define $PTSeedA data->simulationInfo->analyticJacobians[3].seedVars[0]

#if defined(__cplusplus)
extern "C" {
#endif
  #define NewtonCooling_INDEX_JAC_B 2
  int NewtonCooling_functionJacB_column(void* data, threadData_t *threadData);
  int NewtonCooling_initialAnalyticJacobianB(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* B */

#if defined(__cplusplus)
extern "C" {
#endif
  #define NewtonCooling_INDEX_JAC_C 1
  int NewtonCooling_functionJacC_column(void* data, threadData_t *threadData);
  int NewtonCooling_initialAnalyticJacobianC(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* C */

#if defined(__cplusplus)
extern "C" {
#endif
  #define NewtonCooling_INDEX_JAC_D 0
  int NewtonCooling_functionJacD_column(void* data, threadData_t *threadData);
  int NewtonCooling_initialAnalyticJacobianD(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* D */


