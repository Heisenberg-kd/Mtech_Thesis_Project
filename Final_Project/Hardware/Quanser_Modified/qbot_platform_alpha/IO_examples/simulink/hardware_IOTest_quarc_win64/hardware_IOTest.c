/*
 * hardware_IOTest.c
 *
 * Code generation for model "hardware_IOTest".
 *
 * Model version              : 3.50
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Oct 25 14:28:38 2023
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "hardware_IOTest.h"
#include "rtwtypes.h"
#include "hardware_IOTest_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "hardware_IOTest_dt.h"

/* Block signals (default storage) */
B_hardware_IOTest_T hardware_IOTest_B;

/* Block states (default storage) */
DW_hardware_IOTest_T hardware_IOTest_DW;

/* Real-time model */
static RT_MODEL_hardware_IOTest_T hardware_IOTest_M_;
RT_MODEL_hardware_IOTest_T *const hardware_IOTest_M = &hardware_IOTest_M_;

/* Model output function */
void hardware_IOTest_output(void)
{
  real_T rtb_TmpSignalConversionAtStream[10];
  real_T u0;

  /* ManualSwitch: '<Root>/QbotTurn' incorporates:
   *  Constant: '<Root>/TurnLeft'
   *  Constant: '<Root>/TurnRight'
   */
  if (hardware_IOTest_P.QbotTurn_CurrentSetting == 1) {
    u0 = hardware_IOTest_P.TurnRight_Value;
  } else {
    u0 = hardware_IOTest_P.TurnLeft_Value;
  }

  /* SignalConversion generated from: '<S2>/Stream Client' incorporates:
   *  Constant: '<S2>/Mode 1 - Body Mode'
   *  Constant: '<S2>/user LED'
   *  Constant: '<S3>/Constant'
   *  S-Function (time_block): '<S2>/Time'
   */

  /* S-Function Block: hardware_IOTest/Read//Write/Time (time_block) */
  {
    t_error result;
    t_timeout current_time;
    t_timeout time_difference;
    result = timeout_get_high_resolution_time(&current_time);
    if (result == 0) {
      result = timeout_subtract(&time_difference, &current_time,
        &_high_resolution_start_time);
      rtb_TmpSignalConversionAtStream[9] = time_difference.seconds +
        time_difference.nanoseconds * 1e-9;
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(hardware_IOTest_M, _rt_error_message);
      return;
    }
  }

  rtb_TmpSignalConversionAtStream[0] = hardware_IOTest_P.Mode1BodyMode_Value;
  rtb_TmpSignalConversionAtStream[1] = hardware_IOTest_P.userLED_Value;
  rtb_TmpSignalConversionAtStream[2] = hardware_IOTest_P.ColorConstant_color[0];
  rtb_TmpSignalConversionAtStream[3] = hardware_IOTest_P.ColorConstant_color[1];
  rtb_TmpSignalConversionAtStream[4] = hardware_IOTest_P.ColorConstant_color[2];

  /* ManualSwitch: '<Root>/MotorEnable' */
  if (hardware_IOTest_P.MotorEnable_CurrentSetting == 1) {
    /* SignalConversion generated from: '<S2>/Stream Client' incorporates:
     *  Constant: '<Root>/Constant'
     */
    rtb_TmpSignalConversionAtStream[5] = hardware_IOTest_P.Constant_Value;
  } else {
    /* SignalConversion generated from: '<S2>/Stream Client' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    rtb_TmpSignalConversionAtStream[5] = hardware_IOTest_P.Constant2_Value;
  }

  /* End of ManualSwitch: '<Root>/MotorEnable' */

  /* SignalConversion generated from: '<S2>/Stream Client' incorporates:
   *  Constant: '<S2>/Hold'
   */
  rtb_TmpSignalConversionAtStream[6] = hardware_IOTest_P.Hold_Value;

  /* Saturate: '<Root>/Saturation' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  if (hardware_IOTest_P.Constant3_Value > hardware_IOTest_P.Saturation_UpperSat)
  {
    /* SignalConversion generated from: '<S2>/Stream Client' */
    rtb_TmpSignalConversionAtStream[7] = hardware_IOTest_P.Saturation_UpperSat;
  } else if (hardware_IOTest_P.Constant3_Value <
             hardware_IOTest_P.Saturation_LowerSat) {
    /* SignalConversion generated from: '<S2>/Stream Client' */
    rtb_TmpSignalConversionAtStream[7] = hardware_IOTest_P.Saturation_LowerSat;
  } else {
    /* SignalConversion generated from: '<S2>/Stream Client' */
    rtb_TmpSignalConversionAtStream[7] = hardware_IOTest_P.Constant3_Value;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Saturate: '<Root>/Saturation1' incorporates:
   *  ManualSwitch: '<Root>/QbotTurn'
   */
  if (u0 > hardware_IOTest_P.Saturation1_UpperSat) {
    /* SignalConversion generated from: '<S2>/Stream Client' */
    rtb_TmpSignalConversionAtStream[8] = hardware_IOTest_P.Saturation1_UpperSat;
  } else if (u0 < hardware_IOTest_P.Saturation1_LowerSat) {
    /* SignalConversion generated from: '<S2>/Stream Client' */
    rtb_TmpSignalConversionAtStream[8] = hardware_IOTest_P.Saturation1_LowerSat;
  } else {
    /* SignalConversion generated from: '<S2>/Stream Client' */
    rtb_TmpSignalConversionAtStream[8] = u0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* S-Function (stream_client_block): '<S2>/Stream Client' incorporates:
   *  Constant: '<S2>/Constant6'
   */

  /* S-Function Block: hardware_IOTest/Read//Write/Stream Client (stream_client_block) */
  {
    t_pstream_state state;
    t_error send_result;
    t_error receive_result;
    if (hardware_IOTest_P.Constant6_Value) {
      send_result = pstream_send(hardware_IOTest_DW.StreamClient_Stream,
        &rtb_TmpSignalConversionAtStream[0]);
    } else {
      send_result = 0;
    }

    receive_result = pstream_receive(hardware_IOTest_DW.StreamClient_Stream,
      &hardware_IOTest_B.StreamClient_o4[0]);
    hardware_IOTest_B.StreamClient_o2 = 0;
    if (send_result < 0 && send_result != -QERR_WOULD_BLOCK) {
      hardware_IOTest_B.StreamClient_o2 = send_result;
    } else if (receive_result < 0 && receive_result != -QERR_WOULD_BLOCK) {
      hardware_IOTest_B.StreamClient_o2 = receive_result;
    }

    pstream_get_state(hardware_IOTest_DW.StreamClient_Stream, &state);
    hardware_IOTest_B.StreamClient_o1 = state;
  }
}

/* Model update function */
void hardware_IOTest_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++hardware_IOTest_M->Timing.clockTick0)) {
    ++hardware_IOTest_M->Timing.clockTickH0;
  }

  hardware_IOTest_M->Timing.t[0] = hardware_IOTest_M->Timing.clockTick0 *
    hardware_IOTest_M->Timing.stepSize0 + hardware_IOTest_M->Timing.clockTickH0 *
    hardware_IOTest_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void hardware_IOTest_initialize(void)
{
  /* Start for S-Function (stream_client_block): '<S2>/Stream Client' incorporates:
   *  Constant: '<S2>/Constant6'
   */

  /* S-Function Block: hardware_IOTest/Read//Write/Stream Client (stream_client_block) */
  {
    qthread_attr_t send_thread_attributes;
    qthread_attr_t receive_thread_attributes;
    struct qsched_param scheduling_parameters;
    int min_priority = qsched_get_priority_min(QSCHED_FIFO);
    int max_priority = qsched_get_priority_max(QSCHED_FIFO);
    t_pstream_options options;
    t_error result;
    hardware_IOTest_DW.StreamClient_Stream = NULL;

    {
      int_T i1;
      real_T *y3 = &hardware_IOTest_B.StreamClient_o4[0];
      const real_T *p_StreamClient_default_value =
        hardware_IOTest_P.StreamClient_default_value;
      for (i1=0; i1 < 17; i1++) {
        y3[i1] = p_StreamClient_default_value[i1];
      }
    }

    result = 0;
    options.size = sizeof(options);
    options.flags = hardware_IOTest_P.StreamClient_Endian &
      PSTREAM_FLAG_ENDIAN_MASK;
    if (hardware_IOTest_P.StreamClient_Implementation ==
        STREAM_CLIENT_IMPLEMENTATION_THREAD) {
      options.flags |= PSTREAM_FLAG_MULTITHREADED;
    }

    if (hardware_IOTest_P.StreamClient_Optimize ==
        STREAM_CLIENT_OPTIMIZE_LATENCY) {
      options.flags |= PSTREAM_FLAG_MINIMIZE_LATENCY;
    }

    options.flags |= PSTREAM_FLAG_SEND_MOST_RECENT;
    options.flags |= PSTREAM_FLAG_RECEIVE_MOST_RECENT;
    options.send_unit_size = 8;
    options.num_send_units = 10;
    options.send_buffer_size = hardware_IOTest_P.StreamClient_SndSize;
    options.send_fifo_size = hardware_IOTest_P.StreamClient_SndFIFO;
    options.num_send_dimensions = 0;
    options.max_send_dimensions = NULL;
    if (hardware_IOTest_P.StreamClient_SndPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (hardware_IOTest_P.StreamClient_SndPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        hardware_IOTest_P.StreamClient_SndPriority;
    }

    qthread_attr_init(&send_thread_attributes);
    result = qthread_attr_setschedpolicy(&send_thread_attributes, QSCHED_FIFO);
    if (result == 0) {
      result = qthread_attr_setschedparam(&send_thread_attributes,
        &scheduling_parameters);
      if (result == 0) {
        result = qthread_attr_setinheritsched(&send_thread_attributes,
          QTHREAD_EXPLICIT_SCHED);
        if (result < 0) {
          rtmSetErrorStatus(hardware_IOTest_M,
                            "Unable to set scheduling inheritance for Stream Client sending thread");
        }
      } else {
        rtmSetErrorStatus(hardware_IOTest_M,
                          "The specified thread priority for the Stream Client sending thread is not valid for this target");
      }
    } else {
      rtmSetErrorStatus(hardware_IOTest_M,
                        "Unable to set scheduling policy for Stream Client sending thread");
    }

    options.send_thread_attributes = &send_thread_attributes;
    options.receive_unit_size = 8;
    options.num_receive_units = 17;
    options.receive_buffer_size = hardware_IOTest_P.StreamClient_RcvSize;
    options.receive_fifo_size = hardware_IOTest_P.StreamClient_RcvFIFO;
    options.num_receive_dimensions = 0;
    options.max_receive_dimensions = NULL;
    if (hardware_IOTest_P.StreamClient_RcvPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (hardware_IOTest_P.StreamClient_RcvPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        hardware_IOTest_P.StreamClient_RcvPriority;
    }

    qthread_attr_init(&receive_thread_attributes);
    if (result == 0) {
      result = qthread_attr_setschedpolicy(&receive_thread_attributes,
        QSCHED_FIFO);
      if (result == 0) {
        result = qthread_attr_setschedparam(&receive_thread_attributes,
          &scheduling_parameters);
        if (result == 0) {
          result = qthread_attr_setinheritsched(&receive_thread_attributes,
            QTHREAD_EXPLICIT_SCHED);
          if (result < 0) {
            rtmSetErrorStatus(hardware_IOTest_M,
                              "Unable to set scheduling inheritance for Stream Client receiving thread");
          }
        } else {
          rtmSetErrorStatus(hardware_IOTest_M,
                            "The specified thread priority for the Stream Client receiving thread is not valid for this target");
        }
      } else {
        rtmSetErrorStatus(hardware_IOTest_M,
                          "Unable to set scheduling policy for Stream Client receiving thread");
      }
    }

    options.receive_thread_attributes = &receive_thread_attributes;
    if (result == 0) {
      result = pstream_connect((const char *) hardware_IOTest_P.StreamClient_URI,
        &options, &hardware_IOTest_DW.StreamClient_Stream);
      if (result < 0 && result != -QERR_WOULD_BLOCK) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(hardware_IOTest_M, _rt_error_message);
      }
    }

    qthread_attr_destroy(&send_thread_attributes);
    qthread_attr_destroy(&receive_thread_attributes);
  }

  /* user code (Start function Trailer) */

  /* S-Function Block: hardware_IOTest/Read//Write/Time (time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time(&_high_resolution_start_time);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(hardware_IOTest_M, _rt_error_message);
      return;
    }
  }
}

/* Model terminate function */
void hardware_IOTest_terminate(void)
{
  /* Terminate for S-Function (stream_client_block): '<S2>/Stream Client' incorporates:
   *  Constant: '<S2>/Constant6'
   */

  /* S-Function Block: hardware_IOTest/Read//Write/Stream Client (stream_client_block) */
  {
    if (hardware_IOTest_DW.StreamClient_Stream != NULL) {
      pstream_close(hardware_IOTest_DW.StreamClient_Stream);
    }

    hardware_IOTest_DW.StreamClient_Stream = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  hardware_IOTest_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  hardware_IOTest_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  hardware_IOTest_initialize();
}

void MdlTerminate(void)
{
  hardware_IOTest_terminate();
}

/* Registration function */
RT_MODEL_hardware_IOTest_T *hardware_IOTest(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)hardware_IOTest_M, 0,
                sizeof(RT_MODEL_hardware_IOTest_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = hardware_IOTest_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "hardware_IOTest_M points to
       static memory which is guaranteed to be non-NULL" */
    hardware_IOTest_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    hardware_IOTest_M->Timing.sampleTimes =
      (&hardware_IOTest_M->Timing.sampleTimesArray[0]);
    hardware_IOTest_M->Timing.offsetTimes =
      (&hardware_IOTest_M->Timing.offsetTimesArray[0]);

    /* task periods */
    hardware_IOTest_M->Timing.sampleTimes[0] = (0.033333333333333333);

    /* task offsets */
    hardware_IOTest_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(hardware_IOTest_M, &hardware_IOTest_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = hardware_IOTest_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    hardware_IOTest_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(hardware_IOTest_M, -1);
  hardware_IOTest_M->Timing.stepSize0 = 0.033333333333333333;

  /* External mode info */
  hardware_IOTest_M->Sizes.checksums[0] = (3382408238U);
  hardware_IOTest_M->Sizes.checksums[1] = (3461162645U);
  hardware_IOTest_M->Sizes.checksums[2] = (2548068264U);
  hardware_IOTest_M->Sizes.checksums[3] = (2501021373U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    hardware_IOTest_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(hardware_IOTest_M->extModeInfo,
      &hardware_IOTest_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(hardware_IOTest_M->extModeInfo,
                        hardware_IOTest_M->Sizes.checksums);
    rteiSetTPtr(hardware_IOTest_M->extModeInfo, rtmGetTPtr(hardware_IOTest_M));
  }

  hardware_IOTest_M->solverInfoPtr = (&hardware_IOTest_M->solverInfo);
  hardware_IOTest_M->Timing.stepSize = (0.033333333333333333);
  rtsiSetFixedStepSize(&hardware_IOTest_M->solverInfo, 0.033333333333333333);
  rtsiSetSolverMode(&hardware_IOTest_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  hardware_IOTest_M->blockIO = ((void *) &hardware_IOTest_B);
  (void) memset(((void *) &hardware_IOTest_B), 0,
                sizeof(B_hardware_IOTest_T));

  /* parameters */
  hardware_IOTest_M->defaultParam = ((real_T *)&hardware_IOTest_P);

  /* states (dwork) */
  hardware_IOTest_M->dwork = ((void *) &hardware_IOTest_DW);
  (void) memset((void *)&hardware_IOTest_DW, 0,
                sizeof(DW_hardware_IOTest_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    hardware_IOTest_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 21;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  hardware_IOTest_M->Sizes.numContStates = (0);/* Number of continuous states */
  hardware_IOTest_M->Sizes.numY = (0); /* Number of model outputs */
  hardware_IOTest_M->Sizes.numU = (0); /* Number of model inputs */
  hardware_IOTest_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  hardware_IOTest_M->Sizes.numSampTimes = (1);/* Number of sample times */
  hardware_IOTest_M->Sizes.numBlocks = (29);/* Number of blocks */
  hardware_IOTest_M->Sizes.numBlockIO = (3);/* Number of block outputs */
  hardware_IOTest_M->Sizes.numBlockPrms = (69);/* Sum of parameter "widths" */
  return hardware_IOTest_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
