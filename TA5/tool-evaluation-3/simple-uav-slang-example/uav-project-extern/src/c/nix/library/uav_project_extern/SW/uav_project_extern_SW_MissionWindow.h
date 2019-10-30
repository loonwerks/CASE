#ifndef SIREUM_H_uav_project_extern_SW_MissionWindow
#define SIREUM_H_uav_project_extern_SW_MissionWindow
#include <types.h>

// uav_project_extern.SW.MissionWindow

#define uav_project_extern_SW_MissionWindow_value_(this) ((IS_83A978) &(this)->value)

B uav_project_extern_SW_MissionWindow__eq(uav_project_extern_SW_MissionWindow this, uav_project_extern_SW_MissionWindow other);
inline B uav_project_extern_SW_MissionWindow__ne(uav_project_extern_SW_MissionWindow this, uav_project_extern_SW_MissionWindow other) {
  return !uav_project_extern_SW_MissionWindow__eq(this, other);
};
void uav_project_extern_SW_MissionWindow_string_(STACK_FRAME String result, uav_project_extern_SW_MissionWindow this);
void uav_project_extern_SW_MissionWindow_cprint(uav_project_extern_SW_MissionWindow this, B isOut);

inline B uav_project_extern_SW_MissionWindow__is(STACK_FRAME void* this) {
  return ((uav_project_extern_SW_MissionWindow) this)->type == Tuav_project_extern_SW_MissionWindow;
}

inline uav_project_extern_SW_MissionWindow uav_project_extern_SW_MissionWindow__as(STACK_FRAME void *this) {
  if (uav_project_extern_SW_MissionWindow__is(CALLER this)) return (uav_project_extern_SW_MissionWindow) this;
  fprintf(stderr, "Invalid case from %s to uav_project_extern.SW.MissionWindow.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void uav_project_extern_SW_MissionWindow_apply(STACK_FRAME uav_project_extern_SW_MissionWindow this, IS_83A978 value);

#endif