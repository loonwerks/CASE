#ifndef SIREUM_H_uav_project_extern_SW_WaypointManager_Impl_Impl
#define SIREUM_H_uav_project_extern_SW_WaypointManager_Impl_Impl
#include <types.h>

// uav_project_extern.SW.WaypointManager_Impl_Impl

#define uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this) ((uav_project_extern_SW_WaypointManager_Impl_Bridge_Api) &(this)->api)
#define uav_project_extern_SW_WaypointManager_Impl_Impl__mission_(this) ((Option_32416F) &(this)->_mission)
#define uav_project_extern_SW_WaypointManager_Impl_Impl__mission_a(this, p_value) Type_assign(&(this)->_mission, p_value, sizeof(union Option_32416F))

B uav_project_extern_SW_WaypointManager_Impl_Impl__eq(uav_project_extern_SW_WaypointManager_Impl_Impl this, uav_project_extern_SW_WaypointManager_Impl_Impl other);
inline B uav_project_extern_SW_WaypointManager_Impl_Impl__ne(uav_project_extern_SW_WaypointManager_Impl_Impl this, uav_project_extern_SW_WaypointManager_Impl_Impl other) {
  return !uav_project_extern_SW_WaypointManager_Impl_Impl__eq(this, other);
};
void uav_project_extern_SW_WaypointManager_Impl_Impl_string_(STACK_FRAME String result, uav_project_extern_SW_WaypointManager_Impl_Impl this);
void uav_project_extern_SW_WaypointManager_Impl_Impl_cprint(uav_project_extern_SW_WaypointManager_Impl_Impl this, B isOut);

inline B uav_project_extern_SW_WaypointManager_Impl_Impl__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_WaypointManager_Impl_Impl) this)->type == Tuav_project_extern_SW_WaypointManager_Impl_Impl;
}

inline uav_project_extern_SW_WaypointManager_Impl_Impl uav_project_extern_SW_WaypointManager_Impl_Impl__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_WaypointManager_Impl_Impl__is(CALLER this)) return (uav_project_extern_SW_WaypointManager_Impl_Impl) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.WaypointManager_Impl_Impl.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_WaypointManager_Impl_Impl_apply(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, uav_project_extern_SW_WaypointManager_Impl_Bridge_Api api);

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this);

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_handleflight_plan_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, uav_project_extern_SW_Mission mission);

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_handletracking_id_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, S64 nid);

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, Z i);

#endif