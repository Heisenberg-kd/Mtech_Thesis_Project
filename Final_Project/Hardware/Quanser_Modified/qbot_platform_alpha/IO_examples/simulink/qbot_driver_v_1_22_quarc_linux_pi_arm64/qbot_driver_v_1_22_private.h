/*
 * qbot_driver_v_1_22_private.h
 *
 * Code generation for model "qbot_driver_v_1_22".
 *
 * Model version              : 15.24
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Oct 25 14:18:04 2023
 *
 * Target selection: quarc_linux_pi_arm64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_qbot_driver_v_1_22_private_h_
#define RTW_HEADER_qbot_driver_v_1_22_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "qbot_driver_v_1_22.h"
#include "qbot_driver_v_1_22_types.h"

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern void qbot_drive_MATLABFunction1_Init(DW_MATLABFunction1_qbot_drive_T
  *localDW);
extern void qbot_driver_v_1_MATLABFunction1(real_T rtu_t, real_T rtu_d, real_T
  rtu_p, B_MATLABFunction1_qbot_driver_T *localB,
  DW_MATLABFunction1_qbot_drive_T *localDW);
extern void qbot_dri_MATLABFunction1_h_Init(DW_MATLABFunction1_qbot_dri_n_T
  *localDW);
extern void qbot_driver_v_MATLABFunction1_b(real_T rtu_mode, real_T rtu_command,
  B_MATLABFunction1_qbot_driv_l_T *localB, DW_MATLABFunction1_qbot_dri_n_T
  *localDW);

/* private model entry point functions */
extern void qbot_driver_v_1_22_derivatives(void);

#endif                            /* RTW_HEADER_qbot_driver_v_1_22_private_h_ */
