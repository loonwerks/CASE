#ifndef SIREUM_H_uav_project_extern_Base_Types_Boolean_Payload
#define SIREUM_H_uav_project_extern_Base_Types_Boolean_Payload
#include <types.h>

// uav_project_extern.Base_Types.Boolean_Payload

#define uav_project_extern_Base_Types_Boolean_Payload_value_(this) ((this)->value)

B uav_project_extern_Base_Types_Boolean_Payload__eq(uav_project_extern_Base_Types_Boolean_Payload this, uav_project_extern_Base_Types_Boolean_Payload other);
inline B uav_project_extern_Base_Types_Boolean_Payload__ne(uav_project_extern_Base_Types_Boolean_Payload this, uav_project_extern_Base_Types_Boolean_Payload other) {
  return !uav_project_extern_Base_Types_Boolean_Payload__eq(this, other);
};
void uav_project_extern_Base_Types_Boolean_Payload_string_(STACK_FRAME String result, uav_project_extern_Base_Types_Boolean_Payload this);
void uav_project_extern_Base_Types_Boolean_Payload_cprint(uav_project_extern_Base_Types_Boolean_Payload this, B isOut);

inline B uav_project_extern_Base_Types_Boolean_Payload__is(STACK_FRAME void* this) {
  return ((uav_project_extern_Base_Types_Boolean_Payload) this)->type == Tuav_project_extern_Base_Types_Boolean_Payload;
}

inline uav_project_extern_Base_Types_Boolean_Payload uav_project_extern_Base_Types_Boolean_Payload__as(STACK_FRAME void *this) {
  if (uav_project_extern_Base_Types_Boolean_Payload__is(CALLER this)) return (uav_project_extern_Base_Types_Boolean_Payload) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.Base_Types.Boolean_Payload.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_Base_Types_Boolean_Payload_apply(STACK_FRAME uav_project_extern_Base_Types_Boolean_Payload this, B value);

#endif