#ifndef SIREUM_H_art_art_Port_311EA2
#define SIREUM_H_art_art_Port_311EA2
#include <types.h>

// art.Port[uav_project_extern.SW.Command_Impl]

#define art_Port_311EA2_id_(this) ((this)->id)
#define art_Port_311EA2_name_(this) ((String) &(this)->name)
#define art_Port_311EA2_mode_(this) ((this)->mode)

B art_Port_311EA2__eq(art_Port_311EA2 this, art_Port_311EA2 other);
inline B art_Port_311EA2__ne(art_Port_311EA2 this, art_Port_311EA2 other) {
  return !art_Port_311EA2__eq(this, other);
};
void art_Port_311EA2_string_(STACK_FRAME String result, art_Port_311EA2 this);
void art_Port_311EA2_cprint(art_Port_311EA2 this, B isOut);

inline B art_Port_311EA2__is(STACK_FRAME void* this) {
  return ((art_Port_311EA2) this)->type == Tart_Port_311EA2;
}

inline art_Port_311EA2 art_Port_311EA2__as(STACK_FRAME void *this) {
  if (art_Port_311EA2__is(CALLER this)) return (art_Port_311EA2) this;
  fprintf(stderr, "Invalid case from %s to art.Port[uav_project_extern.SW.Command_Impl].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_Port_311EA2_apply(STACK_FRAME art_Port_311EA2 this, Z id, String name, art_PortMode mode);

#endif