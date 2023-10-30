
/*
 * Code generation for system model 'SOC_Estimation'
 *
 * Model                      : SOC_Estimation
 * Model version              : 6.0
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "SOC_Estimation.h"
#include "SOC_Estimation_types.h"
#include "rtwtypes.h"
#include <string.h>
#include <math.h>
#include "SOC_Estimation_private.h"
#include "look1_iflf_binlx.h"
#include "look2_iflf_binlx.h"

MdlrefDW_SOC_Estimation_T SOC_Estimation_MdlrefDW;

/* Block signals (default storage) */
B_SOC_Estimation_caua_T SOC_Estimation_B;

/* Block states (default storage) */
DW_SOC_Estimation_fwu4_T SOC_Estimation_DW;

/* System initialize for referenced model: 'SOC_Estimation' */
void SOC_Estimation_Init(void)
{
  int32_T i;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  memcpy(&SOC_Estimation_DW.DiscreteTimeIntegrator_DSTATE[0],
         rtCP_DiscreteTimeIntegrator_IC, 96U * sizeof(real32_T));

  /* SystemInitialize for Enabled SubSystem: '<Root>/UKF_EKF_1TC' */
  /* SystemInitialize for Iterator SubSystem: '<S3>/SOC EKF Estimator (Adaptive Kalman Filter)' */
  /* Start for Probe: '<S9>/Probe' */
  SOC_Estimation_B.CoreSubsys[0].Probe[0] = 0.1F;
  SOC_Estimation_B.CoreSubsys[0].Probe[1] = 0.0F;

  /* InitializeConditions for Delay: '<S8>/Delay' */
  SOC_Estimation_DW.CoreSubsys[0].icLoad = true;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay - P' */
  for (i = 0; i < 9; i++) {
    SOC_Estimation_DW.CoreSubsys[0].UnitDelayP_DSTATE[i] =
      rtCP_UnitDelayP_InitialCondition[i];
  }

  /* End of InitializeConditions for UnitDelay: '<S6>/Unit Delay - P' */
  /* End of SystemInitialize for SubSystem: '<S3>/SOC EKF Estimator (Adaptive Kalman Filter)' */
  /* End of SystemInitialize for SubSystem: '<Root>/UKF_EKF_1TC' */
}

/* Outputs for referenced model: 'SOC_Estimation' */
void SOC_Estimation(const BMS_State_Enum *rtu_BMS_State, const real32_T
                    rtu_Sensors_Cell_Voltages[96], const real32_T
                    *rtu_Sensors_Pack_Current, const real32_T
                    rtu_Sensors_Cell_Temperatures[96], SOC_Est *rty_SOC_Est)
{
  /* local block i/o variables */
  real32_T rtb_ImpAsg_InsertedFor_R0_at_inport_0;
  int32_T i;
  int32_T i_0;
  int32_T rtb_Sum1_tmp;
  real32_T RateTransition1;
  real32_T rtb_Assignment_0;
  real32_T rtb_Assignment_1;
  real32_T rtb_Assignment_2;
  real32_T rtb_MathFunction;
  real32_T rtb_Product_0;
  real32_T rtb_Sum1_0;
has popup