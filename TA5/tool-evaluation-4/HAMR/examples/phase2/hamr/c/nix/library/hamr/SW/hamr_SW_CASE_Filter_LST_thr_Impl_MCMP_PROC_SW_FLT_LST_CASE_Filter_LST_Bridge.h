#ifndef SIREUM_H_hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge
#define SIREUM_H_hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_init(STACK_FRAME_ONLY);

Option_B4E093 hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_initialization_api(STACK_FRAME_ONLY);
void hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_initialization_api_a(STACK_FRAME Option_B4E093 p_c_initialization_api);
Option_54EF1B hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_operational_api(STACK_FRAME_ONLY);
void hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_operational_api_a(STACK_FRAME Option_54EF1B p_c_operational_api);

// hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge

#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_id_(this) ((this)->id)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_name_(this) ((String) &(this)->name)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_filter_in_(this) ((art_Port_45E54D) &(this)->filter_in)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_filter_out_(this) ((art_Port_45E54D) &(this)->filter_out)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_initialization_api_(this) ((hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &(this)->initialization_api)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_operational_api_(this) ((hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) &(this)->operational_api)
#define hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge__eq(hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge this, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge other);
inline B hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge__ne(hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge this, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge other) {
  return !hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge__eq(this, other);
};
void hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_string_(STACK_FRAME String result, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge this);
void hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_cprint(hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge this, B isOut);

inline B hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge__is(STACK_FRAME void* this) {
  return ((hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge) this)->type == Thamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge;
}

inline hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge__as(STACK_FRAME void *this) {
  if (hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge__is(CALLER this)) return (hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.");
  abort();
}

void hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_apply(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D filter_in, art_Port_45E54D filter_out);

void hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_init_c_initialization_api(STACK_FRAME_ONLY);

void hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_init_c_operational_api(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif