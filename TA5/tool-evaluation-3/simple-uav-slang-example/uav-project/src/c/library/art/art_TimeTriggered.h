#ifndef SIREUM_H_art_TimeTriggered
#define SIREUM_H_art_TimeTriggered
#include <types.h>

// art.TimeTriggered


B art_TimeTriggered__eq(art_TimeTriggered this, art_TimeTriggered other);
static inline B art_TimeTriggered__ne(art_TimeTriggered this, art_TimeTriggered other) {
  return !art_TimeTriggered__eq(this, other);
};
void art_TimeTriggered_cprint(art_TimeTriggered this, B isOut);
void art_TimeTriggered_string(STACK_FRAME String result, art_TimeTriggered this);

static inline B art_TimeTriggered__is(STACK_FRAME void* this) {
  return ((art_TimeTriggered) this)->type == Tart_TimeTriggered;
}

static inline art_TimeTriggered art_TimeTriggered__as(STACK_FRAME void *this) {
  if (art_TimeTriggered__is(CALLER this)) return (art_TimeTriggered) this;
  fprintf(stderr, "Invalid case from %s to art.TimeTriggered.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_TimeTriggered_apply(STACK_FRAME art_TimeTriggered this);

#endif