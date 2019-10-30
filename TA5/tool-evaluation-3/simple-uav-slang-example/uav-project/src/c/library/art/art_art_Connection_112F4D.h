#ifndef SIREUM_H_art_art_Connection_112F4D
#define SIREUM_H_art_art_Connection_112F4D
#include <types.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]

#define art_Connection_112F4D_from_(this) ((art_Port_2D3735) &(this)->from)
#define art_Connection_112F4D_to_(this) ((art_Port_2D3735) &(this)->to)

B art_Connection_112F4D__eq(art_Connection_112F4D this, art_Connection_112F4D other);
static inline B art_Connection_112F4D__ne(art_Connection_112F4D this, art_Connection_112F4D other) {
  return !art_Connection_112F4D__eq(this, other);
};
void art_Connection_112F4D_cprint(art_Connection_112F4D this, B isOut);
void art_Connection_112F4D_string(STACK_FRAME String result, art_Connection_112F4D this);

static inline B art_Connection_112F4D__is(STACK_FRAME void* this) {
  return ((art_Connection_112F4D) this)->type == Tart_Connection_112F4D;
}

static inline art_Connection_112F4D art_Connection_112F4D__as(STACK_FRAME void *this) {
  if (art_Connection_112F4D__is(CALLER this)) return (art_Connection_112F4D) this;
  fprintf(stderr, "Invalid case from %s to art.Connection[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Connection_112F4D_apply(STACK_FRAME art_Connection_112F4D this, art_Port_2D3735 from, art_Port_2D3735 to);

#endif