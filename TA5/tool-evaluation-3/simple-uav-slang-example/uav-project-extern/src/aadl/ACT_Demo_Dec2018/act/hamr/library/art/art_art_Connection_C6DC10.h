#ifndef SIREUM_H_art_art_Connection_C6DC10
#define SIREUM_H_art_art_Connection_C6DC10
#include <types.h>

// art.Connection[uav_project_extern.SW.Mission]

#define art_Connection_C6DC10_from_(this) ((art_Port_97EF76) &(this)->from)
#define art_Connection_C6DC10_to_(this) ((art_Port_97EF76) &(this)->to)

B art_Connection_C6DC10__eq(art_Connection_C6DC10 this, art_Connection_C6DC10 other);
inline B art_Connection_C6DC10__ne(art_Connection_C6DC10 this, art_Connection_C6DC10 other) {
  return !art_Connection_C6DC10__eq(this, other);
};
void art_Connection_C6DC10_string_(STACK_FRAME String result, art_Connection_C6DC10 this);
void art_Connection_C6DC10_cprint(art_Connection_C6DC10 this, B isOut);

inline B art_Connection_C6DC10__is(STACK_FRAME void* this) {
  return ((art_Connection_C6DC10) this)->type == Tart_Connection_C6DC10;
}

inline art_Connection_C6DC10 art_Connection_C6DC10__as(STACK_FRAME void *this) {
  if (art_Connection_C6DC10__is(CALLER this)) return (art_Connection_C6DC10) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[uav_project_extern.SW.Mission].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_C6DC10_apply(STACK_FRAME art_Connection_C6DC10 this, art_Port_97EF76 from, art_Port_97EF76 to);

#endif