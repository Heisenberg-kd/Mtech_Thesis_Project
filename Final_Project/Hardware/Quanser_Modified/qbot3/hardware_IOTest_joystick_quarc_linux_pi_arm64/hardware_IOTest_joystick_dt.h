/*
 * hardware_IOTest_joystick_dt.h
 *
 * Code generation for model "hardware_IOTest_joystick".
 *
 * Model version              : 4.4
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Fri Oct 27 17:42:08 2023
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
  sizeof(t_game_controller),
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
  "t_game_controller",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&hardware_IOTest_joystick_B.LeftStickLateral1to1signedperce), 0,
    0, 21 },

  { (char_T *)(&hardware_IOTest_joystick_B.StreamClient_o2), 6, 0, 1 },

  { (char_T *)(&hardware_IOTest_joystick_B.StreamClient_o1), 3, 0, 1 },

  { (char_T *)(&hardware_IOTest_joystick_B.GameController_o1), 8, 0, 33 }
  ,

  { (char_T *)(&hardware_IOTest_joystick_DW.Time_Timeout), 18, 0, 1 },

  { (char_T *)(&hardware_IOTest_joystick_DW.StreamClient_Stream), 17, 0, 1 },

  { (char_T *)(&hardware_IOTest_joystick_DW.GameController_Controller), 19, 0, 1
  },

  { (char_T *)(&hardware_IOTest_joystick_DW.Accelerometer_PWORK.LoggedData[0]),
    11, 0, 12 },

  { (char_T *)(&hardware_IOTest_joystick_DW.sfEvent), 6, 0, 1 },

  { (char_T *)(&hardware_IOTest_joystick_DW.TriggeredSubsystem_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&hardware_IOTest_joystick_DW.is_active_c2_hardware_IOTest_jo), 3,
    0, 1 },

  { (char_T *)(&hardware_IOTest_joystick_DW.Time_Owner), 8, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  12U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&hardware_IOTest_joystick_P.ColorConstant_color[0]), 0, 0, 38 },

  { (char_T *)(&hardware_IOTest_joystick_P.StreamClient_SndPriority), 6, 0, 2 },

  { (char_T *)(&hardware_IOTest_joystick_P.StreamClient_SndSize), 7, 0, 4 },

  { (char_T *)(&hardware_IOTest_joystick_P.GameController_BufferSize), 5, 0, 1 },

  { (char_T *)(&hardware_IOTest_joystick_P.GameController_AutoCenter), 8, 0, 3 },

  { (char_T *)(&hardware_IOTest_joystick_P.StreamClient_Optimize), 2, 0, 2 },

  { (char_T *)(&hardware_IOTest_joystick_P.MotorEnable_CurrentSetting), 3, 0, 28
  }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  7U,
  rtPTransitions
};

/* [EOF] hardware_IOTest_joystick_dt.h */
