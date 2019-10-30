#ifndef SIREUM_H_art_art_Port_2C63FD
#define SIREUM_H_art_art_Port_2C63FD
#include <types.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl]

#define art_Port_2C63FD_id_(this) ((this)->id)
#define art_Port_2C63FD_name_(this) ((String) &(this)->name)
#define art_Port_2C63FD_mode_(this) ((this)->mode)

B art_Port_2C63FD__eq(art_Port_2C63FD this, art_Port_2C63FD other);
static inline B art_Port_2C63FD__ne(art_Port_2C63FD this, art_Port_2C63FD other) {
  return !art_Port_2C63FD__eq(this, other);
};
void art_Port_2C63FD_cprint(art_Port_2C63FD this, B isOut);
void art_Port_2C63FD_string(STACK_FRAME String result, art_Port_2C63FD this);

static inline B art_Port_2C63FD__is(STACK_FRAME void* this) {
  return ((art_Port_2C63FD) this)->type == Tart_Port_2C63FD;
}

static inline art_Port_2C63FD art_Port_2C63FD__as(STACK_FRAME void *this) {
  if (art_Port_2C63FD__is(CALLER this)) return (art_Port_2C63FD) this;
  fprintf(stderr, "Invalid case from %s to art.Port[ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_2C63FD_apply(STACK_FRAME art_Port_2C63FD this, Z id, String name, art_PortMode mode);

#endif