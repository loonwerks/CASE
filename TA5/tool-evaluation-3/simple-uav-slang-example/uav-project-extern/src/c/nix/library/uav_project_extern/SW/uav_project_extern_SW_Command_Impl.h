#ifndef SIREUM_H_uav_project_extern_SW_Command_Impl
#define SIREUM_H_uav_project_extern_SW_Command_Impl
#include <types.h>

// uav_project_extern.SW.Command_Impl

#define uav_project_extern_SW_Command_Impl_Map_(this) ((uav_project_extern_SW_Map) &(this)->Map)
#define uav_project_extern_SW_Command_Impl_Pattern_(this) ((this)->Pattern)
#define uav_project_extern_SW_Command_Impl_HMAC_(this) ((this)->HMAC)

B uav_project_extern_SW_Command_Impl__eq(uav_project_extern_SW_Command_Impl this, uav_project_extern_SW_Command_Impl other);
inline B uav_project_extern_SW_Command_Impl__ne(uav_project_extern_SW_Command_Impl this, uav_project_extern_SW_Command_Impl other) {
  return !uav_project_extern_SW_Command_Impl__eq(this, other);
};
void uav_project_extern_SW_Command_Impl_string_(STACK_FRAME String result, uav_project_extern_SW_Command_Impl this);
void uav_project_extern_SW_Command_Impl_cprint(uav_project_extern_SW_Command_Impl this, B isOut);

inline B uav_project_extern_SW_Command_Impl__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_Command_Impl) this)->type == Tuav_project_extern_SW_Command_Impl;
}

inline uav_project_extern_SW_Command_Impl uav_project_extern_SW_Command_Impl__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_Command_Impl__is(CALLER this)) return (uav_project_extern_SW_Command_Impl) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.Command_Impl.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_Command_Impl_apply(STACK_FRAME uav_project_extern_SW_Command_Impl this, uav_project_extern_SW_Map Map, uav_project_extern_SW_FlightPattern Pattern, B HMAC);

#endif