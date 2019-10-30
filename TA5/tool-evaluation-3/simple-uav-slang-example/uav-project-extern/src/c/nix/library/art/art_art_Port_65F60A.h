#ifndef SIREUM_H_art_art_Port_65F60A
#define SIREUM_H_art_art_Port_65F60A
#include <types.h>

// art.Port[uav_project_extern.SW.MissionWindow]

#define art_Port_65F60A_id_(this) ((this)->id)
#define art_Port_65F60A_name_(this) ((String) &(this)->name)
#define art_Port_65F60A_mode_(this) ((this)->mode)

B art_Port_65F60A__eq(art_Port_65F60A this, art_Port_65F60A other);
inline B art_Port_65F60A__ne(art_Port_65F60A this, art_Port_65F60A other) {
  return !art_Port_65F60A__eq(this, other);
};
void art_Port_65F60A_string_(STACK_FRAME String result, art_Port_65F60A this);
void art_Port_65F60A_cprint(art_Port_65F60A this, B isOut);

inline B art_Port_65F60A__is(STACK_FRAME void* this) {
  return ((art_Port_65F60A) this)->type == Tart_Port_65F60A;
}

inline art_Port_65F60A art_Port_65F60A__as(STACK_FRAME void *this) {
  if (art_Port_65F60A__is(CALLER this)) return (art_Port_65F60A) this;
  fprintf(stderr, "Invalid case from %s to art.Port[uav_project_extern.SW.MissionWindow].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_65F60A_apply(STACK_FRAME art_Port_65F60A this, Z id, String name, art_PortMode mode);

#endif