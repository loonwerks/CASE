#ifndef SIREUM_H_art_art_Port_695448
#define SIREUM_H_art_art_Port_695448
#include <types.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]

#define art_Port_695448_id_(this) ((this)->id)
#define art_Port_695448_name_(this) ((String) &(this)->name)
#define art_Port_695448_mode_(this) ((this)->mode)

B art_Port_695448__eq(art_Port_695448 this, art_Port_695448 other);
static inline B art_Port_695448__ne(art_Port_695448 this, art_Port_695448 other) {
  return !art_Port_695448__eq(this, other);
};
void art_Port_695448_cprint(art_Port_695448 this, B isOut);
void art_Port_695448_string(STACK_FRAME String result, art_Port_695448 this);

static inline B art_Port_695448__is(STACK_FRAME void* this) {
  return ((art_Port_695448) this)->type == Tart_Port_695448;
}

static inline art_Port_695448 art_Port_695448__as(STACK_FRAME void *this) {
  if (art_Port_695448__is(CALLER this)) return (art_Port_695448) this;
  fprintf(stderr, "Invalid case from %s to art.Port[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_695448_apply(STACK_FRAME art_Port_695448 this, Z id, String name, art_PortMode mode);

#endif