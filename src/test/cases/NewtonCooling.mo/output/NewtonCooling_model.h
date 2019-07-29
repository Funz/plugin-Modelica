/* Simulation code for NewtonCooling generated by the OpenModelica Compiler OpenModelica 1.12.0~4-g83bba97. */
#if !defined(NewtonCooling__MODEL_H)
#define NewtonCooling__MODEL_H
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#include <string.h>

#include "NewtonCooling_functions.h"


extern void NewtonCooling_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void NewtonCooling_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int NewtonCooling_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int NewtonCooling_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int NewtonCooling_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int NewtonCooling_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int NewtonCooling_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int NewtonCooling_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int NewtonCooling_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int NewtonCooling_checkForAsserts(DATA *data, threadData_t *threadData);
extern int NewtonCooling_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int NewtonCooling_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int NewtonCooling_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern int NewtonCooling_checkForDiscreteChanges(DATA *data, threadData_t *threadData);
extern const char* NewtonCooling_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* NewtonCooling_relationDescription(int i);
extern void NewtonCooling_function_initSample(DATA *data, threadData_t *threadData);
extern int NewtonCooling_initialAnalyticJacobianG(void* data, threadData_t *threadData);
extern int NewtonCooling_initialAnalyticJacobianA(void* data, threadData_t *threadData);
extern int NewtonCooling_initialAnalyticJacobianB(void* data, threadData_t *threadData);
extern int NewtonCooling_initialAnalyticJacobianC(void* data, threadData_t *threadData);
extern int NewtonCooling_initialAnalyticJacobianD(void* data, threadData_t *threadData);
extern int NewtonCooling_functionJacG_column(void* data, threadData_t *threadData);
extern int NewtonCooling_functionJacA_column(void* data, threadData_t *threadData);
extern int NewtonCooling_functionJacB_column(void* data, threadData_t *threadData);
extern int NewtonCooling_functionJacC_column(void* data, threadData_t *threadData);
extern int NewtonCooling_functionJacD_column(void* data, threadData_t *threadData);
extern const char* NewtonCooling_linear_model_frame(void);
extern const char* NewtonCooling_linear_model_datarecovery_frame(void);
extern int NewtonCooling_mayer(DATA* data, modelica_real** res, short *);
extern int NewtonCooling_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int NewtonCooling_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int NewtonCooling_setInputData(DATA *data, const modelica_boolean file);
extern int NewtonCooling_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void NewtonCooling_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void NewtonCooling_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int NewtonCooling_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void NewtonCooling_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void NewtonCooling_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int NewtonCooling_inputNames(DATA* data, char ** names);
extern int NewtonCooling_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int NewtonCooling_functionLocalKnownVars(DATA*, threadData_t*);
extern int NewtonCooling_symbolicInlineSystem(DATA*, threadData_t*);

#include "NewtonCooling_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#endif

