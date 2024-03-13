/*
 * qbot_driver_v_1_22.c
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
#include "rtwtypes.h"
#include "qbot_driver_v_1_22_private.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>
#include "zero_crossing_types.h"
#include "qbot_driver_v_1_22_dt.h"

/* Named constants for MATLAB Function: '<S27>/MATLAB Function1' */
#define qbot_driver_v_1_22_CALL_EVENT  (-1)

/* Named constants for MATLAB Function: '<S47>/MATLAB Function1' */
#define qbot_driver_v_1_22_CALL_EVENT_k (-1)

/* Named constants for MATLAB Function: '<S1>/MATLAB Function' */
#define qbot_driver_v_1_2_CALL_EVENT_k2 (-1)

/* Block signals (default storage) */
B_qbot_driver_v_1_22_T qbot_driver_v_1_22_B;

/* Continuous states */
X_qbot_driver_v_1_22_T qbot_driver_v_1_22_X;

/* Block states (default storage) */
DW_qbot_driver_v_1_22_T qbot_driver_v_1_22_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_qbot_driver_v_1_22_T qbot_driver_v_1_22_PrevZCX;

/* Real-time model */
static RT_MODEL_qbot_driver_v_1_22_T qbot_driver_v_1_22_M_;
RT_MODEL_qbot_driver_v_1_22_T *const qbot_driver_v_1_22_M =
  &qbot_driver_v_1_22_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  qbot_driver_v_1_22_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * System initialize for atomic system:
 *    '<S27>/MATLAB Function1'
 *    '<S27>/MATLAB Function2'
 *    '<S27>/MATLAB Function3'
 */
void qbot_drive_MATLABFunction1_Init(DW_MATLABFunction1_qbot_drive_T *localDW)
{
  localDW->sfEvent = qbot_driver_v_1_22_CALL_EVENT;
  localDW->is_active_c1_qbot_driver_v_1_22 = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S27>/MATLAB Function1'
 *    '<S27>/MATLAB Function2'
 *    '<S27>/MATLAB Function3'
 */
void qbot_driver_v_1_MATLABFunction1(real_T rtu_t, real_T rtu_d, real_T rtu_p,
  B_MATLABFunction1_qbot_driver_T *localB, DW_MATLABFunction1_qbot_drive_T
  *localDW)
{
  real_T t;
  localDW->sfEvent = qbot_driver_v_1_22_CALL_EVENT;

  /* MATLAB Function 'LED States/LEDs/MATLAB Function1': '<S35>:1' */
  /* '<S35>:1:3' */
  t = rtu_t;
  if (rtu_p == 0.0) {
    if (rtu_t == 0.0) {
      t = rtu_p;
    }
  } else if (rtIsNaN(rtu_t) || rtIsNaN(rtu_p) || rtIsInf(rtu_t)) {
    t = (rtNaN);
  } else if (rtu_t == 0.0) {
    t = 0.0 / rtu_p;
  } else if (rtIsInf(rtu_p)) {
    if ((rtu_p < 0.0) != (rtu_t < 0.0)) {
      t = rtu_p;
    }
  } else {
    boolean_T rEQ0;
    t = fmod(rtu_t, rtu_p);
    rEQ0 = (t == 0.0);
    if ((!rEQ0) && (rtu_p > floor(rtu_p))) {
      real_T q;
      q = fabs(rtu_t / rtu_p);
      rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      t = rtu_p * 0.0;
    } else if ((rtu_t < 0.0) != (rtu_p < 0.0)) {
      t += rtu_p;
    }
  }

  if (t / rtu_p < rtu_d) {
    /* '<S35>:1:5' */
    /* '<S35>:1:6' */
    localB->y = 1.0;
  } else {
    /* '<S35>:1:8' */
    localB->y = 0.0;
  }
}

/*
 * System initialize for atomic system:
 *    '<S47>/MATLAB Function1'
 *    '<S47>/MATLAB Function2'
 */
void qbot_dri_MATLABFunction1_h_Init(DW_MATLABFunction1_qbot_dri_n_T *localDW)
{
  localDW->sfEvent = qbot_driver_v_1_22_CALL_EVENT_k;
  localDW->is_active_c2_qbot_driver_v_1_22 = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S47>/MATLAB Function1'
 *    '<S47>/MATLAB Function2'
 */
void qbot_driver_v_MATLABFunction1_b(real_T rtu_mode, real_T rtu_command,
  B_MATLABFunction1_qbot_driv_l_T *localB, DW_MATLABFunction1_qbot_dri_n_T
  *localDW)
{
  real_T accel_limit;
  real_T speed_limit;
  localDW->sfEvent = qbot_driver_v_1_22_CALL_EVENT_k;

  /* MATLAB Function 'Motor Controllers/Speed Controller/MATLAB Function1': '<S51>:1' */
  if ((rtu_mode == 0.0) || (rtu_mode == 1.0)) {
    /* '<S51>:1:5' */
    /* '<S51>:1:7' */
    accel_limit = 11.25;

    /* '<S51>:1:8' */
    speed_limit = 15.75;
  } else {
    /* '<S51>:1:11' */
    accel_limit = 22.5;

    /* '<S51>:1:12' */
    speed_limit = 33.75;
  }

  /* '<S51>:1:16' */
  localB->upperSat = speed_limit;

  /* '<S51>:1:17' */
  localB->lowerSat = -speed_limit;
  if (rtu_command > 0.0) {
    /* '<S51>:1:21' */
    /* '<S51>:1:22' */
    localB->upperRate = accel_limit;

    /* '<S51>:1:23' */
    localB->lowerRate = -10.0 * accel_limit;
  } else if (rtu_command < 0.0) {
    /* '<S51>:1:24' */
    /* '<S51>:1:25' */
    localB->upperRate = 10.0 * accel_limit;

    /* '<S51>:1:26' */
    localB->lowerRate = -accel_limit;
  } else {
    /* '<S51>:1:28' */
    localB->upperRate = accel_limit;

    /* '<S51>:1:29' */
    localB->lowerRate = -accel_limit;
  }
}

/* Model output function */
void qbot_driver_v_1_22_output(void)
{
  /* local block i/o variables */
  int32_T rtb_Print1_o1;
  int32_T rtb_Print1_o1_f;
  int32_T rtb_Print1_o1_o;
  int32_T rtb_Print1_o1_p;
  real_T rtb_Memory1;
  real_T rtb_Switch2;
  real_T rtb_Memory2;
  real_T rtb_Switch2_f;
  real_T rtb_Time;
  real_T rtb_TmpSignalConversionAtHILWri[6];
  real_T rtb_error[2];
  real_T rtb_Product_h_idx_0;
  real_T rtb_Product_h_idx_1;
  real_T rtb_Sum_h;
  real_T rtb_countstorad_idx_0;
  real_T rtb_countstorad_idx_1;
  int32_T i;
  boolean_T rtb_FixPtRelationalOperator[17];
  boolean_T rtb_TmpSignalConversionAtHILW_e[2];
  boolean_T rtb_AND;
  boolean_T rtb_OR1;
  boolean_T rtb_OR2;
  boolean_T rtb_Relation;
  ZCEventType zcEvent;
  if (rtmIsMajorTimeStep(qbot_driver_v_1_22_M)) {
    /* set solver stop time */
    if (!(qbot_driver_v_1_22_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&qbot_driver_v_1_22_M->solverInfo,
                            ((qbot_driver_v_1_22_M->Timing.clockTickH0 + 1) *
        qbot_driver_v_1_22_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&qbot_driver_v_1_22_M->solverInfo,
                            ((qbot_driver_v_1_22_M->Timing.clockTick0 + 1) *
        qbot_driver_v_1_22_M->Timing.stepSize0 +
        qbot_driver_v_1_22_M->Timing.clockTickH0 *
        qbot_driver_v_1_22_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(qbot_driver_v_1_22_M)) {
    qbot_driver_v_1_22_M->Timing.t[0] = rtsiGetT
      (&qbot_driver_v_1_22_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(qbot_driver_v_1_22_DW.LockModeonConnection_SubsysRanB);

  /* Reset subsysRan breadcrumbs */
  srClearBC(qbot_driver_v_1_22_DW.LowBatteryError_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(qbot_driver_v_1_22_DW.LowBatteryWarning_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(qbot_driver_v_1_22_DW.StallOvercurrentError_SubsysRan);

  /* Reset subsysRan breadcrumbs */
  srClearBC(qbot_driver_v_1_22_DW.WatchdogexpiryError_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(qbot_driver_v_1_22_DW.findholdcommand_SubsysRanBC);
  if (rtmIsMajorTimeStep(qbot_driver_v_1_22_M)) {
    /* S-Function (hil_read_block): '<S2>/HIL Read' */

    /* S-Function Block: qbot_driver_v_1_22/I//O/HIL Read (hil_read_block) */
    {
      t_error result = hil_read(qbot_driver_v_1_22_DW.HILInitialize_Card,
        qbot_driver_v_1_22_P.HILRead_analog_channels, 4U,
        qbot_driver_v_1_22_P.HILRead_encoder_channels, 2U,
        qbot_driver_v_1_22_P.HILRead_digital_channels, 10U,
        qbot_driver_v_1_22_P.HILRead_other_channels, 9U,
        &qbot_driver_v_1_22_B.HILRead_o1[0],
        &qbot_driver_v_1_22_DW.HILRead_EncoderBuffer[0],
        &qbot_driver_v_1_22_DW.HILRead_DigitalBuffer[0],
        &qbot_driver_v_1_22_B.HILRead_o4[0]
        );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      } else {
        rtb_error[0] = qbot_driver_v_1_22_DW.HILRead_EncoderBuffer[0];
        rtb_error[1] = qbot_driver_v_1_22_DW.HILRead_EncoderBuffer[1];

        {
          int_T i1;
          real_T *y2 = &qbot_driver_v_1_22_B.HILRead_o3[0];
          t_boolean *dw_DigitalBuffer =
            &qbot_driver_v_1_22_DW.HILRead_DigitalBuffer[0];
          for (i1=0; i1 < 10; i1++) {
            y2[i1] = dw_DigitalBuffer[i1];
          }
        }
      }
    }

    /* Gain: '<S2>/counts to rad' */
    rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.countstorad_Gain * rtb_error[0];

    /* Gain: '<S2>/count   s//s to rad//s' */
    rtb_error[0] = qbot_driver_v_1_22_P.countsstorads_Gain *
      qbot_driver_v_1_22_B.HILRead_o4[6];

    /* Gain: '<S2>/counts to rad' */
    rtb_countstorad_idx_1 = qbot_driver_v_1_22_P.countstorad_Gain * rtb_error[1];

    /* Gain: '<S2>/count   s//s to rad//s' */
    rtb_error[1] = qbot_driver_v_1_22_P.countsstorads_Gain *
      qbot_driver_v_1_22_B.HILRead_o4[7];

    /* MATLAB Function: '<S18>/Figure out which battery is valid and active1' incorporates:
     *  Constant: '<S18>/Constant'
     *  Constant: '<S18>/Constant1'
     *  Constant: '<S18>/Constant2'
     */
    qbot_driver_v_1_22_DW.sfEvent = qbot_driver_v_1_2_CALL_EVENT_k2;

    /* MATLAB Function 'I//O/battery monitoring/Figure out which battery is valid and active1': '<S21>:1' */
    /* '<S21>:1:3' */
    qbot_driver_v_1_22_B.stop = 0.0;

    /* '<S21>:1:4' */
    qbot_driver_v_1_22_B.low_battery = 0.0;

    /* '<S21>:1:5' */
    rtb_Sum_h = 13.5;
    if ((qbot_driver_v_1_22_B.HILRead_o3[8] != 0.0) &&
        (qbot_driver_v_1_22_B.HILRead_o3[9] != 0.0)) {
      /* '<S21>:1:8' */
      rtb_Sum_h = (qbot_driver_v_1_22_B.HILRead_o1[0] +
                   qbot_driver_v_1_22_B.HILRead_o1[1]) / 2.0;
    } else if (qbot_driver_v_1_22_B.HILRead_o3[8] != 0.0) {
      /* '<S21>:1:10' */
      rtb_Sum_h = qbot_driver_v_1_22_B.HILRead_o1[0];
    } else if (qbot_driver_v_1_22_B.HILRead_o3[9] != 0.0) {
      /* '<S21>:1:12' */
      rtb_Sum_h = qbot_driver_v_1_22_B.HILRead_o1[1];
    }

    if (rtb_Sum_h <= qbot_driver_v_1_22_P.Constant2_Value) {
      /* '<S21>:1:15' */
      /* '<S21>:1:16' */
      qbot_driver_v_1_22_B.low_battery = 1.0;
    }

    if (rtb_Sum_h <= qbot_driver_v_1_22_P.Constant_Value_l) {
      /* '<S21>:1:19' */
      /* '<S21>:1:20' */
      qbot_driver_v_1_22_B.stop = 1.0;
    }

    /* '<S21>:1:23' */
    qbot_driver_v_1_22_B.bat_voltage_percentage = rtb_Sum_h /
      qbot_driver_v_1_22_P.Constant1_Value;
    qbot_driver_v_1_22_B.bat_voltage = rtb_Sum_h;

    /* End of MATLAB Function: '<S18>/Figure out which battery is valid and active1' */

    /* S-Function (hil_watchdog_block): '<S1>/HIL Watchdog' */

    /* S-Function Block: qbot_driver_v_1_22/From Client/HIL Watchdog (hil_watchdog_block) */
    {
      t_error result;
      if (qbot_driver_v_1_22_DW.HILWatchdog_IsStarted) {
        result = hil_watchdog_reload(qbot_driver_v_1_22_DW.HILInitialize_Card);
      } else {
        result = hil_watchdog_start(qbot_driver_v_1_22_DW.HILInitialize_Card,
          qbot_driver_v_1_22_P.HILWatchdog_Timeout);
        if (result == 0) {
          qbot_driver_v_1_22_DW.HILWatchdog_IsStarted = true;
          result = 1;                  /* indicate watchdog has not expired */
        }
      }

      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      }

      qbot_driver_v_1_22_B.HILWatchdog = (result == 0);
    }

    /* SignalConversion generated from: '<S1>/Stream Server' incorporates:
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  Memory: '<S1>/Memory'
     *  Memory: '<S1>/Memory1'
     */
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[0] =
      rtb_countstorad_idx_0;
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[2] = rtb_error[0];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[4] =
      qbot_driver_v_1_22_DW.Memory_PreviousInput[0];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[1] =
      rtb_countstorad_idx_1;
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[3] = rtb_error[1];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[5] =
      qbot_driver_v_1_22_DW.Memory_PreviousInput[1];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[6] =
      qbot_driver_v_1_22_B.HILRead_o4[3];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[9] =
      qbot_driver_v_1_22_B.HILRead_o4[0];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[7] =
      qbot_driver_v_1_22_B.HILRead_o4[4];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[10] =
      qbot_driver_v_1_22_B.HILRead_o4[1];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[8] =
      qbot_driver_v_1_22_B.HILRead_o4[5];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[11] =
      qbot_driver_v_1_22_B.HILRead_o4[2];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[12] =
      qbot_driver_v_1_22_B.HILRead_o1[2];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[13] =
      qbot_driver_v_1_22_B.HILRead_o1[3];
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[14] =
      qbot_driver_v_1_22_B.bat_voltage;
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[15] =
      qbot_driver_v_1_22_B.HILWatchdog;
    qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[16] =
      qbot_driver_v_1_22_DW.Memory1_PreviousInput;

    /* RelationalOperator: '<S12>/FixPt Relational Operator' incorporates:
     *  SignalConversion generated from: '<S1>/Stream Server'
     *  UnitDelay: '<S12>/Delay Input1'
     */
    for (i = 0; i < 17; i++) {
      rtb_FixPtRelationalOperator[i] =
        (qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[i] !=
         qbot_driver_v_1_22_DW.DelayInput1_DSTATE[i]);
    }

    /* End of RelationalOperator: '<S12>/FixPt Relational Operator' */

    /* Logic: '<S1>/OR1' incorporates:
     *  RelationalOperator: '<S12>/FixPt Relational Operator'
     */
    rtb_OR1 = rtb_FixPtRelationalOperator[0];
    for (i = 0; i < 16; i++) {
      rtb_OR1 = (rtb_OR1 || rtb_FixPtRelationalOperator[i + 1]);
    }

    /* End of Logic: '<S1>/OR1' */

    /* S-Function (stream_server_block): '<S1>/Stream Server' */

    /* S-Function Block: qbot_driver_v_1_22/From Client/Stream Server (stream_server_block) */
    {
      t_pstream_state state;
      t_error send_result;
      t_error receive_result;
      if (rtb_OR1) {
        send_result = pstream_send(qbot_driver_v_1_22_DW.StreamServer_Stream,
          &qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[0]);
      } else {
        send_result = 0;
      }

      receive_result = pstream_receive(qbot_driver_v_1_22_DW.StreamServer_Stream,
        &qbot_driver_v_1_22_B.StreamServer_o4[0]);
      qbot_driver_v_1_22_B.StreamServer_o5 = (receive_result > 0);
      qbot_driver_v_1_22_B.StreamServer_o2 = 0;
      if (send_result < 0 && send_result != -QERR_WOULD_BLOCK) {
        qbot_driver_v_1_22_B.StreamServer_o2 = send_result;
      } else if (receive_result < 0 && receive_result != -QERR_WOULD_BLOCK) {
        qbot_driver_v_1_22_B.StreamServer_o2 = receive_result;
      }

      pstream_get_state(qbot_driver_v_1_22_DW.StreamServer_Stream, &state);
      qbot_driver_v_1_22_B.StreamServer_o1 = state;
    }

    /* RelationalOperator: '<S17>/Relation' incorporates:
     *  Constant: '<S17>/threshold'
     */
    rtb_OR1 = ((real_T)qbot_driver_v_1_22_B.StreamServer_o5 >
               qbot_driver_v_1_22_P.Threshold_threshold);

    /* Logic: '<S17>/Logical Operator' */
    qbot_driver_v_1_22_B.LogicalOperator = !rtb_OR1;

    /* DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
    if (qbot_driver_v_1_22_B.LogicalOperator ||
        (qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRese != 0)) {
      qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE =
        qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC;
    }

    /* MATLAB Function: '<S15>/MATLAB Function' incorporates:
     *  Constant: '<S17>/duration'
     *  DiscreteIntegrator: '<S17>/Discrete-Time Integrator'
     *  Logic: '<S15>/NOT'
     *  RelationalOperator: '<S17>/Relational Operator'
     */
    qbot_driver_v_1_22_DW.sfEvent_m = qbot_driver_v_1_2_CALL_EVENT_k2;

    /* MATLAB Function 'From Client/Subsystem/MATLAB Function': '<S16>:1' */
    if ((qbot_driver_v_1_22_DW.flag == 0.0) &&
        (qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE >=
         qbot_driver_v_1_22_P.Threshold_duration)) {
      /* '<S16>:1:9' */
      /* '<S16>:1:10' */
      qbot_driver_v_1_22_DW.mindset = 1.0;

      /* '<S16>:1:11' */
      qbot_driver_v_1_22_DW.flag = 1.0;
    }

    if (!qbot_driver_v_1_22_B.StreamServer_o5) {
      /* '<S16>:1:14' */
      /* '<S16>:1:15' */
      qbot_driver_v_1_22_DW.mindset = 0.0;

      /* '<S16>:1:16' */
      qbot_driver_v_1_22_DW.flag = 0.0;
    }

    /* Logic: '<S1>/AND' incorporates:
     *  Constant: '<S8>/Constant'
     *  Constant: '<S9>/Constant'
     *  MATLAB Function: '<S15>/MATLAB Function'
     *  RelationalOperator: '<S8>/Compare'
     *  RelationalOperator: '<S9>/Compare'
     */
    /* '<S16>:1:19' */
    qbot_driver_v_1_22_B.AND = ((qbot_driver_v_1_22_B.StreamServer_o1 ==
      qbot_driver_v_1_22_P.CompareToConstant_const_f) &&
      (qbot_driver_v_1_22_B.StreamServer_o2 >=
       qbot_driver_v_1_22_P.CompareToConstant1_const) &&
      (qbot_driver_v_1_22_DW.mindset != 0.0));

    /* Outputs for Triggered SubSystem: '<S1>/Lock Mode on Connection' incorporates:
     *  TriggerPort: '<S13>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&qbot_driver_v_1_22_M->solverInfo)) {
      if (qbot_driver_v_1_22_B.AND &&
          (qbot_driver_v_1_22_PrevZCX.LockModeonConnection_Trig_ZCE != POS_ZCSIG))
      {
        /* SignalConversion generated from: '<S13>/In1' */
        qbot_driver_v_1_22_B.In1 = qbot_driver_v_1_22_B.StreamServer_o4[0];
        qbot_driver_v_1_22_DW.LockModeonConnection_SubsysRanB = 4;
      }

      qbot_driver_v_1_22_PrevZCX.LockModeonConnection_Trig_ZCE =
        qbot_driver_v_1_22_B.AND;
    }

    /* End of Outputs for SubSystem: '<S1>/Lock Mode on Connection' */
    /* Logic: '<S1>/AND1' */
    qbot_driver_v_1_22_B.AND1 = (qbot_driver_v_1_22_B.AND &&
      (qbot_driver_v_1_22_B.StreamServer_o4[5] != 0.0));

    /* Logic: '<S1>/AND2' */
    qbot_driver_v_1_22_B.AND2 = (qbot_driver_v_1_22_B.AND &&
      (qbot_driver_v_1_22_B.StreamServer_o4[6] != 0.0));

    /* MATLAB Function: '<S1>/MATLAB Function' */
    qbot_driver_v_1_22_DW.sfEvent_mu = qbot_driver_v_1_2_CALL_EVENT_k2;

    /* Logic: '<S1>/OR' incorporates:
     *  Constant: '<S10>/Constant'
     *  Constant: '<S11>/Constant'
     *  RelationalOperator: '<S10>/Compare'
     *  RelationalOperator: '<S11>/Compare'
     */
    /* MATLAB Function 'From Client/MATLAB Function': '<S14>:1' */
    /* '<S14>:1:4' */
    /* '<S14>:1:7' */
    /* '<S14>:1:8' */
    /* '<S14>:1:13' */
    /* '<S14>:1:14' */
    rtb_OR2 = ((qbot_driver_v_1_22_B.In1 ==
                qbot_driver_v_1_22_P.CompareToConstant2_const) ||
               (qbot_driver_v_1_22_B.In1 ==
                qbot_driver_v_1_22_P.CompareToConstant3_const));

    /* Switch: '<S1>/Switch' incorporates:
     *  MATLAB Function: '<S1>/MATLAB Function'
     */
    if (rtb_OR2) {
      rtb_Product_h_idx_1 = qbot_driver_v_1_22_B.StreamServer_o4[7];
    } else {
      rtb_Product_h_idx_1 = (qbot_driver_v_1_22_B.StreamServer_o4[7] -
        qbot_driver_v_1_22_B.StreamServer_o4[8] * 0.3928 / 2.0) /
        0.044449999999999996;
    }

    /* Product: '<S1>/Product' incorporates:
     *  Switch: '<S1>/Switch'
     */
    rtb_Product_h_idx_0 = rtb_Product_h_idx_1 * (real_T)qbot_driver_v_1_22_B.AND;

    /* Switch: '<S1>/Switch' incorporates:
     *  MATLAB Function: '<S1>/MATLAB Function'
     */
    if (rtb_OR2) {
      rtb_Product_h_idx_1 = qbot_driver_v_1_22_B.StreamServer_o4[8];
    } else {
      rtb_Product_h_idx_1 = (qbot_driver_v_1_22_B.StreamServer_o4[8] * 0.3928 /
        2.0 + qbot_driver_v_1_22_B.StreamServer_o4[7]) / 0.044449999999999996;
    }

    /* Product: '<S1>/Product' incorporates:
     *  Switch: '<S1>/Switch'
     */
    rtb_Product_h_idx_1 *= (real_T)qbot_driver_v_1_22_B.AND;

    /* DataTypeConversion: '<S17>/Data Type Conversion' */
    qbot_driver_v_1_22_B.DataTypeConversion = rtb_OR1;

    /* Outputs for Triggered SubSystem: '<S5>/find hold command' incorporates:
     *  TriggerPort: '<S48>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&qbot_driver_v_1_22_M->solverInfo)) {
      if (qbot_driver_v_1_22_B.AND2 &&
          (qbot_driver_v_1_22_PrevZCX.findholdcommand_Trig_ZCE != POS_ZCSIG)) {
        /* SignalConversion generated from: '<S48>/measurement (rad)' */
        qbot_driver_v_1_22_B.measurementrad[0] = rtb_countstorad_idx_0;
        qbot_driver_v_1_22_B.measurementrad[1] = rtb_countstorad_idx_1;
        qbot_driver_v_1_22_DW.findholdcommand_SubsysRanBC = 4;
      }

      qbot_driver_v_1_22_PrevZCX.findholdcommand_Trig_ZCE =
        qbot_driver_v_1_22_B.AND2;
    }

    /* End of Outputs for SubSystem: '<S5>/find hold command' */

    /* Switch: '<S46>/Switch' incorporates:
     *  Constant: '<S49>/Constant'
     *  RelationalOperator: '<S49>/Compare'
     */
    if (qbot_driver_v_1_22_B.measurementrad[0] !=
        qbot_driver_v_1_22_P.CompareToConstant2_const_e) {
      /* Product: '<S46>/Product1' incorporates:
       *  Constant: '<S5>/Kp '
       *  Sum: '<S46>/Sum'
       */
      rtb_countstorad_idx_0 = (qbot_driver_v_1_22_B.measurementrad[0] -
        rtb_countstorad_idx_0) * qbot_driver_v_1_22_P.Kp_Value;

      /* Product: '<S46>/Product2' incorporates:
       *  Constant: '<S5>/Kd '
       */
      rtb_Sum_h = qbot_driver_v_1_22_P.Kd_Value * rtb_error[0];

      /* Saturate: '<S46>/Saturation' */
      if (rtb_countstorad_idx_0 > qbot_driver_v_1_22_P.Saturation_UpperSat[0]) {
        rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.Saturation_UpperSat[0];
      } else if (rtb_countstorad_idx_0 <
                 qbot_driver_v_1_22_P.Saturation_LowerSat[0]) {
        rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.Saturation_LowerSat[0];
      }

      /* Saturate: '<S46>/Saturation2' */
      if (rtb_Sum_h > qbot_driver_v_1_22_P.Saturation2_UpperSat[0]) {
        rtb_Sum_h = qbot_driver_v_1_22_P.Saturation2_UpperSat[0];
      } else if (rtb_Sum_h < qbot_driver_v_1_22_P.Saturation2_LowerSat[0]) {
        rtb_Sum_h = qbot_driver_v_1_22_P.Saturation2_LowerSat[0];
      }

      /* Switch: '<S46>/Switch' incorporates:
       *  Saturate: '<S46>/Saturation'
       *  Saturate: '<S46>/Saturation2'
       *  Sum: '<S46>/Add'
       */
      qbot_driver_v_1_22_B.Switch[0] = rtb_countstorad_idx_0 - rtb_Sum_h;
    } else {
      /* Switch: '<S46>/Switch' incorporates:
       *  Constant: '<S46>/Constant1'
       */
      qbot_driver_v_1_22_B.Switch[0] = qbot_driver_v_1_22_P.Constant1_Value_j[0];
    }

    if (qbot_driver_v_1_22_B.measurementrad[1] !=
        qbot_driver_v_1_22_P.CompareToConstant2_const_e) {
      /* Product: '<S46>/Product1' incorporates:
       *  Constant: '<S5>/Kp '
       *  Sum: '<S46>/Sum'
       */
      rtb_countstorad_idx_0 = (qbot_driver_v_1_22_B.measurementrad[1] -
        rtb_countstorad_idx_1) * qbot_driver_v_1_22_P.Kp_Value;

      /* Product: '<S46>/Product2' incorporates:
       *  Constant: '<S5>/Kd '
       */
      rtb_Sum_h = qbot_driver_v_1_22_P.Kd_Value * rtb_error[1];

      /* Saturate: '<S46>/Saturation' */
      if (rtb_countstorad_idx_0 > qbot_driver_v_1_22_P.Saturation_UpperSat[1]) {
        rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.Saturation_UpperSat[1];
      } else if (rtb_countstorad_idx_0 <
                 qbot_driver_v_1_22_P.Saturation_LowerSat[1]) {
        rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.Saturation_LowerSat[1];
      }

      /* Saturate: '<S46>/Saturation2' */
      if (rtb_Sum_h > qbot_driver_v_1_22_P.Saturation2_UpperSat[1]) {
        rtb_Sum_h = qbot_driver_v_1_22_P.Saturation2_UpperSat[1];
      } else if (rtb_Sum_h < qbot_driver_v_1_22_P.Saturation2_LowerSat[1]) {
        rtb_Sum_h = qbot_driver_v_1_22_P.Saturation2_LowerSat[1];
      }

      /* Switch: '<S46>/Switch' incorporates:
       *  Saturate: '<S46>/Saturation'
       *  Saturate: '<S46>/Saturation2'
       *  Sum: '<S46>/Add'
       */
      qbot_driver_v_1_22_B.Switch[1] = rtb_countstorad_idx_0 - rtb_Sum_h;
    } else {
      /* Switch: '<S46>/Switch' incorporates:
       *  Constant: '<S46>/Constant1'
       */
      qbot_driver_v_1_22_B.Switch[1] = qbot_driver_v_1_22_P.Constant1_Value_j[1];
    }

    /* End of Switch: '<S46>/Switch' */

    /* Switch: '<S60>/Switch' incorporates:
     *  Abs: '<S60>/Abs'
     *  Constant: '<S60>/Constant'
     *  Constant: '<S62>/Constant'
     *  RelationalOperator: '<S62>/Compare'
     */
    if (fabs(rtb_Product_h_idx_0) < qbot_driver_v_1_22_P.CompareToConstant_const)
    {
      rtb_Product_h_idx_0 = qbot_driver_v_1_22_P.Constant_Value_f;
    }

    /* End of Switch: '<S60>/Switch' */

    /* Switch: '<S61>/Switch' incorporates:
     *  Abs: '<S61>/Abs'
     *  Constant: '<S61>/Constant'
     *  Constant: '<S63>/Constant'
     *  RelationalOperator: '<S63>/Compare'
     */
    if (fabs(rtb_Product_h_idx_1) <
        qbot_driver_v_1_22_P.CompareToConstant_const_l) {
      rtb_Product_h_idx_1 = qbot_driver_v_1_22_P.Constant_Value_d;
    }

    /* End of Switch: '<S61>/Switch' */

    /* RelationalOperator: '<S50>/Compare' incorporates:
     *  Constant: '<S50>/Constant'
     */
    rtb_TmpSignalConversionAtHILW_e[0] = (rtb_Product_h_idx_0 ==
      qbot_driver_v_1_22_P.CompareToConstant2_const_b);
    rtb_TmpSignalConversionAtHILW_e[1] = (rtb_Product_h_idx_1 ==
      qbot_driver_v_1_22_P.CompareToConstant2_const_b);

    /* Logic: '<S47>/OR2' */
    qbot_driver_v_1_22_B.OR2 = (rtb_TmpSignalConversionAtHILW_e[0] ||
      rtb_TmpSignalConversionAtHILW_e[1]);

    /* Memory: '<S47>/Memory1' */
    rtb_Memory1 = qbot_driver_v_1_22_DW.Memory1_PreviousInput_c;

    /* MATLAB Function: '<S47>/MATLAB Function1' */
    qbot_driver_v_MATLABFunction1_b(qbot_driver_v_1_22_B.In1, rtb_Memory1,
      &qbot_driver_v_1_22_B.sf_MATLABFunction1_b,
      &qbot_driver_v_1_22_DW.sf_MATLABFunction1_b);

    /* Product: '<S53>/delta rise limit' incorporates:
     *  SampleTimeMath: '<S53>/sample time'
     *
     * About '<S53>/sample time':
     *  y = K where K = ( w * Ts )
     */
    rtb_Sum_h = qbot_driver_v_1_22_B.sf_MATLABFunction1_b.upperRate *
      qbot_driver_v_1_22_P.sampletime_WtEt;

    /* Switch: '<S55>/Switch2' incorporates:
     *  RelationalOperator: '<S55>/LowerRelop1'
     *  RelationalOperator: '<S55>/UpperRelop'
     *  Switch: '<S55>/Switch'
     */
    if (rtb_Product_h_idx_0 > qbot_driver_v_1_22_B.sf_MATLABFunction1_b.upperSat)
    {
      /* Switch: '<S55>/Switch2' */
      rtb_Switch2 = qbot_driver_v_1_22_B.sf_MATLABFunction1_b.upperSat;
    } else if (rtb_Product_h_idx_0 <
               qbot_driver_v_1_22_B.sf_MATLABFunction1_b.lowerSat) {
      /* Switch: '<S55>/Switch' incorporates:
       *  Switch: '<S55>/Switch2'
       */
      rtb_Switch2 = qbot_driver_v_1_22_B.sf_MATLABFunction1_b.lowerSat;
    } else {
      /* Switch: '<S55>/Switch2' incorporates:
       *  Switch: '<S55>/Switch'
       */
      rtb_Switch2 = rtb_Product_h_idx_0;
    }

    /* End of Switch: '<S55>/Switch2' */

    /* Sum: '<S53>/Difference Inputs1' incorporates:
     *  UnitDelay: '<S53>/Delay Input2'
     */
    rtb_Product_h_idx_0 = rtb_Switch2 - qbot_driver_v_1_22_DW.DelayInput2_DSTATE;

    /* Switch: '<S58>/Switch2' incorporates:
     *  RelationalOperator: '<S58>/LowerRelop1'
     */
    if (!(rtb_Product_h_idx_0 > rtb_Sum_h)) {
      /* Product: '<S53>/delta fall limit' incorporates:
       *  SampleTimeMath: '<S53>/sample time'
       *
       * About '<S53>/sample time':
       *  y = K where K = ( w * Ts )
       */
      rtb_Sum_h = qbot_driver_v_1_22_B.sf_MATLABFunction1_b.lowerRate *
        qbot_driver_v_1_22_P.sampletime_WtEt;

      /* Switch: '<S58>/Switch' incorporates:
       *  RelationalOperator: '<S58>/UpperRelop'
       */
      if (!(rtb_Product_h_idx_0 < rtb_Sum_h)) {
        rtb_Sum_h = rtb_Product_h_idx_0;
      }

      /* End of Switch: '<S58>/Switch' */
    }

    /* End of Switch: '<S58>/Switch2' */

    /* Sum: '<S53>/Difference Inputs2' incorporates:
     *  UnitDelay: '<S53>/Delay Input2'
     */
    qbot_driver_v_1_22_B.DifferenceInputs2 = rtb_Sum_h +
      qbot_driver_v_1_22_DW.DelayInput2_DSTATE;

    /* Memory: '<S47>/Memory2' */
    rtb_Memory2 = qbot_driver_v_1_22_DW.Memory2_PreviousInput;

    /* MATLAB Function: '<S47>/MATLAB Function2' */
    qbot_driver_v_MATLABFunction1_b(qbot_driver_v_1_22_B.In1, rtb_Memory2,
      &qbot_driver_v_1_22_B.sf_MATLABFunction2_f,
      &qbot_driver_v_1_22_DW.sf_MATLABFunction2_f);

    /* Product: '<S54>/delta rise limit' incorporates:
     *  SampleTimeMath: '<S54>/sample time'
     *
     * About '<S54>/sample time':
     *  y = K where K = ( w * Ts )
     */
    rtb_Sum_h = qbot_driver_v_1_22_B.sf_MATLABFunction2_f.upperRate *
      qbot_driver_v_1_22_P.sampletime_WtEt_m;

    /* Switch: '<S56>/Switch2' incorporates:
     *  RelationalOperator: '<S56>/LowerRelop1'
     *  RelationalOperator: '<S56>/UpperRelop'
     *  Switch: '<S56>/Switch'
     */
    if (rtb_Product_h_idx_1 > qbot_driver_v_1_22_B.sf_MATLABFunction2_f.upperSat)
    {
      /* Switch: '<S56>/Switch2' */
      rtb_Switch2_f = qbot_driver_v_1_22_B.sf_MATLABFunction2_f.upperSat;
    } else if (rtb_Product_h_idx_1 <
               qbot_driver_v_1_22_B.sf_MATLABFunction2_f.lowerSat) {
      /* Switch: '<S56>/Switch' incorporates:
       *  Switch: '<S56>/Switch2'
       */
      rtb_Switch2_f = qbot_driver_v_1_22_B.sf_MATLABFunction2_f.lowerSat;
    } else {
      /* Switch: '<S56>/Switch2' incorporates:
       *  Switch: '<S56>/Switch'
       */
      rtb_Switch2_f = rtb_Product_h_idx_1;
    }

    /* End of Switch: '<S56>/Switch2' */

    /* Sum: '<S54>/Difference Inputs1' incorporates:
     *  UnitDelay: '<S54>/Delay Input2'
     */
    rtb_Product_h_idx_1 = rtb_Switch2_f -
      qbot_driver_v_1_22_DW.DelayInput2_DSTATE_b;

    /* Switch: '<S59>/Switch2' incorporates:
     *  RelationalOperator: '<S59>/LowerRelop1'
     */
    if (!(rtb_Product_h_idx_1 > rtb_Sum_h)) {
      /* Product: '<S54>/delta fall limit' incorporates:
       *  SampleTimeMath: '<S54>/sample time'
       *
       * About '<S54>/sample time':
       *  y = K where K = ( w * Ts )
       */
      rtb_Sum_h = qbot_driver_v_1_22_B.sf_MATLABFunction2_f.lowerRate *
        qbot_driver_v_1_22_P.sampletime_WtEt_m;

      /* Switch: '<S59>/Switch' incorporates:
       *  RelationalOperator: '<S59>/UpperRelop'
       */
      if (!(rtb_Product_h_idx_1 < rtb_Sum_h)) {
        rtb_Sum_h = rtb_Product_h_idx_1;
      }

      /* End of Switch: '<S59>/Switch' */
    }

    /* End of Switch: '<S59>/Switch2' */

    /* Sum: '<S54>/Difference Inputs2' incorporates:
     *  UnitDelay: '<S54>/Delay Input2'
     */
    qbot_driver_v_1_22_B.DifferenceInputs2_n = rtb_Sum_h +
      qbot_driver_v_1_22_DW.DelayInput2_DSTATE_b;

    /* Sum: '<S47>/Sum' */
    rtb_Product_h_idx_0 = rtb_error[0];
    rtb_Product_h_idx_1 = rtb_error[1];
    rtb_error[0] = qbot_driver_v_1_22_B.DifferenceInputs2 - rtb_Product_h_idx_0;
    rtb_error[1] = qbot_driver_v_1_22_B.DifferenceInputs2_n -
      rtb_Product_h_idx_1;

    /* Product: '<S47>/Product1' incorporates:
     *  Constant: '<S5>/Kp'
     */
    rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.Kp_Value_g * rtb_error[0];

    /* Saturate: '<S47>/Saturation' */
    if (rtb_countstorad_idx_0 > qbot_driver_v_1_22_P.Saturation_UpperSat_j[0]) {
      /* Saturate: '<S47>/Saturation' */
      qbot_driver_v_1_22_B.Kp_out[0] =
        qbot_driver_v_1_22_P.Saturation_UpperSat_j[0];
    } else if (rtb_countstorad_idx_0 <
               qbot_driver_v_1_22_P.Saturation_LowerSat_m[0]) {
      /* Saturate: '<S47>/Saturation' */
      qbot_driver_v_1_22_B.Kp_out[0] =
        qbot_driver_v_1_22_P.Saturation_LowerSat_m[0];
    } else {
      /* Saturate: '<S47>/Saturation' */
      qbot_driver_v_1_22_B.Kp_out[0] = rtb_countstorad_idx_0;
    }

    /* Product: '<S47>/Product1' incorporates:
     *  Constant: '<S5>/Kp'
     */
    rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.Kp_Value_g * rtb_error[1];

    /* Saturate: '<S47>/Saturation' */
    if (rtb_countstorad_idx_0 > qbot_driver_v_1_22_P.Saturation_UpperSat_j[1]) {
      /* Saturate: '<S47>/Saturation' */
      qbot_driver_v_1_22_B.Kp_out[1] =
        qbot_driver_v_1_22_P.Saturation_UpperSat_j[1];
    } else if (rtb_countstorad_idx_0 <
               qbot_driver_v_1_22_P.Saturation_LowerSat_m[1]) {
      /* Saturate: '<S47>/Saturation' */
      qbot_driver_v_1_22_B.Kp_out[1] =
        qbot_driver_v_1_22_P.Saturation_LowerSat_m[1];
    } else {
      /* Saturate: '<S47>/Saturation' */
      qbot_driver_v_1_22_B.Kp_out[1] = rtb_countstorad_idx_0;
    }

    /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
     *  Logic: '<S47>/OR'
     */
    qbot_driver_v_1_22_B.DataTypeConversion_n = (qbot_driver_v_1_22_B.OR2 &&
      qbot_driver_v_1_22_B.AND1);
  }

  /* Integrator: '<S47>/Integrator' */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&qbot_driver_v_1_22_M->solverInfo)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &qbot_driver_v_1_22_PrevZCX.Integrator_Reset_ZCE,
                       (qbot_driver_v_1_22_B.DataTypeConversion_n));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      qbot_driver_v_1_22_X.Integrator_CSTATE[0] =
        qbot_driver_v_1_22_P.Integrator_IC[0];
      qbot_driver_v_1_22_X.Integrator_CSTATE[1] =
        qbot_driver_v_1_22_P.Integrator_IC[1];
    }
  }

  if (qbot_driver_v_1_22_X.Integrator_CSTATE[0] >=
      qbot_driver_v_1_22_P.Integrator_UpperSat[0]) {
    qbot_driver_v_1_22_X.Integrator_CSTATE[0] =
      qbot_driver_v_1_22_P.Integrator_UpperSat[0];
  } else if (qbot_driver_v_1_22_X.Integrator_CSTATE[0] <=
             qbot_driver_v_1_22_P.Integrator_LowerSat[0]) {
    qbot_driver_v_1_22_X.Integrator_CSTATE[0] =
      qbot_driver_v_1_22_P.Integrator_LowerSat[0];
  }

  if (qbot_driver_v_1_22_X.Integrator_CSTATE[1] >=
      qbot_driver_v_1_22_P.Integrator_UpperSat[1]) {
    qbot_driver_v_1_22_X.Integrator_CSTATE[1] =
      qbot_driver_v_1_22_P.Integrator_UpperSat[1];
  } else if (qbot_driver_v_1_22_X.Integrator_CSTATE[1] <=
             qbot_driver_v_1_22_P.Integrator_LowerSat[1]) {
    qbot_driver_v_1_22_X.Integrator_CSTATE[1] =
      qbot_driver_v_1_22_P.Integrator_LowerSat[1];
  }

  /* Switch: '<S5>/Switch2' */
  if (qbot_driver_v_1_22_B.AND1) {
    /* Switch: '<S5>/Switch' incorporates:
     *  Switch: '<S47>/Switch'
     */
    if (qbot_driver_v_1_22_B.AND2) {
      /* Switch: '<S5>/Switch2' incorporates:
       *  Switch: '<S46>/Switch'
       */
      qbot_driver_v_1_22_B.Switch2[0] = qbot_driver_v_1_22_B.Switch[0];
      qbot_driver_v_1_22_B.Switch2[1] = qbot_driver_v_1_22_B.Switch[1];
    } else if (qbot_driver_v_1_22_B.OR2) {
      /* Switch: '<S5>/Switch2' incorporates:
       *  Constant: '<S47>/Constant'
       *  Switch: '<S47>/Switch'
       */
      qbot_driver_v_1_22_B.Switch2[0] = qbot_driver_v_1_22_P.Constant_Value_o[0];
      qbot_driver_v_1_22_B.Switch2[1] = qbot_driver_v_1_22_P.Constant_Value_o[1];
    } else {
      /* Switch: '<S5>/Switch2' incorporates:
       *  Integrator: '<S47>/Integrator'
       *  Sum: '<S47>/Add'
       *  Switch: '<S47>/Switch'
       */
      qbot_driver_v_1_22_B.Switch2[0] = qbot_driver_v_1_22_B.Kp_out[0] +
        qbot_driver_v_1_22_X.Integrator_CSTATE[0];
      qbot_driver_v_1_22_B.Switch2[1] = qbot_driver_v_1_22_B.Kp_out[1] +
        qbot_driver_v_1_22_X.Integrator_CSTATE[1];
    }

    /* End of Switch: '<S5>/Switch' */
  } else {
    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S5>/Constant2'
     */
    qbot_driver_v_1_22_B.Switch2[0] = qbot_driver_v_1_22_P.Constant2_Value_k[0];
    qbot_driver_v_1_22_B.Switch2[1] = qbot_driver_v_1_22_P.Constant2_Value_k[1];
  }

  /* End of Switch: '<S5>/Switch2' */
  if (rtmIsMajorTimeStep(qbot_driver_v_1_22_M)) {
    /* Memory: '<S2>/Memory' */
    qbot_driver_v_1_22_B.Memory = qbot_driver_v_1_22_DW.Memory_PreviousInput_d;
  }

  /* Product: '<S2>/Divide' incorporates:
   *  Switch: '<S5>/Switch2'
   */
  qbot_driver_v_1_22_B.Divide[0] = qbot_driver_v_1_22_B.Switch2[0] /
    qbot_driver_v_1_22_B.Memory;
  qbot_driver_v_1_22_B.Divide[1] = qbot_driver_v_1_22_B.Switch2[1] /
    qbot_driver_v_1_22_B.Memory;
  if (rtmIsMajorTimeStep(qbot_driver_v_1_22_M)) {
    /* SignalConversion generated from: '<S2>/HIL Write' */
    rtb_TmpSignalConversionAtHILW_e[0] = qbot_driver_v_1_22_B.AND1;
    rtb_TmpSignalConversionAtHILW_e[1] = qbot_driver_v_1_22_B.AND1;

    /* S-Function (time_block): '<S27>/Time' */

    /* S-Function Block: qbot_driver_v_1_22/LED States/LEDs/Time (time_block) */
    {
      t_error result;
      t_timeout current_time;
      t_timeout time_difference;
      result = timeout_get_high_resolution_time(&current_time);
      if (result == 0) {
        result = timeout_subtract(&time_difference, &current_time,
          &_high_resolution_start_time);
        rtb_Time = time_difference.seconds + time_difference.nanoseconds * 1e-9;
      }

      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    /* MATLAB Function: '<S27>/MATLAB Function1' incorporates:
     *  Constant: '<S27>/Constant1'
     */
    qbot_driver_v_1_MATLABFunction1(rtb_Time,
      qbot_driver_v_1_22_B.StreamServer_o4[2],
      qbot_driver_v_1_22_P.Constant1_Value_k,
      &qbot_driver_v_1_22_B.sf_MATLABFunction1,
      &qbot_driver_v_1_22_DW.sf_MATLABFunction1);

    /* MATLAB Function: '<S27>/MATLAB Function2' incorporates:
     *  Constant: '<S27>/Constant1'
     */
    qbot_driver_v_1_MATLABFunction1(rtb_Time,
      qbot_driver_v_1_22_B.StreamServer_o4[3],
      qbot_driver_v_1_22_P.Constant1_Value_k,
      &qbot_driver_v_1_22_B.sf_MATLABFunction2,
      &qbot_driver_v_1_22_DW.sf_MATLABFunction2);

    /* MATLAB Function: '<S27>/MATLAB Function3' incorporates:
     *  Constant: '<S27>/Constant1'
     */
    qbot_driver_v_1_MATLABFunction1(rtb_Time,
      qbot_driver_v_1_22_B.StreamServer_o4[4],
      qbot_driver_v_1_22_P.Constant1_Value_k,
      &qbot_driver_v_1_22_B.sf_MATLABFunction3,
      &qbot_driver_v_1_22_DW.sf_MATLABFunction3);

    /* DiscretePulseGenerator: '<S3>/Pulse Generator' */
    rtb_Product_h_idx_1 = (qbot_driver_v_1_22_DW.clockTickCounter <
      qbot_driver_v_1_22_P.PulseGenerator_Duty) &&
      (qbot_driver_v_1_22_DW.clockTickCounter >= 0) ?
      qbot_driver_v_1_22_P.PulseGenerator_Amp : 0.0;
    if (qbot_driver_v_1_22_DW.clockTickCounter >=
        qbot_driver_v_1_22_P.PulseGenerator_Period - 1.0) {
      qbot_driver_v_1_22_DW.clockTickCounter = 0;
    } else {
      qbot_driver_v_1_22_DW.clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<S3>/Pulse Generator' */

    /* DiscretePulseGenerator: '<S3>/Pulse Generator1' */
    rtb_Product_h_idx_0 = (qbot_driver_v_1_22_DW.clockTickCounter_p <
      qbot_driver_v_1_22_P.PulseGenerator1_Duty) &&
      (qbot_driver_v_1_22_DW.clockTickCounter_p >= 0) ?
      qbot_driver_v_1_22_P.PulseGenerator1_Amp : 0.0;
    if (qbot_driver_v_1_22_DW.clockTickCounter_p >=
        qbot_driver_v_1_22_P.PulseGenerator1_Period - 1.0) {
      qbot_driver_v_1_22_DW.clockTickCounter_p = 0;
    } else {
      qbot_driver_v_1_22_DW.clockTickCounter_p++;
    }

    /* End of DiscretePulseGenerator: '<S3>/Pulse Generator1' */

    /* RelationalOperator: '<S19>/Compare' incorporates:
     *  Constant: '<S19>/Constant'
     *  Sum: '<S18>/Sum'
     */
    rtb_OR2 = (qbot_driver_v_1_22_B.HILRead_o1[2] +
               qbot_driver_v_1_22_B.HILRead_o1[3] <=
               qbot_driver_v_1_22_P.CompareToConstant_const_j);

    /* Logic: '<S18>/AND' */
    rtb_AND = ((qbot_driver_v_1_22_B.low_battery != 0.0) && rtb_OR2);

    /* Logic: '<S3>/OR1' */
    rtb_OR1 = ((qbot_driver_v_1_22_B.HILRead_o3[0] != 0.0) ||
               (qbot_driver_v_1_22_B.HILRead_o3[2] != 0.0) ||
               (qbot_driver_v_1_22_B.HILRead_o3[4] != 0.0) ||
               (qbot_driver_v_1_22_B.HILRead_o3[6] != 0.0));

    /* RelationalOperator: '<S32>/Relation' incorporates:
     *  Constant: '<S32>/threshold'
     */
    rtb_Relation = ((real_T)rtb_OR1 >= qbot_driver_v_1_22_P.Threshold2_threshold);

    /* Logic: '<S32>/Logical Operator' */
    qbot_driver_v_1_22_B.LogicalOperator_n = !rtb_Relation;

    /* DiscreteIntegrator: '<S32>/Discrete-Time Integrator' */
    if (qbot_driver_v_1_22_B.LogicalOperator_n ||
        (qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_m != 0)) {
      qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_n =
        qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_b;
    }

    /* Logic: '<S3>/NOT' incorporates:
     *  Constant: '<S32>/duration'
     *  DiscreteIntegrator: '<S32>/Discrete-Time Integrator'
     *  RelationalOperator: '<S32>/Relational Operator'
     */
    qbot_driver_v_1_22_B.NOT =
      !(qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_n >=
        qbot_driver_v_1_22_P.Threshold2_duration);

    /* Switch: '<S3>/Switch3' incorporates:
     *  Constant: '<S26>/Constant'
     */
    if (qbot_driver_v_1_22_B.NOT) {
      /* Switch: '<S3>/Switch5' incorporates:
       *  Constant: '<S25>/Constant'
       *  Logic: '<S3>/NOT1'
       */
      if (!rtb_AND) {
        /* Switch: '<S3>/Switch' incorporates:
         *  Constant: '<S22>/Constant'
         *  Product: '<S3>/Product1'
         */
        if (qbot_driver_v_1_22_B.AND) {
          /* Switch: '<S3>/Switch4' incorporates:
           *  Switch: '<S3>/Switch1'
           */
          if (qbot_driver_v_1_22_B.StreamServer_o4[1] >
              qbot_driver_v_1_22_P.Switch4_Threshold) {
            rtb_countstorad_idx_1 = qbot_driver_v_1_22_B.sf_MATLABFunction1.y;
            rtb_countstorad_idx_0 = qbot_driver_v_1_22_B.sf_MATLABFunction2.y;
            rtb_Product_h_idx_0 = qbot_driver_v_1_22_B.sf_MATLABFunction3.y;
          } else if (qbot_driver_v_1_22_B.AND1) {
            /* Switch: '<S3>/Switch2' incorporates:
             *  Constant: '<S24>/Constant'
             *  Product: '<S3>/Product'
             *  Switch: '<S3>/Switch1'
             */
            if (qbot_driver_v_1_22_B.AND2) {
              rtb_countstorad_idx_1 = qbot_driver_v_1_22_P.ColorConstant2_color
                [0] * rtb_Product_h_idx_1;
              rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.ColorConstant2_color
                [1] * rtb_Product_h_idx_1;
              rtb_Product_h_idx_0 = qbot_driver_v_1_22_P.ColorConstant2_color[2]
                * rtb_Product_h_idx_1;
            } else {
              rtb_countstorad_idx_1 = qbot_driver_v_1_22_P.ColorConstant2_color
                [0];
              rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.ColorConstant2_color
                [1];
              rtb_Product_h_idx_0 = qbot_driver_v_1_22_P.ColorConstant2_color[2];
            }

            /* End of Switch: '<S3>/Switch2' */
          } else {
            /* Switch: '<S3>/Switch1' incorporates:
             *  Constant: '<S23>/Constant'
             */
            rtb_countstorad_idx_1 = qbot_driver_v_1_22_P.ColorConstant1_color[0];
            rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.ColorConstant1_color[1];
            rtb_Product_h_idx_0 = qbot_driver_v_1_22_P.ColorConstant1_color[2];
          }

          /* End of Switch: '<S3>/Switch4' */
        } else {
          rtb_countstorad_idx_1 = qbot_driver_v_1_22_P.ColorConstant_color[0] *
            rtb_Product_h_idx_0;
          rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.ColorConstant_color[1] *
            rtb_Product_h_idx_0;
          rtb_Product_h_idx_0 *= qbot_driver_v_1_22_P.ColorConstant_color[2];
        }

        /* End of Switch: '<S3>/Switch' */
      } else {
        rtb_countstorad_idx_1 = qbot_driver_v_1_22_P.ColorConstant3_color[0];
        rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.ColorConstant3_color[1];
        rtb_Product_h_idx_0 = qbot_driver_v_1_22_P.ColorConstant3_color[2];
      }

      /* End of Switch: '<S3>/Switch5' */
    } else {
      rtb_countstorad_idx_1 = qbot_driver_v_1_22_P.ColorConstant4_color[0];
      rtb_countstorad_idx_0 = qbot_driver_v_1_22_P.ColorConstant4_color[1];
      rtb_Product_h_idx_0 = qbot_driver_v_1_22_P.ColorConstant4_color[2];
    }

    /* End of Switch: '<S3>/Switch3' */

    /* SignalConversion generated from: '<S2>/HIL Write' */
    rtb_TmpSignalConversionAtHILWri[0] = rtb_countstorad_idx_1;
    rtb_TmpSignalConversionAtHILWri[3] = rtb_countstorad_idx_1;
    rtb_TmpSignalConversionAtHILWri[1] = rtb_countstorad_idx_0;
    rtb_TmpSignalConversionAtHILWri[4] = rtb_countstorad_idx_0;
    rtb_TmpSignalConversionAtHILWri[2] = rtb_Product_h_idx_0;
    rtb_TmpSignalConversionAtHILWri[5] = rtb_Product_h_idx_0;

    /* S-Function (hil_write_block): '<S2>/HIL Write' */

    /* S-Function Block: qbot_driver_v_1_22/I//O/HIL Write (hil_write_block) */
    {
      t_error result;
      result = hil_write(qbot_driver_v_1_22_DW.HILInitialize_Card,
                         NULL, 0U,
                         qbot_driver_v_1_22_P.HILWrite_pwm_channels, 2U,
                         qbot_driver_v_1_22_P.HILWrite_digital_channels, 2U,
                         qbot_driver_v_1_22_P.HILWrite_other_channels, 6U,
                         NULL,
                         &qbot_driver_v_1_22_B.Divide[0],
                         (t_boolean *) &rtb_TmpSignalConversionAtHILW_e[0],
                         &rtb_TmpSignalConversionAtHILWri[0]
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      }
    }

    /* MATLAB Function: '<S18>/Figure out which battery is valid and active' */
    qbot_driver_v_1_22_DW.sfEvent_o = qbot_driver_v_1_2_CALL_EVENT_k2;

    /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
     *  Logic: '<S18>/AND1'
     */
    /* MATLAB Function 'I//O/battery monitoring/Figure out which battery is valid and active': '<S20>:1' */
    /* '<S20>:1:2' */
    /* '<S20>:1:3' */
    qbot_driver_v_1_22_B.DataTypeConversion1 = ((qbot_driver_v_1_22_B.stop !=
      0.0) && rtb_OR2);

    /* Outputs for Triggered SubSystem: '<S3>/Low Battery Error' incorporates:
     *  TriggerPort: '<S28>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&qbot_driver_v_1_22_M->solverInfo)) {
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &qbot_driver_v_1_22_PrevZCX.LowBatteryError_Trig_ZCE,
                         (qbot_driver_v_1_22_B.DataTypeConversion1));
      if (zcEvent != NO_ZCEVENT) {
        /* Outputs for Triggered SubSystem: '<S3>/Low Battery Error' incorporates:
         *  TriggerPort: '<S28>/Trigger'
         */
        qbot_driver_v_1_22_B.Trigger_l = (real_T)zcEvent;

        /* Stop: '<S38>/Stop Simulation' incorporates:
         *  Constant: '<S39>/Constant'
         *  RelationalOperator: '<S39>/Compare'
         */
        if (qbot_driver_v_1_22_B.Trigger_l !=
            qbot_driver_v_1_22_P.Constant_Value) {
          rtmSetStopRequested(qbot_driver_v_1_22_M, 1);
        }

        /* End of Stop: '<S38>/Stop Simulation' */

        /* S-Function (print_block): '<S28>/Print1' */

        /* S-Function Block: qbot_driver_v_1_22/LED States/Low Battery Error/Print1 (print_block) */
        {
          t_error result;
          result = console_print(qbot_driver_v_1_22_P.Print1_MaxUnits,
            &rtb_Print1_o1_p, "ERROR - Low Battery"
            );
          if (result >= 0) {
            console_flush();
          }
        }

        qbot_driver_v_1_22_DW.LowBatteryError_SubsysRanBC = 4;
      }
    }

    /* End of Outputs for SubSystem: '<S3>/Low Battery Error' */

    /* RelationalOperator: '<S31>/Relation' incorporates:
     *  Constant: '<S31>/threshold'
     */
    rtb_AND = ((real_T)rtb_AND >= qbot_driver_v_1_22_P.Threshold_threshold_d);

    /* Logic: '<S31>/Logical Operator' */
    qbot_driver_v_1_22_B.LogicalOperator_d = !rtb_AND;

    /* DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
    if (qbot_driver_v_1_22_B.LogicalOperator_d ||
        (qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_a != 0)) {
      qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_h =
        qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_n;
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion2' incorporates:
     *  Constant: '<S31>/duration'
     *  DiscreteIntegrator: '<S31>/Discrete-Time Integrator'
     *  RelationalOperator: '<S31>/Relational Operator'
     */
    qbot_driver_v_1_22_B.DataTypeConversion2 =
      (qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_h >=
       qbot_driver_v_1_22_P.Threshold_duration_p);

    /* Outputs for Triggered SubSystem: '<S3>/Low Battery Warning' incorporates:
     *  TriggerPort: '<S29>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&qbot_driver_v_1_22_M->solverInfo)) {
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &qbot_driver_v_1_22_PrevZCX.LowBatteryWarning_Trig_ZCE,
                         (qbot_driver_v_1_22_B.DataTypeConversion2));
      if (zcEvent != NO_ZCEVENT) {
        /* Outputs for Triggered SubSystem: '<S3>/Low Battery Warning' incorporates:
         *  TriggerPort: '<S29>/Trigger'
         */
        qbot_driver_v_1_22_B.Trigger_f = (real_T)zcEvent;

        /* Stop: '<S40>/Stop Simulation' incorporates:
         *  Constant: '<S41>/Constant'
         *  RelationalOperator: '<S41>/Compare'
         */
        if (qbot_driver_v_1_22_B.Trigger_f !=
            qbot_driver_v_1_22_P.Constant_Value_a) {
          rtmSetStopRequested(qbot_driver_v_1_22_M, 1);
        }

        /* End of Stop: '<S40>/Stop Simulation' */

        /* S-Function (print_block): '<S29>/Print1' */

        /* S-Function Block: qbot_driver_v_1_22/LED States/Low Battery Warning/Print1 (print_block) */
        {
          t_error result;
          result = console_print(qbot_driver_v_1_22_P.Print1_MaxUnits_l,
            &rtb_Print1_o1_o, "WARNING - Low Battery"
            );
          if (result >= 0) {
            console_flush();
          }
        }

        qbot_driver_v_1_22_DW.LowBatteryWarning_SubsysRanBC = 4;
      }
    }

    /* End of Outputs for SubSystem: '<S3>/Low Battery Warning' */
    /* RelationalOperator: '<S33>/Relation' incorporates:
     *  Constant: '<S33>/threshold'
     */
    rtb_OR1 = ((real_T)rtb_OR1 >= qbot_driver_v_1_22_P.Threshold3_threshold);

    /* Logic: '<S33>/Logical Operator' */
    qbot_driver_v_1_22_B.LogicalOperator_k = !rtb_OR1;

    /* DiscreteIntegrator: '<S33>/Discrete-Time Integrator' */
    if (qbot_driver_v_1_22_B.LogicalOperator_k ||
        (qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_f != 0)) {
      qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_i =
        qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_nq;
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
     *  Constant: '<S33>/duration'
     *  DiscreteIntegrator: '<S33>/Discrete-Time Integrator'
     *  Logic: '<S3>/OR2'
     *  Logic: '<S3>/OR3'
     *  RelationalOperator: '<S33>/Relational Operator'
     */
    qbot_driver_v_1_22_B.DataTypeConversion_l =
      ((qbot_driver_v_1_22_B.HILRead_o3[1] != 0.0) ||
       (qbot_driver_v_1_22_B.HILRead_o3[3] != 0.0) ||
       (qbot_driver_v_1_22_B.HILRead_o3[5] != 0.0) ||
       (qbot_driver_v_1_22_B.HILRead_o3[7] != 0.0) ||
       (qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_i >=
        qbot_driver_v_1_22_P.Threshold3_duration));

    /* Outputs for Triggered SubSystem: '<S3>/Stall//Overcurrent Error' incorporates:
     *  TriggerPort: '<S30>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&qbot_driver_v_1_22_M->solverInfo)) {
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &qbot_driver_v_1_22_PrevZCX.StallOvercurrentError_Trig_ZCE,
                         (qbot_driver_v_1_22_B.DataTypeConversion_l));
      if (zcEvent != NO_ZCEVENT) {
        /* Outputs for Triggered SubSystem: '<S3>/Stall//Overcurrent Error' incorporates:
         *  TriggerPort: '<S30>/Trigger'
         */
        qbot_driver_v_1_22_B.Trigger_g = (real_T)zcEvent;

        /* Stop: '<S42>/Stop Simulation' incorporates:
         *  Constant: '<S43>/Constant'
         *  RelationalOperator: '<S43>/Compare'
         */
        if (qbot_driver_v_1_22_B.Trigger_g !=
            qbot_driver_v_1_22_P.Constant_Value_i) {
          rtmSetStopRequested(qbot_driver_v_1_22_M, 1);
        }

        /* End of Stop: '<S42>/Stop Simulation' */

        /* S-Function (print_block): '<S30>/Print1' */

        /* S-Function Block: qbot_driver_v_1_22/LED States/Stall//Overcurrent Error/Print1 (print_block) */
        {
          t_error result;
          result = console_print(qbot_driver_v_1_22_P.Print1_MaxUnits_n,
            &rtb_Print1_o1_f, "ERROR - Stall / Overcurrent"
            );
          if (result >= 0) {
            console_flush();
          }
        }

        qbot_driver_v_1_22_DW.StallOvercurrentError_SubsysRan = 4;
      }
    }

    /* End of Outputs for SubSystem: '<S3>/Stall//Overcurrent Error' */

    /* DataTypeConversion: '<S31>/Data Type Conversion' */
    qbot_driver_v_1_22_B.DataTypeConversion_j = rtb_AND;

    /* DataTypeConversion: '<S32>/Data Type Conversion' */
    qbot_driver_v_1_22_B.DataTypeConversion_m = rtb_Relation;

    /* DataTypeConversion: '<S33>/Data Type Conversion' */
    qbot_driver_v_1_22_B.DataTypeConversion_i = rtb_OR1;

    /* DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
     *  Memory: '<S3>/Memory1'
     */
    qbot_driver_v_1_22_B.DataTypeConversion3 =
      qbot_driver_v_1_22_DW.Memory1_PreviousInput_e;

    /* Outputs for Triggered SubSystem: '<S3>/Watchdog expiry Error' incorporates:
     *  TriggerPort: '<S34>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&qbot_driver_v_1_22_M->solverInfo)) {
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &qbot_driver_v_1_22_PrevZCX.WatchdogexpiryError_Trig_ZCE,
                         (qbot_driver_v_1_22_B.DataTypeConversion3));
      if (zcEvent != NO_ZCEVENT) {
        /* Outputs for Triggered SubSystem: '<S3>/Watchdog expiry Error' incorporates:
         *  TriggerPort: '<S34>/Trigger'
         */
        qbot_driver_v_1_22_B.Trigger = (real_T)zcEvent;

        /* Stop: '<S44>/Stop Simulation' incorporates:
         *  Constant: '<S45>/Constant'
         *  RelationalOperator: '<S45>/Compare'
         */
        if (qbot_driver_v_1_22_B.Trigger !=
            qbot_driver_v_1_22_P.Constant_Value_af) {
          rtmSetStopRequested(qbot_driver_v_1_22_M, 1);
        }

        /* End of Stop: '<S44>/Stop Simulation' */

        /* S-Function (print_block): '<S34>/Print1' */

        /* S-Function Block: qbot_driver_v_1_22/LED States/Watchdog expiry Error/Print1 (print_block) */
        {
          t_error result;
          result = console_print(qbot_driver_v_1_22_P.Print1_MaxUnits_m,
            &rtb_Print1_o1, "ERROR - Watchdog expired"
            );
          if (result >= 0) {
            console_flush();
          }
        }

        qbot_driver_v_1_22_DW.WatchdogexpiryError_SubsysRanBC = 4;
      }
    }

    /* End of Outputs for SubSystem: '<S3>/Watchdog expiry Error' */

    /* Product: '<S47>/Product' incorporates:
     *  Constant: '<S5>/Ki'
     */
    qbot_driver_v_1_22_B.Product[0] = qbot_driver_v_1_22_P.Ki_Value * rtb_error
      [0];
    qbot_driver_v_1_22_B.Product[1] = qbot_driver_v_1_22_P.Ki_Value * rtb_error
      [1];

    /* S-Function (sample_time_block): '<S4>/Sample Time' */

    /* S-Function Block: qbot_driver_v_1_22/Monitor Timing/Sample Time (sample_time_block) */
    {
      t_error result;
      t_timeout current_time;
      t_timeout time_difference;
      result = timeout_get_high_resolution_time(&current_time);
      if (result >= 0) {
        result = timeout_subtract(&time_difference, &current_time,
          &qbot_driver_v_1_22_DW.SampleTime_PreviousTime);
        qbot_driver_v_1_22_B.achievedsampletime = time_difference.seconds +
          time_difference.nanoseconds * 1e-9;
        memcpy(&qbot_driver_v_1_22_DW.SampleTime_PreviousTime, &current_time,
               sizeof(t_timeout));
      }

      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    /* Constant: '<S4>/Constant' */
    qbot_driver_v_1_22_B.targetsampletime =
      qbot_driver_v_1_22_P.Constant_Value_j;

    /* S-Function (computation_time_block): '<S4>/Computation Time' */

    /* S-Function Block: qbot_driver_v_1_22/Monitor Timing/Computation Time (computation_time_block) */
    {
      qbot_driver_v_1_22_B.computationtime =
        qbot_driver_v_1_22_DW.ComputationTime_ComputationTime.seconds +
        qbot_driver_v_1_22_DW.ComputationTime_ComputationTime.nanoseconds * 1e-9;
    }
  }
}

/* Model update function */
void qbot_driver_v_1_22_update(void)
{
  if (rtmIsMajorTimeStep(qbot_driver_v_1_22_M)) {
    /* Update for Memory: '<S1>/Memory' incorporates:
     *  Switch: '<S5>/Switch2'
     */
    qbot_driver_v_1_22_DW.Memory_PreviousInput[0] =
      qbot_driver_v_1_22_B.Switch2[0];
    qbot_driver_v_1_22_DW.Memory_PreviousInput[1] =
      qbot_driver_v_1_22_B.Switch2[1];

    /* Update for Memory: '<S1>/Memory1' */
    qbot_driver_v_1_22_DW.Memory1_PreviousInput =
      qbot_driver_v_1_22_B.StreamServer_o4[9];

    /* Update for UnitDelay: '<S12>/Delay Input1' incorporates:
     *  SignalConversion generated from: '<S1>/Stream Server'
     */
    memcpy(&qbot_driver_v_1_22_DW.DelayInput1_DSTATE[0],
           &qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ[0], 17U *
           sizeof(real_T));

    /* Update for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE +=
      qbot_driver_v_1_22_P.DiscreteTimeIntegrator_gainval *
      qbot_driver_v_1_22_B.DataTypeConversion;
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRese = (int8_T)
      qbot_driver_v_1_22_B.LogicalOperator;

    /* Update for Memory: '<S47>/Memory1' */
    qbot_driver_v_1_22_DW.Memory1_PreviousInput_c =
      qbot_driver_v_1_22_B.DifferenceInputs2;

    /* Update for UnitDelay: '<S53>/Delay Input2' */
    qbot_driver_v_1_22_DW.DelayInput2_DSTATE =
      qbot_driver_v_1_22_B.DifferenceInputs2;

    /* Update for Memory: '<S47>/Memory2' */
    qbot_driver_v_1_22_DW.Memory2_PreviousInput =
      qbot_driver_v_1_22_B.DifferenceInputs2_n;

    /* Update for UnitDelay: '<S54>/Delay Input2' */
    qbot_driver_v_1_22_DW.DelayInput2_DSTATE_b =
      qbot_driver_v_1_22_B.DifferenceInputs2_n;

    /* Update for Memory: '<S2>/Memory' */
    qbot_driver_v_1_22_DW.Memory_PreviousInput_d =
      qbot_driver_v_1_22_B.bat_voltage;

    /* Update for DiscreteIntegrator: '<S32>/Discrete-Time Integrator' */
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_n +=
      qbot_driver_v_1_22_P.DiscreteTimeIntegrator_gainva_i *
      qbot_driver_v_1_22_B.DataTypeConversion_m;
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_m = (int8_T)
      qbot_driver_v_1_22_B.LogicalOperator_n;

    /* Update for DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_h +=
      qbot_driver_v_1_22_P.DiscreteTimeIntegrator_gainva_m *
      qbot_driver_v_1_22_B.DataTypeConversion_j;
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_a = (int8_T)
      qbot_driver_v_1_22_B.LogicalOperator_d;

    /* Update for DiscreteIntegrator: '<S33>/Discrete-Time Integrator' */
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_i +=
      qbot_driver_v_1_22_P.DiscreteTimeIntegrator_gainva_o *
      qbot_driver_v_1_22_B.DataTypeConversion_i;
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_f = (int8_T)
      qbot_driver_v_1_22_B.LogicalOperator_k;

    /* Update for Memory: '<S3>/Memory1' */
    qbot_driver_v_1_22_DW.Memory1_PreviousInput_e =
      qbot_driver_v_1_22_B.HILWatchdog;
  }

  if (rtmIsMajorTimeStep(qbot_driver_v_1_22_M)) {
    rt_ertODEUpdateContinuousStates(&qbot_driver_v_1_22_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++qbot_driver_v_1_22_M->Timing.clockTick0)) {
    ++qbot_driver_v_1_22_M->Timing.clockTickH0;
  }

  qbot_driver_v_1_22_M->Timing.t[0] = rtsiGetSolverStopTime
    (&qbot_driver_v_1_22_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.033333333333333333s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++qbot_driver_v_1_22_M->Timing.clockTick1)) {
      ++qbot_driver_v_1_22_M->Timing.clockTickH1;
    }

    qbot_driver_v_1_22_M->Timing.t[1] = qbot_driver_v_1_22_M->Timing.clockTick1 *
      qbot_driver_v_1_22_M->Timing.stepSize1 +
      qbot_driver_v_1_22_M->Timing.clockTickH1 *
      qbot_driver_v_1_22_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void qbot_driver_v_1_22_derivatives(void)
{
  XDot_qbot_driver_v_1_22_T *_rtXdot;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_qbot_driver_v_1_22_T *) qbot_driver_v_1_22_M->derivs);

  /* Derivatives for Integrator: '<S47>/Integrator' */
  lsat = (qbot_driver_v_1_22_X.Integrator_CSTATE[0] <=
          qbot_driver_v_1_22_P.Integrator_LowerSat[0]);
  usat = (qbot_driver_v_1_22_X.Integrator_CSTATE[0] >=
          qbot_driver_v_1_22_P.Integrator_UpperSat[0]);
  if (((!lsat) && (!usat)) || (lsat && (qbot_driver_v_1_22_B.Product[0] > 0.0)) ||
      (usat && (qbot_driver_v_1_22_B.Product[0] < 0.0))) {
    _rtXdot->Integrator_CSTATE[0] = qbot_driver_v_1_22_B.Product[0];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE[0] = 0.0;
  }

  lsat = (qbot_driver_v_1_22_X.Integrator_CSTATE[1] <=
          qbot_driver_v_1_22_P.Integrator_LowerSat[1]);
  usat = (qbot_driver_v_1_22_X.Integrator_CSTATE[1] >=
          qbot_driver_v_1_22_P.Integrator_UpperSat[1]);
  if (((!lsat) && (!usat)) || (lsat && (qbot_driver_v_1_22_B.Product[1] > 0.0)) ||
      (usat && (qbot_driver_v_1_22_B.Product[1] < 0.0))) {
    _rtXdot->Integrator_CSTATE[1] = qbot_driver_v_1_22_B.Product[1];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE[1] = 0.0;
  }

  /* End of Derivatives for Integrator: '<S47>/Integrator' */
}

/* Model initialize function */
void qbot_driver_v_1_22_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: qbot_driver_v_1_22/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qbot_platform", "0",
                      &qbot_driver_v_1_22_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options
      (qbot_driver_v_1_22_DW.HILInitialize_Card, "usb_update_rate=0.033", 22);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(qbot_driver_v_1_22_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      return;
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_AIPStart && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_AIPEnter && is_switching)) {
      result = hil_set_analog_input_ranges
        (qbot_driver_v_1_22_DW.HILInitialize_Card,
         qbot_driver_v_1_22_P.HILInitialize_AIChannels, 6U,
         qbot_driver_v_1_22_P.HILInitialize_AILow,
         qbot_driver_v_1_22_P.HILInitialize_AIHigh);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions(qbot_driver_v_1_22_DW.HILInitialize_Card,
      qbot_driver_v_1_22_P.HILInitialize_DIChannels, 13U,
      qbot_driver_v_1_22_P.HILInitialize_DOChannels, 3U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      return;
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_DOStart && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_DOEnter && is_switching)) {
      qbot_driver_v_1_22_DW.HILInitialize_DOBits[0] =
        qbot_driver_v_1_22_P.HILInitialize_DOInitial;
      qbot_driver_v_1_22_DW.HILInitialize_DOBits[1] =
        qbot_driver_v_1_22_P.HILInitialize_DOInitial;
      qbot_driver_v_1_22_DW.HILInitialize_DOBits[2] =
        qbot_driver_v_1_22_P.HILInitialize_DOInitial;
      result = hil_write_digital(qbot_driver_v_1_22_DW.HILInitialize_Card,
        qbot_driver_v_1_22_P.HILInitialize_DOChannels, 3U, (t_boolean *)
        &qbot_driver_v_1_22_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    if (qbot_driver_v_1_22_P.HILInitialize_DOReset) {
      qbot_driver_v_1_22_DW.HILInitialize_DOStates[0] =
        qbot_driver_v_1_22_P.HILInitialize_DOWatchdog;
      qbot_driver_v_1_22_DW.HILInitialize_DOStates[1] =
        qbot_driver_v_1_22_P.HILInitialize_DOWatchdog;
      qbot_driver_v_1_22_DW.HILInitialize_DOStates[2] =
        qbot_driver_v_1_22_P.HILInitialize_DOWatchdog;
      result = hil_watchdog_set_digital_expiration_state
        (qbot_driver_v_1_22_DW.HILInitialize_Card,
         qbot_driver_v_1_22_P.HILInitialize_DOChannels, 3U, (const
          t_digital_state *) &qbot_driver_v_1_22_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_EIPStart && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_EIPEnter && is_switching)) {
      qbot_driver_v_1_22_DW.HILInitialize_QuadratureModes[0] =
        qbot_driver_v_1_22_P.HILInitialize_EIQuadrature;
      qbot_driver_v_1_22_DW.HILInitialize_QuadratureModes[1] =
        qbot_driver_v_1_22_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (qbot_driver_v_1_22_DW.HILInitialize_Card,
         qbot_driver_v_1_22_P.HILInitialize_EIChannels, 2U,
         (t_encoder_quadrature_mode *)
         &qbot_driver_v_1_22_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_EIStart && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_EIEnter && is_switching)) {
      qbot_driver_v_1_22_DW.HILInitialize_InitialEICounts[0] =
        qbot_driver_v_1_22_P.HILInitialize_EIInitial;
      qbot_driver_v_1_22_DW.HILInitialize_InitialEICounts[1] =
        qbot_driver_v_1_22_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(qbot_driver_v_1_22_DW.HILInitialize_Card,
        qbot_driver_v_1_22_P.HILInitialize_EIChannels, 2U,
        &qbot_driver_v_1_22_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_POPStart && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;
      qbot_driver_v_1_22_DW.HILInitialize_POModeValues[0] =
        qbot_driver_v_1_22_P.HILInitialize_POModes;
      qbot_driver_v_1_22_DW.HILInitialize_POModeValues[1] =
        qbot_driver_v_1_22_P.HILInitialize_POModes;
      result = hil_set_pwm_mode(qbot_driver_v_1_22_DW.HILInitialize_Card,
        qbot_driver_v_1_22_P.HILInitialize_POChannels, 2U, (t_pwm_mode *)
        &qbot_driver_v_1_22_DW.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }

      if (qbot_driver_v_1_22_DW.HILInitialize_POModeValues[0] ==
          PWM_DUTY_CYCLE_MODE ||
          qbot_driver_v_1_22_DW.HILInitialize_POModeValues[0] ==
          PWM_ONE_SHOT_MODE || qbot_driver_v_1_22_DW.HILInitialize_POModeValues
          [0] == PWM_TIME_MODE ||
          qbot_driver_v_1_22_DW.HILInitialize_POModeValues[0] == PWM_RAW_MODE) {
        qbot_driver_v_1_22_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (qbot_driver_v_1_22_P.HILInitialize_POChannels[0]);
        qbot_driver_v_1_22_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          (qbot_driver_v_1_22_P.HILInitialize_POFrequency[0]);
        num_duty_cycle_modes++;
      } else {
        qbot_driver_v_1_22_DW.HILInitialize_POSortedChans[1U -
          num_frequency_modes] = (qbot_driver_v_1_22_P.HILInitialize_POChannels
          [0]);
        qbot_driver_v_1_22_DW.HILInitialize_POSortedFreqs[1U -
          num_frequency_modes] =
          (qbot_driver_v_1_22_P.HILInitialize_POFrequency[0]);
        num_frequency_modes++;
      }

      if (qbot_driver_v_1_22_DW.HILInitialize_POModeValues[1] ==
          PWM_DUTY_CYCLE_MODE ||
          qbot_driver_v_1_22_DW.HILInitialize_POModeValues[1] ==
          PWM_ONE_SHOT_MODE || qbot_driver_v_1_22_DW.HILInitialize_POModeValues
          [1] == PWM_TIME_MODE ||
          qbot_driver_v_1_22_DW.HILInitialize_POModeValues[1] == PWM_RAW_MODE) {
        qbot_driver_v_1_22_DW.HILInitialize_POSortedChans[num_duty_cycle_modes] =
          (qbot_driver_v_1_22_P.HILInitialize_POChannels[1]);
        qbot_driver_v_1_22_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
          (qbot_driver_v_1_22_P.HILInitialize_POFrequency[1]);
        num_duty_cycle_modes++;
      } else {
        qbot_driver_v_1_22_DW.HILInitialize_POSortedChans[1U -
          num_frequency_modes] = (qbot_driver_v_1_22_P.HILInitialize_POChannels
          [1]);
        qbot_driver_v_1_22_DW.HILInitialize_POSortedFreqs[1U -
          num_frequency_modes] =
          (qbot_driver_v_1_22_P.HILInitialize_POFrequency[1]);
        num_frequency_modes++;
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(qbot_driver_v_1_22_DW.HILInitialize_Card,
          &qbot_driver_v_1_22_DW.HILInitialize_POSortedChans[0],
          num_duty_cycle_modes,
          &qbot_driver_v_1_22_DW.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(qbot_driver_v_1_22_DW.HILInitialize_Card,
          &qbot_driver_v_1_22_DW.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &qbot_driver_v_1_22_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
          return;
        }
      }

      qbot_driver_v_1_22_DW.HILInitialize_POModeValues[0] =
        qbot_driver_v_1_22_P.HILInitialize_POConfiguration;
      qbot_driver_v_1_22_DW.HILInitialize_POModeValues[1] =
        qbot_driver_v_1_22_P.HILInitialize_POConfiguration;
      qbot_driver_v_1_22_DW.HILInitialize_POAlignValues[0] =
        qbot_driver_v_1_22_P.HILInitialize_POAlignment;
      qbot_driver_v_1_22_DW.HILInitialize_POAlignValues[1] =
        qbot_driver_v_1_22_P.HILInitialize_POAlignment;
      qbot_driver_v_1_22_DW.HILInitialize_POPolarityVals[0] =
        qbot_driver_v_1_22_P.HILInitialize_POPolarity;
      qbot_driver_v_1_22_DW.HILInitialize_POPolarityVals[1] =
        qbot_driver_v_1_22_P.HILInitialize_POPolarity;
      result = hil_set_pwm_configuration
        (qbot_driver_v_1_22_DW.HILInitialize_Card,
         qbot_driver_v_1_22_P.HILInitialize_POChannels, 2U,
         (t_pwm_configuration *)
         &qbot_driver_v_1_22_DW.HILInitialize_POModeValues[0],
         (t_pwm_alignment *) &qbot_driver_v_1_22_DW.HILInitialize_POAlignValues
         [0],
         (t_pwm_polarity *) &qbot_driver_v_1_22_DW.HILInitialize_POPolarityVals
         [0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_POStart && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_POEnter && is_switching)) {
      qbot_driver_v_1_22_DW.HILInitialize_POValues[0] =
        qbot_driver_v_1_22_P.HILInitialize_POInitial;
      qbot_driver_v_1_22_DW.HILInitialize_POValues[1] =
        qbot_driver_v_1_22_P.HILInitialize_POInitial;
      result = hil_write_pwm(qbot_driver_v_1_22_DW.HILInitialize_Card,
        qbot_driver_v_1_22_P.HILInitialize_POChannels, 2U,
        &qbot_driver_v_1_22_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    if (qbot_driver_v_1_22_P.HILInitialize_POReset) {
      qbot_driver_v_1_22_DW.HILInitialize_POValues[0] =
        qbot_driver_v_1_22_P.HILInitialize_POWatchdog;
      qbot_driver_v_1_22_DW.HILInitialize_POValues[1] =
        qbot_driver_v_1_22_P.HILInitialize_POWatchdog;
      result = hil_watchdog_set_pwm_expiration_state
        (qbot_driver_v_1_22_DW.HILInitialize_Card,
         qbot_driver_v_1_22_P.HILInitialize_POChannels, 2U,
         &qbot_driver_v_1_22_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_OOStart && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_OOEnter && is_switching)) {
      result = hil_write_other(qbot_driver_v_1_22_DW.HILInitialize_Card,
        qbot_driver_v_1_22_P.HILInitialize_OOChannels, 6U,
        qbot_driver_v_1_22_P.HILInitialize_OOInitial);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }

    if (qbot_driver_v_1_22_P.HILInitialize_OOReset) {
      result = hil_watchdog_set_other_expiration_state
        (qbot_driver_v_1_22_DW.HILInitialize_Card,
         qbot_driver_v_1_22_P.HILInitialize_OOChannels, 6U,
         qbot_driver_v_1_22_P.HILInitialize_OOWatchdog);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (hil_watchdog_block): '<S1>/HIL Watchdog' */

  /* S-Function Block: qbot_driver_v_1_22/From Client/HIL Watchdog (hil_watchdog_block) */
  {
    qbot_driver_v_1_22_DW.HILWatchdog_IsStarted = false;
  }

  /* Start for S-Function (stream_server_block): '<S1>/Stream Server' */

  /* S-Function Block: qbot_driver_v_1_22/From Client/Stream Server (stream_server_block) */
  {
    qthread_attr_t send_thread_attributes;
    qthread_attr_t receive_thread_attributes;
    struct qsched_param scheduling_parameters;
    int min_priority = qsched_get_priority_min(QSCHED_FIFO);
    int max_priority = qsched_get_priority_max(QSCHED_FIFO);
    t_pstream_options options;
    t_error result;
    qbot_driver_v_1_22_DW.StreamServer_Stream = NULL;

    {
      int_T i1;
      real_T *y3 = &qbot_driver_v_1_22_B.StreamServer_o4[0];
      const real_T *p_StreamServer_default_value =
        qbot_driver_v_1_22_P.StreamServer_default_value;
      for (i1=0; i1 < 10; i1++) {
        y3[i1] = p_StreamServer_default_value[i1];
      }
    }

    result = 0;
    options.size = sizeof(options);
    options.flags = qbot_driver_v_1_22_P.StreamServer_Endian &
      PSTREAM_FLAG_ENDIAN_MASK;
    if (qbot_driver_v_1_22_P.StreamServer_Implementation ==
        STREAM_SERVER_IMPLEMENTATION_THREAD) {
      options.flags |= PSTREAM_FLAG_MULTITHREADED;
    }

    if (qbot_driver_v_1_22_P.StreamServer_Optimize ==
        STREAM_SERVER_OPTIMIZE_LATENCY) {
      options.flags |= PSTREAM_FLAG_MINIMIZE_LATENCY;
    }

    options.flags |= PSTREAM_FLAG_SEND_MOST_RECENT;
    options.flags |= PSTREAM_FLAG_RECEIVE_MOST_RECENT;
    options.send_unit_size = 8;
    options.num_send_units = 17;
    options.send_buffer_size = qbot_driver_v_1_22_P.StreamServer_SndSize;
    options.send_fifo_size = qbot_driver_v_1_22_P.StreamServer_SndFIFO;
    options.num_send_dimensions = 0;
    options.max_send_dimensions = NULL;
    if (qbot_driver_v_1_22_P.StreamServer_SndPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (qbot_driver_v_1_22_P.StreamServer_SndPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        qbot_driver_v_1_22_P.StreamServer_SndPriority;
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
          rtmSetErrorStatus(qbot_driver_v_1_22_M,
                            "Unable to set scheduling inheritance for Stream Client sending thread");
        }
      } else {
        rtmSetErrorStatus(qbot_driver_v_1_22_M,
                          "The specified thread priority for the Stream Client sending thread is not valid for this target");
      }
    } else {
      rtmSetErrorStatus(qbot_driver_v_1_22_M,
                        "Unable to set scheduling policy for Stream Client sending thread");
    }

    options.send_thread_attributes = &send_thread_attributes;
    options.receive_unit_size = 8;
    options.num_receive_units = 10;
    options.receive_buffer_size = qbot_driver_v_1_22_P.StreamServer_RcvSize;
    options.receive_fifo_size = qbot_driver_v_1_22_P.StreamServer_RcvFIFO;
    options.num_receive_dimensions = 0;
    options.max_receive_dimensions = NULL;
    if (qbot_driver_v_1_22_P.StreamServer_RcvPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (qbot_driver_v_1_22_P.StreamServer_RcvPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        qbot_driver_v_1_22_P.StreamServer_RcvPriority;
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
            rtmSetErrorStatus(qbot_driver_v_1_22_M,
                              "Unable to set scheduling inheritance for Stream Client receiving thread");
          }
        } else {
          rtmSetErrorStatus(qbot_driver_v_1_22_M,
                            "The specified thread priority for the Stream Client receiving thread is not valid for this target");
        }
      } else {
        rtmSetErrorStatus(qbot_driver_v_1_22_M,
                          "Unable to set scheduling policy for Stream Client receiving thread");
      }
    }

    options.receive_thread_attributes = &receive_thread_attributes;
    if (result == 0) {
      result = pstream_listen((const char *)
        qbot_driver_v_1_22_P.StreamServer_URI, &options,
        &qbot_driver_v_1_22_DW.StreamServer_Stream);
      if (result < 0 && result != -QERR_WOULD_BLOCK) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      }
    }

    qthread_attr_destroy(&send_thread_attributes);
    qthread_attr_destroy(&receive_thread_attributes);
  }

  /* Start for DiscretePulseGenerator: '<S3>/Pulse Generator' */
  qbot_driver_v_1_22_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S3>/Pulse Generator1' */
  qbot_driver_v_1_22_DW.clockTickCounter_p = 0;

  /* Start for S-Function (sample_time_block): '<S4>/Sample Time' */

  /* S-Function Block: qbot_driver_v_1_22/Monitor Timing/Sample Time (sample_time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time
      (&qbot_driver_v_1_22_DW.SampleTime_PreviousTime);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      return;
    }
  }

  /* user code (Start function Trailer) */

  /* S-Function Block: qbot_driver_v_1_22/LED States/LEDs/Time (time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time(&_high_resolution_start_time);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
      return;
    }
  }

  qbot_driver_v_1_22_PrevZCX.Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  qbot_driver_v_1_22_PrevZCX.LockModeonConnection_Trig_ZCE = POS_ZCSIG;
  qbot_driver_v_1_22_PrevZCX.LowBatteryError_Trig_ZCE = UNINITIALIZED_ZCSIG;
  qbot_driver_v_1_22_PrevZCX.LowBatteryWarning_Trig_ZCE = UNINITIALIZED_ZCSIG;
  qbot_driver_v_1_22_PrevZCX.StallOvercurrentError_Trig_ZCE =
    UNINITIALIZED_ZCSIG;
  qbot_driver_v_1_22_PrevZCX.WatchdogexpiryError_Trig_ZCE = UNINITIALIZED_ZCSIG;
  qbot_driver_v_1_22_PrevZCX.findholdcommand_Trig_ZCE = POS_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for Memory: '<S1>/Memory' */
    qbot_driver_v_1_22_DW.Memory_PreviousInput[0] =
      qbot_driver_v_1_22_P.Memory_InitialCondition;
    qbot_driver_v_1_22_DW.Memory_PreviousInput[1] =
      qbot_driver_v_1_22_P.Memory_InitialCondition;

    /* InitializeConditions for Memory: '<S1>/Memory1' */
    qbot_driver_v_1_22_DW.Memory1_PreviousInput =
      qbot_driver_v_1_22_P.Memory1_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S12>/Delay Input1' */
    for (i = 0; i < 17; i++) {
      qbot_driver_v_1_22_DW.DelayInput1_DSTATE[i] =
        qbot_driver_v_1_22_P.DetectChange_vinit;
    }

    /* End of InitializeConditions for UnitDelay: '<S12>/Delay Input1' */

    /* InitializeConditions for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE =
      qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC;
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRese = 0;

    /* InitializeConditions for Memory: '<S47>/Memory1' */
    qbot_driver_v_1_22_DW.Memory1_PreviousInput_c =
      qbot_driver_v_1_22_P.Memory1_InitialCondition_i;

    /* InitializeConditions for UnitDelay: '<S53>/Delay Input2' */
    qbot_driver_v_1_22_DW.DelayInput2_DSTATE =
      qbot_driver_v_1_22_P.DelayInput2_InitialCondition;

    /* InitializeConditions for Memory: '<S47>/Memory2' */
    qbot_driver_v_1_22_DW.Memory2_PreviousInput =
      qbot_driver_v_1_22_P.Memory2_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S54>/Delay Input2' */
    qbot_driver_v_1_22_DW.DelayInput2_DSTATE_b =
      qbot_driver_v_1_22_P.DelayInput2_InitialCondition_a;

    /* InitializeConditions for Memory: '<S2>/Memory' */
    qbot_driver_v_1_22_DW.Memory_PreviousInput_d =
      qbot_driver_v_1_22_P.Memory_InitialCondition_a;

    /* InitializeConditions for DiscreteIntegrator: '<S32>/Discrete-Time Integrator' */
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_n =
      qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_b;
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_m = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_h =
      qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_n;
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_a = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S33>/Discrete-Time Integrator' */
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_i =
      qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_nq;
    qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_f = 0;

    /* InitializeConditions for Memory: '<S3>/Memory1' */
    qbot_driver_v_1_22_DW.Memory1_PreviousInput_e =
      qbot_driver_v_1_22_P.Memory1_InitialCondition_p;

    /* SystemInitialize for MATLAB Function: '<S18>/Figure out which battery is valid and active1' */
    qbot_driver_v_1_22_DW.sfEvent = qbot_driver_v_1_2_CALL_EVENT_k2;
    qbot_driver_v_1_22_DW.is_active_c5_qbot_driver_v_1_22 = 0U;

    /* SystemInitialize for MATLAB Function: '<S15>/MATLAB Function' */
    qbot_driver_v_1_22_DW.sfEvent_m = qbot_driver_v_1_2_CALL_EVENT_k2;
    qbot_driver_v_1_22_DW.is_active_c14_qbot_driver_v_1_2 = 0U;
    qbot_driver_v_1_22_DW.flag = 0.0;
    qbot_driver_v_1_22_DW.flag_not_empty = true;
    qbot_driver_v_1_22_DW.mindset = 0.0;
    qbot_driver_v_1_22_DW.mindset_not_empty = true;

    /* SystemInitialize for Triggered SubSystem: '<S1>/Lock Mode on Connection' */
    /* SystemInitialize for SignalConversion generated from: '<S13>/In1' incorporates:
     *  Outport: '<S13>/Mode'
     */
    qbot_driver_v_1_22_B.In1 = qbot_driver_v_1_22_P.Mode_Y0;

    /* End of SystemInitialize for SubSystem: '<S1>/Lock Mode on Connection' */

    /* SystemInitialize for MATLAB Function: '<S1>/MATLAB Function' */
    qbot_driver_v_1_22_DW.sfEvent_mu = qbot_driver_v_1_2_CALL_EVENT_k2;
    qbot_driver_v_1_22_DW.is_active_c7_qbot_driver_v_1_22 = 0U;

    /* InitializeConditions for Integrator: '<S47>/Integrator' */
    qbot_driver_v_1_22_X.Integrator_CSTATE[0] =
      qbot_driver_v_1_22_P.Integrator_IC[0];

    /* SystemInitialize for Triggered SubSystem: '<S5>/find hold command' */
    /* SystemInitialize for SignalConversion generated from: '<S48>/measurement (rad)' incorporates:
     *  Outport: '<S48>/command (rad)'
     */
    qbot_driver_v_1_22_B.measurementrad[0] = qbot_driver_v_1_22_P.commandrad_Y0;

    /* End of SystemInitialize for SubSystem: '<S5>/find hold command' */

    /* InitializeConditions for Integrator: '<S47>/Integrator' */
    qbot_driver_v_1_22_X.Integrator_CSTATE[1] =
      qbot_driver_v_1_22_P.Integrator_IC[1];

    /* SystemInitialize for Triggered SubSystem: '<S5>/find hold command' */
    /* SystemInitialize for SignalConversion generated from: '<S48>/measurement (rad)' incorporates:
     *  Outport: '<S48>/command (rad)'
     */
    qbot_driver_v_1_22_B.measurementrad[1] = qbot_driver_v_1_22_P.commandrad_Y0;

    /* End of SystemInitialize for SubSystem: '<S5>/find hold command' */

    /* SystemInitialize for MATLAB Function: '<S47>/MATLAB Function1' */
    qbot_dri_MATLABFunction1_h_Init(&qbot_driver_v_1_22_DW.sf_MATLABFunction1_b);

    /* SystemInitialize for MATLAB Function: '<S47>/MATLAB Function2' */
    qbot_dri_MATLABFunction1_h_Init(&qbot_driver_v_1_22_DW.sf_MATLABFunction2_f);

    /* SystemInitialize for MATLAB Function: '<S27>/MATLAB Function1' */
    qbot_drive_MATLABFunction1_Init(&qbot_driver_v_1_22_DW.sf_MATLABFunction1);

    /* SystemInitialize for MATLAB Function: '<S27>/MATLAB Function2' */
    qbot_drive_MATLABFunction1_Init(&qbot_driver_v_1_22_DW.sf_MATLABFunction2);

    /* SystemInitialize for MATLAB Function: '<S27>/MATLAB Function3' */
    qbot_drive_MATLABFunction1_Init(&qbot_driver_v_1_22_DW.sf_MATLABFunction3);

    /* SystemInitialize for MATLAB Function: '<S18>/Figure out which battery is valid and active' */
    qbot_driver_v_1_22_DW.sfEvent_o = qbot_driver_v_1_2_CALL_EVENT_k2;
    qbot_driver_v_1_22_DW.is_active_c9_qbot_driver_v_1_22 = 0U;
  }
}

/* Model terminate function */
void qbot_driver_v_1_22_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: qbot_driver_v_1_22/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(qbot_driver_v_1_22_DW.HILInitialize_Card);
    hil_monitor_stop_all(qbot_driver_v_1_22_DW.HILInitialize_Card);
    is_switching = false;

    /* S-Function Block: qbot_driver_v_1_22/From Client/HIL Watchdog (hil_watchdog_block) */
    {
      hil_watchdog_stop(qbot_driver_v_1_22_DW.HILInitialize_Card);
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_DOTerminate && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_DOExit && is_switching)) {
      qbot_driver_v_1_22_DW.HILInitialize_DOBits[0] =
        qbot_driver_v_1_22_P.HILInitialize_DOFinal;
      qbot_driver_v_1_22_DW.HILInitialize_DOBits[1] =
        qbot_driver_v_1_22_P.HILInitialize_DOFinal;
      qbot_driver_v_1_22_DW.HILInitialize_DOBits[2] =
        qbot_driver_v_1_22_P.HILInitialize_DOFinal;
      num_final_digital_outputs = 3U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_POTerminate && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_POExit && is_switching)) {
      qbot_driver_v_1_22_DW.HILInitialize_POValues[0] =
        qbot_driver_v_1_22_P.HILInitialize_POFinal;
      qbot_driver_v_1_22_DW.HILInitialize_POValues[1] =
        qbot_driver_v_1_22_P.HILInitialize_POFinal;
      num_final_pwm_outputs = 2U;
    } else {
      num_final_pwm_outputs = 0;
    }

    if ((qbot_driver_v_1_22_P.HILInitialize_OOTerminate && !is_switching) ||
        (qbot_driver_v_1_22_P.HILInitialize_OOExit && is_switching)) {
      num_final_other_outputs = 6U;
    } else {
      num_final_other_outputs = 0;
    }

    if (0
        || num_final_pwm_outputs > 0
        || num_final_digital_outputs > 0
        || num_final_other_outputs > 0
        ) {
      /* Attempt to write the final outputs atomically (due to firmware issue in old Q2-USB). Otherwise write channels individually */
      result = hil_write(qbot_driver_v_1_22_DW.HILInitialize_Card
                         , NULL, 0
                         , qbot_driver_v_1_22_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , qbot_driver_v_1_22_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , qbot_driver_v_1_22_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , NULL
                         , &qbot_driver_v_1_22_DW.HILInitialize_POValues[0]
                         , (t_boolean *)
                         &qbot_driver_v_1_22_DW.HILInitialize_DOBits[0]
                         , qbot_driver_v_1_22_P.HILInitialize_OOFinal
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm(qbot_driver_v_1_22_DW.HILInitialize_Card,
            qbot_driver_v_1_22_P.HILInitialize_POChannels, num_final_pwm_outputs,
            &qbot_driver_v_1_22_DW.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital
            (qbot_driver_v_1_22_DW.HILInitialize_Card,
             qbot_driver_v_1_22_P.HILInitialize_DOChannels,
             num_final_digital_outputs, (t_boolean *)
             &qbot_driver_v_1_22_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other
            (qbot_driver_v_1_22_DW.HILInitialize_Card,
             qbot_driver_v_1_22_P.HILInitialize_OOChannels,
             num_final_other_outputs, qbot_driver_v_1_22_P.HILInitialize_OOFinal);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(qbot_driver_v_1_22_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(qbot_driver_v_1_22_DW.HILInitialize_Card);
    hil_monitor_delete_all(qbot_driver_v_1_22_DW.HILInitialize_Card);
    hil_close(qbot_driver_v_1_22_DW.HILInitialize_Card);
    qbot_driver_v_1_22_DW.HILInitialize_Card = NULL;
  }

  /* Terminate for S-Function (stream_server_block): '<S1>/Stream Server' */

  /* S-Function Block: qbot_driver_v_1_22/From Client/Stream Server (stream_server_block) */
  {
    if (qbot_driver_v_1_22_DW.StreamServer_Stream != NULL) {
      pstream_close(qbot_driver_v_1_22_DW.StreamServer_Stream);
    }

    qbot_driver_v_1_22_DW.StreamServer_Stream = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  qbot_driver_v_1_22_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  qbot_driver_v_1_22_update();
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
  qbot_driver_v_1_22_initialize();
}

void MdlTerminate(void)
{
  qbot_driver_v_1_22_terminate();
}

/* Registration function */
RT_MODEL_qbot_driver_v_1_22_T *qbot_driver_v_1_22(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)qbot_driver_v_1_22_M, 0,
                sizeof(RT_MODEL_qbot_driver_v_1_22_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&qbot_driver_v_1_22_M->solverInfo,
                          &qbot_driver_v_1_22_M->Timing.simTimeStep);
    rtsiSetTPtr(&qbot_driver_v_1_22_M->solverInfo, &rtmGetTPtr
                (qbot_driver_v_1_22_M));
    rtsiSetStepSizePtr(&qbot_driver_v_1_22_M->solverInfo,
                       &qbot_driver_v_1_22_M->Timing.stepSize0);
    rtsiSetdXPtr(&qbot_driver_v_1_22_M->solverInfo,
                 &qbot_driver_v_1_22_M->derivs);
    rtsiSetContStatesPtr(&qbot_driver_v_1_22_M->solverInfo, (real_T **)
                         &qbot_driver_v_1_22_M->contStates);
    rtsiSetNumContStatesPtr(&qbot_driver_v_1_22_M->solverInfo,
      &qbot_driver_v_1_22_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&qbot_driver_v_1_22_M->solverInfo,
      &qbot_driver_v_1_22_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&qbot_driver_v_1_22_M->solverInfo,
      &qbot_driver_v_1_22_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&qbot_driver_v_1_22_M->solverInfo,
      &qbot_driver_v_1_22_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&qbot_driver_v_1_22_M->solverInfo, (&rtmGetErrorStatus
      (qbot_driver_v_1_22_M)));
    rtsiSetRTModelPtr(&qbot_driver_v_1_22_M->solverInfo, qbot_driver_v_1_22_M);
  }

  rtsiSetSimTimeStep(&qbot_driver_v_1_22_M->solverInfo, MAJOR_TIME_STEP);
  qbot_driver_v_1_22_M->intgData.f[0] = qbot_driver_v_1_22_M->odeF[0];
  qbot_driver_v_1_22_M->contStates = ((real_T *) &qbot_driver_v_1_22_X);
  rtsiSetSolverData(&qbot_driver_v_1_22_M->solverInfo, (void *)
                    &qbot_driver_v_1_22_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange(&qbot_driver_v_1_22_M->solverInfo, false);
  rtsiSetSolverName(&qbot_driver_v_1_22_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = qbot_driver_v_1_22_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "qbot_driver_v_1_22_M points to
       static memory which is guaranteed to be non-NULL" */
    qbot_driver_v_1_22_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    qbot_driver_v_1_22_M->Timing.sampleTimes =
      (&qbot_driver_v_1_22_M->Timing.sampleTimesArray[0]);
    qbot_driver_v_1_22_M->Timing.offsetTimes =
      (&qbot_driver_v_1_22_M->Timing.offsetTimesArray[0]);

    /* task periods */
    qbot_driver_v_1_22_M->Timing.sampleTimes[0] = (0.0);
    qbot_driver_v_1_22_M->Timing.sampleTimes[1] = (0.033333333333333333);

    /* task offsets */
    qbot_driver_v_1_22_M->Timing.offsetTimes[0] = (0.0);
    qbot_driver_v_1_22_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(qbot_driver_v_1_22_M, &qbot_driver_v_1_22_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = qbot_driver_v_1_22_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    qbot_driver_v_1_22_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(qbot_driver_v_1_22_M, -1);
  qbot_driver_v_1_22_M->Timing.stepSize0 = 0.033333333333333333;
  qbot_driver_v_1_22_M->Timing.stepSize1 = 0.033333333333333333;

  /* External mode info */
  qbot_driver_v_1_22_M->Sizes.checksums[0] = (434559125U);
  qbot_driver_v_1_22_M->Sizes.checksums[1] = (3862163821U);
  qbot_driver_v_1_22_M->Sizes.checksums[2] = (3338888771U);
  qbot_driver_v_1_22_M->Sizes.checksums[3] = (2539258653U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[32];
    qbot_driver_v_1_22_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &qbot_driver_v_1_22_DW.LockModeonConnection_SubsysRanB;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = (sysRanDType *)
      &qbot_driver_v_1_22_DW.LowBatteryError_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &qbot_driver_v_1_22_DW.LowBatteryWarning_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &qbot_driver_v_1_22_DW.StallOvercurrentError_SubsysRan;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = (sysRanDType *)
      &qbot_driver_v_1_22_DW.WatchdogexpiryError_SubsysRanBC;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    systemRan[26] = &rtAlwaysEnabled;
    systemRan[27] = &rtAlwaysEnabled;
    systemRan[28] = &rtAlwaysEnabled;
    systemRan[29] = &rtAlwaysEnabled;
    systemRan[30] = &rtAlwaysEnabled;
    systemRan[31] = (sysRanDType *)
      &qbot_driver_v_1_22_DW.findholdcommand_SubsysRanBC;
    rteiSetModelMappingInfoPtr(qbot_driver_v_1_22_M->extModeInfo,
      &qbot_driver_v_1_22_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(qbot_driver_v_1_22_M->extModeInfo,
                        qbot_driver_v_1_22_M->Sizes.checksums);
    rteiSetTPtr(qbot_driver_v_1_22_M->extModeInfo, rtmGetTPtr
                (qbot_driver_v_1_22_M));
  }

  qbot_driver_v_1_22_M->solverInfoPtr = (&qbot_driver_v_1_22_M->solverInfo);
  qbot_driver_v_1_22_M->Timing.stepSize = (0.033333333333333333);
  rtsiSetFixedStepSize(&qbot_driver_v_1_22_M->solverInfo, 0.033333333333333333);
  rtsiSetSolverMode(&qbot_driver_v_1_22_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  qbot_driver_v_1_22_M->blockIO = ((void *) &qbot_driver_v_1_22_B);
  (void) memset(((void *) &qbot_driver_v_1_22_B), 0,
                sizeof(B_qbot_driver_v_1_22_T));

  /* parameters */
  qbot_driver_v_1_22_M->defaultParam = ((real_T *)&qbot_driver_v_1_22_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &qbot_driver_v_1_22_X;
    qbot_driver_v_1_22_M->contStates = (x);
    (void) memset((void *)&qbot_driver_v_1_22_X, 0,
                  sizeof(X_qbot_driver_v_1_22_T));
  }

  /* states (dwork) */
  qbot_driver_v_1_22_M->dwork = ((void *) &qbot_driver_v_1_22_DW);
  (void) memset((void *)&qbot_driver_v_1_22_DW, 0,
                sizeof(DW_qbot_driver_v_1_22_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    qbot_driver_v_1_22_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 33;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  qbot_driver_v_1_22_M->Sizes.numContStates = (2);/* Number of continuous states */
  qbot_driver_v_1_22_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  qbot_driver_v_1_22_M->Sizes.numY = (0);/* Number of model outputs */
  qbot_driver_v_1_22_M->Sizes.numU = (0);/* Number of model inputs */
  qbot_driver_v_1_22_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  qbot_driver_v_1_22_M->Sizes.numSampTimes = (2);/* Number of sample times */
  qbot_driver_v_1_22_M->Sizes.numBlocks = (253);/* Number of blocks */
  qbot_driver_v_1_22_M->Sizes.numBlockIO = (68);/* Number of block outputs */
  qbot_driver_v_1_22_M->Sizes.numBlockPrms = (311);/* Sum of parameter "widths" */
  return qbot_driver_v_1_22_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
