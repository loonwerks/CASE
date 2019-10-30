#ifndef SIREUM_H_art_art_Port_CBF210
#define SIREUM_H_art_art_Port_CBF210
#include <types.h>

// art.Port[S64]

#define art_Port_CBF210_id_(this) ((this)->id)
#define art_Port_CBF210_name_(this) ((String) &(this)->name)
#define art_Port_CBF210_mode_(this) ((this)->mode)

B art_Port_CBF210__eq(art_Port_CBF210 this, art_Port_CBF210 other);
inline B art_Port_CBF210__ne(art_Port_CBF210 this, art_Port_CBF210 other) {
  return !art_Port_CBF210__eq(this, other);
};
void art_Port_CBF210_string_(STACK_FRAME String result, art_Port_CBF210 this);
void art_Port_CBF210_cprint(art_Port_CBF210 this, B isOut);

inline B art_Port_CBF210__is(STACK_FRAME void* this) {
  return ((art_Port_CBF210) this)->type == Tart_Port_CBF210;
}

inline art_Port_CBF210 art_Port_CBF210__as(STACK_FRAME void *this) {
  if (art_Port_CBF210__is(CALLER this)) return (art_Port_CBF210) this;
  fprintf(stderr, "Invalid case from %s to art.Port[S64].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_CBF210_apply(STACK_FRAME art_Port_CBF210 this, Z id, String name, art_PortMode mode);

#endif