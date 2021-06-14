#ifndef SIREUM_H_art_EventTriggered
#define SIREUM_H_art_EventTriggered

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.EventTriggered

#define art_EventTriggered_portIds_(this) ((IS_82ABD8) &(this)->portIds)

B art_EventTriggered__eq(art_EventTriggered this, art_EventTriggered other);
inline B art_EventTriggered__ne(art_EventTriggered this, art_EventTriggered other) {
  return !art_EventTriggered__eq(this, other);
};
void art_EventTriggered_string_(STACK_FRAME String result, art_EventTriggered this);
void art_EventTriggered_cprint(art_EventTriggered this, B isOut);

inline B art_EventTriggered__is(STACK_FRAME void* this) {
  return ((art_EventTriggered) this)->type == Tart_EventTriggered;
}

inline art_EventTriggered art_EventTriggered__as(STACK_FRAME void *this) {
  if (art_EventTriggered__is(CALLER this)) return (art_EventTriggered) this;
  sfAbortImpl(CALLER "Invalid cast to art.EventTriggered.");
  abort();
}

void art_EventTriggered_apply(STACK_FRAME art_EventTriggered this, IS_82ABD8 portIds);

#ifdef __cplusplus
}
#endif

#endif