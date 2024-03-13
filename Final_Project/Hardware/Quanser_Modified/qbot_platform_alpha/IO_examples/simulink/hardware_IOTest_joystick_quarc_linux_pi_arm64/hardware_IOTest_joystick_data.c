/*
 * hardware_IOTest_joystick_data.c
 *
 * Code generation for model "hardware_IOTest_joystick".
 *
 * Model version              : 4.5
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Sat Oct 28 16:16:08 2023
 *
 * Target selection: quarc_linux_pi_arm64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "hardware_IOTest_joystick.h"

/* Block parameters (default storage) */
P_hardware_IOTest_joystick_T hardware_IOTest_joystick_P = {
  /* Mask Parameter: ColorConstant_color
   * Referenced by: '<S5>/Constant'
   */
  { 0.0, 1.0, 1.0 },

  /* Mask Parameter: StreamClient_default_value
   * Referenced by: '<S2>/Stream Client'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0 },

  /* Mask Parameter: SliderGain_gain
   * Referenced by: '<S3>/Slider Gain'
   */
  -0.1,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/TurnRight'
   */
  0.0,

  /* Expression: .4
   * Referenced by: '<Root>/TurnLeft'
   */
  0.4,

  /* Expression: [0]
   * Referenced by: '<S8>/Enabled'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/Constant'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/Mode 1 - Body Mode'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S2>/user LED'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Hold'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S4>/Gain4'
   */
  -1.0,

  /* Expression: 0.3
   * Referenced by: '<Root>/Saturation2'
   */
  0.3,

  /* Expression: -0.3
   * Referenced by: '<Root>/Saturation2'
   */
  -0.3,

  /* Expression: 3.564
   * Referenced by: '<Root>/Saturation1'
   */
  3.564,

  /* Expression: -3.564
   * Referenced by: '<Root>/Saturation1'
   */
  -3.564,

  /* Expression: 1
   * Referenced by: '<S2>/Constant6'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S4>/Bias1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S4>/Gain5'
   */
  1.0,

  /* Computed Parameter: StreamClient_SndPriority
   * Referenced by: '<S2>/Stream Client'
   */
  0,

  /* Computed Parameter: StreamClient_RcvPriority
   * Referenced by: '<S2>/Stream Client'
   */
  0,

  /* Computed Parameter: StreamClient_SndSize
   * Referenced by: '<S2>/Stream Client'
   */
  1460U,

  /* Computed Parameter: StreamClient_RcvSize
   * Referenced by: '<S2>/Stream Client'
   */
  1460U,

  /* Computed Parameter: StreamClient_SndFIFO
   * Referenced by: '<S2>/Stream Client'
   */
  1000U,

  /* Computed Parameter: StreamClient_RcvFIFO
   * Referenced by: '<S2>/Stream Client'
   */
  1000U,

  /* Computed Parameter: GameController_BufferSize
   * Referenced by: '<S4>/Game Controller'
   */
  12U,

  /* Computed Parameter: GameController_AutoCenter
   * Referenced by: '<S4>/Game Controller'
   */
  false,

  /* Computed Parameter: GameController_Enabled
   * Referenced by: '<S4>/Game Controller'
   */
  true,

  /* Computed Parameter: StreamClient_Active
   * Referenced by: '<S2>/Stream Client'
   */
  false,

  /* Computed Parameter: StreamClient_Optimize
   * Referenced by: '<S2>/Stream Client'
   */
  2,

  /* Computed Parameter: StreamClient_Implementation
   * Referenced by: '<S2>/Stream Client'
   */
  2,

  /* Computed Parameter: MotorEnable_CurrentSetting
   * Referenced by: '<Root>/MotorEnable'
   */
  0U,

  /* Computed Parameter: GameController_ControllerNumber
   * Referenced by: '<S4>/Game Controller'
   */
  1U,

  /* Computed Parameter: QbotTurn_CurrentSetting
   * Referenced by: '<Root>/QbotTurn'
   */
  1U,

  /* Expression: uri_argument
   * Referenced by: '<S2>/Stream Client'
   */
  { 116U, 99U, 112U, 105U, 112U, 58U, 47U, 47U, 108U, 111U, 99U, 97U, 108U, 104U,
    111U, 115U, 116U, 58U, 49U, 56U, 56U, 56U, 56U, 0U },

  /* Computed Parameter: StreamClient_Endian
   * Referenced by: '<S2>/Stream Client'
   */
  1U
};
