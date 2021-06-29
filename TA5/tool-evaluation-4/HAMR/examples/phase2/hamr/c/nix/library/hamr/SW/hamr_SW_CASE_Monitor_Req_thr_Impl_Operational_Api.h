#ifndef SIREUM_H_hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api
#define SIREUM_H_hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api

#define hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_id_(this) ((this)->id)
#define hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_observed_Id_(this) ((this)->observed_Id)
#define hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_reference_1_Id_(this) ((this)->reference_1_Id)

B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__eq(hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api other);
inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__ne(hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api other) {
  return !hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__eq(this, other);
};
void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this);
void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_cprint(hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, B isOut);

inline B hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) this)->type == Thamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api;
}

inline hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__is(CALLER this)) return (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api.");
  abort();
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_apply(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this, Z id, Z observed_Id, Z reference_1_Id);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this);

void hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_(STACK_FRAME Option_30119F result, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif