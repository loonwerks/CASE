#ifndef SIREUM_H_hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api
#define SIREUM_H_hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api

#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_id_(this) ((this)->id)
#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_trusted_ids_Id_(this) ((this)->trusted_ids_Id)
#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_AutomationRequest_in_Id_(this) ((this)->AutomationRequest_in_Id)
#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_AutomationRequest_out_UXAS_Id_(this) ((this)->AutomationRequest_out_UXAS_Id)
#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_AutomationRequest_out_MON_REQ_Id_(this) ((this)->AutomationRequest_out_MON_REQ_Id)
#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_OperatingRegion_in_Id_(this) ((this)->OperatingRegion_in_Id)
#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_OperatingRegion_out_Id_(this) ((this)->OperatingRegion_out_Id)
#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_LineSearchTask_in_Id_(this) ((this)->LineSearchTask_in_Id)
#define hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_LineSearchTask_out_Id_(this) ((this)->LineSearchTask_out_Id)

B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__eq(hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api other);
inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__ne(hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api other) {
  return !hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__eq(this, other);
};
void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this);
void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_cprint(hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, B isOut);

inline B hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) this)->type == Thamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api;
}

inline hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api__is(CALLER this)) return (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api.");
  abort();
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this, Z id, Z trusted_ids_Id, Z AutomationRequest_in_Id, Z AutomationRequest_out_UXAS_Id, Z AutomationRequest_out_MON_REQ_Id, Z OperatingRegion_in_Id, Z OperatingRegion_out_Id, Z LineSearchTask_in_Id, Z LineSearchTask_out_Id);

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this);

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this);

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this);

void hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif