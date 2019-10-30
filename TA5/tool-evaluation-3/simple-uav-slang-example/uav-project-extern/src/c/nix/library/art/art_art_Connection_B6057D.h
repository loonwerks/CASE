#ifndef SIREUM_H_art_art_Connection_B6057D
#define SIREUM_H_art_art_Connection_B6057D
#include <types.h>

// art.Connection[uav_project_extern.SW.MissionWindow]

#define art_Connection_B6057D_from_(this) ((art_Port_65F60A) &(this)->from)
#define art_Connection_B6057D_to_(this) ((art_Port_65F60A) &(this)->to)

B art_Connection_B6057D__eq(art_Connection_B6057D this, art_Connection_B6057D other);
inline B art_Connection_B6057D__ne(art_Connection_B6057D this, art_Connection_B6057D other) {
  return !art_Connection_B6057D__eq(this, other);
};
void art_Connection_B6057D_string_(STACK_FRAME String result, art_Connection_B6057D this);
void art_Connection_B6057D_cprint(art_Connection_B6057D this, B isOut);

inline B art_Connection_B6057D__is(STACK_FRAME void* this) {
  return ((art_Connection_B6057D) this)->type == Tart_Connection_B6057D;
}

inline art_Connection_B6057D art_Connection_B6057D__as(STACK_FRAME void *this) {
  if (art_Connection_B6057D__is(CALLER this)) return (art_Connection_B6057D) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[uav_project_extern.SW.MissionWindow].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_B6057D_apply(STACK_FRAME art_Connection_B6057D this, art_Port_65F60A from, art_Port_65F60A to);

#endif