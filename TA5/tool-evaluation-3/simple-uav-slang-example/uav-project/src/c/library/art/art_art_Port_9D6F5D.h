#ifndef SIREUM_H_art_art_Port_9D6F5D
#define SIREUM_H_art_art_Port_9D6F5D
#include <types.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]

#define art_Port_9D6F5D_id_(this) ((this)->id)
#define art_Port_9D6F5D_name_(this) ((String) &(this)->name)
#define art_Port_9D6F5D_mode_(this) ((this)->mode)

B art_Port_9D6F5D__eq(art_Port_9D6F5D this, art_Port_9D6F5D other);
static inline B art_Port_9D6F5D__ne(art_Port_9D6F5D this, art_Port_9D6F5D other) {
  return !art_Port_9D6F5D__eq(this, other);
};
void art_Port_9D6F5D_cprint(art_Port_9D6F5D this, B isOut);
void art_Port_9D6F5D_string(STACK_FRAME String result, art_Port_9D6F5D this);

static inline B art_Port_9D6F5D__is(STACK_FRAME void* this) {
  return ((art_Port_9D6F5D) this)->type == Tart_Port_9D6F5D;
}

static inline art_Port_9D6F5D art_Port_9D6F5D__as(STACK_FRAME void *this) {
  if (art_Port_9D6F5D__is(CALLER this)) return (art_Port_9D6F5D) this;
  fprintf(stderr, "Invalid case from %s to art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_9D6F5D_apply(STACK_FRAME art_Port_9D6F5D this, Z id, String name, art_PortMode mode);

#endif