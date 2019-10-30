#ifndef SIREUM_H_uav_project_extern_SW_RadioDriver_Impl_Bridge_Api
#define SIREUM_H_uav_project_extern_SW_RadioDriver_Impl_Bridge_Api
#include <types.h>

// uav_project_extern.SW.RadioDriver_Impl_Bridge.Api

#define uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_id_(this) ((this)->id)
#define uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_recv_map_out_Id_(this) ((this)->recv_map_out_Id)

B uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__eq(uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, uav_project_extern_SW_RadioDriver_Impl_Bridge_Api other);
inline B uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__ne(uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, uav_project_extern_SW_RadioDriver_Impl_Bridge_Api other) {
  return !uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__eq(this, other);
};
void uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_string_(STACK_FRAME String result, uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this);
void uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_cprint(uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, B isOut);

inline B uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_RadioDriver_Impl_Bridge_Api) this)->type == Tuav_project_extern_SW_RadioDriver_Impl_Bridge_Api;
}

inline uav_project_extern_SW_RadioDriver_Impl_Bridge_Api uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__is(CALLER this)) return (uav_project_extern_SW_RadioDriver_Impl_Bridge_Api) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.RadioDriver_Impl_Bridge.Api.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_apply(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, Z id, Z recv_map_out_Id);

Unit uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_logInfo_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, String msg);

Unit uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_sendrecv_map_out_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, uav_project_extern_SW_Command_Impl value);

#endif