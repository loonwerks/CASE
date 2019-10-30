#ifndef SIREUM_H_art_art_Port_97EF76
#define SIREUM_H_art_art_Port_97EF76
#include <types.h>

// art.Port[uav_project_extern.SW.Mission]

#define art_Port_97EF76_id_(this) ((this)->id)
#define art_Port_97EF76_name_(this) ((String) &(this)->name)
#define art_Port_97EF76_mode_(this) ((this)->mode)

B art_Port_97EF76__eq(art_Port_97EF76 this, art_Port_97EF76 other);
inline B art_Port_97EF76__ne(art_Port_97EF76 this, art_Port_97EF76 other) {
  return !art_Port_97EF76__eq(this, other);
};
void art_Port_97EF76_string_(STACK_FRAME String result, art_Port_97EF76 this);
void art_Port_97EF76_cprint(art_Port_97EF76 this, B isOut);

inline B art_Port_97EF76__is(STACK_FRAME void* this) {
  return ((art_Port_97EF76) this)->type == Tart_Port_97EF76;
}

inline art_Port_97EF76 art_Port_97EF76__as(STACK_FRAME void *this) {
  if (art_Port_97EF76__is(CALLER this)) return (art_Port_97EF76) this;
  fprintf(stderr, "Invalid case from %s to art.Port[uav_project_extern.SW.Mission].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_97EF76_apply(STACK_FRAME art_Port_97EF76 this, Z id, String name, art_PortMode mode);

#endif