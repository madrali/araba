/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: arabaStm_types.h
 *
 * Code generated for Simulink model 'arabaStm'.
 *
 * Model version                  : 5.102
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Jun 22 01:14:54 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_arabaStm_types_h_
#define RTW_HEADER_arabaStm_types_h_
#include "rtwtypes.h"
#include "stm_timer_ll.h"

/* Custom Type definition for MATLABSystem: '<S6>/PWM Output' */
#include "stm_timer_ll.h"
#include "stm_timer_ll.h"
#ifndef struct_tag_C3ug75osl8w3UN1OXa3ipB
#define struct_tag_C3ug75osl8w3UN1OXa3ipB

struct tag_C3ug75osl8w3UN1OXa3ipB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  TIM_Type_T* TimerHandle;
};

#endif                                 /* struct_tag_C3ug75osl8w3UN1OXa3ipB */

#ifndef typedef_stm32cube_blocks_PWMOutput_ar_T
#define typedef_stm32cube_blocks_PWMOutput_ar_T

typedef struct tag_C3ug75osl8w3UN1OXa3ipB stm32cube_blocks_PWMOutput_ar_T;

#endif                             /* typedef_stm32cube_blocks_PWMOutput_ar_T */

#ifndef struct_tag_S5MMpcz8vT0FlmhmEl4q5C
#define struct_tag_S5MMpcz8vT0FlmhmEl4q5C

struct tag_S5MMpcz8vT0FlmhmEl4q5C
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_S5MMpcz8vT0FlmhmEl4q5C */

#ifndef typedef_stm32cube_blocks_DigitalPortW_T
#define typedef_stm32cube_blocks_DigitalPortW_T

typedef struct tag_S5MMpcz8vT0FlmhmEl4q5C stm32cube_blocks_DigitalPortW_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortW_T */

/* Parameters (default storage) */
typedef struct P_arabaStm_T_ P_arabaStm_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_arabaStm_T RT_MODEL_arabaStm_T;

#endif                                 /* RTW_HEADER_arabaStm_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
