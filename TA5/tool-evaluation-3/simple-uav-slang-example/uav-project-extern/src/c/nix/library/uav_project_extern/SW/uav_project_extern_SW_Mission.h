#ifndef SIREUM_H_uav_project_extern_SW_Mission
#define SIREUM_H_uav_project_extern_SW_Mission
#include <types.h>

// uav_project_extern.SW.Mission

#define uav_project_extern_SW_Mission_value_(this) ((IS_83A978) &(this)->value)

B uav_project_extern_SW_Mission__eq(uav_project_extern_SW_Mission this, uav_project_extern_SW_Mission other);
inline B uav_project_extern_SW_Mission__ne(uav_project_extern_SW_Mission this, uav_project_extern_SW_Mission other) {
  return !uav_project_extern_SW_Mission__eq(this, other);
};
void uav_project_extern_SW_Mission_string_(STACK_FRAME String result, uav_project_extern_SW_Mission this);
void uav_project_extern_SW_Mission_cprint(uav_project_extern_SW_Mission this, B isOut);

inline B uav_project_extern_SW_Mission__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_Mission) this)->type == Tuav_project_extern_SW_Mission;
}

inline uav_project_extern_SW_Mission uav_project_extern_SW_Mission__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_Mission__is(CALLER this)) return (uav_project_extern_SW_Mission) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.Mission.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_Mission_apply(STACK_FRAME uav_project_extern_SW_Mission this, IS_83A978 value);

#endif