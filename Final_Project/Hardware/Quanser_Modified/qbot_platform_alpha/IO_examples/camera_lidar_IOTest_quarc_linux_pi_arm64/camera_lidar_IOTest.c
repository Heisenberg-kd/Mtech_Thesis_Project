/*
 * camera_lidar_IOTest.c
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
#include "rtwtypes.h"
#include "camera_lidar_IOTest_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "camera_lidar_IOTest_dt.h"

/* Block signals (default storage) */
B_camera_lidar_IOTest_T camera_lidar_IOTest_B;

/* Block states (default storage) */
DW_camera_lidar_IOTest_T camera_lidar_IOTest_DW;

/* Real-time model */
static RT_MODEL_camera_lidar_IOTest_T camera_lidar_IOTest_M_;
RT_MODEL_camera_lidar_IOTest_T *const camera_lidar_IOTest_M =
  &camera_lidar_IOTest_M_;
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(camera_lidar_IOTest_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(camera_lidar_IOTest_M, 2);
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
  (camera_lidar_IOTest_M->Timing.TaskCounters.TID[1])++;
  if ((camera_lidar_IOTest_M->Timing.TaskCounters.TID[1]) > 1) {
                                /* Sample time: [0.066666666666666666s, 0.0s] */
    camera_lidar_IOTest_M->Timing.TaskCounters.TID[1] = 0;
  }

  (camera_lidar_IOTest_M->Timing.TaskCounters.TID[2])++;
  if ((camera_lidar_IOTest_M->Timing.TaskCounters.TID[2]) > 2) {/* Sample time: [0.1s, 0.0s] */
    camera_lidar_IOTest_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model output function for TID0 */
void camera_lidar_IOTest_output0(void)
                                /* Sample time: [0.033333333333333333s, 0.0s] */
{
  {                             /* Sample time: [0.033333333333333333s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (video3d_initialize_block): '<Root>/Video3D Initialize' */

  /* S-Function Block: camera_lidar_IOTest/Video3D Initialize (video3d_initialize_block) */
  {
  }

  /* S-Function (video_capture_block): '<Root>/Downward Facing Camera' */
  /* S-Function Block: camera_lidar_IOTest/Downward Facing Camera (video_capture_block) */
  {
    t_error result;
    t_video_capture_attribute local_attr[18] = {
      { camera_lidar_IOTest_P.DownwardFacingCamera_Brightness,
        VIDEO_CAPTURE_PROPERTY_BRIGHTNESS, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvBrightne, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Contrast,
        VIDEO_CAPTURE_PROPERTY_CONTRAST, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvContrast, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Hue,
        VIDEO_CAPTURE_PROPERTY_HUE, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvHue, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Saturation,
        VIDEO_CAPTURE_PROPERTY_SATURATION, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvSaturati, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Sharpness,
        VIDEO_CAPTURE_PROPERTY_SHARPNESS, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvSharpnes, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Gamma,
        VIDEO_CAPTURE_PROPERTY_GAMMA, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvGamma, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_ColorEnabl,
        VIDEO_CAPTURE_PROPERTY_COLOREFFECT, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvColorEna, true }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_WhiteBalan,
        VIDEO_CAPTURE_PROPERTY_WHITEBALANCE, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvWhiteBal, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_BacklightC,
        VIDEO_CAPTURE_PROPERTY_BACKLIGHTCOMPENSATION, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvBackligh, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Gain,
        VIDEO_CAPTURE_PROPERTY_GAIN, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvGain, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Pan,
        VIDEO_CAPTURE_PROPERTY_PAN, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvPan, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Tilt,
        VIDEO_CAPTURE_PROPERTY_TILT, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvTilt, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Roll,
        VIDEO_CAPTURE_PROPERTY_ROLL, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvRoll, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Zoom,
        VIDEO_CAPTURE_PROPERTY_ZOOM, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvZoom, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Exposure,
        VIDEO_CAPTURE_PROPERTY_EXPOSURE, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvExposure, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Iris,
        VIDEO_CAPTURE_PROPERTY_IRIS, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvIris, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Focus,
        VIDEO_CAPTURE_PROPERTY_FOCUS, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvFocus, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Mirror,
        VIDEO_CAPTURE_PROPERTY_MIRROR, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvMirror, true }
    };

    video_capture_set_property
      (camera_lidar_IOTest_DW.DownwardFacingCamera_VideoCaptu, local_attr,
       ARRAY_LENGTH(local_attr));
    result = video_capture_read
      (camera_lidar_IOTest_DW.DownwardFacingCamera_VideoCaptu,
       &camera_lidar_IOTest_B.DownwardFacingCamera_o1[0]);
    camera_lidar_IOTest_B.DownwardFacingCamera_o2 = (result > 0);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* S-Function (image_compress_block): '<S4>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Down/Image Compress (image_compress_block) */
  {
    t_error result = 0;
    size_t image_size = 0;
    result = qjpeg_compress_start(camera_lidar_IOTest_DW.ImageCompress_Compress,
      true);
    if (result == 0) {
      result = qjpeg_compress_write_image_uint8
        (camera_lidar_IOTest_DW.ImageCompress_Compress,
         &camera_lidar_IOTest_B.DownwardFacingCamera_o1[0]);
      qjpeg_compress_stop(camera_lidar_IOTest_DW.ImageCompress_Compress);

      /* Get the final size of the compressed image */
      if (result >= 0) {
        result = qjpeg_compress_get_fixed_memory_destination_size
          (camera_lidar_IOTest_DW.ImageCompress_Compress, &image_size);
      }
    }

    /* Set the dimensions of the output signal based on the size of the compressed image */
    camera_lidar_IOTest_DW.ImageCompress_DIMS1 = (int) image_size;
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* S-Function (channel_block): '<S4>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Down/Channel (channel_block) */
  {
    if (rtExtModeQuarcIsConnected()) {
      struct channel_info {
        t_channel_header header;
      } info;

      size_t width = 1;
      camera_lidar_IOTest_B.Channel = CHANNEL_2;
      info.header.data_type_id = 3;
      info.header.channel = 2;
      info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
      info.header.num_dimensions = 1;
      width *= camera_lidar_IOTest_DW.ImageCompress_DIMS1;
      info.header.dimension[0] = camera_lidar_IOTest_DW.ImageCompress_DIMS1;
      channel_fifo_add((t_channel_fifo)
                       camera_lidar_IOTest_DW.Channel_PWORK.Fifo, &info.header,
                       &camera_lidar_IOTest_B.ImageCompress[0], width * sizeof
                       (uint8_T));
    }
  }

  /* S-Function (video3d_capture_block): '<Root>/Video3D Capture1' */
  /* S-Function Block: camera_lidar_IOTest/Video3D Capture1 (video3d_capture_block) */
  {
    t_video3d_frame frame;
    t_error result;
    result = video3d_stream_get_frame
      (camera_lidar_IOTest_DW.Video3DCapture1_Stream, &frame);
    if (result >= 0) {
      result = video3d_frame_get_data(frame,
        &camera_lidar_IOTest_B.Video3DCapture1_o1[0]);

      /* Release the frame to free up its resources */
      video3d_frame_release(frame);
    }

    if (result < 0 && result != -QERR_WOULD_BLOCK) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* S-Function (image_compress_block): '<S2>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Compressed Realsense (front)/Image Compress (image_compress_block) */
  {
    t_error result = 0;
    size_t image_size = 0;
    result = qjpeg_compress_start
      (camera_lidar_IOTest_DW.ImageCompress_Compress_n, true);
    if (result == 0) {
      result = qjpeg_compress_write_image_uint8
        (camera_lidar_IOTest_DW.ImageCompress_Compress_n,
         &camera_lidar_IOTest_B.Video3DCapture1_o1[0]);
      qjpeg_compress_stop(camera_lidar_IOTest_DW.ImageCompress_Compress_n);

      /* Get the final size of the compressed image */
      if (result >= 0) {
        result = qjpeg_compress_get_fixed_memory_destination_size
          (camera_lidar_IOTest_DW.ImageCompress_Compress_n, &image_size);
      }
    }

    /* Set the dimensions of the output signal based on the size of the compressed image */
    camera_lidar_IOTest_DW.ImageCompress_DIMS1_o = (int) image_size;
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* S-Function (channel_block): '<S2>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Compressed Realsense (front)/Channel (channel_block) */
  {
    if (rtExtModeQuarcIsConnected()) {
      struct channel_info {
        t_channel_header header;
      } info;

      size_t width = 1;
      camera_lidar_IOTest_B.Channel_a = CHANNEL_0;
      info.header.data_type_id = 3;
      info.header.channel = 0;
      info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
      info.header.num_dimensions = 1;
      width *= camera_lidar_IOTest_DW.ImageCompress_DIMS1_o;
      info.header.dimension[0] = camera_lidar_IOTest_DW.ImageCompress_DIMS1_o;
      channel_fifo_add((t_channel_fifo)
                       camera_lidar_IOTest_DW.Channel_PWORK_f.Fifo, &info.header,
                       &camera_lidar_IOTest_B.ImageCompress_j[0], width * sizeof
                       (uint8_T));
    }
  }
}

/* Model update function for TID0 */
void camera_lidar_IOTest_update0(void)
                                /* Sample time: [0.033333333333333333s, 0.0s] */
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
  if (!(++camera_lidar_IOTest_M->Timing.clockTick0)) {
    ++camera_lidar_IOTest_M->Timing.clockTickH0;
  }

  camera_lidar_IOTest_M->Timing.t[0] = camera_lidar_IOTest_M->Timing.clockTick0 *
    camera_lidar_IOTest_M->Timing.stepSize0 +
    camera_lidar_IOTest_M->Timing.clockTickH0 *
    camera_lidar_IOTest_M->Timing.stepSize0 * 4294967296.0;
}

/* Model output function for TID1 */
void camera_lidar_IOTest_output1(void)
                                /* Sample time: [0.066666666666666666s, 0.0s] */
{
  /* S-Function (video3d_capture_block): '<Root>/Video3D Capture' */
  /* S-Function Block: camera_lidar_IOTest/Video3D Capture (video3d_capture_block) */
  {
    t_video3d_frame frame;
    t_error result;
    result = video3d_stream_get_frame
      (camera_lidar_IOTest_DW.Video3DCapture_Stream, &frame);
    if (result >= 0) {
      result = video3d_frame_get_meters(frame,
        &camera_lidar_IOTest_B.Video3DCapture_o1[0]);

      /* Release the frame to free up its resources */
      video3d_frame_release(frame);
    }

    if (result < 0 && result != -QERR_WOULD_BLOCK) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* S-Function (image_transform_block): '<Root>/Image Transform' */

  /* S-Function Block: camera_lidar_IOTest/Image Transform (image_transform_block) */
  {
    t_error result;
    result = image_grayscale_to_colorized_rgb_single
      (&camera_lidar_IOTest_B.Video3DCapture_o1[0], 640, 480,
       camera_lidar_IOTest_P.ImageTransform_min_pixel,
       camera_lidar_IOTest_P.ImageTransform_max_pixel,
       camera_lidar_IOTest_DW.ImageTransform_AlgHandle,
       &camera_lidar_IOTest_B.ImageTransform[0]);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* S-Function (image_compress_block): '<S3>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Depth/Image Compress (image_compress_block) */
  {
    t_error result = 0;
    size_t image_size = 0;
    result = qjpeg_compress_start
      (camera_lidar_IOTest_DW.ImageCompress_Compress_c, true);
    if (result == 0) {
      result = qjpeg_compress_write_image_uint8
        (camera_lidar_IOTest_DW.ImageCompress_Compress_c,
         &camera_lidar_IOTest_B.ImageTransform[0]);
      qjpeg_compress_stop(camera_lidar_IOTest_DW.ImageCompress_Compress_c);

      /* Get the final size of the compressed image */
      if (result >= 0) {
        result = qjpeg_compress_get_fixed_memory_destination_size
          (camera_lidar_IOTest_DW.ImageCompress_Compress_c, &image_size);
      }
    }

    /* Set the dimensions of the output signal based on the size of the compressed image */
    camera_lidar_IOTest_DW.ImageCompress_DIMS1_f = (int) image_size;
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* S-Function (channel_block): '<S3>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Depth/Channel (channel_block) */
  {
    if (rtExtModeQuarcIsConnected()) {
      struct channel_info {
        t_channel_header header;
      } info;

      size_t width = 1;
      camera_lidar_IOTest_B.Channel_e = CHANNEL_1;
      info.header.data_type_id = 3;
      info.header.channel = 1;
      info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
      info.header.num_dimensions = 1;
      width *= camera_lidar_IOTest_DW.ImageCompress_DIMS1_f;
      info.header.dimension[0] = camera_lidar_IOTest_DW.ImageCompress_DIMS1_f;
      channel_fifo_add((t_channel_fifo)
                       camera_lidar_IOTest_DW.Channel_PWORK_m.Fifo, &info.header,
                       &camera_lidar_IOTest_B.ImageCompress_e[0], width * sizeof
                       (uint8_T));
    }
  }
}

/* Model update function for TID1 */
void camera_lidar_IOTest_update1(void)
                                /* Sample time: [0.066666666666666666s, 0.0s] */
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
  if (!(++camera_lidar_IOTest_M->Timing.clockTick1)) {
    ++camera_lidar_IOTest_M->Timing.clockTickH1;
  }

  camera_lidar_IOTest_M->Timing.t[1] = camera_lidar_IOTest_M->Timing.clockTick1 *
    camera_lidar_IOTest_M->Timing.stepSize1 +
    camera_lidar_IOTest_M->Timing.clockTickH1 *
    camera_lidar_IOTest_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
void camera_lidar_IOTest_output2(void) /* Sample time: [0.1s, 0.0s] */
{
  int32_T i;

  /* S-Function (ranging_sensor_block): '<Root>/Ranging Sensor' */

  /* S-Function Block: camera_lidar_IOTest/Ranging Sensor (ranging_sensor_block) */
  {
    t_error result;
    result = leishen_m10p_read(camera_lidar_IOTest_DW.RangingSensor_Sensor,
      RANGING_MEASUREMENT_MODE_NORMAL,
      camera_lidar_IOTest_P.RangingSensor_MaxInterpolationD,
      camera_lidar_IOTest_P.RangingSensor_MaxInterpolationA,
      &camera_lidar_IOTest_DW.RangingSensor_Measurements[0], 1680);
    camera_lidar_IOTest_B.RangingSensor_o5 = (result >= 0);
    if (result >= 0) {
      {
        int_T i1;
        real_T *y0 = &camera_lidar_IOTest_B.RangingSensor_o1[0];
        real_T *y1 = &camera_lidar_IOTest_B.RangingSensor_o2[0];
        real_T *y2 = &camera_lidar_IOTest_B.RangingSensor_o3[0];
        real_T *y3 = &camera_lidar_IOTest_B.RangingSensor_o4[0];
        t_ranging_measurement *dw_Measurements =
          &camera_lidar_IOTest_DW.RangingSensor_Measurements[0];
        for (i1=0; i1 < 1680; i1++) {
          y0[i1] = dw_Measurements[i1].distance;
          y2[i1] = dw_Measurements[i1].heading;
        }
      }
    } else if (result != -QERR_WOULD_BLOCK) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  for (i = 0; i < 1680; i++) {
    /* Gain: '<Root>/Gain' */
    camera_lidar_IOTest_B.Gain[i] = camera_lidar_IOTest_P.Gain_Gain *
      camera_lidar_IOTest_B.RangingSensor_o3[i];
  }
}

/* Model update function for TID2 */
void camera_lidar_IOTest_update2(void) /* Sample time: [0.1s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++camera_lidar_IOTest_M->Timing.clockTick2)) {
    ++camera_lidar_IOTest_M->Timing.clockTickH2;
  }

  camera_lidar_IOTest_M->Timing.t[2] = camera_lidar_IOTest_M->Timing.clockTick2 *
    camera_lidar_IOTest_M->Timing.stepSize2 +
    camera_lidar_IOTest_M->Timing.clockTickH2 *
    camera_lidar_IOTest_M->Timing.stepSize2 * 4294967296.0;
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void camera_lidar_IOTest_output(int_T tid)
{
  switch (tid) {
   case 0 :
    camera_lidar_IOTest_output0();
    break;

   case 1 :
    camera_lidar_IOTest_output1();
    break;

   case 2 :
    camera_lidar_IOTest_output2();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void camera_lidar_IOTest_update(int_T tid)
{
  switch (tid) {
   case 0 :
    camera_lidar_IOTest_update0();
    break;

   case 1 :
    camera_lidar_IOTest_update1();
    break;

   case 2 :
    camera_lidar_IOTest_update2();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Model initialize function */
void camera_lidar_IOTest_initialize(void)
{
  /* Start for S-Function (video3d_initialize_block): '<Root>/Video3D Initialize' */

  /* S-Function Block: camera_lidar_IOTest/Video3D Initialize (video3d_initialize_block) */
  {
    t_error result;
    result = video3d_open("0", &camera_lidar_IOTest_DW.Video3DInitialize_Video3D);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
      return;
    }
  }

  /* Start for S-Function (video_capture_block): '<Root>/Downward Facing Camera' */
  {
    t_video_capture_attribute local_attr[18] = {
      { camera_lidar_IOTest_P.DownwardFacingCamera_Brightness,
        VIDEO_CAPTURE_PROPERTY_BRIGHTNESS, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvBrightne, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Contrast,
        VIDEO_CAPTURE_PROPERTY_CONTRAST, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvContrast, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Hue,
        VIDEO_CAPTURE_PROPERTY_HUE, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvHue, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Saturation,
        VIDEO_CAPTURE_PROPERTY_SATURATION, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvSaturati, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Sharpness,
        VIDEO_CAPTURE_PROPERTY_SHARPNESS, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvSharpnes, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Gamma,
        VIDEO_CAPTURE_PROPERTY_GAMMA, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvGamma, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_ColorEnabl,
        VIDEO_CAPTURE_PROPERTY_COLOREFFECT, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvColorEna, true }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_WhiteBalan,
        VIDEO_CAPTURE_PROPERTY_WHITEBALANCE, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvWhiteBal, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_BacklightC,
        VIDEO_CAPTURE_PROPERTY_BACKLIGHTCOMPENSATION, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvBackligh, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Gain,
        VIDEO_CAPTURE_PROPERTY_GAIN, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvGain, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Pan,
        VIDEO_CAPTURE_PROPERTY_PAN, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvPan, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Tilt,
        VIDEO_CAPTURE_PROPERTY_TILT, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvTilt, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Roll,
        VIDEO_CAPTURE_PROPERTY_ROLL, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvRoll, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Zoom,
        VIDEO_CAPTURE_PROPERTY_ZOOM, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvZoom, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Exposure,
        VIDEO_CAPTURE_PROPERTY_EXPOSURE, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvExposure, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Iris,
        VIDEO_CAPTURE_PROPERTY_IRIS, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvIris, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Focus,
        VIDEO_CAPTURE_PROPERTY_FOCUS, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvFocus, false }
      , { camera_lidar_IOTest_P.DownwardFacingCamera_Mirror,
        VIDEO_CAPTURE_PROPERTY_MIRROR, (t_boolean)
        camera_lidar_IOTest_P.DownwardFacingCamera_OvMirror, true }
    };

    t_error result;

    /*printf("Opening camera video://localhost:6\n"); fflush(stdout);*/
    result = video_capture_open("video://localhost:6", 30.0, 640U, 400U,
      IMAGE_FORMAT_COL_MAJOR_GRAYSCALE, IMAGE_DATA_TYPE_UINT8,
      &camera_lidar_IOTest_DW.DownwardFacingCamera_VideoCaptu, local_attr,
      ARRAY_LENGTH(local_attr));
    if (result >= 0) {
      result = video_capture_start
        (camera_lidar_IOTest_DW.DownwardFacingCamera_VideoCaptu);
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_compress_block): '<S4>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Down/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&camera_lidar_IOTest_DW.ImageCompress_Compress);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (camera_lidar_IOTest_DW.ImageCompress_Compress, 640, 400,
           COLOR_SPACE_GRAYSCALE, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (camera_lidar_IOTest_DW.ImageCompress_Compress,
           camera_lidar_IOTest_P.ImageCompress_Quality);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (camera_lidar_IOTest_DW.ImageCompress_Compress,
           &camera_lidar_IOTest_B.ImageCompress[0], 256000);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close(camera_lidar_IOTest_DW.ImageCompress_Compress);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S4>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Down/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(2, sizeof(uint8_T), 1, 256000, 1,
      (t_channel_fifo *) &camera_lidar_IOTest_DW.Channel_PWORK.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (video3d_capture_block): '<Root>/Video3D Capture1' */
  {
    t_error result;
    result = video3d_stream_open
      (camera_lidar_IOTest_DW.Video3DInitialize_Video3D, VIDEO3D_STREAM_COLOR,
       camera_lidar_IOTest_P.Video3DCapture1_stream_index, 30.0, 640, 480,
       IMAGE_FORMAT_COL_MAJOR_PLANAR_RGB, IMAGE_DATA_TYPE_UINT8,
       &camera_lidar_IOTest_DW.Video3DCapture1_Stream);
    if (result >= 0) {
      t_video3d_property config_properties[4];
      t_double config_values[4];
      t_uint num_config_properties = 0;
      if (camera_lidar_IOTest_P.Video3DCapture1_Preset != 21) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_VISUAL_PRESET;
        config_values[num_config_properties] = (t_video3d_visual_preset)
          (camera_lidar_IOTest_P.Video3DCapture1_Preset - 1);
        num_config_properties++;
      }

      if (camera_lidar_IOTest_P.Video3DCapture1_Emitter != 3) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_ENABLE_EMITTER;
        config_values[num_config_properties] =
          (camera_lidar_IOTest_P.Video3DCapture1_Emitter == 1) ? 1.0 : 0.0;
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
          (camera_lidar_IOTest_DW.Video3DCapture1_Stream, config_properties,
           num_config_properties, config_values);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_compress_block): '<S2>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Compressed Realsense (front)/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&camera_lidar_IOTest_DW.ImageCompress_Compress_n);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (camera_lidar_IOTest_DW.ImageCompress_Compress_n, 640, 480,
           COLOR_SPACE_RGB, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (camera_lidar_IOTest_DW.ImageCompress_Compress_n,
           camera_lidar_IOTest_P.ImageCompress_Quality_k);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (camera_lidar_IOTest_DW.ImageCompress_Compress_n,
           &camera_lidar_IOTest_B.ImageCompress_j[0], 921600);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close(camera_lidar_IOTest_DW.ImageCompress_Compress_n);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S2>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Compressed Realsense (front)/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(0, sizeof(uint8_T), 1, 921600, 1,
      (t_channel_fifo *) &camera_lidar_IOTest_DW.Channel_PWORK_f.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (video3d_capture_block): '<Root>/Video3D Capture' */
  {
    t_error result;
    result = video3d_stream_open
      (camera_lidar_IOTest_DW.Video3DInitialize_Video3D, VIDEO3D_STREAM_DEPTH,
       camera_lidar_IOTest_P.Video3DCapture_stream_index, 15.0, 640, 480,
       IMAGE_FORMAT_COL_MAJOR_GRAYSCALE, IMAGE_DATA_TYPE_SINGLE,
       &camera_lidar_IOTest_DW.Video3DCapture_Stream);
    if (result >= 0) {
      t_video3d_property config_properties[4];
      t_double config_values[4];
      t_uint num_config_properties = 0;
      if (camera_lidar_IOTest_P.Video3DCapture_Preset != 21) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_VISUAL_PRESET;
        config_values[num_config_properties] = (t_video3d_visual_preset)
          (camera_lidar_IOTest_P.Video3DCapture_Preset - 1);
        num_config_properties++;
      }

      if (camera_lidar_IOTest_P.Video3DCapture_Emitter != 3) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_ENABLE_EMITTER;
        config_values[num_config_properties] =
          (camera_lidar_IOTest_P.Video3DCapture_Emitter == 1) ? 1.0 : 0.0;
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
          (camera_lidar_IOTest_DW.Video3DCapture_Stream, config_properties,
           num_config_properties, config_values);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_transform_block): '<Root>/Image Transform' */

  /* S-Function Block: camera_lidar_IOTest/Image Transform (image_transform_block) */
  {
    t_error result;
    result = image_colorization_open((t_colorization_theme)
      (camera_lidar_IOTest_P.ImageTransform_ColorTheme - 1),
      &camera_lidar_IOTest_DW.ImageTransform_AlgHandle);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_compress_block): '<S3>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Depth/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&camera_lidar_IOTest_DW.ImageCompress_Compress_c);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (camera_lidar_IOTest_DW.ImageCompress_Compress_c, 640, 480,
           COLOR_SPACE_RGB, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (camera_lidar_IOTest_DW.ImageCompress_Compress_c,
           camera_lidar_IOTest_P.ImageCompress_Quality_p);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (camera_lidar_IOTest_DW.ImageCompress_Compress_c,
           &camera_lidar_IOTest_B.ImageCompress_e[0], 921600);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close(camera_lidar_IOTest_DW.ImageCompress_Compress_c);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S3>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Depth/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(1, sizeof(uint8_T), 1, 921600, 1,
      (t_channel_fifo *) &camera_lidar_IOTest_DW.Channel_PWORK_m.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* Start for S-Function (ranging_sensor_block): '<Root>/Ranging Sensor' */

  /* S-Function Block: camera_lidar_IOTest/Ranging Sensor (ranging_sensor_block) */
  {
    t_error result;
    result = leishen_m10p_open(
      "serial://localhost:0?baud='512000',word='8',parity='none',stop='1',flow='none',device='/dev/lidar'",
      1680, &camera_lidar_IOTest_DW.RangingSensor_Sensor);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
    }
  }

  /* InitializeConditions for S-Function (video3d_initialize_block): '<Root>/Video3D Initialize' */

  /* S-Function Block: camera_lidar_IOTest/Video3D Initialize (video3d_initialize_block) */
  {
    if (rtmIsFirstInitCond(camera_lidar_IOTest_M)) {
      t_error result = video3d_start_streaming
        (camera_lidar_IOTest_DW.Video3DInitialize_Video3D);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(camera_lidar_IOTest_M, _rt_error_message);
        return;
      }
    }
  }

  /* InitializeConditions for S-Function (video3d_capture_block): '<Root>/Video3D Capture1' */

  /* S-Function Block: camera_lidar_IOTest/Video3D Capture1 (video3d_capture_block) */
  {
    if (rtmIsFirstInitCond(camera_lidar_IOTest_M)) {
    }
  }

  /* InitializeConditions for S-Function (video3d_capture_block): '<Root>/Video3D Capture' */

  /* S-Function Block: camera_lidar_IOTest/Video3D Capture (video3d_capture_block) */
  {
    if (rtmIsFirstInitCond(camera_lidar_IOTest_M)) {
    }
  }

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(camera_lidar_IOTest_M)) {
    rtmSetFirstInitCond(camera_lidar_IOTest_M, 0);
  }
}

/* Model terminate function */
void camera_lidar_IOTest_terminate(void)
{
  /* Terminate for S-Function (video3d_initialize_block): '<Root>/Video3D Initialize' */

  /* S-Function Block: camera_lidar_IOTest/Video3D Initialize (video3d_initialize_block) */
  {
    video3d_stop_streaming(camera_lidar_IOTest_DW.Video3DInitialize_Video3D);
    video3d_close(camera_lidar_IOTest_DW.Video3DInitialize_Video3D);
  }

  /* Terminate for S-Function (video_capture_block): '<Root>/Downward Facing Camera' */
  video_capture_stop(camera_lidar_IOTest_DW.DownwardFacingCamera_VideoCaptu);
  video_capture_close(camera_lidar_IOTest_DW.DownwardFacingCamera_VideoCaptu);

  /* Terminate for S-Function (image_compress_block): '<S4>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Down/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close(camera_lidar_IOTest_DW.ImageCompress_Compress);
    camera_lidar_IOTest_DW.ImageCompress_Compress = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S4>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Down/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         camera_lidar_IOTest_DW.Channel_PWORK.Fifo);
    camera_lidar_IOTest_DW.Channel_PWORK.Fifo = NULL;
  }

  /* Terminate for S-Function (image_compress_block): '<S2>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Compressed Realsense (front)/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close(camera_lidar_IOTest_DW.ImageCompress_Compress_n);
    camera_lidar_IOTest_DW.ImageCompress_Compress_n = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S2>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Compressed Realsense (front)/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         camera_lidar_IOTest_DW.Channel_PWORK_f.Fifo);
    camera_lidar_IOTest_DW.Channel_PWORK_f.Fifo = NULL;
  }

  /* Terminate for S-Function (image_transform_block): '<Root>/Image Transform' */

  /* S-Function Block: camera_lidar_IOTest/Image Transform (image_transform_block) */
  {
    image_colorization_close(camera_lidar_IOTest_DW.ImageTransform_AlgHandle);
  }

  /* Terminate for S-Function (image_compress_block): '<S3>/Image Compress' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Depth/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close(camera_lidar_IOTest_DW.ImageCompress_Compress_c);
    camera_lidar_IOTest_DW.ImageCompress_Compress_c = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S3>/Channel' */

  /* S-Function Block: camera_lidar_IOTest/Video Display Depth/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         camera_lidar_IOTest_DW.Channel_PWORK_m.Fifo);
    camera_lidar_IOTest_DW.Channel_PWORK_m.Fifo = NULL;
  }

  /* Terminate for S-Function (ranging_sensor_block): '<Root>/Ranging Sensor' */

  /* S-Function Block: camera_lidar_IOTest/Ranging Sensor (ranging_sensor_block) */
  {
    leishen_m10p_close(camera_lidar_IOTest_DW.RangingSensor_Sensor);
    camera_lidar_IOTest_DW.RangingSensor_Sensor = NULL;
    camera_lidar_IOTest_DW.RangingSensor_Sensor = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  camera_lidar_IOTest_output(tid);
}

void MdlUpdate(int_T tid)
{
  camera_lidar_IOTest_update(tid);
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
  camera_lidar_IOTest_initialize();
}

void MdlTerminate(void)
{
  camera_lidar_IOTest_terminate();
}

/* Registration function */
RT_MODEL_camera_lidar_IOTest_T *camera_lidar_IOTest(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)camera_lidar_IOTest_M, 0,
                sizeof(RT_MODEL_camera_lidar_IOTest_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = camera_lidar_IOTest_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "camera_lidar_IOTest_M points to
       static memory which is guaranteed to be non-NULL" */
    camera_lidar_IOTest_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    camera_lidar_IOTest_M->Timing.sampleTimes =
      (&camera_lidar_IOTest_M->Timing.sampleTimesArray[0]);
    camera_lidar_IOTest_M->Timing.offsetTimes =
      (&camera_lidar_IOTest_M->Timing.offsetTimesArray[0]);

    /* task periods */
    camera_lidar_IOTest_M->Timing.sampleTimes[0] = (0.033333333333333333);
    camera_lidar_IOTest_M->Timing.sampleTimes[1] = (0.066666666666666666);
    camera_lidar_IOTest_M->Timing.sampleTimes[2] = (0.1);

    /* task offsets */
    camera_lidar_IOTest_M->Timing.offsetTimes[0] = (0.0);
    camera_lidar_IOTest_M->Timing.offsetTimes[1] = (0.0);
    camera_lidar_IOTest_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(camera_lidar_IOTest_M, &camera_lidar_IOTest_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = camera_lidar_IOTest_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      camera_lidar_IOTest_M->Timing.perTaskSampleHitsArray;
    camera_lidar_IOTest_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    camera_lidar_IOTest_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(camera_lidar_IOTest_M, -1);
  camera_lidar_IOTest_M->Timing.stepSize0 = 0.033333333333333333;
  camera_lidar_IOTest_M->Timing.stepSize1 = 0.066666666666666666;
  camera_lidar_IOTest_M->Timing.stepSize2 = 0.1;
  rtmSetFirstInitCond(camera_lidar_IOTest_M, 1);

  /* External mode info */
  camera_lidar_IOTest_M->Sizes.checksums[0] = (880134452U);
  camera_lidar_IOTest_M->Sizes.checksums[1] = (2522460081U);
  camera_lidar_IOTest_M->Sizes.checksums[2] = (425627542U);
  camera_lidar_IOTest_M->Sizes.checksums[3] = (1234485447U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    camera_lidar_IOTest_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(camera_lidar_IOTest_M->extModeInfo,
      &camera_lidar_IOTest_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(camera_lidar_IOTest_M->extModeInfo,
                        camera_lidar_IOTest_M->Sizes.checksums);
    rteiSetTPtr(camera_lidar_IOTest_M->extModeInfo, rtmGetTPtr
                (camera_lidar_IOTest_M));
  }

  camera_lidar_IOTest_M->solverInfoPtr = (&camera_lidar_IOTest_M->solverInfo);
  camera_lidar_IOTest_M->Timing.stepSize = (0.033333333333333333);
  rtsiSetFixedStepSize(&camera_lidar_IOTest_M->solverInfo, 0.033333333333333333);
  rtsiSetSolverMode(&camera_lidar_IOTest_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  camera_lidar_IOTest_M->blockIO = ((void *) &camera_lidar_IOTest_B);
  (void) memset(((void *) &camera_lidar_IOTest_B), 0,
                sizeof(B_camera_lidar_IOTest_T));

  {
    camera_lidar_IOTest_B.Channel = CHANNEL_0;
    camera_lidar_IOTest_B.Channel_a = CHANNEL_0;
    camera_lidar_IOTest_B.Channel_e = CHANNEL_0;
  }

  /* parameters */
  camera_lidar_IOTest_M->defaultParam = ((real_T *)&camera_lidar_IOTest_P);

  /* states (dwork) */
  camera_lidar_IOTest_M->dwork = ((void *) &camera_lidar_IOTest_DW);
  (void) memset((void *)&camera_lidar_IOTest_DW, 0,
                sizeof(DW_camera_lidar_IOTest_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    camera_lidar_IOTest_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 33;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  camera_lidar_IOTest_M->Sizes.numContStates = (0);/* Number of continuous states */
  camera_lidar_IOTest_M->Sizes.numY = (0);/* Number of model outputs */
  camera_lidar_IOTest_M->Sizes.numU = (0);/* Number of model inputs */
  camera_lidar_IOTest_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  camera_lidar_IOTest_M->Sizes.numSampTimes = (3);/* Number of sample times */
  camera_lidar_IOTest_M->Sizes.numBlocks = (20);/* Number of blocks */
  camera_lidar_IOTest_M->Sizes.numBlockIO = (21);/* Number of block outputs */
  camera_lidar_IOTest_M->Sizes.numBlockPrms = (164);/* Sum of parameter "widths" */
  return camera_lidar_IOTest_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
