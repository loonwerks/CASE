#ifndef SIREUM_H_hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge
#define SIREUM_H_hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init(STACK_FRAME_ONLY);

Option_9CA19A hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(STACK_FRAME_ONLY);
void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api_a(STACK_FRAME Option_9CA19A p_c_initialization_api);
Option_B4EF66 hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(STACK_FRAME_ONLY);
void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api_a(STACK_FRAME Option_B4EF66 p_c_operational_api);

// hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge

#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_id_(this) ((this)->id)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_name_(this) ((String) &(this)->name)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_recv_data_(this) ((art_Port_45E54D) &(this)->recv_data)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_send_data_(this) ((art_Port_45E54D) &(this)->send_data)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_trusted_ids_(this) ((art_Port_45E54D) &(this)->trusted_ids)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_AutomationRequest_(this) ((art_Port_45E54D) &(this)->AutomationRequest)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_OperatingRegion_(this) ((art_Port_45E54D) &(this)->OperatingRegion)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_LineSearchTask_(this) ((art_Port_45E54D) &(this)->LineSearchTask)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_initialization_api_(this) ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &(this)->initialization_api)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_operational_api_(this) ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &(this)->operational_api)
#define hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__eq(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge other);
inline B hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__ne(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge other) {
  return !hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__eq(this, other);
};
void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_string_(STACK_FRAME String result, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this);
void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_cprint(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this, B isOut);

inline B hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__is(STACK_FRAME void* this) {
  return ((hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge) this)->type == Thamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge;
}

inline hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__as(STACK_FRAME void *this) {
  if (hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__is(CALLER this)) return (hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.");
  abort();
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_apply(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D recv_data, art_Port_45E54D send_data, art_Port_45E54D trusted_ids, art_Port_45E54D AutomationRequest, art_Port_45E54D OperatingRegion, art_Port_45E54D LineSearchTask);

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init_c_initialization_api(STACK_FRAME_ONLY);

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init_c_operational_api(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif