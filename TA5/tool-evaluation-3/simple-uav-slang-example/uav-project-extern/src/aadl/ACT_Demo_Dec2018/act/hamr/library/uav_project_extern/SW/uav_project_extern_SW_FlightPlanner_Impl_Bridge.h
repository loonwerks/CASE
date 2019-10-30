#ifndef SIREUM_H_uav_project_extern_SW_FlightPlanner_Impl_Bridge
#define SIREUM_H_uav_project_extern_SW_FlightPlanner_Impl_Bridge
#include <types.h>

// uav_project_extern.SW.FlightPlanner_Impl_Bridge

#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_id_(this) ((this)->id)
#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_name_(this) ((String) &(this)->name)
#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_mission_rcv_(this) ((art_Port_C0524D) &(this)->mission_rcv)
#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_recv_map_(this) ((art_Port_311EA2) &(this)->recv_map)
#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_flight_plan_(this) ((art_Port_97EF76) &(this)->flight_plan)
#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_api_(this) ((uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api) &(this)->api)
#define uav_project_extern_SW_FlightPlanner_Impl_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B uav_project_extern_SW_FlightPlanner_Impl_Bridge__eq(uav_project_extern_SW_FlightPlanner_Impl_Bridge this, uav_project_extern_SW_FlightPlanner_Impl_Bridge other);
inline B uav_project_extern_SW_FlightPlanner_Impl_Bridge__ne(uav_project_extern_SW_FlightPlanner_Impl_Bridge this, uav_project_extern_SW_FlightPlanner_Impl_Bridge other) {
  return !uav_project_extern_SW_FlightPlanner_Impl_Bridge__eq(this, other);
};
void uav_project_extern_SW_FlightPlanner_Impl_Bridge_string_(STACK_FRAME String result, uav_project_extern_SW_FlightPlanner_Impl_Bridge this);
void uav_project_extern_SW_FlightPlanner_Impl_Bridge_cprint(uav_project_extern_SW_FlightPlanner_Impl_Bridge this, B isOut);

inline B uav_project_extern_SW_FlightPlanner_Impl_Bridge__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_FlightPlanner_Impl_Bridge) this)->type == Tuav_project_extern_SW_FlightPlanner_Impl_Bridge;
}

inline uav_project_extern_SW_FlightPlanner_Impl_Bridge uav_project_extern_SW_FlightPlanner_Impl_Bridge__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_FlightPlanner_Impl_Bridge__is(CALLER this)) return (uav_project_extern_SW_FlightPlanner_Impl_Bridge) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.FlightPlanner_Impl_Bridge.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_FlightPlanner_Impl_Bridge_apply(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, art_Port_C0524D mission_rcv, art_Port_311EA2 recv_map, art_Port_97EF76 flight_plan);

#endif