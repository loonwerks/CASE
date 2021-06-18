#ifndef SIREUM_H_hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api
#define SIREUM_H_hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api

#define hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_id_(this) ((this)->id)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_recv_data_Id_(this) ((this)->recv_data_Id)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_send_data_Id_(this) ((this)->send_data_Id)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_trusted_ids_Id_(this) ((this)->trusted_ids_Id)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_AutomationRequest_Id_(this) ((this)->AutomationRequest_Id)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_OperatingRegion_Id_(this) ((this)->OperatingRegion_Id)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_LineSearchTask_Id_(this) ((this)->LineSearchTask_Id)

B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__eq(hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api other);
inline B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__ne(hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api other) {
  return !hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__eq(this, other);
};
void hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this);
void hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_cprint(hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, B isOut);

inline B hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) this)->type == Thamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api;
}

inline hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__is(CALLER this)) return (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api.");
  abort();
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, Z id, Z recv_data_Id, Z send_data_Id, Z trusted_ids_Id, Z AutomationRequest_Id, Z OperatingRegion_Id, Z LineSearchTask_Id);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_(STACK_FRAME Option_30119F result, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif