/*
 * QBot4_Image_Proc_Color_Thresh_dt.h
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
  sizeof(t_channel),
  sizeof(t_jpeg_compress),
  sizeof(t_video3d),
  sizeof(t_video3d_stream),
  sizeof(t_int64),
  sizeof(t_uint64),
  sizeof(t_card),
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
  "t_channel",
  "t_jpeg_compress",
  "t_video3d",
  "t_video3d_stream",
  "t_int64",
  "t_uint64",
  "t_card",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o2), 20, 0, 1 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o3), 0, 0, 1 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_B.Channel), 15, 0, 2 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[0]), 3, 0,
    4147203 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o4), 8, 0, 1 }
  ,

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.HILInitialize_FilterFrequency[0]),
    0, 0, 6 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress), 16, 0,
    2 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.Video3DInitialize_Video3D), 17,
    0, 2 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.Video3DCapture_Stream), 18, 0, 1
  },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card), 21, 0, 1 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK.Fifo), 11, 0, 2 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOStates[0]), 6, 0,
    16 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedChans[0]),
    7, 0, 2 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.ImageThresholdingEnabled_Subsys),
    2, 0, 1 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.ImageCompress_ScanLine[0]), 3, 0,
    36865 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[0]), 8, 0,
    4 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  16U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype), 0, 0, 1 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_stream_index), 7,
    0, 1 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_P.Video3DInitialize_active), 8, 0,
    1 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOTerminate), 0, 0,
    63 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOWatchdog), 6, 0,
    6 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIChannels[0]), 7,
    0, 36 },

  { (char_T *)(&QBot4_Image_Proc_Color_Thresh_P.HILInitialize_Active), 8, 0, 37
  }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  7U,
  rtPTransitions
};

/* [EOF] QBot4_Image_Proc_Color_Thresh_dt.h */
