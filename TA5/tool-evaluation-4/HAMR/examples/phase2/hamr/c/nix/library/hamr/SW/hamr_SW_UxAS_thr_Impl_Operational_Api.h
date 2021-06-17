#ifndef SIREUM_H_hamr_SW_UxAS_thr_Impl_Operational_Api
#define SIREUM_H_hamr_SW_UxAS_thr_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.UxAS_thr_Impl_Operational_Api

#define hamr_SW_UxAS_thr_Impl_Operational_Api_id_(this) ((this)->id)
#define hamr_SW_UxAS_thr_Impl_Operational_Api_AutomationRequest_Id_(this) ((this)->AutomationRequest_Id)
#define hamr_SW_UxAS_thr_Impl_Operational_Api_AirVehicleState_Id_(this) ((this)->AirVehicleState_Id)
#define hamr_SW_UxAS_thr_Impl_Operational_Api_OperatingRegion_Id_(this) ((this)->OperatingRegion_Id)
#define hamr_SW_UxAS_thr_Impl_Operational_Api_LineSearchTask_Id_(this) ((this)->LineSearchTask_Id)
#define hamr_SW_UxAS_thr_Impl_Operational_Api_AutomationResponse_MON_GEO_Id_(this) ((this)->AutomationResponse_MON_GEO_Id)
#define hamr_SW_UxAS_thr_Impl_Operational_Api_AutomationResponse_MON_REQ_Id_(this) ((this)->AutomationResponse_MON_REQ_Id)

B hamr_SW_UxAS_thr_Impl_Operational_Api__eq(hamr_SW_UxAS_thr_Impl_Operational_Api this, hamr_SW_UxAS_thr_Impl_Operational_Api other);
inline B hamr_SW_UxAS_thr_Impl_Operational_Api__ne(hamr_SW_UxAS_thr_Impl_Operational_Api this, hamr_SW_UxAS_thr_Impl_Operational_Api other) {
  return !hamr_SW_UxAS_thr_Impl_Operational_Api__eq(this, other);
};
void hamr_SW_UxAS_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_UxAS_thr_Impl_Operational_Api this);
void hamr_SW_UxAS_thr_Impl_Operational_Api_cprint(hamr_SW_UxAS_thr_Impl_Operational_Api this, B isOut);

inline B hamr_SW_UxAS_thr_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((hamr_SW_UxAS_thr_Impl_Operational_Api) this)->type == Thamr_SW_UxAS_thr_Impl_Operational_Api;
}

inline hamr_SW_UxAS_thr_Impl_Operational_Api hamr_SW_UxAS_thr_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (hamr_SW_UxAS_thr_Impl_Operational_Api__is(CALLER this)) return (hamr_SW_UxAS_thr_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.SW.UxAS_thr_Impl_Operational_Api.");
  abort();
}

void hamr_SW_UxAS_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api this, Z id, Z AutomationRequest_Id, Z AirVehicleState_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Z AutomationResponse_MON_GEO_Id, Z AutomationResponse_MON_REQ_Id);

void hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Operational_Api this);

void hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Operational_Api this);

void hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Operational_Api this);

void hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif