
/*
 * Balancing_Logic_types.h
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

#ifndef RTW_HEADER_Balancing_Logic_types_h_
#define RTW_HEADER_Balancing_Logic_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_BMS_State_Enum_
#define DEFINED_TYPEDEF_FOR_BMS_State_Enum_

typedef enum {
  BMS_Standby = 0,                     /* Default value */
  BMS_Charging,
  BMS_Driving,
  BMS_Fault
} BMS_State_Enum;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Sensors_
#define DEFINED_TYPEDEF_FOR_Sensors_

typedef struct {
  real32_T Cell_Voltages[96];
  real32_T Pack_Voltage;
  real32_T Pack_Current;
  real32_T Cell_Temperatures[96];
  real32_T Vout_Chgr;
  real32_T Vout_Invtr;
} Sensors;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_Balancing_Logic_T RT_MODEL_Balancing_Logic_T;

#endif                                 /* RTW_HEADER_Balancing_Logic_types_h_ */
Definition
Variable defined in Balancing_Logic_types.h
has popup