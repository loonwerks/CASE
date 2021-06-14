#ifndef SIREUM_H_art_TimeTriggered
#define SIREUM_H_art_TimeTriggered

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.TimeTriggered


B art_TimeTriggered__eq(art_TimeTriggered this, art_TimeTriggered other);
inline B art_TimeTriggered__ne(art_TimeTriggered this, art_TimeTriggered other) {
  return !art_TimeTriggered__eq(this, other);
};
void art_TimeTriggered_string_(STACK_FRAME String result, art_TimeTriggered this);
void art_TimeTriggered_cprint(art_TimeTriggered this, B isOut);

inline B art_TimeTriggered__is(STACK_FRAME void* this) {
  return ((art_TimeTriggered) this)->type == Tart_TimeTriggered;
}

inline art_TimeTriggered art_TimeTriggered__as(STACK_FRAME void *this) {
  if (art_TimeTriggered__is(CALLER this)) return (art_TimeTriggered) this;
  sfAbortImpl(CALLER "Invalid cast to art.TimeTriggered.");
  abort();
}

void art_TimeTriggered_apply(STACK_FRAME art_TimeTriggered this);

#ifdef __cplusplus
}
#endif

#endif