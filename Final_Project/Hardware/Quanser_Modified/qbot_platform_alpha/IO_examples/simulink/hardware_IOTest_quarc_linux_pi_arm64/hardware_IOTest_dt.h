/*
 * hardware_IOTest_dt.h
 *
 * Code generation for model "hardware_IOTest".
 *
 * Model version              : 4.1
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Thu Oct 26 15:06:38 2023
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
  sizeof(t_pstream),
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
  "t_pstream",
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
  { (char_T *)(&hardware_IOTest_B.StreamClient_o4[0]), 0, 0, 17 },

  { (char_T *)(&hardware_IOTest_B.StreamClient_o2), 6, 0, 1 },

  { (char_T *)(&hardware_IOTest_B.StreamClient_o1), 3, 0, 1 }
  ,

  { (char_T *)(&hardware_IOTest_DW.Time_Timeout), 18, 0, 1 },

  { (char_T *)(&hardware_IOTest_DW.StreamClient_Stream), 17, 0, 1 },

  { (char_T *)(&hardware_IOTest_DW.Accelerometer_PWORK.LoggedData[0]), 11, 0, 11
  },

  { (char_T *)(&hardware_IOTest_DW.Time_Owner), 8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&hardware_IOTest_P.ColorConstant_color[0]), 0, 0, 33 },

  { (char_T *)(&hardware_IOTest_P.StreamClient_SndPriority), 6, 0, 2 },

  { (char_T *)(&hardware_IOTest_P.StreamClient_SndSize), 7, 0, 4 },

  { (char_T *)(&hardware_IOTest_P.StreamClient_Active), 8, 0, 1 },

  { (char_T *)(&hardware_IOTest_P.StreamClient_Optimize), 2, 0, 2 },

  { (char_T *)(&hardware_IOTest_P.MotorEnable_CurrentSetting), 3, 0, 27 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  6U,
  rtPTransitions
};

/* [EOF] hardware_IOTest_dt.h */
