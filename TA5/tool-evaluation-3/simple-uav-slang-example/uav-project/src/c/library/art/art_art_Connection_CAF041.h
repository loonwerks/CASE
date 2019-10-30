#ifndef SIREUM_H_art_art_Connection_CAF041
#define SIREUM_H_art_art_Connection_CAF041
#include <types.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]

#define art_Connection_CAF041_from_(this) ((art_Port_446859) &(this)->from)
#define art_Connection_CAF041_to_(this) ((art_Port_446859) &(this)->to)

B art_Connection_CAF041__eq(art_Connection_CAF041 this, art_Connection_CAF041 other);
static inline B art_Connection_CAF041__ne(art_Connection_CAF041 this, art_Connection_CAF041 other) {
  return !art_Connection_CAF041__eq(this, other);
};
void art_Connection_CAF041_cprint(art_Connection_CAF041 this, B isOut);
void art_Connection_CAF041_string(STACK_FRAME String result, art_Connection_CAF041 this);

static inline B art_Connection_CAF041__is(STACK_FRAME void* this) {
  return ((art_Connection_CAF041) this)->type == Tart_Connection_CAF041;
}

static inline art_Connection_CAF041 art_Connection_CAF041__as(STACK_FRAME void *this) {
  if (art_Connection_CAF041__is(CALLER this)) return (art_Connection_CAF041) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_CAF041_apply(STACK_FRAME art_Connection_CAF041 this, art_Port_446859 from, art_Port_446859 to);

#endif