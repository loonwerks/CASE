#ifndef SIREUM_H_art_Empty
#define SIREUM_H_art_Empty

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Empty


B art_Empty__eq(art_Empty this, art_Empty other);
inline B art_Empty__ne(art_Empty this, art_Empty other) {
  return !art_Empty__eq(this, other);
};
void art_Empty_string_(STACK_FRAME String result, art_Empty this);
void art_Empty_cprint(art_Empty this, B isOut);

inline B art_Empty__is(STACK_FRAME void* this) {
  return ((art_Empty) this)->type == Tart_Empty;
}

inline art_Empty art_Empty__as(STACK_FRAME void *this) {
  if (art_Empty__is(CALLER this)) return (art_Empty) this;
  sfAbortImpl(CALLER "Invalid cast to art.Empty.");
  abort();
}

void art_Empty_apply(STACK_FRAME art_Empty this);

#ifdef __cplusplus
}
#endif

#endif