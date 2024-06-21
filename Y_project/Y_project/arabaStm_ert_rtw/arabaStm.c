/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: arabaStm.c
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

#include "arabaStm.h"
#include "arabaStm_types.h"
#include "rtwtypes.h"
#include "stm_timer_ll.h"

/* Block states (default storage) */
DW_arabaStm_T arabaStm_DW;

/* Real-time model */
static RT_MODEL_arabaStm_T arabaStm_M_;
RT_MODEL_arabaStm_T *const arabaStm_M = &arabaStm_M_;

/* Forward declaration for local functions */
static void arabaStm_SystemCore_setup(stm32cube_blocks_PWMOutput_ar_T *obj);
static void arabaStm_SystemCore_setup(stm32cube_blocks_PWMOutput_ar_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<S6>/PWM Output' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S6>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel1(obj->TimerHandle, ENABLE_CH);
  enableTimerChannel2(obj->TimerHandle, ENABLE_CH);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S6>/PWM Output' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void arabaStm_step(void)
{
  GPIO_TypeDef * portNameLoc;
  uint32_T freq;

  /* MATLABSystem: '<S6>/PWM Output' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function2'
   */
  freq = checkFrequencyAndDutyCycleLimits(arabaStm_DW.obj.TimerHandle, 13500U);
  setFrequencyAccToInput(arabaStm_DW.obj.TimerHandle, freq);
  setDutyCycleInPercentageChannel1(arabaStm_DW.obj.TimerHandle, 80);
  setDutyCycleInPercentageChannel2(arabaStm_DW.obj.TimerHandle, 30);

  /* MATLABSystem: '<S8>/Digital Port Write' */
  portNameLoc = GPIOA;
  LL_GPIO_SetOutputPin(portNameLoc, 128U);
  LL_GPIO_ResetOutputPin(portNameLoc, 0U);

  /* MATLABSystem: '<S10>/Digital Port Write' */
  portNameLoc = GPIOA;
  LL_GPIO_SetOutputPin(portNameLoc, 1024U);
  LL_GPIO_ResetOutputPin(portNameLoc, 0U);
}

/* Model initialize function */
void arabaStm_initialize(void)
{
  /* Start for MATLABSystem: '<S6>/PWM Output' */
  arabaStm_DW.obj.isInitialized = 0;
  arabaStm_DW.obj.matlabCodegenIsDeleted = false;
  arabaStm_SystemCore_setup(&arabaStm_DW.obj);
}

/* Model terminate function */
void arabaStm_terminate(void)
{
  /* Terminate for MATLABSystem: '<S6>/PWM Output' */
  if (!arabaStm_DW.obj.matlabCodegenIsDeleted) {
    arabaStm_DW.obj.matlabCodegenIsDeleted = true;
    if ((arabaStm_DW.obj.isInitialized == 1) && arabaStm_DW.obj.isSetupComplete)
    {
      disableCounter(arabaStm_DW.obj.TimerHandle);
      disableTimerInterrupts(arabaStm_DW.obj.TimerHandle, 0);
      disableTimerChannel1(arabaStm_DW.obj.TimerHandle, ENABLE_CH);
      disableTimerChannel2(arabaStm_DW.obj.TimerHandle, ENABLE_CH);
    }
  }

  /* End of Terminate for MATLABSystem: '<S6>/PWM Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
