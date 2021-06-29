#ifndef SIREUM_H_hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints
#define SIREUM_H_hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.EntryPoints

#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_BridgeId_(this) ((this)->CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_BridgeId)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_keep_in_zones_Id_(this) ((this)->keep_in_zones_Id)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_keep_out_zones_Id_(this) ((this)->keep_out_zones_Id)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_observed_Id_(this) ((this)->observed_Id)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_output_Id_(this) ((this)->output_Id)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_alert_Id_(this) ((this)->alert_Id)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_initialization_api_(this) ((hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &(this)->initialization_api)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_operational_api_(this) ((hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &(this)->operational_api)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_dataInPortIds_(this) ((IS_82ABD8) &(this)->dataInPortIds)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_eventInPortIds_(this) ((IS_82ABD8) &(this)->eventInPortIds)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_dataOutPortIds_(this) ((IS_82ABD8) &(this)->dataOutPortIds)
#define hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_eventOutPortIds_(this) ((IS_82ABD8) &(this)->eventOutPortIds)

B hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints__eq(hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints this, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints other);
inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints__ne(hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints this, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints other) {
  return !hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints__eq(this, other);
};
void hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints this);
void hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_cprint(hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints this, B isOut);

inline B hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints__is(STACK_FRAME void* this) {
  return ((hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints) this)->type == Thamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints;
}

inline hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints__as(STACK_FRAME void *this) {
  if (hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints__is(CALLER this)) return (hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints) this;
  sfAbortImpl(CALLER "Invalid cast to hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.EntryPoints.");
  abort();
}

void hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_apply(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints this, Z CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_BridgeId, Z keep_in_zones_Id, Z keep_out_zones_Id, Z observed_Id, Z output_Id, Z alert_Id, Option_9AF35E dispatchTriggers, hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api initialization_api, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api operational_api);

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints this);

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_compute_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints this);

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints this);

#ifdef __cplusplus
}
#endif

#endif