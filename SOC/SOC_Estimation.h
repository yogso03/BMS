
/*
 * Code generation for system model 'SOC_Estimation'
 * For more details, see corresponding source file SOC_Estimation.c
 *
 */

#ifndef RTW_HEADER_SOC_Estimation_h_
#define RTW_HEADER_SOC_Estimation_h_
#ifndef SOC_Estimation_COMMON_INCLUDES_
#define SOC_Estimation_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SOC_Estimation_COMMON_INCLUDES_ */

#include "SOC_Estimation_types.h"

/* Block signals for system '<S3>/SOC EKF Estimator (Adaptive Kalman Filter)' */
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T TmpSignalConversionAtDelayInport2[3];
  real32_T Probe[2];                   /* '<S9>/Probe' */
  real32_T Product5[9];                /* '<S7>/Product5' */
  real32_T Sum[3];                     /* '<S7>/Sum' */
} B_CoreSubsys_SOC_Estimation_T;

#endif                                 /*SOC_Estimation_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S3>/SOC EKF Estimator (Adaptive Kalman Filter)' */
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Delay_DSTATE[3];            /* '<S8>/Delay' */
  real32_T UnitDelayP_DSTATE[9];       /* '<S6>/Unit Delay - P' */
  real32_T Divide_DWORK4;              /* '<S7>/Divide' */
  boolean_T icLoad;                    /* '<S8>/Delay' */
} DW_CoreSubsys_SOC_Estimation_T;

#endif                                 /*SOC_Estimation_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'SOC_Estimation' */
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Divide[96];                 /* '<S2>/Divide' */
  real32_T Assignment[9];              /* '<S9>/Assignment' */
  real32_T Sum1[9];                    /* '<S10>/Sum1' */
  real32_T fv[9];
  real32_T Transpose1[3];              /* '<S9>/Transpose1' */
  real32_T Product[3];                 /* '<S10>/Product' */
  real32_T Delay[3];                   /* '<S8>/Delay' */
  boolean_T Compare;                   /* '<S1>/Compare' */
  B_CoreSubsys_SOC_Estimation_T CoreSubsys[1];
                         /* '<S3>/SOC EKF Estimator (Adaptive Kalman Filter)' */
} B_SOC_Estimation_caua_T;

#endif                                 /*SOC_Estimation_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'SOC_Estimation' */
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T DiscreteTimeIntegrator_DSTATE[96];/* '<S2>/Discrete-Time Integrator' */
  DW_CoreSubsys_SOC_Estimation_T CoreSubsys[1];
                         /* '<S3>/SOC EKF Estimator (Adaptive Kalman Filter)' */
} DW_SOC_Estimation_fwu4_T;

#endif                                 /*SOC_Estimation_MDLREF_HIDE_CHILD_*/

#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_SOC_Estimation_T {
  const char_T **errorStatus;
};

has popup