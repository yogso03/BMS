
/*
 * SOC_Estimation_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "SOC_Estimation".
 *
 * Model version              : 6.0
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 *
 */

#ifndef RTW_HEADER_SOC_Estimation_private_h_
#define RTW_HEADER_SOC_Estimation_private_h_
#include "rtwtypes.h"
#include "SOC_Estimation_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const real32_T rtCP_pooled_4mXD8NQdYsPP[9];
extern const real32_T rtCP_pooled_nNXiljeuCp8K[9];
extern const real32_T rtCP_pooled_LaCqChqoBLQs[66];
extern const real32_T rtCP_pooled_CIWzbDOIXWQ1[11];
extern const real32_T rtCP_pooled_FDxeNUKoQ2YK[6];
extern const real32_T rtCP_pooled_W6AO4LnkSBaZ[66];
extern const real32_T rtCP_pooled_w8p8k27NW2q4[11];
extern const real32_T rtCP_pooled_xAAaY0W7iZ8A[6];
extern const real32_T rtCP_pooled_Ltt9KCAQ64X8[66];
extern const real32_T rtCP_pooled_jzRrR2DxVQbs[11];
extern const real32_T rtCP_pooled_Mz8dVIfFOct9[6];
extern const real32_T rtCP_pooled_CzqrtL6NLUu3[9];
extern const real32_T rtCP_pooled_8dSd4kEF1ofL[9];
extern const real32_T rtCP_pooled_XRzN0RDIWfO5[66];
extern const real32_T rtCP_pooled_WWpC8OBtDkEz[11];
extern const real32_T rtCP_pooled_jEnq9zBtxi8R[6];
extern const real32_T rtCP_pooled_OpX2jgbc8bdS[96];
extern const real32_T rtCP_pooled_xFjLK5rze97s[6];
extern const real32_T rtCP_pooled_LCVEZDI5ahz2[6];
extern const uint32_T rtCP_pooled_w97Qz5cyVfXl[2];

#define rtCP_Constant2_Value           rtCP_pooled_4mXD8NQdYsPP  /* Computed Parameter: rtCP_Constant2_Value
                                                                  * Referenced by: '<S7>/Constant2'
                                                                  */
#define rtCP_Constant_Value_phen       rtCP_pooled_nNXiljeuCp8K  /* Computed Parameter: rtCP_Constant_Value_phen
                                                                  * Referenced by: '<S9>/Constant'
                                                                  */
#define rtCP_uDLookupTabledOCV_tableData rtCP_pooled_LaCqChqoBLQs/* Computed Parameter: rtCP_uDLookupTabledOCV_tableData
                                                                  * Referenced by: '<S9>/2-D Lookup Table dOCV'
                                                                  */
#define rtCP_uDLookupTabledOCV_bp01Data rtCP_pooled_CIWzbDOIXWQ1 /* Expression: SOC_vec
                                                                  * Referenced by: '<S9>/2-D Lookup Table dOCV'
                                                                  */
#define rtCP_uDLookupTabledOCV_bp02Data rtCP_pooled_FDxeNUKoQ2YK /* Expression: T_vec
                                                                  * Referenced by: '<S9>/2-D Lookup Table dOCV'
                                                                  */
#define rtCP_uDLookupTableR1_tableData rtCP_pooled_W6AO4LnkSBaZ  /* Expression: R1_mat
                                                                  * Referenced by: '<S9>/2-D Lookup Table R1'
                                                                  */
has popup