/*
 * qbot_driver_v_1_22_data.c
 *
 * Code generation for model "qbot_driver_v_1_22".
 *
 * Model version              : 15.26
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Sat Jan 20 13:14:49 2024
 *
 * Target selection: quarc_linux_pi_arm64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "qbot_driver_v_1_22.h"

/* Block parameters (default storage) */
P_qbot_driver_v_1_22_T qbot_driver_v_1_22_P = {
  /* Mask Parameter: ColorConstant2_color
   * Referenced by: '<S24>/Constant'
   */
  { 0.0, 1.0, 0.0 },

  /* Mask Parameter: ColorConstant1_color
   * Referenced by: '<S23>/Constant'
   */
  { 0.0, 0.0, 1.0 },

  /* Mask Parameter: ColorConstant_color
   * Referenced by: '<S22>/Constant'
   */
  { 1.0, 1.0, 1.0 },

  /* Mask Parameter: ColorConstant3_color
   * Referenced by: '<S25>/Constant'
   */
  { 1.0, 0.0, 1.0 },

  /* Mask Parameter: ColorConstant4_color
   * Referenced by: '<S26>/Constant'
   */
  { 1.0, 1.0, 0.0 },

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S10>/Constant'
   */
  0.0,

  /* Mask Parameter: CompareToConstant3_const
   * Referenced by: '<S11>/Constant'
   */
  2.0,

  /* Mask Parameter: CompareToConstant2_const_e
   * Referenced by: '<S49>/Constant'
   */
  0.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S62>/Constant'
   */
  0.78539816339744828,

  /* Mask Parameter: CompareToConstant_const_l
   * Referenced by: '<S63>/Constant'
   */
  0.78539816339744828,

  /* Mask Parameter: CompareToConstant2_const_b
   * Referenced by: '<S50>/Constant'
   */
  0.0,

  /* Mask Parameter: CompareToConstant_const_j
   * Referenced by: '<S19>/Constant'
   */
  2.0,

  /* Mask Parameter: StreamServer_default_value
   * Referenced by: '<S1>/Stream Server'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Mask Parameter: Threshold_duration
   * Referenced by: '<S17>/duration'
   */
  1.0,

  /* Mask Parameter: Threshold2_duration
   * Referenced by: '<S32>/duration'
   */
  0.75,

  /* Mask Parameter: Threshold_duration_p
   * Referenced by: '<S31>/duration'
   */
  15.0,

  /* Mask Parameter: Threshold3_duration
   * Referenced by: '<S33>/duration'
   */
  2.0,

  /* Mask Parameter: Threshold_threshold
   * Referenced by: '<S17>/threshold'
   */
  0.0,

  /* Mask Parameter: Threshold2_threshold
   * Referenced by: '<S32>/threshold'
   */
  0.5,

  /* Mask Parameter: Threshold_threshold_d
   * Referenced by: '<S31>/threshold'
   */
  0.5,

  /* Mask Parameter: Threshold3_threshold
   * Referenced by: '<S33>/threshold'
   */
  0.5,

  /* Mask Parameter: DetectChange_vinit
   * Referenced by: '<S12>/Delay Input1'
   */
  0.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S9>/Constant'
   */
  0,

  /* Mask Parameter: HILRead_analog_channels
   * Referenced by: '<S2>/HIL Read'
   */
  { 0U, 1U, 2U, 3U },

  /* Mask Parameter: HILRead_digital_channels
   * Referenced by: '<S2>/HIL Read'
   */
  { 28U, 29U, 32U, 33U, 30U, 31U, 34U, 35U, 39U, 40U },

  /* Mask Parameter: HILWrite_digital_channels
   * Referenced by: '<S2>/HIL Write'
   */
  { 28U, 29U },

  /* Mask Parameter: HILRead_encoder_channels
   * Referenced by: '<S2>/HIL Read'
   */
  { 0U, 1U },

  /* Mask Parameter: HILRead_other_channels
   * Referenced by: '<S2>/HIL Read'
   */
  { 3000U, 3001U, 3002U, 4000U, 4001U, 4002U, 14000U, 14001U, 13000U },

  /* Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S2>/HIL Write'
   */
  { 11000U, 11001U, 11002U, 11003U, 11004U, 11005U },

  /* Mask Parameter: HILWrite_pwm_channels
   * Referenced by: '<S2>/HIL Write'
   */
  { 0U, 1U },

  /* Mask Parameter: StopwithMessage3_message_icon
   * Referenced by: '<S38>/Show Message on Host'
   */
  1,

  /* Mask Parameter: StopwithMessage1_message_icon
   * Referenced by: '<S40>/Show Message on Host'
   */
  2,

  /* Mask Parameter: StopwithMessage3_message_icon_e
   * Referenced by: '<S42>/Show Message on Host'
   */
  1,

  /* Mask Parameter: StopwithMessage1_message_icon_g
   * Referenced by: '<S44>/Show Message on Host'
   */
  2,

  /* Mask Parameter: CompareToConstant_const_f
   * Referenced by: '<S8>/Constant'
   */
  2U,

  /* Computed Parameter: Mode_Y0
   * Referenced by: '<S13>/Mode'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S39>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S41>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S43>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Switch4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S45>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S60>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S61>/Constant'
   */
  0.0,

  /* Computed Parameter: commandrad_Y0
   * Referenced by: '<S48>/command (rad)'
   */
  0.0,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<Root>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: final_pwm_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: final_other_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 1.0, 0.0, 0.0, 1.0, 0.0, 0.0 },

  /* Expression: analog_input_maximums
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 18.0, 18.0, 16.5, 16.5, 16.5, 18.0 },

  /* Expression: analog_input_minimums
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pwm_frequency
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 4095.0, 4095.0 },

  /* Expression: initial_pwm_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_pwm_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: initial_other_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0.0, 1.0, 0.0, 0.0, 1.0, 0.0 },

  /* Expression: watchdog_other_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0.0, 0.0, 1.0, 0.0, 0.0, 1.0 },

  /* Expression: 2*pi/85/4
   * Referenced by: '<S2>/counts to rad'
   */
  0.018479956785822312,

  /* Expression: 2*pi/85/4
   * Referenced by: '<S2>/count   s//s to rad//s'
   */
  0.018479956785822312,

  /* Expression: 0
   * Referenced by: '<S1>/Memory'
   */
  0.0,

  /* Expression: 11.6
   * Referenced by: '<S18>/Constant'
   */
  11.6,

  /* Expression: 14.4
   * Referenced by: '<S18>/Constant1'
   */
  14.4,

  /* Expression: 12.0
   * Referenced by: '<S18>/Constant2'
   */
  12.0,

  /* Expression: timeout
   * Referenced by: '<S1>/HIL Watchdog'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S1>/Memory1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S17>/Discrete-Time Integrator'
   */
  0.033333333333333333,

  /* Expression: 0
   * Referenced by: '<S17>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 1.50 * 13.5
   * Referenced by: '<S5>/Kp '
   */
  20.25,

  /* Expression: [9.45 9.45]
   * Referenced by: '<S46>/Saturation'
   */
  { 9.45, 9.45 },

  /* Expression: [-9.45 -9.45]
   * Referenced by: '<S46>/Saturation'
   */
  { -9.45, -9.45 },

  /* Expression: 0.00 * 13.5
   * Referenced by: '<S5>/Kd '
   */
  0.0,

  /* Expression: [4.05 4.05]
   * Referenced by: '<S46>/Saturation2'
   */
  { 4.05, 4.05 },

  /* Expression: [-4.05 -4.05]
   * Referenced by: '<S46>/Saturation2'
   */
  { -4.05, -4.05 },

  /* Expression: [0; 0]
   * Referenced by: '<S46>/Constant1'
   */
  { 0.0, 0.0 },

  /* Expression: [0 0]
   * Referenced by: '<S47>/Constant'
   */
  { 0.0, 0.0 },

  /* Expression: 0.03 * 13.5
   * Referenced by: '<S5>/Kp'
   */
  0.40499999999999997,

  /* Expression: 0
   * Referenced by: '<S47>/Memory1'
   */
  0.0,

  /* Computed Parameter: sampletime_WtEt
   * Referenced by: '<S53>/sample time'
   */
  0.033333333333333333,

  /* Expression: 0
   * Referenced by: '<S53>/Delay Input2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S47>/Memory2'
   */
  0.0,

  /* Computed Parameter: sampletime_WtEt_m
   * Referenced by: '<S54>/sample time'
   */
  0.033333333333333333,

  /* Expression: 0
   * Referenced by: '<S54>/Delay Input2'
   */
  0.0,

  /* Expression: [4.05 4.05]
   * Referenced by: '<S47>/Saturation'
   */
  { 4.05, 4.05 },

  /* Expression: [-4.05 -4.05]
   * Referenced by: '<S47>/Saturation'
   */
  { -4.05, -4.05 },

  /* Expression: [0 0]
   * Referenced by: '<S47>/Integrator'
   */
  { 0.0, 0.0 },

  /* Expression: 0.5*[9.45 9.45]
   * Referenced by: '<S47>/Integrator'
   */
  { 4.725, 4.725 },

  /* Expression: 0.5*[-9.45 -9.45]
   * Referenced by: '<S47>/Integrator'
   */
  { -4.725, -4.725 },

  /* Expression: [0; 0]
   * Referenced by: '<S5>/Constant2'
   */
  { 0.0, 0.0 },

  /* Expression: 13.5
   * Referenced by: '<S2>/Memory'
   */
  13.5,

  /* Expression: qc_get_step_size*5
   * Referenced by: '<S27>/Constant1'
   */
  0.16666666666666666,

  /* Expression: 1
   * Referenced by: '<S3>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<S3>/Pulse Generator'
   */
  30.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<S3>/Pulse Generator'
   */
  21.0,

  /* Expression: 0
   * Referenced by: '<S3>/Pulse Generator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/Pulse Generator1'
   */
  1.0,

  /* Computed Parameter: PulseGenerator1_Period
   * Referenced by: '<S3>/Pulse Generator1'
   */
  30.0,

  /* Computed Parameter: PulseGenerator1_Duty
   * Referenced by: '<S3>/Pulse Generator1'
   */
  9.0,

  /* Expression: 0
   * Referenced by: '<S3>/Pulse Generator1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
   * Referenced by: '<S32>/Discrete-Time Integrator'
   */
  0.033333333333333333,

  /* Expression: 0
   * Referenced by: '<S32>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_m
   * Referenced by: '<S31>/Discrete-Time Integrator'
   */
  0.033333333333333333,

  /* Expression: 0
   * Referenced by: '<S31>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
   * Referenced by: '<S33>/Discrete-Time Integrator'
   */
  0.033333333333333333,

  /* Expression: 0
   * Referenced by: '<S33>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0.10 * 13.5
   * Referenced by: '<S5>/Ki'
   */
  1.35,

  /* Expression: qc_get_step_size
   * Referenced by: '<S4>/Constant'
   */
  0.033333333333333333,

  /* Computed Parameter: HILInitialize_DOWatchdog
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POModes
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POConfiguration
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POAlignment
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPolarity
   * Referenced by: '<Root>/HIL Initialize'
   */
  1,

  /* Computed Parameter: StreamServer_SndPriority
   * Referenced by: '<S1>/Stream Server'
   */
  0,

  /* Computed Parameter: StreamServer_RcvPriority
   * Referenced by: '<S1>/Stream Server'
   */
  0,

  /* Computed Parameter: Print1_MaxUnits
   * Referenced by: '<S28>/Print1'
   */
  512U,

  /* Computed Parameter: Print1_MaxUnits_l
   * Referenced by: '<S29>/Print1'
   */
  512U,

  /* Computed Parameter: Print1_MaxUnits_n
   * Referenced by: '<S30>/Print1'
   */
  512U,

  /* Computed Parameter: Print1_MaxUnits_m
   * Referenced by: '<S34>/Print1'
   */
  512U,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U },

  /* Computed Parameter: HILInitialize_DIChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 28U, 29U, 30U, 31U, 32U, 33U, 34U, 35U, 36U, 37U, 38U, 39U, 40U },

  /* Computed Parameter: HILInitialize_DOChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 28U, 29U, 30U },

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<Root>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILInitialize_POChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_OOChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 11000U, 11001U, 11002U, 11003U, 11004U, 11005U },

  /* Computed Parameter: StreamServer_SndSize
   * Referenced by: '<S1>/Stream Server'
   */
  1460U,

  /* Computed Parameter: StreamServer_RcvSize
   * Referenced by: '<S1>/Stream Server'
   */
  1460U,

  /* Computed Parameter: StreamServer_SndFIFO
   * Referenced by: '<S1>/Stream Server'
   */
  1000U,

  /* Computed Parameter: StreamServer_RcvFIFO
   * Referenced by: '<S1>/Stream Server'
   */
  1000U,

  /* Computed Parameter: Print1_Active
   * Referenced by: '<S28>/Print1'
   */
  false,

  /* Computed Parameter: Print1_Active_f
   * Referenced by: '<S29>/Print1'
   */
  false,

  /* Computed Parameter: Print1_Active_i
   * Referenced by: '<S30>/Print1'
   */
  false,

  /* Computed Parameter: Print1_Active_h
   * Referenced by: '<S34>/Print1'
   */
  false,

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOFinal
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOInitial
   * Referenced by: '<Root>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILRead_Active
   * Referenced by: '<S2>/HIL Read'
   */
  true,

  /* Computed Parameter: HILWatchdog_Active
   * Referenced by: '<S1>/HIL Watchdog'
   */
  false,

  /* Computed Parameter: StreamServer_Active
   * Referenced by: '<S1>/Stream Server'
   */
  false,

  /* Computed Parameter: HILWrite_Active
   * Referenced by: '<S2>/HIL Write'
   */
  false,

  /* Computed Parameter: Memory1_InitialCondition_p
   * Referenced by: '<S3>/Memory1'
   */
  false,

  /* Computed Parameter: StreamServer_Optimize
   * Referenced by: '<S1>/Stream Server'
   */
  2,

  /* Computed Parameter: StreamServer_Implementation
   * Referenced by: '<S1>/Stream Server'
   */
  2,

  /* Expression: uri_argument
   * Referenced by: '<S1>/Stream Server'
   */
  { 116U, 99U, 112U, 105U, 112U, 58U, 47U, 47U, 108U, 111U, 99U, 97U, 108U, 104U,
    111U, 115U, 116U, 58U, 49U, 56U, 56U, 56U, 56U, 0U },

  /* Computed Parameter: StreamServer_Endian
   * Referenced by: '<S1>/Stream Server'
   */
  1U
};
