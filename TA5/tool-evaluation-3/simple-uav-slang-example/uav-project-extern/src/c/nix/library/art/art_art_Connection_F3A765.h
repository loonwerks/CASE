#ifndef SIREUM_H_art_art_Connection_F3A765
#define SIREUM_H_art_art_Connection_F3A765
#include <types.h>

// art.Connection[B]

#define art_Connection_F3A765_from_(this) ((art_Port_C0524D) &(this)->from)
#define art_Connection_F3A765_to_(this) ((art_Port_C0524D) &(this)->to)

B art_Connection_F3A765__eq(art_Connection_F3A765 this, art_Connection_F3A765 other);
inline B art_Connection_F3A765__ne(art_Connection_F3A765 this, art_Connection_F3A765 other) {
  return !art_Connection_F3A765__eq(this, other);
};
void art_Connection_F3A765_string_(STACK_FRAME String result, art_Connection_F3A765 this);
void art_Connection_F3A765_cprint(art_Connection_F3A765 this, B isOut);

inline B art_Connection_F3A765__is(STACK_FRAME void* this) {
  return ((art_Connection_F3A765) this)->type == Tart_Connection_F3A765;
}

inline art_Connection_F3A765 art_Connection_F3A765__as(STACK_FRAME void *this) {
  if (art_Connection_F3A765__is(CALLER this)) return (art_Connection_F3A765) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[B].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_F3A765_apply(STACK_FRAME art_Connection_F3A765 this, art_Port_C0524D from, art_Port_C0524D to);

#endif