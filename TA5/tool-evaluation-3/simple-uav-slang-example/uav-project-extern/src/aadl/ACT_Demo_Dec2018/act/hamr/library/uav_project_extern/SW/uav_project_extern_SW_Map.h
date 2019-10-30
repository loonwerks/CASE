#ifndef SIREUM_H_uav_project_extern_SW_Map
#define SIREUM_H_uav_project_extern_SW_Map
#include <types.h>

// uav_project_extern.SW.Map

#define uav_project_extern_SW_Map_value_(this) ((IS_83A978) &(this)->value)

B uav_project_extern_SW_Map__eq(uav_project_extern_SW_Map this, uav_project_extern_SW_Map other);
inline B uav_project_extern_SW_Map__ne(uav_project_extern_SW_Map this, uav_project_extern_SW_Map other) {
  return !uav_project_extern_SW_Map__eq(this, other);
};
void uav_project_extern_SW_Map_string_(STACK_FRAME String result, uav_project_extern_SW_Map this);
void uav_project_extern_SW_Map_cprint(uav_project_extern_SW_Map this, B isOut);

inline B uav_project_extern_SW_Map__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_Map) this)->type == Tuav_project_extern_SW_Map;
}

inline uav_project_extern_SW_Map uav_project_extern_SW_Map__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_Map__is(CALLER this)) return (uav_project_extern_SW_Map) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.Map.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_Map_apply(STACK_FRAME uav_project_extern_SW_Map this, IS_83A978 value);

#endif