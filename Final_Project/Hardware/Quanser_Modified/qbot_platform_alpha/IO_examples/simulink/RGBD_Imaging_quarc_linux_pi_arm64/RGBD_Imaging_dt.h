/*
 * RGBD_Imaging_dt.h
 *
 * Code generation for model "RGBD_Imaging".
 *
 * Model version              : 9.1
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Fri Oct 27 17:57:16 2023
 *
 * Target selection: quarc_linux_pi_arm64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  sizeof(t_video3d),
  sizeof(t_video3d_stream),
  sizeof(t_int64),
  sizeof(t_uint64),
  sizeof(t_channel),
  sizeof(t_jpeg_compress),
  sizeof(t_blob),
  sizeof(t_find_blobs),
  sizeof(t_image_rgb_to_hsv),
  sizeof(t_timeout),
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "t_video3d",
  "t_video3d_stream",
  "t_int64",
  "t_uint64",
  "t_channel",
  "t_jpeg_compress",
  "t_blob",
  "t_find_blobs",
  "t_image_rgb_to_hsv",
  "t_timeout",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&RGBD_Imaging_B.Depth_o2), 20, 0, 2 },

  { (char_T *)(&RGBD_Imaging_B.Depth_o3), 0, 0, 8 },

  { (char_T *)(&RGBD_Imaging_B.Channel), 21, 0, 3 },

  { (char_T *)(&RGBD_Imaging_B.Depth_o1[0]), 1, 0, 921601 },

  { (char_T *)(&RGBD_Imaging_B.RGB_o1[0]), 3, 0, 6451200 },

  { (char_T *)(&RGBD_Imaging_B.ImageCompress_c[0]), 3, 0, 921600 },

  { (char_T *)(&RGBD_Imaging_B.RGB_o4), 8, 0, 2 }
  ,

  { (char_T *)(&RGBD_Imaging_DW.SampleTime_PreviousTime), 26, 0, 3 },

  { (char_T *)(&RGBD_Imaging_DW.Video3DInitialize_Video3D), 17, 0, 3 },

  { (char_T *)(&RGBD_Imaging_DW.Depth_Stream), 18, 0, 2 },

  { (char_T *)(&RGBD_Imaging_DW.ImageCompress_Compress), 22, 0, 3 },

  { (char_T *)(&RGBD_Imaging_DW.ImageFindObjects_FindHandle), 24, 0, 1 },

  { (char_T *)(&RGBD_Imaging_DW.ImageTransform_AlgHandle), 25, 0, 1 },

  { (char_T *)(&RGBD_Imaging_DW.Scope_PWORK.LoggedData), 11, 0, 4 },

  { (char_T *)(&RGBD_Imaging_DW.ImageCompress_DIMS1), 6, 0, 3 },

  { (char_T *)(&RGBD_Imaging_DW.findStopSignLocation_SubsysRanB), 2, 0, 2 },

  { (char_T *)(&RGBD_Imaging_DW.ImageCompress_ScanLine[0]), 3, 0, 51200 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  17U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&RGBD_Imaging_P.CompareToConstant_const), 0, 0, 1 },

  { (char_T *)(&RGBD_Imaging_P.HSVColorThresholding_b_comparis), 6, 0, 5 },

  { (char_T *)(&RGBD_Imaging_P.CompareToConstant_const_h), 7, 0, 5 },

  { (char_T *)(&RGBD_Imaging_P.Video3DInitialize_active), 8, 0, 3 },

  { (char_T *)(&RGBD_Imaging_P.Constant_Value), 0, 0, 52 },

  { (char_T *)(&RGBD_Imaging_P.ImageTransform_PrPoint[0]), 6, 0, 7 },

  { (char_T *)(&RGBD_Imaging_P.distanceToSignm_Y0), 1, 0, 1 },

  { (char_T *)(&RGBD_Imaging_P.ImageCompress_Quality), 7, 0, 6 },

  { (char_T *)(&RGBD_Imaging_P.VideoDisplay_UseHardware), 8, 0, 4 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  9U,
  rtPTransitions
};

/* [EOF] RGBD_Imaging_dt.h */
