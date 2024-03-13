/*
 * QBot4_Image_Proc_Color_Thresh.c
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
#include "rtwtypes.h"
#include <math.h>
#include <string.h>
#include "QBot4_Image_Proc_Color_Thresh_private.h"
#include "rt_nonfinite.h"
#include "QBot4_Image_Proc_Color_Thresh_dt.h"

/* Named constants for MATLAB Function: '<S1>/Color thresholding' */
#define QBot4_Image_Proc_Col_CALL_EVENT (-1)

/* Block signals (default storage) */
B_QBot4_Image_Proc_Color_Thre_T QBot4_Image_Proc_Color_Thresh_B;

/* Block states (default storage) */
DW_QBot4_Image_Proc_Color_Thr_T QBot4_Image_Proc_Color_Thres_DW;

/* Real-time model */
static RT_MODEL_QBot4_Image_Proc_Col_T QBot4_Image_Proc_Color_Thres_M_;
RT_MODEL_QBot4_Image_Proc_Col_T *const QBot4_Image_Proc_Color_Thres_M =
  &QBot4_Image_Proc_Color_Thres_M_;

/* Forward declaration for local functions */
static void QBot4_Image_Proc_Color_Th_histg(const uint8_T img[307200], const
  real_T roi[4], const real_T color[3], uint8_T hr[25600], uint8_T hg[25600],
  uint8_T hb[25600]);
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(QBot4_Image_Proc_Color_Thres_M, 1);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (QBot4_Image_Proc_Color_Thres_M->Timing.TaskCounters.TID[1])++;
  if ((QBot4_Image_Proc_Color_Thres_M->Timing.TaskCounters.TID[1]) > 2) {
                                /* Sample time: [0.033333333333333333s, 0.0s] */
    QBot4_Image_Proc_Color_Thres_M->Timing.TaskCounters.TID[1] = 0;
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Function for MATLAB Function: '<S1>/Color thresholding' */
static void QBot4_Image_Proc_Color_Th_histg(const uint8_T img[307200], const
  real_T roi[4], const real_T color[3], uint8_T hr[25600], uint8_T hg[25600],
  uint8_T hb[25600])
{
  real_T histogram[256];
  real_T b_y1;
  real_T tmp;
  real_T x1;
  real_T x2;
  real_T y2;
  int32_T b;
  int32_T b_i;
  int32_T b_j;
  int32_T c;
  int32_T i;
  int32_T tmp_0;

  /* '<S7>:1:106' */
  /* '<S7>:1:107' */
  /* '<S7>:1:108' */
  memset(&hr[0], 220, 25600U * sizeof(uint8_T));
  memset(&hg[0], 220, 25600U * sizeof(uint8_T));
  memset(&hb[0], 220, 25600U * sizeof(uint8_T));

  /* '<S7>:1:114' */
  memset(&histogram[0], 0, sizeof(real_T) << 8U);

  /* '<S7>:1:116' */
  x1 = fabs(roi[0]);

  /* '<S7>:1:117' */
  x2 = fabs(roi[1]);

  /* '<S7>:1:118' */
  b_y1 = fabs(roi[2]);

  /* '<S7>:1:119' */
  y2 = fabs(roi[3]);
  if (x1 > 640.0) {
    /* '<S7>:1:123' */
    /* '<S7>:1:124' */
    x1 = 640.0;
  }

  if (x2 > 640.0) {
    /* '<S7>:1:128' */
    /* '<S7>:1:129' */
    x2 = 640.0;
  }

  if (b_y1 > 480.0) {
    /* '<S7>:1:133' */
    /* '<S7>:1:134' */
    b_y1 = 480.0;
  }

  if (y2 > 480.0) {
    /* '<S7>:1:138' */
    /* '<S7>:1:139' */
    y2 = 480.0;
  }

  if (x1 > x2) {
    /* '<S7>:1:141' */
    /* '<S7>:1:142' */
    tmp = x1;

    /* '<S7>:1:143' */
    x1 = x2;

    /* '<S7>:1:144' */
    x2 = tmp;
  }

  if (b_y1 > y2) {
    /* '<S7>:1:146' */
    /* '<S7>:1:147' */
    tmp = b_y1;

    /* '<S7>:1:148' */
    b_y1 = y2;

    /* '<S7>:1:149' */
    y2 = tmp;
  }

  b = (int32_T)((1.0 - b_y1) + y2);

  /* '<S7>:1:152' */
  for (b_i = 0; b_i < b; b_i++) {
    y2 = b_y1 + (real_T)b_i;
    c = (int32_T)((1.0 - x1) + x2);

    /* '<S7>:1:153' */
    for (b_j = 0; b_j < c; b_j++) {
      /* '<S7>:1:154' */
      i = (int32_T)(img[(((int32_T)(x1 + (real_T)b_j) - 1) * 480 + (int32_T)y2)
                    - 1] + 1U);
      tmp_0 = i;
      if ((uint32_T)i > 255U) {
        tmp_0 = 255;
        i = 255;
      }

      histogram[tmp_0 - 1] = histogram[i - 1] + 1.0;
    }
  }

  /* '<S7>:1:158' */
  x1 = histogram[0];
  for (b = 0; b < 255; b++) {
    x2 = histogram[b + 1];
    if (x1 < x2) {
      x1 = x2;
    }
  }

  /* '<S7>:1:160' */
  for (b = 0; b < 256; b++) {
    histogram[b] = rt_roundd_snf(histogram[b] / x1 * 100.0);
  }

  /* '<S7>:1:161' */
  for (b = 0; b < 256; b++) {
    /* '<S7>:1:162' */
    /* '<S7>:1:163' */
    b_i = (int32_T)-(((100.0 - histogram[b]) + 1.0) - 101.0);

    /* '<S7>:1:164' */
    for (c = 0; c < b_i; c++) {
      /* '<S7>:1:178' */
      x1 = rt_roundd_snf(color[0]);
      if (x1 < 256.0) {
        if (x1 >= 0.0) {
          hr[(100 * b - c) + 99] = (uint8_T)x1;
        } else {
          hr[(100 * b - c) + 99] = 0U;
        }
      } else {
        hr[(100 * b - c) + 99] = MAX_uint8_T;
      }

      /* '<S7>:1:179' */
      x1 = rt_roundd_snf(color[1]);
      if (x1 < 256.0) {
        if (x1 >= 0.0) {
          hg[(100 * b - c) + 99] = (uint8_T)x1;
        } else {
          hg[(100 * b - c) + 99] = 0U;
        }
      } else {
        hg[(100 * b - c) + 99] = MAX_uint8_T;
      }

      /* '<S7>:1:180' */
      x1 = rt_roundd_snf(color[2]);
      if (x1 < 256.0) {
        if (x1 >= 0.0) {
          hb[(100 * b - c) + 99] = (uint8_T)x1;
        } else {
          hb[(100 * b - c) + 99] = 0U;
        }
      } else {
        hb[(100 * b - c) + 99] = MAX_uint8_T;
      }
    }
  }
}

/* Model output function for TID0 */
void QBot4_Image_Proc_Color_Thresh_output0(void)
                                /* Sample time: [0.011111111111111112s, 0.0s] */
{
  {                             /* Sample time: [0.011111111111111112s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model update function for TID0 */
void QBot4_Image_Proc_Color_Thresh_update0(void)
                                /* Sample time: [0.011111111111111112s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++QBot4_Image_Proc_Color_Thres_M->Timing.clockTick0)) {
    ++QBot4_Image_Proc_Color_Thres_M->Timing.clockTickH0;
  }

  QBot4_Image_Proc_Color_Thres_M->Timing.t[0] =
    QBot4_Image_Proc_Color_Thres_M->Timing.clockTick0 *
    QBot4_Image_Proc_Color_Thres_M->Timing.stepSize0 +
    QBot4_Image_Proc_Color_Thres_M->Timing.clockTickH0 *
    QBot4_Image_Proc_Color_Thres_M->Timing.stepSize0 * 4294967296.0;
}

/* Model output function for TID1 */
void QBot4_Image_Proc_Color_Thresh_output1(void)
                                /* Sample time: [0.033333333333333333s, 0.0s] */
{
  real_T tb1_tmp;
  real_T tb2_tmp;
  real_T tg1_tmp;
  real_T tg2_tmp;
  real_T tmp;
  real_T tr1_tmp;
  real_T tr2_tmp;
  real_T truncb;
  real_T truncg;
  real_T truncr;
  int32_T i;
  int32_T j;
  int32_T rhr_tmp;
  int32_T rtb_Red_tmp;
  uint8_T rtb_Blue_tmp;
  uint8_T rtb_Green_tmp;
  uint8_T rtb_Red_0;
  static const real_T b[3] = { 255.0, 0.0, 0.0 };

  static const real_T c[3] = { 0.0, 255.0, 0.0 };

  static const real_T d[3] = { 0.0, 0.0, 255.0 };

  uint8_T *rtb_Blue_0;
  uint8_T *rtb_Green_0;
  uint8_T *rtb_Red_1;
  boolean_T guard1 = false;

  /* Reset subsysRan breadcrumbs */
  srClearBC(QBot4_Image_Proc_Color_Thres_DW.ImageThresholdingEnabled_Subsys);

  /* S-Function (video3d_initialize_block): '<Root>/Video3D Initialize' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video3D Initialize (video3d_initialize_block) */
  {
  }

  /* S-Function (video3d_capture_block): '<Root>/Video3D Capture' */
  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video3D Capture (video3d_capture_block) */
  {
    t_video3d_frame frame;
    t_error result;
    result = video3d_stream_get_frame
      (QBot4_Image_Proc_Color_Thres_DW.Video3DCapture_Stream, &frame);
    if (result >= 0) {
      result = video3d_frame_get_data(frame,
        &QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[0]);
      video3d_frame_get_number(frame,
        &QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o2);

      /* Release the frame to free up its resources */
      video3d_frame_release(frame);
    }

    QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o4 = (result >= 0);
    if (result < 0 && result != -QERR_WOULD_BLOCK) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
    }
  }

  /* Reshape: '<Root>/Reshape' incorporates:
   *  S-Function (video3d_capture_block): '<Root>/Video3D Capture'
   *  Selector: '<Root>/View central pixel'
   */
  QBot4_Image_Proc_Color_Thresh_B.Reshape[0] =
    QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[153359];
  QBot4_Image_Proc_Color_Thresh_B.Reshape[1] =
    QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[460559];
  QBot4_Image_Proc_Color_Thresh_B.Reshape[2] =
    QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[767759];

  /* Outputs for Enabled SubSystem: '<Root>/ Image Thresholding (Enabled)' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o4) {
    /* Selector: '<S8>/Red' incorporates:
     *  S-Function (video3d_capture_block): '<Root>/Video3D Capture'
     */
    rtb_Red_1 = &QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[0];

    /* Selector: '<S8>/Green' incorporates:
     *  S-Function (video3d_capture_block): '<Root>/Video3D Capture'
     */
    rtb_Green_0 = &QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[307200];

    /* Selector: '<S8>/Blue' incorporates:
     *  S-Function (video3d_capture_block): '<Root>/Video3D Capture'
     */
    rtb_Blue_0 = &QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[614400];

    /* MATLAB Function: '<S1>/Color thresholding' incorporates:
     *  Concatenate: '<Root>/filtered_image'
     *  Concatenate: '<Root>/histogram_image'
     *  Constant: '<Root>/blue_th'
     *  Constant: '<Root>/green_th'
     *  Constant: '<Root>/red_th'
     *  Constant: '<Root>/roi1'
     *  Constant: '<Root>/truncval1'
     *  Constant: '<S6>/index'
     *  Selector: '<S8>/Blue'
     *  Selector: '<S8>/Green'
     *  Selector: '<S8>/Red'
     */
    QBot4_Image_Proc_Color_Thres_DW.sfEvent = QBot4_Image_Proc_Col_CALL_EVENT;

    /* MATLAB Function ' Image Thresholding (Enabled)/Color thresholding': '<S7>:1' */
    /* '<S7>:1:10' */
    /* '<S7>:1:11' */
    /* '<S7>:1:12' */
    /* '<S7>:1:8' */
    /* '<S7>:1:30' */
    /* '<S7>:1:200' */
    tr1_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.red_th_Value[0]);

    /* '<S7>:1:201' */
    tr2_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.red_th_Value[1]);
    if (tr1_tmp > tr2_tmp) {
      /* '<S7>:1:202' */
      /* '<S7>:1:203' */
      tr1_tmp = tr2_tmp;

      /* '<S7>:1:204' */
      tr2_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.red_th_Value[0]);
    }

    if (tr1_tmp > 255.0) {
      /* '<S7>:1:206' */
      /* '<S7>:1:207' */
      tr1_tmp = 255.0;
    }

    if (tr2_tmp > 255.0) {
      /* '<S7>:1:209' */
      /* '<S7>:1:210' */
      tr2_tmp = 255.0;
    }

    /* '<S7>:1:31' */
    /* '<S7>:1:200' */
    tg1_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.green_th_Value[0]);

    /* '<S7>:1:201' */
    tg2_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.green_th_Value[1]);
    if (tg1_tmp > tg2_tmp) {
      /* '<S7>:1:202' */
      /* '<S7>:1:203' */
      tg1_tmp = tg2_tmp;

      /* '<S7>:1:204' */
      tg2_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.green_th_Value[0]);
    }

    if (tg1_tmp > 255.0) {
      /* '<S7>:1:206' */
      /* '<S7>:1:207' */
      tg1_tmp = 255.0;
    }

    if (tg2_tmp > 255.0) {
      /* '<S7>:1:209' */
      /* '<S7>:1:210' */
      tg2_tmp = 255.0;
    }

    /* '<S7>:1:32' */
    /* '<S7>:1:200' */
    tb1_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.blue_th_Value[0]);

    /* '<S7>:1:201' */
    tb2_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.blue_th_Value[1]);
    if (tb1_tmp > tb2_tmp) {
      /* '<S7>:1:202' */
      /* '<S7>:1:203' */
      tb1_tmp = tb2_tmp;

      /* '<S7>:1:204' */
      tb2_tmp = fabs(QBot4_Image_Proc_Color_Thresh_P.blue_th_Value[0]);
    }

    if (tb1_tmp > 255.0) {
      /* '<S7>:1:206' */
      /* '<S7>:1:207' */
      tb1_tmp = 255.0;
    }

    if (tb2_tmp > 255.0) {
      /* '<S7>:1:209' */
      /* '<S7>:1:210' */
      tb2_tmp = 255.0;
    }

    /* '<S7>:1:34' */
    /* '<S7>:1:217' */
    truncr = fabs(QBot4_Image_Proc_Color_Thresh_P.truncval1_Value[0]);
    if (truncr > 255.0) {
      /* '<S7>:1:220' */
      /* '<S7>:1:221' */
      truncr = 255.0;
    }

    /* '<S7>:1:35' */
    /* '<S7>:1:217' */
    truncg = fabs(QBot4_Image_Proc_Color_Thresh_P.truncval1_Value[1]);
    if (truncg > 255.0) {
      /* '<S7>:1:220' */
      /* '<S7>:1:221' */
      truncg = 255.0;
    }

    /* '<S7>:1:36' */
    /* '<S7>:1:217' */
    truncb = fabs(QBot4_Image_Proc_Color_Thresh_P.truncval1_Value[2]);
    if (truncb > 255.0) {
      /* '<S7>:1:220' */
      /* '<S7>:1:221' */
      truncb = 255.0;
    }

    /* '<S7>:1:38' */
    /* '<S7>:1:39' */
    /* '<S7>:1:40' */
    for (i = 0; i < 307200; i++) {
      QBot4_Image_Proc_Color_Thresh_B.filtered_image[i] = 0U;
      QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 307200] = 0U;
      QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 614400] = 0U;
    }

    /* '<S7>:1:43' */
    for (i = 0; i < 480; i++) {
      /* '<S7>:1:44' */
      for (j = 0; j < 640; j++) {
        rtb_Red_tmp = 480 * j + i;
        rtb_Red_0 = rtb_Red_1[rtb_Red_tmp];
        guard1 = false;
        if ((rtb_Red_0 >= tr1_tmp) && (rtb_Red_0 <= tr2_tmp)) {
          /* '<S7>:1:45' */
          rtb_Green_tmp = rtb_Green_0[rtb_Red_tmp];
          if ((rtb_Green_tmp >= tg1_tmp) && (rtb_Green_tmp <= tg2_tmp)) {
            /* '<S7>:1:46' */
            rtb_Blue_tmp = rtb_Blue_0[rtb_Red_tmp];
            if ((rtb_Blue_tmp >= tb1_tmp) && (rtb_Blue_tmp <= tb2_tmp)) {
              /* '<S7>:1:47' */
              if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 1.0) {
                /* '<S7>:1:49' */
                /* '<S7>:1:50' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] =
                  MAX_uint8_T;

                /* '<S7>:1:51' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                  640)] = MAX_uint8_T;

                /* '<S7>:1:52' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                  1280)] = MAX_uint8_T;
              } else if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 2.0)
              {
                /* '<S7>:1:53' */
                /* '<S7>:1:54' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] = 0U;

                /* '<S7>:1:55' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                  640)] = 0U;

                /* '<S7>:1:56' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                  1280)] = 0U;
              } else if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 3.0)
              {
                /* '<S7>:1:57' */
                /* '<S7>:1:58' */
                tmp = rt_roundd_snf(truncr);
                if (tmp < 256.0) {
                  QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] =
                    (uint8_T)tmp;
                } else {
                  QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] =
                    MAX_uint8_T;
                }

                /* '<S7>:1:59' */
                tmp = rt_roundd_snf(truncg);
                if (tmp < 256.0) {
                  QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                    640)] = (uint8_T)tmp;
                } else {
                  QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                    640)] = MAX_uint8_T;
                }

                /* '<S7>:1:60' */
                tmp = rt_roundd_snf(truncb);
                if (tmp < 256.0) {
                  QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                    1280)] = (uint8_T)tmp;
                } else {
                  QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                    1280)] = MAX_uint8_T;
                }
              } else if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 4.0)
              {
                /* '<S7>:1:61' */
                /* '<S7>:1:62' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] =
                  rtb_Red_0;

                /* '<S7>:1:63' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                  640)] = rtb_Green_tmp;

                /* '<S7>:1:64' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                  1280)] = rtb_Blue_tmp;
              } else if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 5.0)
              {
                /* '<S7>:1:65' */
                /* '<S7>:1:66' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] = 0U;

                /* '<S7>:1:67' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                  640)] = 0U;

                /* '<S7>:1:68' */
                QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j +
                  1280)] = 0U;
              }
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 1.0) {
            /* '<S7>:1:71' */
            /* '<S7>:1:72' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] = 0U;

            /* '<S7>:1:73' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 640)] =
              0U;

            /* '<S7>:1:74' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 1280)]
              = 0U;
          } else if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 2.0) {
            /* '<S7>:1:75' */
            /* '<S7>:1:76' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] =
              MAX_uint8_T;

            /* '<S7>:1:77' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 640)] =
              MAX_uint8_T;

            /* '<S7>:1:78' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 1280)]
              = MAX_uint8_T;
          } else if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 3.0) {
            /* '<S7>:1:79' */
            /* '<S7>:1:80' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] =
              rtb_Red_0;

            /* '<S7>:1:81' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 640)] =
              rtb_Green_0[rtb_Red_tmp];

            /* '<S7>:1:82' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 1280)]
              = rtb_Blue_0[rtb_Red_tmp];
          } else if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 4.0) {
            /* '<S7>:1:83' */
            /* '<S7>:1:84' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] = 0U;

            /* '<S7>:1:85' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 640)] =
              0U;

            /* '<S7>:1:86' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 1280)]
              = 0U;
          } else if (QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype == 5.0) {
            /* '<S7>:1:87' */
            /* '<S7>:1:88' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[rtb_Red_tmp] =
              rtb_Red_0;

            /* '<S7>:1:89' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 640)] =
              rtb_Green_0[rtb_Red_tmp];

            /* '<S7>:1:90' */
            QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 480 * (j + 1280)]
              = rtb_Blue_0[rtb_Red_tmp];
          }
        }
      }
    }

    /* '<S7>:1:8' */
    /* '<S7>:1:10' */
    QBot4_Image_Proc_Color_Th_histg(rtb_Red_1,
      QBot4_Image_Proc_Color_Thresh_P.roi1_Value, b,
      QBot4_Image_Proc_Color_Thresh_B.rhr_m, QBot4_Image_Proc_Color_Thresh_B.rhg,
      QBot4_Image_Proc_Color_Thresh_B.rhb);

    /* '<S7>:1:11' */
    QBot4_Image_Proc_Color_Th_histg(rtb_Green_0,
      QBot4_Image_Proc_Color_Thresh_P.roi1_Value, c,
      QBot4_Image_Proc_Color_Thresh_B.ghr, QBot4_Image_Proc_Color_Thresh_B.ghg,
      QBot4_Image_Proc_Color_Thresh_B.ghb);

    /* '<S7>:1:12' */
    QBot4_Image_Proc_Color_Th_histg(rtb_Blue_0,
      QBot4_Image_Proc_Color_Thresh_P.roi1_Value, d,
      QBot4_Image_Proc_Color_Thresh_B.bhr, QBot4_Image_Proc_Color_Thresh_B.bhg,
      QBot4_Image_Proc_Color_Thresh_B.bhb);

    /* '<S7>:1:14' */
    for (i = 0; i < 256; i++) {
      for (j = 0; j < 100; j++) {
        rtb_Red_tmp = 100 * i + j;
        rhr_tmp = 300 * i + j;
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp] =
          QBot4_Image_Proc_Color_Thresh_B.rhr_m[rtb_Red_tmp];
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp + 100] =
          QBot4_Image_Proc_Color_Thresh_B.ghr[rtb_Red_tmp];
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp + 200] =
          QBot4_Image_Proc_Color_Thresh_B.bhr[rtb_Red_tmp];
      }
    }

    memcpy(&QBot4_Image_Proc_Color_Thresh_B.histogram_image[0],
           &QBot4_Image_Proc_Color_Thresh_B.rhr[0], 76800U * sizeof(uint8_T));

    /* '<S7>:1:15' */
    for (i = 0; i < 256; i++) {
      for (j = 0; j < 100; j++) {
        rtb_Red_tmp = 100 * i + j;
        rhr_tmp = 300 * i + j;
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp] =
          QBot4_Image_Proc_Color_Thresh_B.rhg[rtb_Red_tmp];
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp + 100] =
          QBot4_Image_Proc_Color_Thresh_B.ghg[rtb_Red_tmp];
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp + 200] =
          QBot4_Image_Proc_Color_Thresh_B.bhg[rtb_Red_tmp];
      }
    }

    memcpy(&QBot4_Image_Proc_Color_Thresh_B.histogram_image[76800],
           &QBot4_Image_Proc_Color_Thresh_B.rhr[0], 76800U * sizeof(uint8_T));

    /* '<S7>:1:16' */
    for (i = 0; i < 256; i++) {
      for (j = 0; j < 100; j++) {
        rtb_Red_tmp = 100 * i + j;
        rhr_tmp = 300 * i + j;
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp] =
          QBot4_Image_Proc_Color_Thresh_B.rhb[rtb_Red_tmp];
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp + 100] =
          QBot4_Image_Proc_Color_Thresh_B.ghb[rtb_Red_tmp];
        QBot4_Image_Proc_Color_Thresh_B.rhr[rhr_tmp + 200] =
          QBot4_Image_Proc_Color_Thresh_B.bhb[rtb_Red_tmp];
      }
    }

    memcpy(&QBot4_Image_Proc_Color_Thresh_B.histogram_image[153600],
           &QBot4_Image_Proc_Color_Thresh_B.rhr[0], 76800U * sizeof(uint8_T));

    /* End of MATLAB Function: '<S1>/Color thresholding' */
    srUpdateBC(QBot4_Image_Proc_Color_Thres_DW.ImageThresholdingEnabled_Subsys);
  }

  /* End of Outputs for SubSystem: '<Root>/ Image Thresholding (Enabled)' */

  /* S-Function (image_compress_block): '<S4>/Image Compress' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (Histogram)/Image Compress (image_compress_block) */
  {
    t_error result = 0;
    size_t image_size = 0;
    result = qjpeg_compress_start
      (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress, true);
    if (result == 0) {
      result = qjpeg_compress_write_image_uint8
        (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress,
         &QBot4_Image_Proc_Color_Thresh_B.histogram_image[0]);
      qjpeg_compress_stop(QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress);

      /* Get the final size of the compressed image */
      if (result >= 0) {
        result = qjpeg_compress_get_fixed_memory_destination_size
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress, &image_size);
      }
    }

    /* Set the dimensions of the output signal based on the size of the compressed image */
    QBot4_Image_Proc_Color_Thres_DW.ImageCompress_DIMS1 = (int) image_size;
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
    }
  }

  /* S-Function (channel_block): '<S4>/Channel' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (Histogram)/Channel (channel_block) */
  {
    if (rtExtModeQuarcIsConnected()) {
      struct channel_info {
        t_channel_header header;
      } info;

      size_t width = 1;
      QBot4_Image_Proc_Color_Thresh_B.Channel = CHANNEL_0;
      info.header.data_type_id = 3;
      info.header.channel = 0;
      info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
      info.header.num_dimensions = 1;
      width *= QBot4_Image_Proc_Color_Thres_DW.ImageCompress_DIMS1;
      info.header.dimension[0] =
        QBot4_Image_Proc_Color_Thres_DW.ImageCompress_DIMS1;
      channel_fifo_add((t_channel_fifo)
                       QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK.Fifo,
                       &info.header,
                       &QBot4_Image_Proc_Color_Thresh_B.ImageCompress[0], width *
                       sizeof(uint8_T));
    }
  }

  for (i = 0; i < 307200; i++) {
    /* Concatenate: '<Root>/Matrix Concatenate' incorporates:
     *  Concatenate: '<Root>/filtered_image'
     *  S-Function (video3d_capture_block): '<Root>/Video3D Capture'
     */
    QBot4_Image_Proc_Color_Thresh_B.MatrixConcatenate[i] =
      QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[i];
    QBot4_Image_Proc_Color_Thresh_B.MatrixConcatenate[i + 307200] =
      QBot4_Image_Proc_Color_Thresh_B.filtered_image[i];
    QBot4_Image_Proc_Color_Thresh_B.MatrixConcatenate[i + 614400] =
      QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[i + 307200];
    QBot4_Image_Proc_Color_Thresh_B.MatrixConcatenate[i + 921600] =
      QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 307200];
    QBot4_Image_Proc_Color_Thresh_B.MatrixConcatenate[i + 1228800] =
      QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1[i + 614400];
    QBot4_Image_Proc_Color_Thresh_B.MatrixConcatenate[i + 1536000] =
      QBot4_Image_Proc_Color_Thresh_B.filtered_image[i + 614400];
  }

  /* S-Function (image_compress_block): '<S5>/Image Compress' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (RGB & Blob)/Image Compress (image_compress_block) */
  {
    t_error result = 0;
    size_t image_size = 0;
    result = qjpeg_compress_start
      (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o, true);
    if (result == 0) {
      result = qjpeg_compress_write_image_uint8
        (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o,
         &QBot4_Image_Proc_Color_Thresh_B.MatrixConcatenate[0]);
      qjpeg_compress_stop
        (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o);

      /* Get the final size of the compressed image */
      if (result >= 0) {
        result = qjpeg_compress_get_fixed_memory_destination_size
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o, &image_size);
      }
    }

    /* Set the dimensions of the output signal based on the size of the compressed image */
    QBot4_Image_Proc_Color_Thres_DW.ImageCompress_DIMS1_c = (int) image_size;
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
    }
  }

  /* S-Function (channel_block): '<S5>/Channel' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (RGB & Blob)/Channel (channel_block) */
  {
    if (rtExtModeQuarcIsConnected()) {
      struct channel_info {
        t_channel_header header;
      } info;

      size_t width = 1;
      QBot4_Image_Proc_Color_Thresh_B.Channel_g = CHANNEL_1;
      info.header.data_type_id = 3;
      info.header.channel = 1;
      info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
      info.header.num_dimensions = 1;
      width *= QBot4_Image_Proc_Color_Thres_DW.ImageCompress_DIMS1_c;
      info.header.dimension[0] =
        QBot4_Image_Proc_Color_Thres_DW.ImageCompress_DIMS1_c;
      channel_fifo_add((t_channel_fifo)
                       QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK_m.Fifo,
                       &info.header,
                       &QBot4_Image_Proc_Color_Thresh_B.ImageCompress_e[0],
                       width * sizeof(uint8_T));
    }
  }
}

/* Model update function for TID1 */
void QBot4_Image_Proc_Color_Thresh_update1(void)
                                /* Sample time: [0.033333333333333333s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++QBot4_Image_Proc_Color_Thres_M->Timing.clockTick1)) {
    ++QBot4_Image_Proc_Color_Thres_M->Timing.clockTickH1;
  }

  QBot4_Image_Proc_Color_Thres_M->Timing.t[1] =
    QBot4_Image_Proc_Color_Thres_M->Timing.clockTick1 *
    QBot4_Image_Proc_Color_Thres_M->Timing.stepSize1 +
    QBot4_Image_Proc_Color_Thres_M->Timing.clockTickH1 *
    QBot4_Image_Proc_Color_Thres_M->Timing.stepSize1 * 4294967296.0;
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void QBot4_Image_Proc_Color_Thresh_output(int_T tid)
{
  switch (tid) {
   case 0 :
    QBot4_Image_Proc_Color_Thresh_output0();
    break;

   case 1 :
    QBot4_Image_Proc_Color_Thresh_output1();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void QBot4_Image_Proc_Color_Thresh_update(int_T tid)
{
  switch (tid) {
   case 0 :
    QBot4_Image_Proc_Color_Thresh_update0();
    break;

   case 1 :
    QBot4_Image_Proc_Color_Thresh_update1();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Model initialize function */
void QBot4_Image_Proc_Color_Thresh_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qbot_platform", "0",
                      &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options
      (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
       "enc0_velocity=0;enc1_velocity=0;", 33);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear
      (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
      return;
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIPStart && !is_switching)
        || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIPEnter &&
            is_switching)) {
      result = hil_set_analog_input_ranges
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIChannels, 6U,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AILow,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIHigh);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions
      (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
       QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DIChannels, 13U,
       QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOChannels, 3U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
      return;
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOStart && !is_switching)
        || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOEnter &&
            is_switching)) {
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOInitial;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOInitial;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[2] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOInitial;
      result = hil_write_digital
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOChannels, 3U,
         (t_boolean *) &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    if (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOReset) {
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOStates[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOWatchdog;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOStates[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOWatchdog;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOStates[2] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOWatchdog;
      result = hil_watchdog_set_digital_expiration_state
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOChannels, 3U, (const
          t_digital_state *)
         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIPStart && !is_switching)
        || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIPEnter &&
            is_switching)) {
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_QuadratureModes[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIQuadrature;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_QuadratureModes[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIChannels, 2U,
         (t_encoder_quadrature_mode *)
         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIStart && !is_switching)
        || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIEnter &&
            is_switching)) {
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_InitialEICounts[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIInitial;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_InitialEICounts[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIChannels, 2U,
         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POPStart && !is_switching)
        || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POPEnter &&
            is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POModes;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POModes;
      result = hil_set_pwm_mode
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels, 2U,
         (t_pwm_mode *)
         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }

      if (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[0] ==
          PWM_DUTY_CYCLE_MODE ||
          QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[0] ==
          PWM_ONE_SHOT_MODE ||
          QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[0] ==
          PWM_TIME_MODE ||
          QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[0] ==
          PWM_RAW_MODE) {
        QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedChans[num_duty_cycle_modes]
          = (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels[0]);
        QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]
          = (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POFrequency[0]);
        num_duty_cycle_modes++;
      } else {
        QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedChans[1U -
          num_frequency_modes] =
          (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels[0]);
        QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedFreqs[1U -
          num_frequency_modes] =
          (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POFrequency[0]);
        num_frequency_modes++;
      }

      if (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[1] ==
          PWM_DUTY_CYCLE_MODE ||
          QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[1] ==
          PWM_ONE_SHOT_MODE ||
          QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[1] ==
          PWM_TIME_MODE ||
          QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[1] ==
          PWM_RAW_MODE) {
        QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedChans[num_duty_cycle_modes]
          = (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels[1]);
        QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]
          = (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POFrequency[1]);
        num_duty_cycle_modes++;
      } else {
        QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedChans[1U -
          num_frequency_modes] =
          (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels[1]);
        QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedFreqs[1U -
          num_frequency_modes] =
          (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POFrequency[1]);
        num_frequency_modes++;
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency
          (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
           &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedChans[0],
           num_duty_cycle_modes,
           &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle
          (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
           &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedChans[num_duty_cycle_modes],
           num_frequency_modes,
           &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
          return;
        }
      }

      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POConfiguration;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POConfiguration;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POAlignValues[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POAlignment;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POAlignValues[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POAlignment;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POPolarityVals[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POPolarity;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POPolarityVals[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POPolarity;
      result = hil_set_pwm_configuration
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels, 2U,
         (t_pwm_configuration *)
         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues[0],
         (t_pwm_alignment *)
         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POAlignValues[0],
         (t_pwm_polarity *)
         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POStart && !is_switching)
        || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POEnter &&
            is_switching)) {
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POInitial;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POInitial;
      result = hil_write_pwm(QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels, 2U,
        &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    if (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POReset) {
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POWatchdog;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POWatchdog;
      result = hil_watchdog_set_pwm_expiration_state
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels, 2U,
         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOStart && !is_switching)
        || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOEnter &&
            is_switching)) {
      result = hil_write_other
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOChannels, 6U,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOInitial);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }

    if (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOReset) {
      result = hil_watchdog_set_other_expiration_state
        (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOChannels, 6U,
         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOWatchdog);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (video3d_initialize_block): '<Root>/Video3D Initialize' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video3D Initialize (video3d_initialize_block) */
  {
    t_error result;
    result = video3d_open("0",
                          &QBot4_Image_Proc_Color_Thres_DW.Video3DInitialize_Video3D);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
      return;
    }
  }

  /* Start for S-Function (video3d_capture_block): '<Root>/Video3D Capture' */
  {
    t_error result;
    result = video3d_stream_open
      (QBot4_Image_Proc_Color_Thres_DW.Video3DInitialize_Video3D,
       VIDEO3D_STREAM_COLOR,
       QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_stream_index, 30.0, 640,
       480,
       IMAGE_FORMAT_COL_MAJOR_PLANAR_RGB, IMAGE_DATA_TYPE_UINT8,
       &QBot4_Image_Proc_Color_Thres_DW.Video3DCapture_Stream);
    if (result >= 0) {
      t_video3d_property config_properties[4];
      t_double config_values[4];
      t_uint num_config_properties = 0;
      if (QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Preset != 21) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_VISUAL_PRESET;
        config_values[num_config_properties] = (t_video3d_visual_preset)
          (QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Preset - 1);
        num_config_properties++;
      }

      if (QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Emitter != 3) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_ENABLE_EMITTER;
        config_values[num_config_properties] =
          (QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Emitter == 1) ? 1.0 :
          0.0;
        num_config_properties++;
      }

      config_properties[num_config_properties] =
        VIDEO3D_PROPERTY_ENABLE_AUTO_WHITE_BALANCE;
      config_values[num_config_properties] = 1.0;
      num_config_properties++;
      config_properties[num_config_properties] =
        VIDEO3D_PROPERTY_ENABLE_AUTO_EXPOSURE;
      config_values[num_config_properties] = 1.0;
      num_config_properties++;
      if (num_config_properties > 0) {
        video3d_stream_set_properties
          (QBot4_Image_Proc_Color_Thres_DW.Video3DCapture_Stream,
           config_properties, num_config_properties, config_values);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_compress_block): '<S4>/Image Compress' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (Histogram)/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress, 256, 300,
           COLOR_SPACE_RGB, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress,
           QBot4_Image_Proc_Color_Thresh_P.ImageCompress_Quality);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress,
           &QBot4_Image_Proc_Color_Thresh_B.ImageCompress[0], 230400);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S4>/Channel' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (Histogram)/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(0, sizeof(uint8_T), 1, 230400, 1,
      (t_channel_fifo *) &QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_compress_block): '<S5>/Image Compress' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (RGB & Blob)/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o, 1280, 480,
           COLOR_SPACE_RGB, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o,
           QBot4_Image_Proc_Color_Thresh_P.ImageCompress_Quality_e);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o,
           &QBot4_Image_Proc_Color_Thresh_B.ImageCompress_e[0], 1843200);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close
          (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S5>/Channel' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (RGB & Blob)/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(1, sizeof(uint8_T), 1, 1843200, 1,
      (t_channel_fifo *) &QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK_m.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
    }
  }

  /* InitializeConditions for S-Function (video3d_initialize_block): '<Root>/Video3D Initialize' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video3D Initialize (video3d_initialize_block) */
  {
    if (rtmIsFirstInitCond(QBot4_Image_Proc_Color_Thres_M)) {
      t_error result = video3d_start_streaming
        (QBot4_Image_Proc_Color_Thres_DW.Video3DInitialize_Video3D);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        return;
      }
    }
  }

  /* InitializeConditions for S-Function (video3d_capture_block): '<Root>/Video3D Capture' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video3D Capture (video3d_capture_block) */
  {
    if (rtmIsFirstInitCond(QBot4_Image_Proc_Color_Thres_M)) {
    }
  }

  /* SystemInitialize for Enabled SubSystem: '<Root>/ Image Thresholding (Enabled)' */
  /* SystemInitialize for MATLAB Function: '<S1>/Color thresholding' */
  QBot4_Image_Proc_Color_Thres_DW.sfEvent = QBot4_Image_Proc_Col_CALL_EVENT;
  QBot4_Image_Proc_Color_Thres_DW.is_active_c2_QBot4_Image_Proc_C = 0U;

  /* End of SystemInitialize for SubSystem: '<Root>/ Image Thresholding (Enabled)' */

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(QBot4_Image_Proc_Color_Thres_M)) {
    rtmSetFirstInitCond(QBot4_Image_Proc_Color_Thres_M, 0);
  }
}

/* Model terminate function */
void QBot4_Image_Proc_Color_Thresh_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card);
    hil_monitor_stop_all(QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card);
    is_switching = false;
    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOTerminate &&
         !is_switching) || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOExit
         && is_switching)) {
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOFinal;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOFinal;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[2] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOFinal;
      num_final_digital_outputs = 3U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POTerminate &&
         !is_switching) || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POExit
         && is_switching)) {
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[0] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POFinal;
      QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[1] =
        QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POFinal;
      num_final_pwm_outputs = 2U;
    } else {
      num_final_pwm_outputs = 0;
    }

    if ((QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOTerminate &&
         !is_switching) || (QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOExit
         && is_switching)) {
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
      result = hil_write(QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card
                         , NULL, 0
                         ,
                         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         ,
                         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         ,
                         QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , NULL
                         ,
                         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[
                         0]
                         , (t_boolean *)
                         &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[0]
                         , QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOFinal
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm
            (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
             QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels,
             num_final_pwm_outputs,
             &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital
            (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
             QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOChannels,
             num_final_digital_outputs, (t_boolean *)
             &QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other
            (QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card,
             QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOChannels,
             num_final_other_outputs,
             QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOFinal);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(QBot4_Image_Proc_Color_Thres_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card);
    hil_monitor_delete_all(QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card);
    hil_close(QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card);
    QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card = NULL;
  }

  /* Terminate for S-Function (video3d_initialize_block): '<Root>/Video3D Initialize' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video3D Initialize (video3d_initialize_block) */
  {
    video3d_stop_streaming
      (QBot4_Image_Proc_Color_Thres_DW.Video3DInitialize_Video3D);
    video3d_close(QBot4_Image_Proc_Color_Thres_DW.Video3DInitialize_Video3D);
  }

  /* Terminate for S-Function (image_compress_block): '<S4>/Image Compress' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (Histogram)/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close(QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress);
    QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S4>/Channel' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (Histogram)/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK.Fifo);
    QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK.Fifo = NULL;
  }

  /* Terminate for S-Function (image_compress_block): '<S5>/Image Compress' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (RGB & Blob)/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close
      (QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o);
    QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S5>/Channel' */

  /* S-Function Block: QBot4_Image_Proc_Color_Thresh/Video Compressed Display (RGB & Blob)/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK_m.Fifo);
    QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK_m.Fifo = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  QBot4_Image_Proc_Color_Thresh_output(tid);
}

void MdlUpdate(int_T tid)
{
  QBot4_Image_Proc_Color_Thresh_update(tid);
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
  QBot4_Image_Proc_Color_Thresh_initialize();
}

void MdlTerminate(void)
{
  QBot4_Image_Proc_Color_Thresh_terminate();
}

/* Registration function */
RT_MODEL_QBot4_Image_Proc_Col_T *QBot4_Image_Proc_Color_Thresh(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)QBot4_Image_Proc_Color_Thres_M, 0,
                sizeof(RT_MODEL_QBot4_Image_Proc_Col_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      QBot4_Image_Proc_Color_Thres_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "QBot4_Image_Proc_Color_Thres_M points to
       static memory which is guaranteed to be non-NULL" */
    QBot4_Image_Proc_Color_Thres_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    QBot4_Image_Proc_Color_Thres_M->Timing.sampleTimes =
      (&QBot4_Image_Proc_Color_Thres_M->Timing.sampleTimesArray[0]);
    QBot4_Image_Proc_Color_Thres_M->Timing.offsetTimes =
      (&QBot4_Image_Proc_Color_Thres_M->Timing.offsetTimesArray[0]);

    /* task periods */
    QBot4_Image_Proc_Color_Thres_M->Timing.sampleTimes[0] =
      (0.011111111111111112);
    QBot4_Image_Proc_Color_Thres_M->Timing.sampleTimes[1] =
      (0.033333333333333333);

    /* task offsets */
    QBot4_Image_Proc_Color_Thres_M->Timing.offsetTimes[0] = (0.0);
    QBot4_Image_Proc_Color_Thres_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(QBot4_Image_Proc_Color_Thres_M,
             &QBot4_Image_Proc_Color_Thres_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = QBot4_Image_Proc_Color_Thres_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      QBot4_Image_Proc_Color_Thres_M->Timing.perTaskSampleHitsArray;
    QBot4_Image_Proc_Color_Thres_M->Timing.perTaskSampleHits =
      (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    QBot4_Image_Proc_Color_Thres_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(QBot4_Image_Proc_Color_Thres_M, -1);
  QBot4_Image_Proc_Color_Thres_M->Timing.stepSize0 = 0.011111111111111112;
  QBot4_Image_Proc_Color_Thres_M->Timing.stepSize1 = 0.033333333333333333;
  rtmSetFirstInitCond(QBot4_Image_Proc_Color_Thres_M, 1);

  /* External mode info */
  QBot4_Image_Proc_Color_Thres_M->Sizes.checksums[0] = (1194091741U);
  QBot4_Image_Proc_Color_Thres_M->Sizes.checksums[1] = (1696854016U);
  QBot4_Image_Proc_Color_Thres_M->Sizes.checksums[2] = (1800051018U);
  QBot4_Image_Proc_Color_Thres_M->Sizes.checksums[3] = (2388914825U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    QBot4_Image_Proc_Color_Thres_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &QBot4_Image_Proc_Color_Thres_DW.ImageThresholdingEnabled_Subsys;
    systemRan[2] = (sysRanDType *)
      &QBot4_Image_Proc_Color_Thres_DW.ImageThresholdingEnabled_Subsys;
    rteiSetModelMappingInfoPtr(QBot4_Image_Proc_Color_Thres_M->extModeInfo,
      &QBot4_Image_Proc_Color_Thres_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(QBot4_Image_Proc_Color_Thres_M->extModeInfo,
                        QBot4_Image_Proc_Color_Thres_M->Sizes.checksums);
    rteiSetTPtr(QBot4_Image_Proc_Color_Thres_M->extModeInfo, rtmGetTPtr
                (QBot4_Image_Proc_Color_Thres_M));
  }

  QBot4_Image_Proc_Color_Thres_M->solverInfoPtr =
    (&QBot4_Image_Proc_Color_Thres_M->solverInfo);
  QBot4_Image_Proc_Color_Thres_M->Timing.stepSize = (0.011111111111111112);
  rtsiSetFixedStepSize(&QBot4_Image_Proc_Color_Thres_M->solverInfo,
                       0.011111111111111112);
  rtsiSetSolverMode(&QBot4_Image_Proc_Color_Thres_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  QBot4_Image_Proc_Color_Thres_M->blockIO = ((void *)
    &QBot4_Image_Proc_Color_Thresh_B);
  (void) memset(((void *) &QBot4_Image_Proc_Color_Thresh_B), 0,
                sizeof(B_QBot4_Image_Proc_Color_Thre_T));

  {
    QBot4_Image_Proc_Color_Thresh_B.Channel = CHANNEL_0;
    QBot4_Image_Proc_Color_Thresh_B.Channel_g = CHANNEL_0;
  }

  /* parameters */
  QBot4_Image_Proc_Color_Thres_M->defaultParam = ((real_T *)
    &QBot4_Image_Proc_Color_Thresh_P);

  /* states (dwork) */
  QBot4_Image_Proc_Color_Thres_M->dwork = ((void *)
    &QBot4_Image_Proc_Color_Thres_DW);
  (void) memset((void *)&QBot4_Image_Proc_Color_Thres_DW, 0,
                sizeof(DW_QBot4_Image_Proc_Color_Thr_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    QBot4_Image_Proc_Color_Thres_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 26;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  QBot4_Image_Proc_Color_Thres_M->Sizes.numContStates = (0);/* Number of continuous states */
  QBot4_Image_Proc_Color_Thres_M->Sizes.numY = (0);/* Number of model outputs */
  QBot4_Image_Proc_Color_Thres_M->Sizes.numU = (0);/* Number of model inputs */
  QBot4_Image_Proc_Color_Thres_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  QBot4_Image_Proc_Color_Thres_M->Sizes.numSampTimes = (2);/* Number of sample times */
  QBot4_Image_Proc_Color_Thres_M->Sizes.numBlocks = (28);/* Number of blocks */
  QBot4_Image_Proc_Color_Thres_M->Sizes.numBlockIO = (11);/* Number of block outputs */
  QBot4_Image_Proc_Color_Thres_M->Sizes.numBlockPrms = (145);/* Sum of parameter "widths" */
  return QBot4_Image_Proc_Color_Thres_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
