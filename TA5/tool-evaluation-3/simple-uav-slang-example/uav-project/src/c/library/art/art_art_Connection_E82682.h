#ifndef SIREUM_H_art_art_Connection_E82682
#define SIREUM_H_art_art_Connection_E82682
#include <types.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Mission]

#define art_Connection_E82682_from_(this) ((art_Port_D7D05E) &(this)->from)
#define art_Connection_E82682_to_(this) ((art_Port_D7D05E) &(this)->to)

B art_Connection_E82682__eq(art_Connection_E82682 this, art_Connection_E82682 other);
static inline B art_Connection_E82682__ne(art_Connection_E82682 this, art_Connection_E82682 other) {
  return !art_Connection_E82682__eq(this, other);
};
void art_Connection_E82682_cprint(art_Connection_E82682 this, B isOut);
void art_Connection_E82682_string(STACK_FRAME String result, art_Connection_E82682 this);

static inline B art_Connection_E82682__is(STACK_FRAME void* this) {
  return ((art_Connection_E82682) this)->type == Tart_Connection_E82682;
}

static inline art_Connection_E82682 art_Connection_E82682__as(STACK_FRAME void *this) {
  if (art_Connection_E82682__is(CALLER this)) return (art_Connection_E82682) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Mission].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_E82682_apply(STACK_FRAME art_Connection_E82682 this, art_Port_D7D05E from, art_Port_D7D05E to);

#endif