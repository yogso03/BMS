
/*
 * Balancing_Logic.h
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

#ifndef RTW_HEADER_Balancing_Logic_h_
#define RTW_HEADER_Balancing_Logic_h_
#ifndef Balancing_Logic_COMMON_INCLUDES_
#define Balancing_Logic_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Balancing_Logic_COMMON_INCLUDES_ */

#include "Balancing_Logic_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  int8_T DataTypeConversion1[96];      /* '<S2>/Data Type Conversion1' */
  boolean_T DataTypeConversion;        /* '<S14>/Data Type Conversion' */
  boolean_T DataTypeConversion_bxjm;   /* '<S10>/Data Type Conversion' */
  boolean_T RelationalOperator[96];    /* '<S4>/Relational Operator' */
  boolean_T Compare;                   /* '<S8>/Compare' */
} B_Balancing_Logic_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S14>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S10>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_fvxh;     /* '<S7>/Unit Delay' */
  boolean_T DelayInput1_DSTATE;        /* '<S17>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_dd5i;   /* '<S13>/Delay Input1' */
} DW_Balancing_Logic_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Conversion;             /* '<S12>/Conversion' */
  const real_T Conversion_d5or;        /* '<S16>/Conversion' */
} ConstB_Balancing_Logic_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  BMS_State_Enum BMS_State;            /* '<Root>/BMS_State' */
  Sensors Sensors_pnae;                /* '<Root>/Sensors' */
} ExtU_Balancing_Logic_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T BalCmd[96];                /* '<Root>/BalCmd' */
} ExtY_Balancing_Logic_T;

/* Real-time Model Data Structure */
struct tag_RTM_Balancing_Logic_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Balancing_Logic_T Balancing_Logic_B;

has popup