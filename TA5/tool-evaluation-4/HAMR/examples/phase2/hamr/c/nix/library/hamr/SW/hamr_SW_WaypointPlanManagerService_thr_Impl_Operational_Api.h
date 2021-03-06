#ifndef SIREUM_H_hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api
#define SIREUM_H_hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api

#define hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_id_(this) ((this)->id)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_AutomationResponse_Id_(this) ((this)->AutomationResponse_Id)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_AirVehicleState_Id_(this) ((this)->AirVehicleState_Id)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_MissionCommand_Id_(this) ((this)->MissionCommand_Id)
#define hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_ReturnHome_Id_(this) ((this)->ReturnHome_Id)

B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__eq(hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api other);
inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__ne(hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api other) {
  return !hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__eq(this, other);
};
void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this);
void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_cprint(hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, B isOut);

inline B hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) this)->type == Thamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api;
}

inline hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__is(CALLER this)) return (hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api.");
  abort();
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this, Z id, Z AutomationResponse_Id, Z AirVehicleState_Id, Z MissionCommand_Id, Z ReturnHome_Id);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_(STACK_FRAME Option_30119F result, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_(STACK_FRAME Option_30119F result, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_(STACK_FRAME Option_C622DB result, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif