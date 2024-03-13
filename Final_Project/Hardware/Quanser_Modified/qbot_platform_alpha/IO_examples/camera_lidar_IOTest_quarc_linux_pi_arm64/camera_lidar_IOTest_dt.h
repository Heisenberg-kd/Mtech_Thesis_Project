/*
 * camera_lidar_IOTest_dt.h
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
  sizeof(t_video_capture),
  sizeof(t_colorization),
  sizeof(t_ranging_sensor),
  sizeof(t_ranging_measurement),
  sizeof(t_channel),
  sizeof(t_jpeg_compress),
  sizeof(t_video3d),
  sizeof(t_video3d_stream),
  sizeof(t_int64),
  sizeof(t_uint64),
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
  "t_video_capture",
  "t_colorization",
  "t_ranging_sensor",
  "t_ranging_measurement",
  "t_channel",
  "t_jpeg_compress",
  "t_video3d",
  "t_video3d_stream",
  "t_int64",
  "t_uint64",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&camera_lidar_IOTest_B.Video3DCapture1_o2), 26, 0, 2 },

  { (char_T *)(&camera_lidar_IOTest_B.Video3DCapture1_o3), 0, 0, 8402 },

  { (char_T *)(&camera_lidar_IOTest_B.Channel), 21, 0, 3 },

  { (char_T *)(&camera_lidar_IOTest_B.Video3DCapture_o1[0]), 1, 0, 307200 },

  { (char_T *)(&camera_lidar_IOTest_B.Video3DInitialize), 6, 0, 1 },

  { (char_T *)(&camera_lidar_IOTest_B.DownwardFacingCamera_o1[0]), 3, 0, 3276800
  },

  { (char_T *)(&camera_lidar_IOTest_B.DownwardFacingCamera_o2), 8, 0, 2 }
  ,

  { (char_T *)(&camera_lidar_IOTest_DW.RangingSensor_Measurements[0]), 20, 0,
    1680 },

  { (char_T *)(&camera_lidar_IOTest_DW.LidarData_XBuffer[0]), 0, 0, 3360 },

  { (char_T *)(&camera_lidar_IOTest_DW.DownwardFacingCamera_VideoCaptu), 17, 0,
    1 },

  { (char_T *)(&camera_lidar_IOTest_DW.ImageTransform_AlgHandle), 18, 0, 1 },

  { (char_T *)(&camera_lidar_IOTest_DW.RangingSensor_Sensor), 19, 0, 1 },

  { (char_T *)(&camera_lidar_IOTest_DW.ImageCompress_Compress), 22, 0, 3 },

  { (char_T *)(&camera_lidar_IOTest_DW.Video3DInitialize_Video3D), 23, 0, 3 },

  { (char_T *)(&camera_lidar_IOTest_DW.Video3DCapture1_Stream), 24, 0, 2 },

  { (char_T *)(&camera_lidar_IOTest_DW.NewDown_PWORK.LoggedData), 11, 0, 5 },

  { (char_T *)(&camera_lidar_IOTest_DW.ImageCompress_DIMS1), 6, 0, 3 },

  { (char_T *)(&camera_lidar_IOTest_DW.LidarData_IWORK[0]), 10, 0, 2 },

  { (char_T *)(&camera_lidar_IOTest_DW.ImageCompress_ScanLine[0]), 3, 0, 35840 },

  { (char_T *)(&camera_lidar_IOTest_DW.LidarData_IsFull), 8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  20U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&camera_lidar_IOTest_P.LidarData_maximum_rho), 0, 0, 4 },

  { (char_T *)(&camera_lidar_IOTest_P.LidarData_direction), 6, 0, 3 },

  { (char_T *)(&camera_lidar_IOTest_P.ImageTransform_max_pixel), 1, 0, 2 },

  { (char_T *)(&camera_lidar_IOTest_P.Video3DCapture1_stream_index), 7, 0, 2 },

  { (char_T *)(&camera_lidar_IOTest_P.Video3DInitialize_active), 8, 0, 1 },

  { (char_T *)(&camera_lidar_IOTest_P.DownwardFacingCamera_Brightness), 0, 0,
    105 },

  { (char_T *)(&camera_lidar_IOTest_P.ImageTransform_PrPoint[0]), 6, 0, 17 },

  { (char_T *)(&camera_lidar_IOTest_P.ImageCompress_Quality), 7, 0, 7 },

  { (char_T *)(&camera_lidar_IOTest_P.DownwardFacingCamera_OvBrightne), 8, 0, 22
  },

  { (char_T *)(&camera_lidar_IOTest_P.LidarData_Mode), 3, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  10U,
  rtPTransitions
};

/* [EOF] camera_lidar_IOTest_dt.h */
