#ifndef SIREUM_H_art_art_Port_2D3735
#define SIREUM_H_art_art_Port_2D3735
#include <types.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]

#define art_Port_2D3735_id_(this) ((this)->id)
#define art_Port_2D3735_name_(this) ((String) &(this)->name)
#define art_Port_2D3735_mode_(this) ((this)->mode)

B art_Port_2D3735__eq(art_Port_2D3735 this, art_Port_2D3735 other);
static inline B art_Port_2D3735__ne(art_Port_2D3735 this, art_Port_2D3735 other) {
  return !art_Port_2D3735__eq(this, other);
};
void art_Port_2D3735_cprint(art_Port_2D3735 this, B isOut);
void art_Port_2D3735_string(STACK_FRAME String result, art_Port_2D3735 this);

static inline B art_Port_2D3735__is(STACK_FRAME void* this) {
  return ((art_Port_2D3735) this)->type == Tart_Port_2D3735;
}

static inline art_Port_2D3735 art_Port_2D3735__as(STACK_FRAME void *this) {
  if (art_Port_2D3735__is(CALLER this)) return (art_Port_2D3735) this;
  fprintf(stderr, "Invalid case from %s to art.Port[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_2D3735_apply(STACK_FRAME art_Port_2D3735 this, Z id, String name, art_PortMode mode);

#endif