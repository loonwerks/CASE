#ifndef SIREUM_H_art_art_Connection_A24F1E
#define SIREUM_H_art_art_Connection_A24F1E
#include <types.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]

#define art_Connection_A24F1E_from_(this) ((art_Port_9D6F5D) &(this)->from)
#define art_Connection_A24F1E_to_(this) ((art_Port_9D6F5D) &(this)->to)

B art_Connection_A24F1E__eq(art_Connection_A24F1E this, art_Connection_A24F1E other);
static inline B art_Connection_A24F1E__ne(art_Connection_A24F1E this, art_Connection_A24F1E other) {
  return !art_Connection_A24F1E__eq(this, other);
};
void art_Connection_A24F1E_cprint(art_Connection_A24F1E this, B isOut);
void art_Connection_A24F1E_string(STACK_FRAME String result, art_Connection_A24F1E this);

static inline B art_Connection_A24F1E__is(STACK_FRAME void* this) {
  return ((art_Connection_A24F1E) this)->type == Tart_Connection_A24F1E;
}

static inline art_Connection_A24F1E art_Connection_A24F1E__as(STACK_FRAME void *this) {
  if (art_Connection_A24F1E__is(CALLER this)) return (art_Connection_A24F1E) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_A24F1E_apply(STACK_FRAME art_Connection_A24F1E this, art_Port_9D6F5D from, art_Port_9D6F5D to);

#endif