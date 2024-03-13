/*
 * qbot_driver_v_1_22_dt.h
 *
 * Code generation for model "qbot_driver_v_1_22".
 *
 * Model version              : 15.24
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Oct 25 15:12:47 2023
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
  sizeof(intmax_t),
  sizeof(ptrdiff_t),
  sizeof(size_t),
  sizeof(t_int64),
  sizeof(t_uint64),
  sizeof(t_wide_char),
  sizeof(t_card),
  sizeof(t_boolean),
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
  "intmax_t",
  "ptrdiff_t",
  "size_t",
  "t_int64",
  "t_uint64",
  "t_wide_char",
  "t_card",
  "t_boolean",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&qbot_driver_v_1_22_B.HILRead_o1[0]), 0, 0, 86 },

  { (char_T *)(&qbot_driver_v_1_22_B.StreamServer_o2), 6, 0, 5 },

  { (char_T *)(&qbot_driver_v_1_22_B.StreamServer_o1), 3, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_B.HILWatchdog), 8, 0, 11 },

  { (char_T *)(&qbot_driver_v_1_22_B.sf_MATLABFunction2_f.upperRate), 0, 0, 4 },

  { (char_T *)(&qbot_driver_v_1_22_B.sf_MATLABFunction1_b.upperRate), 0, 0, 4 },

  { (char_T *)(&qbot_driver_v_1_22_B.sf_MATLABFunction3.y), 0, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_B.sf_MATLABFunction2.y), 0, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_B.sf_MATLABFunction1.y), 0, 0, 1 }
  ,

  { (char_T *)(&qbot_driver_v_1_22_DW.Time_Timeout), 18, 0, 4 },

  { (char_T *)(&qbot_driver_v_1_22_DW.DelayInput1_DSTATE[0]), 0, 0, 37 },

  { (char_T *)(&qbot_driver_v_1_22_DW.StreamServer_Stream), 17, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.HILInitialize_Card), 25, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.HILRead_PWORK), 11, 0, 13 },

  { (char_T *)(&qbot_driver_v_1_22_DW.HILInitialize_DOStates[0]), 6, 0, 21 },

  { (char_T *)(&qbot_driver_v_1_22_DW.HILInitialize_POSortedChans[0]), 7, 0, 2 },

  { (char_T *)(&qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRese), 2, 0, 10
  },

  { (char_T *)(&qbot_driver_v_1_22_DW.is_active_c5_qbot_driver_v_1_22), 3, 0, 4
  },

  { (char_T *)(&qbot_driver_v_1_22_DW.HILInitialize_DOBits[0]), 8, 0, 12 },

  { (char_T *)(&qbot_driver_v_1_22_DW.HILRead_DigitalBuffer[0]), 26, 0, 10 },

  { (char_T *)(&qbot_driver_v_1_22_DW.sf_MATLABFunction2_f.sfEvent), 6, 0, 1 },

  { (char_T *)
    (&qbot_driver_v_1_22_DW.sf_MATLABFunction2_f.is_active_c2_qbot_driver_v_1_22),
    3, 0, 1 },

  { (char_T *)
    (&qbot_driver_v_1_22_DW.sf_MATLABFunction2_f.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.sf_MATLABFunction1_b.sfEvent), 6, 0, 1 },

  { (char_T *)
    (&qbot_driver_v_1_22_DW.sf_MATLABFunction1_b.is_active_c2_qbot_driver_v_1_22),
    3, 0, 1 },

  { (char_T *)
    (&qbot_driver_v_1_22_DW.sf_MATLABFunction1_b.doneDoubleBufferReInit), 8, 0,
    1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.sf_MATLABFunction3.sfEvent), 6, 0, 1 },

  { (char_T *)
    (&qbot_driver_v_1_22_DW.sf_MATLABFunction3.is_active_c1_qbot_driver_v_1_22),
    3, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.sf_MATLABFunction3.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.sf_MATLABFunction2.sfEvent), 6, 0, 1 },

  { (char_T *)
    (&qbot_driver_v_1_22_DW.sf_MATLABFunction2.is_active_c1_qbot_driver_v_1_22),
    3, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.sf_MATLABFunction2.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.sf_MATLABFunction1.sfEvent), 6, 0, 1 },

  { (char_T *)
    (&qbot_driver_v_1_22_DW.sf_MATLABFunction1.is_active_c1_qbot_driver_v_1_22),
    3, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_DW.sf_MATLABFunction1.doneDoubleBufferReInit),
    8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  35U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&qbot_driver_v_1_22_P.ColorConstant2_color[0]), 0, 0, 41 },

  { (char_T *)(&qbot_driver_v_1_22_P.CompareToConstant1_const), 6, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_P.HILRead_analog_channels[0]), 7, 0, 35 },

  { (char_T *)(&qbot_driver_v_1_22_P.StopwithMessage3_message_icon), 2, 0, 4 },

  { (char_T *)(&qbot_driver_v_1_22_P.CompareToConstant_const_f), 3, 0, 1 },

  { (char_T *)(&qbot_driver_v_1_22_P.Mode_Y0), 0, 0, 109 },

  { (char_T *)(&qbot_driver_v_1_22_P.HILInitialize_DOWatchdog), 6, 0, 8 },

  { (char_T *)(&qbot_driver_v_1_22_P.Print1_MaxUnits), 7, 0, 41 },

  { (char_T *)(&qbot_driver_v_1_22_P.Print1_Active), 8, 0, 44 },

  { (char_T *)(&qbot_driver_v_1_22_P.StreamServer_Optimize), 2, 0, 2 },

  { (char_T *)(&qbot_driver_v_1_22_P.StreamServer_URI[0]), 3, 0, 25 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  11U,
  rtPTransitions
};

/* [EOF] qbot_driver_v_1_22_dt.h */
