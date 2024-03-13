/*
 * qbot_driver_v_1_22.h
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

#ifndef RTW_HEADER_qbot_driver_v_1_22_h_
#define RTW_HEADER_qbot_driver_v_1_22_h_
#ifndef qbot_driver_v_1_22_COMMON_INCLUDES_
#define qbot_driver_v_1_22_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "quanser_console.h"
#include "quanser_string.h"
#include "quanser_utf.h"
#include "quanser_types.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_memory.h"
#include "stream_server_block.h"
#include "quanser_start_time.h"
#include "quanser_extern.h"
#include "quanser_time.h"
#endif                                 /* qbot_driver_v_1_22_COMMON_INCLUDES_ */

#include "qbot_driver_v_1_22_types.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "rtGetNaN.h"
#include "rt_defines.h"
#include <string.h>
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
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
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
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
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
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
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
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
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
#define qbot_driver_v_1_22_rtModel     RT_MODEL_qbot_driver_v_1_22_T

/* Block signals for system '<S27>/MATLAB Function1' */
typedef struct {
  real_T y;                            /* '<S27>/MATLAB Function1' */
} B_MATLABFunction1_qbot_driver_T;

/* Block states (default storage) for system '<S27>/MATLAB Function1' */
typedef struct {
  int32_T sfEvent;                     /* '<S27>/MATLAB Function1' */
  uint8_T is_active_c1_qbot_driver_v_1_22;/* '<S27>/MATLAB Function1' */
  boolean_T doneDoubleBufferReInit;    /* '<S27>/MATLAB Function1' */
} DW_MATLABFunction1_qbot_drive_T;

/* Block signals for system '<S47>/MATLAB Function1' */
typedef struct {
  real_T upperRate;                    /* '<S47>/MATLAB Function1' */
  real_T lowerRate;                    /* '<S47>/MATLAB Function1' */
  real_T upperSat;                     /* '<S47>/MATLAB Function1' */
  real_T lowerSat;                     /* '<S47>/MATLAB Function1' */
} B_MATLABFunction1_qbot_driv_l_T;

/* Block states (default storage) for system '<S47>/MATLAB Function1' */
typedef struct {
  int32_T sfEvent;                     /* '<S47>/MATLAB Function1' */
  uint8_T is_active_c2_qbot_driver_v_1_22;/* '<S47>/MATLAB Function1' */
  boolean_T doneDoubleBufferReInit;    /* '<S47>/MATLAB Function1' */
} DW_MATLABFunction1_qbot_dri_n_T;

/* Block signals (default storage) */
typedef struct {
  real_T HILRead_o1[4];                /* '<S2>/HIL Read' */
  real_T HILRead_o3[10];               /* '<S2>/HIL Read' */
  real_T HILRead_o4[9];                /* '<S2>/HIL Read' */
  real_T TmpSignalConversionAtStreamServ[17];
  real_T StreamServer_o4[10];          /* '<S1>/Stream Server' */
  real_T DataTypeConversion;           /* '<S17>/Data Type Conversion' */
  real_T Switch[2];                    /* '<S46>/Switch' */
  real_T DifferenceInputs2;            /* '<S53>/Difference Inputs2' */
  real_T DifferenceInputs2_n;          /* '<S54>/Difference Inputs2' */
  real_T Kp_out[2];                    /* '<S47>/Saturation' */
  real_T DataTypeConversion_n;         /* '<S47>/Data Type Conversion' */
  real_T Switch2[2];                   /* '<S5>/Switch2' */
  real_T Memory;                       /* '<S2>/Memory' */
  real_T Divide[2];                    /* '<S2>/Divide' */
  real_T DataTypeConversion1;          /* '<S3>/Data Type Conversion1' */
  real_T DataTypeConversion2;          /* '<S3>/Data Type Conversion2' */
  real_T DataTypeConversion_l;         /* '<S3>/Data Type Conversion' */
  real_T DataTypeConversion_j;         /* '<S31>/Data Type Conversion' */
  real_T DataTypeConversion_m;         /* '<S32>/Data Type Conversion' */
  real_T DataTypeConversion_i;         /* '<S33>/Data Type Conversion' */
  real_T DataTypeConversion3;          /* '<S3>/Data Type Conversion3' */
  real_T Product[2];                   /* '<S47>/Product' */
  real_T achievedsampletime;           /* '<S4>/Sample Time' */
  real_T targetsampletime;             /* '<S4>/Constant' */
  real_T computationtime;              /* '<S4>/Computation Time' */
  real_T measurementrad[2];            /* '<S48>/measurement (rad)' */
  real_T Trigger;                      /* '<S34>/Trigger' */
  real_T Trigger_g;                    /* '<S30>/Trigger' */
  real_T Trigger_f;                    /* '<S29>/Trigger' */
  real_T Trigger_l;                    /* '<S28>/Trigger' */
  real_T bat_voltage;/* '<S18>/Figure out which battery is valid and active1' */
  real_T bat_voltage_percentage;
                     /* '<S18>/Figure out which battery is valid and active1' */
  real_T low_battery;/* '<S18>/Figure out which battery is valid and active1' */
  real_T stop;       /* '<S18>/Figure out which battery is valid and active1' */
  real_T In1;                          /* '<S13>/In1' */
  int32_T StreamServer_o2;             /* '<S1>/Stream Server' */
  int32_T Print1_o2;                   /* '<S34>/Print1' */
  int32_T Print1_o2_o;                 /* '<S30>/Print1' */
  int32_T Print1_o2_n;                 /* '<S29>/Print1' */
  int32_T Print1_o2_c;                 /* '<S28>/Print1' */
  uint8_T StreamServer_o1;             /* '<S1>/Stream Server' */
  boolean_T HILWatchdog;               /* '<S1>/HIL Watchdog' */
  boolean_T StreamServer_o5;           /* '<S1>/Stream Server' */
  boolean_T LogicalOperator;           /* '<S17>/Logical Operator' */
  boolean_T AND;                       /* '<S1>/AND' */
  boolean_T AND1;                      /* '<S1>/AND1' */
  boolean_T AND2;                      /* '<S1>/AND2' */
  boolean_T OR2;                       /* '<S47>/OR2' */
  boolean_T LogicalOperator_n;         /* '<S32>/Logical Operator' */
  boolean_T NOT;                       /* '<S3>/NOT' */
  boolean_T LogicalOperator_d;         /* '<S31>/Logical Operator' */
  boolean_T LogicalOperator_k;         /* '<S33>/Logical Operator' */
  B_MATLABFunction1_qbot_driv_l_T sf_MATLABFunction2_f;/* '<S47>/MATLAB Function2' */
  B_MATLABFunction1_qbot_driv_l_T sf_MATLABFunction1_b;/* '<S47>/MATLAB Function1' */
  B_MATLABFunction1_qbot_driver_T sf_MATLABFunction3;/* '<S27>/MATLAB Function3' */
  B_MATLABFunction1_qbot_driver_T sf_MATLABFunction2;/* '<S27>/MATLAB Function2' */
  B_MATLABFunction1_qbot_driver_T sf_MATLABFunction1;/* '<S27>/MATLAB Function1' */
} B_qbot_driver_v_1_22_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  t_timeout Time_Timeout;              /* '<S27>/Time' */
  t_timeout SampleTime_PreviousTime;   /* '<S4>/Sample Time' */
  t_timeout ComputationTime_BeginTime; /* '<S4>/Computation Time' */
  t_timeout ComputationTime_ComputationTime;/* '<S4>/Computation Time' */
  real_T DelayInput1_DSTATE[17];       /* '<S12>/Delay Input1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S17>/Discrete-Time Integrator' */
  real_T DelayInput2_DSTATE;           /* '<S53>/Delay Input2' */
  real_T DelayInput2_DSTATE_b;         /* '<S54>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE_n;/* '<S32>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_h;/* '<S31>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S33>/Discrete-Time Integrator' */
  real_T HILInitialize_FilterFrequency[2];/* '<Root>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[2];/* '<Root>/HIL Initialize' */
  real_T HILInitialize_POValues[2];    /* '<Root>/HIL Initialize' */
  real_T Memory_PreviousInput[2];      /* '<S1>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S1>/Memory1' */
  real_T Memory1_PreviousInput_c;      /* '<S47>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<S47>/Memory2' */
  real_T Memory_PreviousInput_d;       /* '<S2>/Memory' */
  real_T flag;                         /* '<S15>/MATLAB Function' */
  real_T mindset;                      /* '<S15>/MATLAB Function' */
  t_pstream StreamServer_Stream;       /* '<S1>/Stream Server' */
  t_card HILInitialize_Card;           /* '<Root>/HIL Initialize' */
  void *HILRead_PWORK;                 /* '<S2>/HIL Read' */
  void *HILWatchdog_PWORK;             /* '<S1>/HIL Watchdog' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<S1>/Scope' */

  void *HILWrite_PWORK;                /* '<S2>/HIL Write' */
  struct {
    void *LoggedData;
  } MissedSamples_PWORK;               /* '<S2>/Missed Samples' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S2>/Scope1' */

  struct {
    void *LoggedData;
  } Scope_PWORK_g;                     /* '<S18>/Scope' */

  struct {
    void *LoggedData[4];
  } Scope_PWORK_i;                     /* '<S3>/Scope' */

  struct {
    void *LoggedData;
  } Scope_PWORK_l;                     /* '<Root>/Scope' */

  int32_T HILInitialize_DOStates[3];   /* '<Root>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[2];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[2];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[2];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_POAlignValues[2];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_POPolarityVals[2];/* '<Root>/HIL Initialize' */
  int32_T HILRead_EncoderBuffer[2];    /* '<S2>/HIL Read' */
  int32_T clockTickCounter;            /* '<S3>/Pulse Generator' */
  int32_T clockTickCounter_p;          /* '<S3>/Pulse Generator1' */
  int32_T sfEvent;   /* '<S18>/Figure out which battery is valid and active1' */
  int32_T sfEvent_o;  /* '<S18>/Figure out which battery is valid and active' */
  int32_T sfEvent_m;                   /* '<S15>/MATLAB Function' */
  int32_T sfEvent_mu;                  /* '<S1>/MATLAB Function' */
  uint32_T HILInitialize_POSortedChans[2];/* '<Root>/HIL Initialize' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S17>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_m;/* '<S32>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_a;/* '<S31>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_f;/* '<S33>/Discrete-Time Integrator' */
  int8_T findholdcommand_SubsysRanBC;  /* '<S5>/find hold command' */
  int8_T WatchdogexpiryError_SubsysRanBC;/* '<S3>/Watchdog expiry Error' */
  int8_T StallOvercurrentError_SubsysRan;/* '<S3>/Stall//Overcurrent Error' */
  int8_T LowBatteryWarning_SubsysRanBC;/* '<S3>/Low Battery Warning' */
  int8_T LowBatteryError_SubsysRanBC;  /* '<S3>/Low Battery Error' */
  int8_T LockModeonConnection_SubsysRanB;/* '<S1>/Lock Mode on Connection' */
  uint8_T is_active_c5_qbot_driver_v_1_22;
                     /* '<S18>/Figure out which battery is valid and active1' */
  uint8_T is_active_c9_qbot_driver_v_1_22;
                      /* '<S18>/Figure out which battery is valid and active' */
  uint8_T is_active_c14_qbot_driver_v_1_2;/* '<S15>/MATLAB Function' */
  uint8_T is_active_c7_qbot_driver_v_1_22;/* '<S1>/MATLAB Function' */
  boolean_T HILInitialize_DOBits[3];   /* '<Root>/HIL Initialize' */
  boolean_T HILWatchdog_IsStarted;     /* '<S1>/HIL Watchdog' */
  boolean_T Time_Owner;                /* '<S27>/Time' */
  boolean_T Memory1_PreviousInput_e;   /* '<S3>/Memory1' */
  boolean_T doneDoubleBufferReInit;
                     /* '<S18>/Figure out which battery is valid and active1' */
  boolean_T doneDoubleBufferReInit_n;
                      /* '<S18>/Figure out which battery is valid and active' */
  boolean_T doneDoubleBufferReInit_ne; /* '<S15>/MATLAB Function' */
  boolean_T flag_not_empty;            /* '<S15>/MATLAB Function' */
  boolean_T mindset_not_empty;         /* '<S15>/MATLAB Function' */
  boolean_T doneDoubleBufferReInit_o;  /* '<S1>/MATLAB Function' */
  t_boolean HILRead_DigitalBuffer[10]; /* '<S2>/HIL Read' */
  DW_MATLABFunction1_qbot_dri_n_T sf_MATLABFunction2_f;/* '<S47>/MATLAB Function2' */
  DW_MATLABFunction1_qbot_dri_n_T sf_MATLABFunction1_b;/* '<S47>/MATLAB Function1' */
  DW_MATLABFunction1_qbot_drive_T sf_MATLABFunction3;/* '<S27>/MATLAB Function3' */
  DW_MATLABFunction1_qbot_drive_T sf_MATLABFunction2;/* '<S27>/MATLAB Function2' */
  DW_MATLABFunction1_qbot_drive_T sf_MATLABFunction1;/* '<S27>/MATLAB Function1' */
} DW_qbot_driver_v_1_22_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE[2];         /* '<S47>/Integrator' */
} X_qbot_driver_v_1_22_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE[2];         /* '<S47>/Integrator' */
} XDot_qbot_driver_v_1_22_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[2];      /* '<S47>/Integrator' */
} XDis_qbot_driver_v_1_22_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S47>/Integrator' */
  ZCSigState findholdcommand_Trig_ZCE; /* '<S5>/find hold command' */
  ZCSigState WatchdogexpiryError_Trig_ZCE;/* '<S3>/Watchdog expiry Error' */
  ZCSigState StallOvercurrentError_Trig_ZCE;/* '<S3>/Stall//Overcurrent Error' */
  ZCSigState LowBatteryWarning_Trig_ZCE;/* '<S3>/Low Battery Warning' */
  ZCSigState LowBatteryError_Trig_ZCE; /* '<S3>/Low Battery Error' */
  ZCSigState LockModeonConnection_Trig_ZCE;/* '<S1>/Lock Mode on Connection' */
} PrevZCX_qbot_driver_v_1_22_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            qbot_driver_v_1_22_B
#define BlockIO                        B_qbot_driver_v_1_22_T
#define rtX                            qbot_driver_v_1_22_X
#define ContinuousStates               X_qbot_driver_v_1_22_T
#define rtXdot                         qbot_driver_v_1_22_XDot
#define StateDerivatives               XDot_qbot_driver_v_1_22_T
#define tXdis                          qbot_driver_v_1_22_XDis
#define StateDisabled                  XDis_qbot_driver_v_1_22_T
#define rtP                            qbot_driver_v_1_22_P
#define Parameters                     P_qbot_driver_v_1_22_T
#define rtDWork                        qbot_driver_v_1_22_DW
#define D_Work                         DW_qbot_driver_v_1_22_T
#define rtPrevZCSigState               qbot_driver_v_1_22_PrevZCX
#define PrevZCSigStates                PrevZCX_qbot_driver_v_1_22_T

/* Parameters (default storage) */
struct P_qbot_driver_v_1_22_T_ {
  real_T ColorConstant2_color[3];      /* Mask Parameter: ColorConstant2_color
                                        * Referenced by: '<S24>/Constant'
                                        */
  real_T ColorConstant1_color[3];      /* Mask Parameter: ColorConstant1_color
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T ColorConstant_color[3];       /* Mask Parameter: ColorConstant_color
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T ColorConstant3_color[3];      /* Mask Parameter: ColorConstant3_color
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T ColorConstant4_color[3];      /* Mask Parameter: ColorConstant4_color
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S10>/Constant'
                                      */
  real_T CompareToConstant3_const;   /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S11>/Constant'
                                      */
  real_T CompareToConstant2_const_e;
                                   /* Mask Parameter: CompareToConstant2_const_e
                                    * Referenced by: '<S49>/Constant'
                                    */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S62>/Constant'
                                       */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S63>/Constant'
                                     */
  real_T CompareToConstant2_const_b;
                                   /* Mask Parameter: CompareToConstant2_const_b
                                    * Referenced by: '<S50>/Constant'
                                    */
  real_T CompareToConstant_const_j; /* Mask Parameter: CompareToConstant_const_j
                                     * Referenced by: '<S19>/Constant'
                                     */
  real_T StreamServer_default_value[10];
                                   /* Mask Parameter: StreamServer_default_value
                                    * Referenced by: '<S1>/Stream Server'
                                    */
  real_T Threshold_duration;           /* Mask Parameter: Threshold_duration
                                        * Referenced by: '<S17>/duration'
                                        */
  real_T Threshold2_duration;          /* Mask Parameter: Threshold2_duration
                                        * Referenced by: '<S32>/duration'
                                        */
  real_T Threshold_duration_p;         /* Mask Parameter: Threshold_duration_p
                                        * Referenced by: '<S31>/duration'
                                        */
  real_T Threshold3_duration;          /* Mask Parameter: Threshold3_duration
                                        * Referenced by: '<S33>/duration'
                                        */
  real_T Threshold_threshold;          /* Mask Parameter: Threshold_threshold
                                        * Referenced by: '<S17>/threshold'
                                        */
  real_T Threshold2_threshold;         /* Mask Parameter: Threshold2_threshold
                                        * Referenced by: '<S32>/threshold'
                                        */
  real_T Threshold_threshold_d;        /* Mask Parameter: Threshold_threshold_d
                                        * Referenced by: '<S31>/threshold'
                                        */
  real_T Threshold3_threshold;         /* Mask Parameter: Threshold3_threshold
                                        * Referenced by: '<S33>/threshold'
                                        */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S12>/Delay Input1'
                                        */
  int32_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S9>/Constant'
                                      */
  uint32_T HILRead_analog_channels[4];/* Mask Parameter: HILRead_analog_channels
                                       * Referenced by: '<S2>/HIL Read'
                                       */
  uint32_T HILRead_digital_channels[10];
                                     /* Mask Parameter: HILRead_digital_channels
                                      * Referenced by: '<S2>/HIL Read'
                                      */
  uint32_T HILWrite_digital_channels[2];
                                    /* Mask Parameter: HILWrite_digital_channels
                                     * Referenced by: '<S2>/HIL Write'
                                     */
  uint32_T HILRead_encoder_channels[2];
                                     /* Mask Parameter: HILRead_encoder_channels
                                      * Referenced by: '<S2>/HIL Read'
                                      */
  uint32_T HILRead_other_channels[9];  /* Mask Parameter: HILRead_other_channels
                                        * Referenced by: '<S2>/HIL Read'
                                        */
  uint32_T HILWrite_other_channels[6];/* Mask Parameter: HILWrite_other_channels
                                       * Referenced by: '<S2>/HIL Write'
                                       */
  uint32_T HILWrite_pwm_channels[2];   /* Mask Parameter: HILWrite_pwm_channels
                                        * Referenced by: '<S2>/HIL Write'
                                        */
  int8_T StopwithMessage3_message_icon;
                                /* Mask Parameter: StopwithMessage3_message_icon
                                 * Referenced by: '<S38>/Show Message on Host'
                                 */
  int8_T StopwithMessage1_message_icon;
                                /* Mask Parameter: StopwithMessage1_message_icon
                                 * Referenced by: '<S40>/Show Message on Host'
                                 */
  int8_T StopwithMessage3_message_icon_e;
                              /* Mask Parameter: StopwithMessage3_message_icon_e
                               * Referenced by: '<S42>/Show Message on Host'
                               */
  int8_T StopwithMessage1_message_icon_g;
                              /* Mask Parameter: StopwithMessage1_message_icon_g
                               * Referenced by: '<S44>/Show Message on Host'
                               */
  uint8_T CompareToConstant_const_f;/* Mask Parameter: CompareToConstant_const_f
                                     * Referenced by: '<S8>/Constant'
                                     */
  real_T Mode_Y0;                      /* Computed Parameter: Mode_Y0
                                        * Referenced by: '<S13>/Mode'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S41>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0
                                        * Referenced by: '<S3>/Switch4'
                                        */
  real_T Constant_Value_af;            /* Expression: 0
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S60>/Constant'
                                        */
  real_T Constant_Value_d;             /* Expression: 0
                                        * Referenced by: '<S61>/Constant'
                                        */
  real_T commandrad_Y0;                /* Computed Parameter: commandrad_Y0
                                        * Referenced by: '<S48>/command (rad)'
                                        */
  real_T HILInitialize_OOTerminate;/* Expression: set_other_outputs_at_terminate
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  real_T HILInitialize_OOExit;    /* Expression: set_other_outputs_at_switch_out
                                   * Referenced by: '<Root>/HIL Initialize'
                                   */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;    /* Expression: set_other_outputs_at_switch_in
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_OOFinal[6];     /* Expression: final_other_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh[6];      /* Expression: analog_input_maximums
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow[6];       /* Expression: analog_input_minimums
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_POFrequency[2]; /* Expression: pwm_frequency
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_POWatchdog;     /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_OOInitial[6];   /* Expression: initial_other_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_OOWatchdog[6];  /* Expression: watchdog_other_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T countstorad_Gain;             /* Expression: 2*pi/85/4
                                        * Referenced by: '<S2>/counts to rad'
                                        */
  real_T countsstorads_Gain;           /* Expression: 2*pi/85/4
                                        * Referenced by: '<S2>/count   s//s to rad//s'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/Memory'
                                        */
  real_T Constant_Value_l;             /* Expression: 11.6
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 14.4
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 12.0
                                        * Referenced by: '<S18>/Constant2'
                                        */
  real_T HILWatchdog_Timeout;          /* Expression: timeout
                                        * Referenced by: '<S1>/HIL Watchdog'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S1>/Memory1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S17>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S17>/Discrete-Time Integrator'
                                        */
  real_T Kp_Value;                     /* Expression: 1.50 * 13.5
                                        * Referenced by: '<S5>/Kp '
                                        */
  real_T Saturation_UpperSat[2];       /* Expression: [9.45 9.45]
                                        * Referenced by: '<S46>/Saturation'
                                        */
  real_T Saturation_LowerSat[2];       /* Expression: [-9.45 -9.45]
                                        * Referenced by: '<S46>/Saturation'
                                        */
  real_T Kd_Value;                     /* Expression: 0.00 * 13.5
                                        * Referenced by: '<S5>/Kd '
                                        */
  real_T Saturation2_UpperSat[2];      /* Expression: [4.05 4.05]
                                        * Referenced by: '<S46>/Saturation2'
                                        */
  real_T Saturation2_LowerSat[2];      /* Expression: [-4.05 -4.05]
                                        * Referenced by: '<S46>/Saturation2'
                                        */
  real_T Constant1_Value_j[2];         /* Expression: [0; 0]
                                        * Referenced by: '<S46>/Constant1'
                                        */
  real_T Constant_Value_o[2];          /* Expression: [0 0]
                                        * Referenced by: '<S47>/Constant'
                                        */
  real_T Kp_Value_g;                   /* Expression: 0.03 * 13.5
                                        * Referenced by: '<S5>/Kp'
                                        */
  real_T Memory1_InitialCondition_i;   /* Expression: 0
                                        * Referenced by: '<S47>/Memory1'
                                        */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S53>/sample time'
                                        */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S53>/Delay Input2'
                                        */
  real_T Memory2_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S47>/Memory2'
                                        */
  real_T sampletime_WtEt_m;            /* Computed Parameter: sampletime_WtEt_m
                                        * Referenced by: '<S54>/sample time'
                                        */
  real_T DelayInput2_InitialCondition_a;/* Expression: 0
                                         * Referenced by: '<S54>/Delay Input2'
                                         */
  real_T Saturation_UpperSat_j[2];     /* Expression: [4.05 4.05]
                                        * Referenced by: '<S47>/Saturation'
                                        */
  real_T Saturation_LowerSat_m[2];     /* Expression: [-4.05 -4.05]
                                        * Referenced by: '<S47>/Saturation'
                                        */
  real_T Integrator_IC[2];             /* Expression: [0 0]
                                        * Referenced by: '<S47>/Integrator'
                                        */
  real_T Integrator_UpperSat[2];       /* Expression: 0.5*[9.45 9.45]
                                        * Referenced by: '<S47>/Integrator'
                                        */
  real_T Integrator_LowerSat[2];       /* Expression: 0.5*[-9.45 -9.45]
                                        * Referenced by: '<S47>/Integrator'
                                        */
  real_T Constant2_Value_k[2];         /* Expression: [0; 0]
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real_T Memory_InitialCondition_a;    /* Expression: 13.5
                                        * Referenced by: '<S2>/Memory'
                                        */
  real_T Constant1_Value_k;            /* Expression: qc_get_step_size*5
                                        * Referenced by: '<S27>/Constant1'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<S3>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<S3>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<S3>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;   /* Computed Parameter: PulseGenerator1_Period
                                    * Referenced by: '<S3>/Pulse Generator1'
                                    */
  real_T PulseGenerator1_Duty;       /* Computed Parameter: PulseGenerator1_Duty
                                      * Referenced by: '<S3>/Pulse Generator1'
                                      */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<S3>/Pulse Generator1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_i;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                           * Referenced by: '<S32>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_b;  /* Expression: 0
                                        * Referenced by: '<S32>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_gainva_m;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_m
                           * Referenced by: '<S31>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_n;  /* Expression: 0
                                        * Referenced by: '<S31>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                           * Referenced by: '<S33>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_nq; /* Expression: 0
                                        * Referenced by: '<S33>/Discrete-Time Integrator'
                                        */
  real_T Ki_Value;                     /* Expression: 0.10 * 13.5
                                        * Referenced by: '<S5>/Ki'
                                        */
  real_T Constant_Value_j;             /* Expression: qc_get_step_size
                                        * Referenced by: '<S4>/Constant'
                                        */
  int32_T HILInitialize_DOWatchdog;
                                 /* Computed Parameter: HILInitialize_DOWatchdog
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  int32_T HILInitialize_EIInitial;/* Computed Parameter: HILInitialize_EIInitial
                                   * Referenced by: '<Root>/HIL Initialize'
                                   */
  int32_T HILInitialize_POModes;    /* Computed Parameter: HILInitialize_POModes
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  int32_T HILInitialize_POConfiguration;
                            /* Computed Parameter: HILInitialize_POConfiguration
                             * Referenced by: '<Root>/HIL Initialize'
                             */
  int32_T HILInitialize_POAlignment;
                                /* Computed Parameter: HILInitialize_POAlignment
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  int32_T HILInitialize_POPolarity;
                                 /* Computed Parameter: HILInitialize_POPolarity
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  int32_T StreamServer_SndPriority;
                                 /* Computed Parameter: StreamServer_SndPriority
                                  * Referenced by: '<S1>/Stream Server'
                                  */
  int32_T StreamServer_RcvPriority;
                                 /* Computed Parameter: StreamServer_RcvPriority
                                  * Referenced by: '<S1>/Stream Server'
                                  */
  uint32_T Print1_MaxUnits;            /* Computed Parameter: Print1_MaxUnits
                                        * Referenced by: '<S28>/Print1'
                                        */
  uint32_T Print1_MaxUnits_l;          /* Computed Parameter: Print1_MaxUnits_l
                                        * Referenced by: '<S29>/Print1'
                                        */
  uint32_T Print1_MaxUnits_n;          /* Computed Parameter: Print1_MaxUnits_n
                                        * Referenced by: '<S30>/Print1'
                                        */
  uint32_T Print1_MaxUnits_m;          /* Computed Parameter: Print1_MaxUnits_m
                                        * Referenced by: '<S34>/Print1'
                                        */
  uint32_T HILInitialize_AIChannels[6];
                                 /* Computed Parameter: HILInitialize_AIChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_DIChannels[13];
                                 /* Computed Parameter: HILInitialize_DIChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_DOChannels[3];
                                 /* Computed Parameter: HILInitialize_DOChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIChannels[2];
                                 /* Computed Parameter: HILInitialize_EIChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIQuadrature;
                               /* Computed Parameter: HILInitialize_EIQuadrature
                                * Referenced by: '<Root>/HIL Initialize'
                                */
  uint32_T HILInitialize_POChannels[2];
                                 /* Computed Parameter: HILInitialize_POChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_OOChannels[6];
                                 /* Computed Parameter: HILInitialize_OOChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T StreamServer_SndSize;     /* Computed Parameter: StreamServer_SndSize
                                      * Referenced by: '<S1>/Stream Server'
                                      */
  uint32_T StreamServer_RcvSize;     /* Computed Parameter: StreamServer_RcvSize
                                      * Referenced by: '<S1>/Stream Server'
                                      */
  uint32_T StreamServer_SndFIFO;     /* Computed Parameter: StreamServer_SndFIFO
                                      * Referenced by: '<S1>/Stream Server'
                                      */
  uint32_T StreamServer_RcvFIFO;     /* Computed Parameter: StreamServer_RcvFIFO
                                      * Referenced by: '<S1>/Stream Server'
                                      */
  boolean_T Print1_Active;             /* Computed Parameter: Print1_Active
                                        * Referenced by: '<S28>/Print1'
                                        */
  boolean_T Print1_Active_f;           /* Computed Parameter: Print1_Active_f
                                        * Referenced by: '<S29>/Print1'
                                        */
  boolean_T Print1_Active_i;           /* Computed Parameter: Print1_Active_i
                                        * Referenced by: '<S30>/Print1'
                                        */
  boolean_T Print1_Active_h;           /* Computed Parameter: Print1_Active_h
                                        * Referenced by: '<S34>/Print1'
                                        */
  boolean_T HILInitialize_Active;    /* Computed Parameter: HILInitialize_Active
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_AOTerminate;
                                /* Computed Parameter: HILInitialize_AOTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_AOExit;    /* Computed Parameter: HILInitialize_AOExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_DOTerminate;
                                /* Computed Parameter: HILInitialize_DOTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_DOExit;    /* Computed Parameter: HILInitialize_DOExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_POTerminate;
                                /* Computed Parameter: HILInitialize_POTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_POExit;    /* Computed Parameter: HILInitialize_POExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_CKPStart;/* Computed Parameter: HILInitialize_CKPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKPEnter;/* Computed Parameter: HILInitialize_CKPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKStart;  /* Computed Parameter: HILInitialize_CKStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_CKEnter;  /* Computed Parameter: HILInitialize_CKEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AIPStart;/* Computed Parameter: HILInitialize_AIPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AIPEnter;/* Computed Parameter: HILInitialize_AIPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPStart;/* Computed Parameter: HILInitialize_AOPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPEnter;/* Computed Parameter: HILInitialize_AOPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOStart;  /* Computed Parameter: HILInitialize_AOStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOEnter;  /* Computed Parameter: HILInitialize_AOEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOReset;  /* Computed Parameter: HILInitialize_AOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOPStart;/* Computed Parameter: HILInitialize_DOPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOPEnter;/* Computed Parameter: HILInitialize_DOPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOStart;  /* Computed Parameter: HILInitialize_DOStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOEnter;  /* Computed Parameter: HILInitialize_DOEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOReset;  /* Computed Parameter: HILInitialize_DOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIPStart;/* Computed Parameter: HILInitialize_EIPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIPEnter;/* Computed Parameter: HILInitialize_EIPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIStart;  /* Computed Parameter: HILInitialize_EIStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIEnter;  /* Computed Parameter: HILInitialize_EIEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POPStart;/* Computed Parameter: HILInitialize_POPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POPEnter;/* Computed Parameter: HILInitialize_POPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POStart;  /* Computed Parameter: HILInitialize_POStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POEnter;  /* Computed Parameter: HILInitialize_POEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POReset;  /* Computed Parameter: HILInitialize_POReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_OOReset;  /* Computed Parameter: HILInitialize_OOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOFinal;  /* Computed Parameter: HILInitialize_DOFinal
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOInitial;
                                  /* Computed Parameter: HILInitialize_DOInitial
                                   * Referenced by: '<Root>/HIL Initialize'
                                   */
  boolean_T HILRead_Active;            /* Computed Parameter: HILRead_Active
                                        * Referenced by: '<S2>/HIL Read'
                                        */
  boolean_T HILWatchdog_Active;        /* Computed Parameter: HILWatchdog_Active
                                        * Referenced by: '<S1>/HIL Watchdog'
                                        */
  boolean_T StreamServer_Active;      /* Computed Parameter: StreamServer_Active
                                       * Referenced by: '<S1>/Stream Server'
                                       */
  boolean_T HILWrite_Active;           /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S2>/HIL Write'
                                        */
  boolean_T Memory1_InitialCondition_p;
                               /* Computed Parameter: Memory1_InitialCondition_p
                                * Referenced by: '<S3>/Memory1'
                                */
  int8_T StreamServer_Optimize;     /* Computed Parameter: StreamServer_Optimize
                                     * Referenced by: '<S1>/Stream Server'
                                     */
  int8_T StreamServer_Implementation;
                              /* Computed Parameter: StreamServer_Implementation
                               * Referenced by: '<S1>/Stream Server'
                               */
  uint8_T StreamServer_URI[24];        /* Expression: uri_argument
                                        * Referenced by: '<S1>/Stream Server'
                                        */
  uint8_T StreamServer_Endian;        /* Computed Parameter: StreamServer_Endian
                                       * Referenced by: '<S1>/Stream Server'
                                       */
};

/* Real-time Model Data Structure */
struct tag_RTM_qbot_driver_v_1_22_T {
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
  real_T odeF[1][2];
  ODE1_IntgData intgData;
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
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_qbot_driver_v_1_22_T qbot_driver_v_1_22_P;

/* Block signals (default storage) */
extern B_qbot_driver_v_1_22_T qbot_driver_v_1_22_B;

/* Continuous states (default storage) */
extern X_qbot_driver_v_1_22_T qbot_driver_v_1_22_X;

/* Block states (default storage) */
extern DW_qbot_driver_v_1_22_T qbot_driver_v_1_22_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_qbot_driver_v_1_22_T qbot_driver_v_1_22_PrevZCX;

/* Model entry point functions */
extern void qbot_driver_v_1_22_initialize(void);
extern void qbot_driver_v_1_22_output(void);
extern void qbot_driver_v_1_22_update(void);
extern void qbot_driver_v_1_22_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern qbot_driver_v_1_22_rtModel *qbot_driver_v_1_22(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_qbot_driver_v_1_22_T *const qbot_driver_v_1_22_M;

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
 * '<Root>' : 'qbot_driver_v_1_22'
 * '<S1>'   : 'qbot_driver_v_1_22/From Client'
 * '<S2>'   : 'qbot_driver_v_1_22/I//O'
 * '<S3>'   : 'qbot_driver_v_1_22/LED States'
 * '<S4>'   : 'qbot_driver_v_1_22/Monitor Timing'
 * '<S5>'   : 'qbot_driver_v_1_22/Motor Controllers'
 * '<S6>'   : 'qbot_driver_v_1_22/Powered by QUARC'
 * '<S7>'   : 'qbot_driver_v_1_22/Quanser'
 * '<S8>'   : 'qbot_driver_v_1_22/From Client/Compare To Constant'
 * '<S9>'   : 'qbot_driver_v_1_22/From Client/Compare To Constant1'
 * '<S10>'  : 'qbot_driver_v_1_22/From Client/Compare To Constant2'
 * '<S11>'  : 'qbot_driver_v_1_22/From Client/Compare To Constant3'
 * '<S12>'  : 'qbot_driver_v_1_22/From Client/Detect Change'
 * '<S13>'  : 'qbot_driver_v_1_22/From Client/Lock Mode on Connection'
 * '<S14>'  : 'qbot_driver_v_1_22/From Client/MATLAB Function'
 * '<S15>'  : 'qbot_driver_v_1_22/From Client/Subsystem'
 * '<S16>'  : 'qbot_driver_v_1_22/From Client/Subsystem/MATLAB Function'
 * '<S17>'  : 'qbot_driver_v_1_22/From Client/Subsystem/Threshold'
 * '<S18>'  : 'qbot_driver_v_1_22/I//O/battery monitoring'
 * '<S19>'  : 'qbot_driver_v_1_22/I//O/battery monitoring/Compare To Constant'
 * '<S20>'  : 'qbot_driver_v_1_22/I//O/battery monitoring/Figure out which battery is valid and active'
 * '<S21>'  : 'qbot_driver_v_1_22/I//O/battery monitoring/Figure out which battery is valid and active1'
 * '<S22>'  : 'qbot_driver_v_1_22/LED States/Color Constant'
 * '<S23>'  : 'qbot_driver_v_1_22/LED States/Color Constant1'
 * '<S24>'  : 'qbot_driver_v_1_22/LED States/Color Constant2'
 * '<S25>'  : 'qbot_driver_v_1_22/LED States/Color Constant3'
 * '<S26>'  : 'qbot_driver_v_1_22/LED States/Color Constant4'
 * '<S27>'  : 'qbot_driver_v_1_22/LED States/LEDs'
 * '<S28>'  : 'qbot_driver_v_1_22/LED States/Low Battery Error'
 * '<S29>'  : 'qbot_driver_v_1_22/LED States/Low Battery Warning'
 * '<S30>'  : 'qbot_driver_v_1_22/LED States/Stall//Overcurrent Error'
 * '<S31>'  : 'qbot_driver_v_1_22/LED States/Threshold'
 * '<S32>'  : 'qbot_driver_v_1_22/LED States/Threshold2'
 * '<S33>'  : 'qbot_driver_v_1_22/LED States/Threshold3'
 * '<S34>'  : 'qbot_driver_v_1_22/LED States/Watchdog expiry Error'
 * '<S35>'  : 'qbot_driver_v_1_22/LED States/LEDs/MATLAB Function1'
 * '<S36>'  : 'qbot_driver_v_1_22/LED States/LEDs/MATLAB Function2'
 * '<S37>'  : 'qbot_driver_v_1_22/LED States/LEDs/MATLAB Function3'
 * '<S38>'  : 'qbot_driver_v_1_22/LED States/Low Battery Error/Stop with Message3'
 * '<S39>'  : 'qbot_driver_v_1_22/LED States/Low Battery Error/Stop with Message3/Compare'
 * '<S40>'  : 'qbot_driver_v_1_22/LED States/Low Battery Warning/Stop with Message1'
 * '<S41>'  : 'qbot_driver_v_1_22/LED States/Low Battery Warning/Stop with Message1/Compare'
 * '<S42>'  : 'qbot_driver_v_1_22/LED States/Stall//Overcurrent Error/Stop with Message3'
 * '<S43>'  : 'qbot_driver_v_1_22/LED States/Stall//Overcurrent Error/Stop with Message3/Compare'
 * '<S44>'  : 'qbot_driver_v_1_22/LED States/Watchdog expiry Error/Stop with Message1'
 * '<S45>'  : 'qbot_driver_v_1_22/LED States/Watchdog expiry Error/Stop with Message1/Compare'
 * '<S46>'  : 'qbot_driver_v_1_22/Motor Controllers/Hold Controller'
 * '<S47>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller'
 * '<S48>'  : 'qbot_driver_v_1_22/Motor Controllers/find hold command'
 * '<S49>'  : 'qbot_driver_v_1_22/Motor Controllers/Hold Controller/Compare To Constant2'
 * '<S50>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/Compare To Constant2'
 * '<S51>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/MATLAB Function1'
 * '<S52>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/MATLAB Function2'
 * '<S53>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/Rate Limiter Dynamic'
 * '<S54>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/Rate Limiter Dynamic1'
 * '<S55>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/Saturation Dynamic'
 * '<S56>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/Saturation Dynamic1'
 * '<S57>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/zero out wheel speed commands under minimum speed threshold'
 * '<S58>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/Rate Limiter Dynamic/Saturation Dynamic'
 * '<S59>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/Rate Limiter Dynamic1/Saturation Dynamic'
 * '<S60>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/zero out wheel speed commands under minimum speed threshold/Subsystem'
 * '<S61>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/zero out wheel speed commands under minimum speed threshold/Subsystem1'
 * '<S62>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/zero out wheel speed commands under minimum speed threshold/Subsystem/Compare To Constant'
 * '<S63>'  : 'qbot_driver_v_1_22/Motor Controllers/Speed Controller/zero out wheel speed commands under minimum speed threshold/Subsystem1/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_qbot_driver_v_1_22_h_ */
