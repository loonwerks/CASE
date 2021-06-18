#ifndef SIREUM_H_hamr_SW_WaypointPlanManagerService_thr_Impl_Api
#define SIREUM_H_hamr_SW_WaypointPlanManagerService_thr_Impl_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_logInfo_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this, String msg);

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_logDebug_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this, String msg);

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_logError_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this, String msg);

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_logInfo_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, String msg);

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_logDebug_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, String msg);

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_logError_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, String msg);

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_put_MissionCommand_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this, IS_C4F575 value);

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_put_MissionCommand_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif