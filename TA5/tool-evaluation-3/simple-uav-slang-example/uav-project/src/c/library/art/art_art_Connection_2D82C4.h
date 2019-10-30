#ifndef SIREUM_H_art_art_Connection_2D82C4
#define SIREUM_H_art_art_Connection_2D82C4
#include <types.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]

#define art_Connection_2D82C4_from_(this) ((art_Port_695448) &(this)->from)
#define art_Connection_2D82C4_to_(this) ((art_Port_695448) &(this)->to)

B art_Connection_2D82C4__eq(art_Connection_2D82C4 this, art_Connection_2D82C4 other);
static inline B art_Connection_2D82C4__ne(art_Connection_2D82C4 this, art_Connection_2D82C4 other) {
  return !art_Connection_2D82C4__eq(this, other);
};
void art_Connection_2D82C4_cprint(art_Connection_2D82C4 this, B isOut);
void art_Connection_2D82C4_string(STACK_FRAME String result, art_Connection_2D82C4 this);

static inline B art_Connection_2D82C4__is(STACK_FRAME void* this) {
  return ((art_Connection_2D82C4) this)->type == Tart_Connection_2D82C4;
}

static inline art_Connection_2D82C4 art_Connection_2D82C4__as(STACK_FRAME void *this) {
  if (art_Connection_2D82C4__is(CALLER this)) return (art_Connection_2D82C4) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_2D82C4_apply(STACK_FRAME art_Connection_2D82C4 this, art_Port_695448 from, art_Port_695448 to);

#endif