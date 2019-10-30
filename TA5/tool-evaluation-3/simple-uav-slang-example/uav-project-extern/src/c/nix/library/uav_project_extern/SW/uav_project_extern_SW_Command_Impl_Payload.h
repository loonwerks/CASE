#ifndef SIREUM_H_uav_project_extern_SW_Command_Impl_Payload
#define SIREUM_H_uav_project_extern_SW_Command_Impl_Payload
#include <types.h>

// uav_project_extern.SW.Command_Impl_Payload

#define uav_project_extern_SW_Command_Impl_Payload_value_(this) ((uav_project_extern_SW_Command_Impl) &(this)->value)

B uav_project_extern_SW_Command_Impl_Payload__eq(uav_project_extern_SW_Command_Impl_Payload this, uav_project_extern_SW_Command_Impl_Payload other);
inline B uav_project_extern_SW_Command_Impl_Payload__ne(uav_project_extern_SW_Command_Impl_Payload this, uav_project_extern_SW_Command_Impl_Payload other) {
  return !uav_project_extern_SW_Command_Impl_Payload__eq(this, other);
};
void uav_project_extern_SW_Command_Impl_Payload_string_(STACK_FRAME String result, uav_project_extern_SW_Command_Impl_Payload this);
void uav_project_extern_SW_Command_Impl_Payload_cprint(uav_project_extern_SW_Command_Impl_Payload this, B isOut);

inline B uav_project_extern_SW_Command_Impl_Payload__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_Command_Impl_Payload) this)->type == Tuav_project_extern_SW_Command_Impl_Payload;
}

inline uav_project_extern_SW_Command_Impl_Payload uav_project_extern_SW_Command_Impl_Payload__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_Command_Impl_Payload__is(CALLER this)) return (uav_project_extern_SW_Command_Impl_Payload) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.Command_Impl_Payload.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_Command_Impl_Payload_apply(STACK_FRAME uav_project_extern_SW_Command_Impl_Payload this, uav_project_extern_SW_Command_Impl value);

#endif