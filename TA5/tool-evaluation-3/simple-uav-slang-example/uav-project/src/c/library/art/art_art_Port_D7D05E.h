#ifndef SIREUM_H_art_art_Port_D7D05E
#define SIREUM_H_art_art_Port_D7D05E
#include <types.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.SW.Mission]

#define art_Port_D7D05E_id_(this) ((this)->id)
#define art_Port_D7D05E_name_(this) ((String) &(this)->name)
#define art_Port_D7D05E_mode_(this) ((this)->mode)

B art_Port_D7D05E__eq(art_Port_D7D05E this, art_Port_D7D05E other);
static inline B art_Port_D7D05E__ne(art_Port_D7D05E this, art_Port_D7D05E other) {
  return !art_Port_D7D05E__eq(this, other);
};
void art_Port_D7D05E_cprint(art_Port_D7D05E this, B isOut);
void art_Port_D7D05E_string(STACK_FRAME String result, art_Port_D7D05E this);

static inline B art_Port_D7D05E__is(STACK_FRAME void* this) {
  return ((art_Port_D7D05E) this)->type == Tart_Port_D7D05E;
}

static inline art_Port_D7D05E art_Port_D7D05E__as(STACK_FRAME void *this) {
  if (art_Port_D7D05E__is(CALLER this)) return (art_Port_D7D05E) this;
  fprintf(stderr, "Invalid case from %s to art.Port[ACT_Demo_Dec2018__camkes_X.SW.Mission].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_D7D05E_apply(STACK_FRAME art_Port_D7D05E this, Z id, String name, art_PortMode mode);

#endif