/*
 * QBot4_Image_Proc_Color_Thresh_data.c
 *
 * Code generation for model "QBot4_Image_Proc_Color_Thresh".
 *
 * Model version              : 13.0
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Thu Oct 26 17:08:06 2023
 *
 * Target selection: quarc_linux_pi_4.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "QBot4_Image_Proc_Color_Thresh.h"

/* Block parameters (default storage) */
P_QBot4_Image_Proc_Color_Thre_T QBot4_Image_Proc_Color_Thresh_P = {
  /* Mask Parameter: thtype1_thrtype
   * Referenced by: '<S6>/index'
   */
  1.0,

  /* Mask Parameter: Video3DCapture_stream_index
   * Referenced by: '<Root>/Video3D Capture'
   */
  0U,

  /* Mask Parameter: Video3DInitialize_active
   * Referenced by: '<Root>/Video3D Initialize'
   */
  true,

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

  /* Expression: d_brightness
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_contrast
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_hue
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_saturation
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_sharpness
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_gamma
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_whitebalance
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_backlightcompensation
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_gain
   * Referenced by: '<Root>/Video3D Capture'
   */
  50.0,

  /* Expression: d_exposure
   * Referenced by: '<Root>/Video3D Capture'
   */
  30.0,

  /* Expression: emitter
   * Referenced by: '<Root>/Video3D Capture'
   */
  1.0,

  /* Expression: [150 450 50 250]
   * Referenced by: '<Root>/roi1'
   */
  { 150.0, 450.0, 50.0, 250.0 },

  /* Expression: [180 255]
   * Referenced by: '<Root>/red_th'
   */
  { 180.0, 255.0 },

  /* Expression: [180 255]
   * Referenced by: '<Root>/green_th'
   */
  { 180.0, 255.0 },

  /* Expression: [80 140]
   * Referenced by: '<Root>/blue_th'
   */
  { 80.0, 140.0 },

  /* Expression: [255 255 255]
   * Referenced by: '<Root>/truncval1'
   */
  { 255.0, 255.0, 255.0 },

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

  /* Computed Parameter: Video3DCapture_Preset
   * Referenced by: '<Root>/Video3D Capture'
   */
  21U,

  /* Computed Parameter: ImageCompress_Quality
   * Referenced by: '<S4>/Image Compress'
   */
  50U,

  /* Computed Parameter: ImageCompress_Quality_e
   * Referenced by: '<S5>/Image Compress'
   */
  50U,

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<Root>/HIL Initialize'
   */
  false,

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
  false,

  /* Computed Parameter: VideoDisplay_UseHardware
   * Referenced by: '<S4>/Video Display'
   */
  true,

  /* Computed Parameter: VideoDisplay_UseHardware_j
   * Referenced by: '<S5>/Video Display'
   */
  true
};
