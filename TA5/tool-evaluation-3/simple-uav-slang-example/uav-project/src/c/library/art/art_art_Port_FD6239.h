#ifndef SIREUM_H_art_art_Port_FD6239
#define SIREUM_H_art_art_Port_FD6239
#include <types.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]

#define art_Port_FD6239_id_(this) ((this)->id)
#define art_Port_FD6239_name_(this) ((String) &(this)->name)
#define art_Port_FD6239_mode_(this) ((this)->mode)

B art_Port_FD6239__eq(art_Port_FD6239 this, art_Port_FD6239 other);
static inline B art_Port_FD6239__ne(art_Port_FD6239 this, art_Port_FD6239 other) {
  return !art_Port_FD6239__eq(this, other);
};
void art_Port_FD6239_cprint(art_Port_FD6239 this, B isOut);
void art_Port_FD6239_string(STACK_FRAME String result, art_Port_FD6239 this);

static inline B art_Port_FD6239__is(STACK_FRAME void* this) {
  return ((art_Port_FD6239) this)->type == Tart_Port_FD6239;
}

static inline art_Port_FD6239 art_Port_FD6239__as(STACK_FRAME void *this) {
  if (art_Port_FD6239__is(CALLER this)) return (art_Port_FD6239) this;
  fprintf(stderr, "Invalid case from %s to art.Port[ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_FD6239_apply(STACK_FRAME art_Port_FD6239 this, Z id, String name, art_PortMode mode);

#endif