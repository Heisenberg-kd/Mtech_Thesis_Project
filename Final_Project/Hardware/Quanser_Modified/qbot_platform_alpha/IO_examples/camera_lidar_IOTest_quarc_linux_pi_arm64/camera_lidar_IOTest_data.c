/*
 * camera_lidar_IOTest_data.c
 *
 * Code generation for model "camera_lidar_IOTest".
 *
 * Model version              : 7.1
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Fri Jan 12 17:18:28 2024
 *
 * Target selection: quarc_linux_pi_arm64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "camera_lidar_IOTest.h"

/* Block parameters (default storage) */
P_camera_lidar_IOTest_T camera_lidar_IOTest_P = {
  /* Mask Parameter: LidarData_maximum_rho
   * Referenced by: '<Root>/Lidar Data'
   */
  8.0,

  /* Mask Parameter: LidarData_maximum_theta
   * Referenced by: '<Root>/Lidar Data'
   */
  360.0,

  /* Mask Parameter: LidarData_minimum_rho
   * Referenced by: '<Root>/Lidar Data'
   */
  0.0,

  /* Mask Parameter: LidarData_minimum_theta
   * Referenced by: '<Root>/Lidar Data'
   */
  0.0,

  /* Mask Parameter: LidarData_direction
   * Referenced by: '<Root>/Lidar Data'
   */
  1,

  /* Mask Parameter: LidarData_update_rate
   * Referenced by: '<Root>/Lidar Data'
   */
  1,

  /* Mask Parameter: LidarData_zero_location
   * Referenced by: '<Root>/Lidar Data'
   */
  1,

  /* Mask Parameter: ImageTransform_max_pixel
   * Referenced by: '<Root>/Image Transform'
   */
  5.0F,

  /* Mask Parameter: ImageTransform_min_pixel
   * Referenced by: '<Root>/Image Transform'
   */
  0.0F,

  /* Mask Parameter: Video3DCapture1_stream_index
   * Referenced by: '<Root>/Video3D Capture1'
   */
  0U,

  /* Mask Parameter: Video3DCapture_stream_index
   * Referenced by: '<Root>/Video3D Capture'
   */
  0U,

  /* Mask Parameter: Video3DInitialize_active
   * Referenced by: '<Root>/Video3D Initialize'
   */
  true,

  /* Expression: d_brightness
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_contrast
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_hue
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_saturation
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_sharpness
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_gamma
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_coloreffect
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  0.0,

  /* Expression: d_whitebalance
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_backlightcompensation
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  0.0,

  /* Expression: d_gain
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  15.0,

  /* Expression: d_pan
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_tilt
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_roll
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_zoom
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  0.0,

  /* Expression: d_exposure
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  33.0,

  /* Expression: d_iris
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  50.0,

  /* Expression: d_focus
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  0.0,

  /* Expression: d_mirror
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  0.0,

  /* Expression: d_brightness
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_contrast
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_hue
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_saturation
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_sharpness
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_gamma
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_whitebalance
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_backlightcompensation
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_gain
   * Referenced by: '<Root>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_exposure
   * Referenced by: '<Root>/Video3D Capture1'
   */
  30.0,

  /* Expression: emitter
   * Referenced by: '<Root>/Video3D Capture1'
   */
  1.0,

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

  /* Expression: focal_length
   * Referenced by: '<Root>/Image Transform'
   */
  308.0,

  /* Expression: extrapolated
   * Referenced by: '<Root>/Image Transform'
   */
  0.0,

  /* Expression: angle
   * Referenced by: '<Root>/Image Transform'
   */
  0.0,

  /* Expression: radial_coeffs
   * Referenced by: '<Root>/Image Transform'
   */
  { -0.3129, 0.0907 },

  /* Expression: timing_budget
   * Referenced by: '<Root>/Ranging Sensor'
   */
  0.033,

  /* Expression: measurement_period
   * Referenced by: '<Root>/Ranging Sensor'
   */
  0.0005,

  /* Expression: max_interpolated_distance
   * Referenced by: '<Root>/Ranging Sensor'
   */
  0.05,

  /* Expression: max_interpolated_angle
   * Referenced by: '<Root>/Ranging Sensor'
   */
  5.0,

  /* Expression: -1
   * Referenced by: '<Root>/Gain'
   */
  -1.0,

  /* Expression: line1_width
   * Referenced by: '<Root>/Lidar Data'
   */
  0.5,

  /* Expression: line1_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.0, 0.447, 0.741 },

  /* Expression: marker1_size
   * Referenced by: '<Root>/Lidar Data'
   */
  6.0,

  /* Expression: marker1_edge_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.0, 0.447059, 0.741176 },

  /* Expression: marker1_face_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.0, 0.447059, 0.741176 },

  /* Expression: line2_width
   * Referenced by: '<Root>/Lidar Data'
   */
  0.5,

  /* Expression: line2_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.85098, 0.32549, 0.0980392 },

  /* Expression: marker2_size
   * Referenced by: '<Root>/Lidar Data'
   */
  6.0,

  /* Expression: marker2_edge_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.85098, 0.32549, 0.0980392 },

  /* Expression: marker2_face_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.85098, 0.32549, 0.0980392 },

  /* Expression: line3_width
   * Referenced by: '<Root>/Lidar Data'
   */
  0.5,

  /* Expression: line3_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.929412, 0.694118, 0.12549 },

  /* Expression: marker3_size
   * Referenced by: '<Root>/Lidar Data'
   */
  6.0,

  /* Expression: marker3_edge_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.929412, 0.694118, 0.12549 },

  /* Expression: marker3_face_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.929412, 0.694118, 0.12549 },

  /* Expression: line4_width
   * Referenced by: '<Root>/Lidar Data'
   */
  0.5,

  /* Expression: line4_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.494118, 0.184314, 0.556863 },

  /* Expression: marker4_size
   * Referenced by: '<Root>/Lidar Data'
   */
  6.0,

  /* Expression: marker4_edge_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.494118, 0.184314, 0.556863 },

  /* Expression: marker4_face_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.494118, 0.184314, 0.556863 },

  /* Expression: line5_width
   * Referenced by: '<Root>/Lidar Data'
   */
  0.5,

  /* Expression: line5_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.466667, 0.67451, 0.188235 },

  /* Expression: marker5_size
   * Referenced by: '<Root>/Lidar Data'
   */
  6.0,

  /* Expression: marker5_edge_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.466667, 0.67451, 0.188235 },

  /* Expression: marker5_face_color
   * Referenced by: '<Root>/Lidar Data'
   */
  { 0.466667, 0.67451, 0.188235 },

  /* Computed Parameter: ImageTransform_PrPoint
   * Referenced by: '<Root>/Image Transform'
   */
  { 262, 334 },

  /* Computed Parameter: ImageTransform_Interpolation
   * Referenced by: '<Root>/Image Transform'
   */
  1,

  /* Computed Parameter: ImageTransform_Origin
   * Referenced by: '<Root>/Image Transform'
   */
  { 240, 320 },

  /* Computed Parameter: ImageTransform_OOrigin
   * Referenced by: '<Root>/Image Transform'
   */
  { 240, 320 },

  /* Computed Parameter: LidarData_L1Style
   * Referenced by: '<Root>/Lidar Data'
   */
  5,

  /* Computed Parameter: LidarData_L1Marker
   * Referenced by: '<Root>/Lidar Data'
   */
  4,

  /* Computed Parameter: LidarData_L2Style
   * Referenced by: '<Root>/Lidar Data'
   */
  1,

  /* Computed Parameter: LidarData_L2Marker
   * Referenced by: '<Root>/Lidar Data'
   */
  14,

  /* Computed Parameter: LidarData_L3Style
   * Referenced by: '<Root>/Lidar Data'
   */
  1,

  /* Computed Parameter: LidarData_L3Marker
   * Referenced by: '<Root>/Lidar Data'
   */
  14,

  /* Computed Parameter: LidarData_L4Style
   * Referenced by: '<Root>/Lidar Data'
   */
  1,

  /* Computed Parameter: LidarData_L4Marker
   * Referenced by: '<Root>/Lidar Data'
   */
  14,

  /* Computed Parameter: LidarData_L5Style
   * Referenced by: '<Root>/Lidar Data'
   */
  1,

  /* Computed Parameter: LidarData_L5Marker
   * Referenced by: '<Root>/Lidar Data'
   */
  14,

  /* Computed Parameter: ImageCompress_Quality
   * Referenced by: '<S4>/Image Compress'
   */
  50U,

  /* Computed Parameter: Video3DCapture1_Preset
   * Referenced by: '<Root>/Video3D Capture1'
   */
  21U,

  /* Computed Parameter: ImageCompress_Quality_k
   * Referenced by: '<S2>/Image Compress'
   */
  50U,

  /* Computed Parameter: Video3DCapture_Preset
   * Referenced by: '<Root>/Video3D Capture'
   */
  21U,

  /* Computed Parameter: ImageTransform_ColorTheme
   * Referenced by: '<Root>/Image Transform'
   */
  1U,

  /* Computed Parameter: ImageCompress_Quality_p
   * Referenced by: '<S3>/Image Compress'
   */
  50U,

  /* Computed Parameter: RangingSensor_Range
   * Referenced by: '<Root>/Ranging Sensor'
   */
  1U,

  /* Computed Parameter: DownwardFacingCamera_OvBrightne
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvContrast
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvHue
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvSaturati
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvSharpnes
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvGamma
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvColorEna
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvWhiteBal
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvBackligh
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvGain
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  true,

  /* Computed Parameter: DownwardFacingCamera_OvPan
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvTilt
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvRoll
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvZoom
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvExposure
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  true,

  /* Computed Parameter: DownwardFacingCamera_OvIris
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvFocus
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: DownwardFacingCamera_OvMirror
   * Referenced by: '<Root>/Downward Facing Camera'
   */
  false,

  /* Computed Parameter: VideoDisplay_UseHardware
   * Referenced by: '<S4>/Video Display'
   */
  true,

  /* Computed Parameter: VideoDisplay_UseHardware_f
   * Referenced by: '<S2>/Video Display'
   */
  true,

  /* Computed Parameter: VideoDisplay_UseHardware_g
   * Referenced by: '<S3>/Video Display'
   */
  true,

  /* Computed Parameter: RangingSensor_Active
   * Referenced by: '<Root>/Ranging Sensor'
   */
  true,

  /* Computed Parameter: LidarData_Mode
   * Referenced by: '<Root>/Lidar Data'
   */
  2U
};
