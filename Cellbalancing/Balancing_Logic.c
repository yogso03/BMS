
/*
 * Balancing_Logic.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Balancing_Logic".
 *
 * Model version              : 6.0
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 *
 */

#include "Balancing_Logic.h"
#include <math.h>
#include <string.h>
#include "Balancing_Logic_types.h"
#include "rtwtypes.h"

/* Block signals (default storage) */
B_Balancing_Logic_T Balancing_Logic_B;

/* Block states (default storage) */
DW_Balancing_Logic_T Balancing_Logic_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Balancing_Logic_T Balancing_Logic_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Balancing_Logic_T Balancing_Logic_Y;

/* Real-time model */
static RT_MODEL_Balancing_Logic_T Balancing_Logic_M_;
RT_MODEL_Balancing_Logic_T *const Balancing_Logic_M = &Balancing_Logic_M_;

/* Model output function */
void Balancing_Logic_output(void)
{
  int32_T i;
  int32_T maxV;
  real32_T minV;
  real32_T rtb_Conversion;
  boolean_T RelationalOperator;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport generated from: '<Root>/BMS_State'
   *  Logic: '<S2>/Logical Operator'
   *  RelationalOperator: '<S1>/Compare'
   *  UnitDelay: '<S7>/Unit Delay'
   */
  Balancing_Logic_B.DataTypeConversion = ((Balancing_Logic_U.BMS_State !=
    BMS_Driving) || Balancing_Logic_DW.UnitDelay_DSTATE_fvxh);

  /* Switch: '<S14>/Switch1' incorporates:
   *  Constant: '<S14>/Constant2'
   *  RelationalOperator: '<S17>/FixPt Relational Operator'
   *  Sum: '<S14>/Sum'
   *  UnitDelay: '<S14>/Unit Delay1'
   *  UnitDelay: '<S17>/Delay Input1'
   *
   * Block description for '<S17>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((int32_T)Balancing_Logic_B.DataTypeConversion > (int32_T)
      Balancing_Logic_DW.DelayInput1_DSTATE) {
    Balancing_Logic_DW.UnitDelay1_DSTATE = 4.0;
  }

  Balancing_Logic_DW.UnitDelay1_DSTATE -= Balancing_Logic_ConstB.Conversion_d5or;

  /* End of Switch: '<S14>/Switch1' */

  /* Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  /* Logic: '<S14>/Logical Operator3' incorporates:
   *  Constant: '<S15>/Constant'
   *  RelationalOperator: '<S15>/Compare'
   *  UnitDelay: '<S14>/Unit Delay1'
   */
  if (Balancing_Logic_B.DataTypeConversion &&
      (Balancing_Logic_DW.UnitDelay1_DSTATE < 0.0)) {
    /* MinMax: '<S4>/MinMax' incorporates:
     *  Inport: '<Root>/Sensors'
     *  RateTransition: '<S2>/Rate Transition1'
     */
    minV = Balancing_Logic_U.Sensors_pnae.Cell_Voltages[0];
    for (i = 0; i < 95; i++) {
      minV = fminf(minV, Balancing_Logic_U.Sensors_pnae.Cell_Voltages[i + 1]);
    }

    /* DataTypeConversion: '<S9>/Conversion' incorporates:
     *  Constant: '<S4>/Constant'
     */
    rtb_Conversion = (real32_T)0.01;
    for (i = 0; i < 96; i++) {
      /* RelationalOperator: '<S4>/Relational Operator' incorporates:
       *  Inport: '<Root>/Sensors'
       *  MinMax: '<S4>/MinMax'
       *  RateTransition: '<S2>/Rate Transition1'
       *  Sum: '<S4>/Sum1'
       */
      RelationalOperator = (Balancing_Logic_U.Sensors_pnae.Cell_Voltages[i] -
                            minV >= rtb_Conversion);
      Balancing_Logic_B.RelationalOperator[i] = RelationalOperator;

      /* DataTypeConversion: '<S4>/Data Type Conversion' */
      Balancing_Logic_B.DataTypeConversion1[i] = (int8_T)RelationalOperator;
    }

    /* MinMax: '<S4>/MinMax1' */
    maxV = Balancing_Logic_B.DataTypeConversion1[0];
    for (i = 0; i < 95; i++) {
      maxV = (int32_T)fmax(maxV, Balancing_Logic_B.DataTypeConversion1[i + 1]);
    }

    /* RelationalOperator: '<S8>/Compare' incorporates:
     *  Constant: '<S8>/Constant'
     *  MinMax: '<S4>/MinMax1'
     */
    Balancing_Logic_B.Compare = (maxV > 0.0);
  }

  /* End of Logic: '<S14>/Logical Operator3' */
  /* End of Outputs for SubSystem: '<S2>/Enabled Subsystem' */

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  Balancing_Logic_B.DataTypeConversion_bxjm = Balancing_Logic_B.Compare;

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  RelationalOperator: '<S13>/FixPt Relational Operator'
has popup