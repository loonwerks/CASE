#ifndef SIREUM_H_art_art_Connection_210187
#define SIREUM_H_art_art_Connection_210187
#include <types.h>

// art.Connection[uav_project_extern.SW.Command_Impl]

#define art_Connection_210187_from_(this) ((art_Port_311EA2) &(this)->from)
#define art_Connection_210187_to_(this) ((art_Port_311EA2) &(this)->to)

B art_Connection_210187__eq(art_Connection_210187 this, art_Connection_210187 other);
inline B art_Connection_210187__ne(art_Connection_210187 this, art_Connection_210187 other) {
  return !art_Connection_210187__eq(this, other);
};
void art_Connection_210187_string_(STACK_FRAME String result, art_Connection_210187 this);
void art_Connection_210187_cprint(art_Connection_210187 this, B isOut);

inline B art_Connection_210187__is(STACK_FRAME void* this) {
  return ((art_Connection_210187) this)->type == Tart_Connection_210187;
}

inline art_Connection_210187 art_Connection_210187__as(STACK_FRAME void *this) {
  if (art_Connection_210187__is(CALLER this)) return (art_Connection_210187) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[uav_project_extern.SW.Command_Impl].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_210187_apply(STACK_FRAME art_Connection_210187 this, art_Port_311EA2 from, art_Port_311EA2 to);

#endif