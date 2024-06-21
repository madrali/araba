/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: arabaStm.h
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

#ifndef RTW_HEADER_arabaStm_h_
#define RTW_HEADER_arabaStm_h_
#ifndef arabaStm_COMMON_INCLUDES_
#define arabaStm_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "main.h"
#endif                                 /* arabaStm_COMMON_INCLUDES_ */

#include "arabaStm_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_PWMOutput_ar_T obj; /* '<S6>/PWM Output' */
} DW_arabaStm_T;

/* Parameters (default storage) */
struct P_arabaStm_T_ {
  real32_T DataStoreMemory_InitialValue;
                             /* Computed Parameter: DataStoreMemory_InitialValue
                              * Referenced by: '<Root>/Data Store Memory'
                              */
};

/* Real-time Model Data Structure */
struct tag_RTM_arabaStm_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_arabaStm_T arabaStm_P;

/* Block states (default storage) */
extern DW_arabaStm_T arabaStm_DW;

/* Model entry point functions */
extern void arabaStm_initialize(void);
extern void arabaStm_step(void);
extern void arabaStm_terminate(void);

/* Real-time Model object */
extern RT_MODEL_arabaStm_T *const arabaStm_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'arabaStm'
 * '<S1>'   : 'arabaStm/MATLAB Function2'
 * '<S2>'   : 'arabaStm/motorlarin_pwm_frekansi'
 * '<S3>'   : 'arabaStm/sag_motor_enable'
 * '<S4>'   : 'arabaStm/sol_motor_enable'
 * '<S5>'   : 'arabaStm/motorlarin_pwm_frekansi/ECSoC'
 * '<S6>'   : 'arabaStm/motorlarin_pwm_frekansi/ECSoC/ECSimCodegen'
 * '<S7>'   : 'arabaStm/sag_motor_enable/ECSoC'
 * '<S8>'   : 'arabaStm/sag_motor_enable/ECSoC/ECSimCodegen'
 * '<S9>'   : 'arabaStm/sol_motor_enable/ECSoC'
 * '<S10>'  : 'arabaStm/sol_motor_enable/ECSoC/ECSimCodegen'
 */
#endif                                 /* RTW_HEADER_arabaStm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
