#ifndef SIREUM_H_art_ArchitectureDescription
#define SIREUM_H_art_ArchitectureDescription

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.ArchitectureDescription

#define art_ArchitectureDescription_components_(this) ((IS_7E8796) &(this)->components)
#define art_ArchitectureDescription_connections_(this) ((IS_08117A) &(this)->connections)

B art_ArchitectureDescription__eq(art_ArchitectureDescription this, art_ArchitectureDescription other);
inline B art_ArchitectureDescription__ne(art_ArchitectureDescription this, art_ArchitectureDescription other) {
  return !art_ArchitectureDescription__eq(this, other);
};
void art_ArchitectureDescription_string_(STACK_FRAME String result, art_ArchitectureDescription this);
void art_ArchitectureDescription_cprint(art_ArchitectureDescription this, B isOut);

inline B art_ArchitectureDescription__is(STACK_FRAME void* this) {
  return ((art_ArchitectureDescription) this)->type == Tart_ArchitectureDescription;
}

inline art_ArchitectureDescription art_ArchitectureDescription__as(STACK_FRAME void *this) {
  if (art_ArchitectureDescription__is(CALLER this)) return (art_ArchitectureDescription) this;
  sfAbortImpl(CALLER "Invalid cast to art.ArchitectureDescription.");
  abort();
}

void art_ArchitectureDescription_apply(STACK_FRAME art_ArchitectureDescription this, IS_7E8796 components, IS_08117A connections);

#ifdef __cplusplus
}
#endif

#endif