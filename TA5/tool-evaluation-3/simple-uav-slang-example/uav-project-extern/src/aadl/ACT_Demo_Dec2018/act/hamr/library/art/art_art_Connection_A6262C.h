#ifndef SIREUM_H_art_art_Connection_A6262C
#define SIREUM_H_art_art_Connection_A6262C
#include <types.h>

// art.Connection[S64]

#define art_Connection_A6262C_from_(this) ((art_Port_CBF210) &(this)->from)
#define art_Connection_A6262C_to_(this) ((art_Port_CBF210) &(this)->to)

B art_Connection_A6262C__eq(art_Connection_A6262C this, art_Connection_A6262C other);
inline B art_Connection_A6262C__ne(art_Connection_A6262C this, art_Connection_A6262C other) {
  return !art_Connection_A6262C__eq(this, other);
};
void art_Connection_A6262C_string_(STACK_FRAME String result, art_Connection_A6262C this);
void art_Connection_A6262C_cprint(art_Connection_A6262C this, B isOut);

inline B art_Connection_A6262C__is(STACK_FRAME void* this) {
  return ((art_Connection_A6262C) this)->type == Tart_Connection_A6262C;
}

inline art_Connection_A6262C art_Connection_A6262C__as(STACK_FRAME void *this) {
  if (art_Connection_A6262C__is(CALLER this)) return (art_Connection_A6262C) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[S64].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_A6262C_apply(STACK_FRAME art_Connection_A6262C this, art_Port_CBF210 from, art_Port_CBF210 to);

#endif