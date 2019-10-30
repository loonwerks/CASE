#ifndef SIREUM_H_art_art_Port_446859
#define SIREUM_H_art_art_Port_446859
#include <types.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]

#define art_Port_446859_id_(this) ((this)->id)
#define art_Port_446859_name_(this) ((String) &(this)->name)
#define art_Port_446859_mode_(this) ((this)->mode)

B art_Port_446859__eq(art_Port_446859 this, art_Port_446859 other);
static inline B art_Port_446859__ne(art_Port_446859 this, art_Port_446859 other) {
  return !art_Port_446859__eq(this, other);
};
void art_Port_446859_cprint(art_Port_446859 this, B isOut);
void art_Port_446859_string(STACK_FRAME String result, art_Port_446859 this);

static inline B art_Port_446859__is(STACK_FRAME void* this) {
  return ((art_Port_446859) this)->type == Tart_Port_446859;
}

static inline art_Port_446859 art_Port_446859__as(STACK_FRAME void *this) {
  if (art_Port_446859__is(CALLER this)) return (art_Port_446859) this;
  fprintf(stderr, "Invalid case from %s to art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_446859_apply(STACK_FRAME art_Port_446859 this, Z id, String name, art_PortMode mode);

#endif