/*
 * camera_lidar_IOTest.h
 *
 * Code generation for model "camera_lidar_IOTest".
 *
 * Model version              : 7.1
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Oct 25 15:08:54 2023
 *
 * Target selection: quarc_linux_pi_arm64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_camera_lidar_IOTest_h_
#define RTW_HEADER_camera_lidar_IOTest_h_
#ifndef camera_lidar_IOTest_COMMON_INCLUDES_
#define camera_lidar_IOTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "quanser_video3d.h"
#include "quanser_messages.h"
#include "quanser_video.h"
#include "quanser_string.h"
#include "quanser_image_processing.h"
#include "quanser_memory.h"
#include "quanser_channel.h"
#include "extmode_support.h"
#include "quanser_types.h"
#include "quanser_ranging_sensor.h"
#include "quanser_extern.h"
#endif                                /* camera_lidar_IOTest_COMMON_INCLUDES_ */

#include "camera_lidar_IOTest_types.h"
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  0
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmSetFirstInitCond
#define rtmSetFirstInitCond(rtm, val)  ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm)        ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define camera_lidar_IOTest_rtModel    RT_MODEL_camera_lidar_IOTest_T

/* Block signals (default storage) */
typedef struct {
  uint8_T ImageTransform[921600];      /* '<Root>/Image Transform' */
  t_uint64 Video3DCapture1_o2;         /* '<Root>/Video3D Capture1' */
  t_uint64 Video3DCapture_o2;          /* '<Root>/Video3D Capture' */
  real_T Video3DCapture1_o3;           /* '<Root>/Video3D Capture1' */
  real_T Video3DCapture_o3;            /* '<Root>/Video3D Capture' */
  real_T RangingSensor_o1[1680];       /* '<Root>/Ranging Sensor' */
  real_T RangingSensor_o2[1680];       /* '<Root>/Ranging Sensor' */
  real_T RangingSensor_o3[1680];       /* '<Root>/Ranging Sensor' */
  real_T RangingSensor_o4[1680];       /* '<Root>/Ranging Sensor' */
  real_T Gain[1680];                   /* '<Root>/Gain' */
  t_channel Channel;                   /* '<S4>/Channel' */
  t_channel Channel_a;                 /* '<S2>/Channel' */
  t_channel Channel_e;                 /* '<S3>/Channel' */
  real32_T Video3DCapture_o1[307200];  /* '<Root>/Video3D Capture' */
  int32_T Video3DInitialize;           /* '<Root>/Video3D Initialize' */
  uint8_T DownwardFacingCamera_o1[256000];/* '<Root>/Downward Facing Camera' */
  uint8_T Video3DCapture1_o1[921600];  /* '<Root>/Video3D Capture1' */
  uint8_T ImageCompress[256000];       /* '<S4>/Image Compress' */
  uint8_T ImageCompress_j[921600];     /* '<S2>/Image Compress' */
  uint8_T ImageCompress_e[921600];     /* '<S3>/Image Compress' */
  boolean_T DownwardFacingCamera_o2;   /* '<Root>/Downward Facing Camera' */
  boolean_T RangingSensor_o5;          /* '<Root>/Ranging Sensor' */
} B_camera_lidar_IOTest_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  t_ranging_measurement RangingSensor_Measurements[1680];/* '<Root>/Ranging Sensor' */
  real_T LidarData_XBuffer[1680];      /* '<Root>/Lidar Data' */
  real_T LidarData_YBuffer[1680];      /* '<Root>/Lidar Data' */
  t_video_capture DownwardFacingCamera_VideoCaptu;/* '<Root>/Downward Facing Camera' */
  t_colorization ImageTransform_AlgHandle;/* '<Root>/Image Transform' */
  t_ranging_sensor RangingSensor_Sensor;/* '<Root>/Ranging Sensor' */
  t_jpeg_compress ImageCompress_Compress;/* '<S4>/Image Compress' */
  t_jpeg_compress ImageCompress_Compress_n;/* '<S2>/Image Compress' */
  t_jpeg_compress ImageCompress_Compress_c;/* '<S3>/Image Compress' */
  t_video3d Video3DInitialize_Video3D; /* '<Root>/Video3D Initialize' */
  t_video3d Video3DCapture1_Video3D;   /* '<Root>/Video3D Capture1' */
  t_video3d Video3DCapture_Video3D;    /* '<Root>/Video3D Capture' */
  t_video3d_stream Video3DCapture1_Stream;/* '<Root>/Video3D Capture1' */
  t_video3d_stream Video3DCapture_Stream;/* '<Root>/Video3D Capture' */
  struct {
    void *LoggedData;
  } NewDown_PWORK;                     /* '<Root>/New Down' */

  struct {
    void *Fifo;
  } Channel_PWORK;                     /* '<S4>/Channel' */

  struct {
    void *Fifo;
  } Channel_PWORK_f;                   /* '<S2>/Channel' */

  struct {
    void *Fifo;
  } Channel_PWORK_m;                   /* '<S3>/Channel' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  int32_T ImageCompress_DIMS1;         /* '<S4>/Image Compress' */
  int32_T ImageCompress_DIMS1_o;       /* '<S2>/Image Compress' */
  int32_T ImageCompress_DIMS1_f;       /* '<S3>/Image Compress' */
  int_T LidarData_IWORK[2];            /* '<Root>/Lidar Data' */
  uint8_T ImageCompress_ScanLine[5120];/* '<S4>/Image Compress' */
  uint8_T ImageCompress_ScanLine_l[15360];/* '<S2>/Image Compress' */
  uint8_T ImageCompress_ScanLine_e[15360];/* '<S3>/Image Compress' */
  boolean_T LidarData_IsFull;          /* '<Root>/Lidar Data' */
} DW_camera_lidar_IOTest_T;

/* Backward compatible GRT Identifiers */
#define rtB                            camera_lidar_IOTest_B
#define BlockIO                        B_camera_lidar_IOTest_T
#define rtP                            camera_lidar_IOTest_P
#define Parameters                     P_camera_lidar_IOTest_T
#define rtDWork                        camera_lidar_IOTest_DW
#define D_Work                         DW_camera_lidar_IOTest_T

/* Parameters (default storage) */
struct P_camera_lidar_IOTest_T_ {
  real_T LidarData_maximum_rho;        /* Mask Parameter: LidarData_maximum_rho
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_maximum_theta;     /* Mask Parameter: LidarData_maximum_theta
                                       * Referenced by: '<Root>/Lidar Data'
                                       */
  real_T LidarData_minimum_rho;        /* Mask Parameter: LidarData_minimum_rho
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_minimum_theta;     /* Mask Parameter: LidarData_minimum_theta
                                       * Referenced by: '<Root>/Lidar Data'
                                       */
  int32_T LidarData_direction;         /* Mask Parameter: LidarData_direction
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_update_rate;       /* Mask Parameter: LidarData_update_rate
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_zero_location;    /* Mask Parameter: LidarData_zero_location
                                       * Referenced by: '<Root>/Lidar Data'
                                       */
  real32_T ImageTransform_max_pixel; /* Mask Parameter: ImageTransform_max_pixel
                                      * Referenced by: '<Root>/Image Transform'
                                      */
  real32_T ImageTransform_min_pixel; /* Mask Parameter: ImageTransform_min_pixel
                                      * Referenced by: '<Root>/Image Transform'
                                      */
  uint32_T Video3DCapture1_stream_index;
                                 /* Mask Parameter: Video3DCapture1_stream_index
                                  * Referenced by: '<Root>/Video3D Capture1'
                                  */
  uint32_T Video3DCapture_stream_index;
                                  /* Mask Parameter: Video3DCapture_stream_index
                                   * Referenced by: '<Root>/Video3D Capture'
                                   */
  boolean_T Video3DInitialize_active;/* Mask Parameter: Video3DInitialize_active
                                      * Referenced by: '<Root>/Video3D Initialize'
                                      */
  real_T DownwardFacingCamera_Brightness;/* Expression: d_brightness
                                          * Referenced by: '<Root>/Downward Facing Camera'
                                          */
  real_T DownwardFacingCamera_Contrast;/* Expression: d_contrast
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Hue;     /* Expression: d_hue
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Saturation;/* Expression: d_saturation
                                          * Referenced by: '<Root>/Downward Facing Camera'
                                          */
  real_T DownwardFacingCamera_Sharpness;/* Expression: d_sharpness
                                         * Referenced by: '<Root>/Downward Facing Camera'
                                         */
  real_T DownwardFacingCamera_Gamma;   /* Expression: d_gamma
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_ColorEnabl;/* Expression: d_coloreffect
                                          * Referenced by: '<Root>/Downward Facing Camera'
                                          */
  real_T DownwardFacingCamera_WhiteBalan;/* Expression: d_whitebalance
                                          * Referenced by: '<Root>/Downward Facing Camera'
                                          */
  real_T DownwardFacingCamera_BacklightC;/* Expression: d_backlightcompensation
                                          * Referenced by: '<Root>/Downward Facing Camera'
                                          */
  real_T DownwardFacingCamera_Gain;    /* Expression: d_gain
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Pan;     /* Expression: d_pan
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Tilt;    /* Expression: d_tilt
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Roll;    /* Expression: d_roll
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Zoom;    /* Expression: d_zoom
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Exposure;/* Expression: d_exposure
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Iris;    /* Expression: d_iris
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Focus;   /* Expression: d_focus
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T DownwardFacingCamera_Mirror;  /* Expression: d_mirror
                                        * Referenced by: '<Root>/Downward Facing Camera'
                                        */
  real_T Video3DCapture1_Brightness;   /* Expression: d_brightness
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Contrast;     /* Expression: d_contrast
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Hue;          /* Expression: d_hue
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Saturation;   /* Expression: d_saturation
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Sharpness;    /* Expression: d_sharpness
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Gamma;        /* Expression: d_gamma
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_WhiteBalance; /* Expression: d_whitebalance
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_BacklightCompen;/* Expression: d_backlightcompensation
                                          * Referenced by: '<Root>/Video3D Capture1'
                                          */
  real_T Video3DCapture1_Gain;         /* Expression: d_gain
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Exposure;     /* Expression: d_exposure
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Emitter;      /* Expression: emitter
                                        * Referenced by: '<Root>/Video3D Capture1'
                                        */
  real_T Video3DCapture_Brightness;    /* Expression: d_brightness
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_Contrast;      /* Expression: d_contrast
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_Hue;           /* Expression: d_hue
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_Saturation;    /* Expression: d_saturation
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_Sharpness;     /* Expression: d_sharpness
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_Gamma;         /* Expression: d_gamma
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_WhiteBalance;  /* Expression: d_whitebalance
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_BacklightCompens;/* Expression: d_backlightcompensation
                                          * Referenced by: '<Root>/Video3D Capture'
                                          */
  real_T Video3DCapture_Gain;          /* Expression: d_gain
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_Exposure;      /* Expression: d_exposure
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T Video3DCapture_Emitter;       /* Expression: emitter
                                        * Referenced by: '<Root>/Video3D Capture'
                                        */
  real_T ImageTransform_FocalLen;      /* Expression: focal_length
                                        * Referenced by: '<Root>/Image Transform'
                                        */
  real_T ImageTransform_Extrapolated;  /* Expression: extrapolated
                                        * Referenced by: '<Root>/Image Transform'
                                        */
  real_T ImageTransform_Angle;         /* Expression: angle
                                        * Referenced by: '<Root>/Image Transform'
                                        */
  real_T ImageTransform_RCoeff[2];     /* Expression: radial_coeffs
                                        * Referenced by: '<Root>/Image Transform'
                                        */
  real_T RangingSensor_Budget;         /* Expression: timing_budget
                                        * Referenced by: '<Root>/Ranging Sensor'
                                        */
  real_T RangingSensor_Period;         /* Expression: measurement_period
                                        * Referenced by: '<Root>/Ranging Sensor'
                                        */
  real_T RangingSensor_MaxInterpolationD;/* Expression: max_interpolated_distance
                                          * Referenced by: '<Root>/Ranging Sensor'
                                          */
  real_T RangingSensor_MaxInterpolationA;/* Expression: max_interpolated_angle
                                          * Referenced by: '<Root>/Ranging Sensor'
                                          */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T LidarData_L1Width;            /* Expression: line1_width
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L1Color[3];         /* Expression: line1_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L1MSize;            /* Expression: marker1_size
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L1MEdgeColor[3];    /* Expression: marker1_edge_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L1MFaceColor[3];    /* Expression: marker1_face_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L2Width;            /* Expression: line2_width
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L2Color[3];         /* Expression: line2_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L2MSize;            /* Expression: marker2_size
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L2MEdgeColor[3];    /* Expression: marker2_edge_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L2MFaceColor[3];    /* Expression: marker2_face_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L3Width;            /* Expression: line3_width
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L3Color[3];         /* Expression: line3_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L3MSize;            /* Expression: marker3_size
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L3MEdgeColor[3];    /* Expression: marker3_edge_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L3MFaceColor[3];    /* Expression: marker3_face_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L4Width;            /* Expression: line4_width
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L4Color[3];         /* Expression: line4_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L4MSize;            /* Expression: marker4_size
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L4MEdgeColor[3];    /* Expression: marker4_edge_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L4MFaceColor[3];    /* Expression: marker4_face_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L5Width;            /* Expression: line5_width
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L5Color[3];         /* Expression: line5_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L5MSize;            /* Expression: marker5_size
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L5MEdgeColor[3];    /* Expression: marker5_edge_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  real_T LidarData_L5MFaceColor[3];    /* Expression: marker5_face_color
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T ImageTransform_PrPoint[2];
                                   /* Computed Parameter: ImageTransform_PrPoint
                                    * Referenced by: '<Root>/Image Transform'
                                    */
  int32_T ImageTransform_Interpolation;
                             /* Computed Parameter: ImageTransform_Interpolation
                              * Referenced by: '<Root>/Image Transform'
                              */
  int32_T ImageTransform_Origin[2]; /* Computed Parameter: ImageTransform_Origin
                                     * Referenced by: '<Root>/Image Transform'
                                     */
  int32_T ImageTransform_OOrigin[2];
                                   /* Computed Parameter: ImageTransform_OOrigin
                                    * Referenced by: '<Root>/Image Transform'
                                    */
  int32_T LidarData_L1Style;           /* Computed Parameter: LidarData_L1Style
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L1Marker;          /* Computed Parameter: LidarData_L1Marker
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L2Style;           /* Computed Parameter: LidarData_L2Style
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L2Marker;          /* Computed Parameter: LidarData_L2Marker
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L3Style;           /* Computed Parameter: LidarData_L3Style
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L3Marker;          /* Computed Parameter: LidarData_L3Marker
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L4Style;           /* Computed Parameter: LidarData_L4Style
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L4Marker;          /* Computed Parameter: LidarData_L4Marker
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L5Style;           /* Computed Parameter: LidarData_L5Style
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  int32_T LidarData_L5Marker;          /* Computed Parameter: LidarData_L5Marker
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
  uint32_T ImageCompress_Quality;   /* Computed Parameter: ImageCompress_Quality
                                     * Referenced by: '<S4>/Image Compress'
                                     */
  uint32_T Video3DCapture1_Preset; /* Computed Parameter: Video3DCapture1_Preset
                                    * Referenced by: '<Root>/Video3D Capture1'
                                    */
  uint32_T ImageCompress_Quality_k;
                                  /* Computed Parameter: ImageCompress_Quality_k
                                   * Referenced by: '<S2>/Image Compress'
                                   */
  uint32_T Video3DCapture_Preset;   /* Computed Parameter: Video3DCapture_Preset
                                     * Referenced by: '<Root>/Video3D Capture'
                                     */
  uint32_T ImageTransform_ColorTheme;
                                /* Computed Parameter: ImageTransform_ColorTheme
                                 * Referenced by: '<Root>/Image Transform'
                                 */
  uint32_T ImageCompress_Quality_p;
                                  /* Computed Parameter: ImageCompress_Quality_p
                                   * Referenced by: '<S3>/Image Compress'
                                   */
  uint32_T RangingSensor_Range;       /* Computed Parameter: RangingSensor_Range
                                       * Referenced by: '<Root>/Ranging Sensor'
                                       */
  boolean_T DownwardFacingCamera_OvBrightne;
                          /* Computed Parameter: DownwardFacingCamera_OvBrightne
                           * Referenced by: '<Root>/Downward Facing Camera'
                           */
  boolean_T DownwardFacingCamera_OvContrast;
                          /* Computed Parameter: DownwardFacingCamera_OvContrast
                           * Referenced by: '<Root>/Downward Facing Camera'
                           */
  boolean_T DownwardFacingCamera_OvHue;
                               /* Computed Parameter: DownwardFacingCamera_OvHue
                                * Referenced by: '<Root>/Downward Facing Camera'
                                */
  boolean_T DownwardFacingCamera_OvSaturati;
                          /* Computed Parameter: DownwardFacingCamera_OvSaturati
                           * Referenced by: '<Root>/Downward Facing Camera'
                           */
  boolean_T DownwardFacingCamera_OvSharpnes;
                          /* Computed Parameter: DownwardFacingCamera_OvSharpnes
                           * Referenced by: '<Root>/Downward Facing Camera'
                           */
  boolean_T DownwardFacingCamera_OvGamma;
                             /* Computed Parameter: DownwardFacingCamera_OvGamma
                              * Referenced by: '<Root>/Downward Facing Camera'
                              */
  boolean_T DownwardFacingCamera_OvColorEna;
                          /* Computed Parameter: DownwardFacingCamera_OvColorEna
                           * Referenced by: '<Root>/Downward Facing Camera'
                           */
  boolean_T DownwardFacingCamera_OvWhiteBal;
                          /* Computed Parameter: DownwardFacingCamera_OvWhiteBal
                           * Referenced by: '<Root>/Downward Facing Camera'
                           */
  boolean_T DownwardFacingCamera_OvBackligh;
                          /* Computed Parameter: DownwardFacingCamera_OvBackligh
                           * Referenced by: '<Root>/Downward Facing Camera'
                           */
  boolean_T DownwardFacingCamera_OvGain;
                              /* Computed Parameter: DownwardFacingCamera_OvGain
                               * Referenced by: '<Root>/Downward Facing Camera'
                               */
  boolean_T DownwardFacingCamera_OvPan;
                               /* Computed Parameter: DownwardFacingCamera_OvPan
                                * Referenced by: '<Root>/Downward Facing Camera'
                                */
  boolean_T DownwardFacingCamera_OvTilt;
                              /* Computed Parameter: DownwardFacingCamera_OvTilt
                               * Referenced by: '<Root>/Downward Facing Camera'
                               */
  boolean_T DownwardFacingCamera_OvRoll;
                              /* Computed Parameter: DownwardFacingCamera_OvRoll
                               * Referenced by: '<Root>/Downward Facing Camera'
                               */
  boolean_T DownwardFacingCamera_OvZoom;
                              /* Computed Parameter: DownwardFacingCamera_OvZoom
                               * Referenced by: '<Root>/Downward Facing Camera'
                               */
  boolean_T DownwardFacingCamera_OvExposure;
                          /* Computed Parameter: DownwardFacingCamera_OvExposure
                           * Referenced by: '<Root>/Downward Facing Camera'
                           */
  boolean_T DownwardFacingCamera_OvIris;
                              /* Computed Parameter: DownwardFacingCamera_OvIris
                               * Referenced by: '<Root>/Downward Facing Camera'
                               */
  boolean_T DownwardFacingCamera_OvFocus;
                             /* Computed Parameter: DownwardFacingCamera_OvFocus
                              * Referenced by: '<Root>/Downward Facing Camera'
                              */
  boolean_T DownwardFacingCamera_OvMirror;
                            /* Computed Parameter: DownwardFacingCamera_OvMirror
                             * Referenced by: '<Root>/Downward Facing Camera'
                             */
  boolean_T VideoDisplay_UseHardware;
                                 /* Computed Parameter: VideoDisplay_UseHardware
                                  * Referenced by: '<S4>/Video Display'
                                  */
  boolean_T VideoDisplay_UseHardware_f;
                               /* Computed Parameter: VideoDisplay_UseHardware_f
                                * Referenced by: '<S2>/Video Display'
                                */
  boolean_T VideoDisplay_UseHardware_g;
                               /* Computed Parameter: VideoDisplay_UseHardware_g
                                * Referenced by: '<S3>/Video Display'
                                */
  boolean_T RangingSensor_Active;    /* Computed Parameter: RangingSensor_Active
                                      * Referenced by: '<Root>/Ranging Sensor'
                                      */
  uint8_T LidarData_Mode;              /* Computed Parameter: LidarData_Mode
                                        * Referenced by: '<Root>/Lidar Data'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_camera_lidar_IOTest_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    boolean_T firstInitCondFlag;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_camera_lidar_IOTest_T camera_lidar_IOTest_P;

/* Block signals (default storage) */
extern B_camera_lidar_IOTest_T camera_lidar_IOTest_B;

/* Block states (default storage) */
extern DW_camera_lidar_IOTest_T camera_lidar_IOTest_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* Model entry point functions */
extern void camera_lidar_IOTest_initialize(void);
extern void camera_lidar_IOTest_output0(void);
extern void camera_lidar_IOTest_update0(void);
extern void camera_lidar_IOTest_output1(void);
extern void camera_lidar_IOTest_update1(void);
extern void camera_lidar_IOTest_output2(void);
extern void camera_lidar_IOTest_update2(void);
extern void camera_lidar_IOTest_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern camera_lidar_IOTest_rtModel *camera_lidar_IOTest(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_camera_lidar_IOTest_T *const camera_lidar_IOTest_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'camera_lidar_IOTest'
 * '<S1>'   : 'camera_lidar_IOTest/Quanser1'
 * '<S2>'   : 'camera_lidar_IOTest/Video Compressed Realsense (front)'
 * '<S3>'   : 'camera_lidar_IOTest/Video Display Depth'
 * '<S4>'   : 'camera_lidar_IOTest/Video Display Down'
 */
#endif                                 /* RTW_HEADER_camera_lidar_IOTest_h_ */
