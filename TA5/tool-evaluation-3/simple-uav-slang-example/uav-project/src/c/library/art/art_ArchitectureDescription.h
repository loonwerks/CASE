#ifndef SIREUM_H_art_ArchitectureDescription
#define SIREUM_H_art_ArchitectureDescription
#include <types.h>

// art.ArchitectureDescription

#define art_ArchitectureDescription_components_(this) ((MS_852149) &(this)->components)
#define art_ArchitectureDescription_connections_(this) ((IS_08117A) &(this)->connections)

B art_ArchitectureDescription__eq(art_ArchitectureDescription this, art_ArchitectureDescription other);
static inline B art_ArchitectureDescription__ne(art_ArchitectureDescription this, art_ArchitectureDescription other) {
  return !art_ArchitectureDescription__eq(this, other);
};
void art_ArchitectureDescription_cprint(art_ArchitectureDescription this, B isOut);
void art_ArchitectureDescription_string(STACK_FRAME String result, art_ArchitectureDescription this);

static inline B art_ArchitectureDescription__is(STACK_FRAME void* this) {
  return ((art_ArchitectureDescription) this)->type == Tart_ArchitectureDescription;
}

static inline art_ArchitectureDescription art_ArchitectureDescription__as(STACK_FRAME void *this) {
  if (art_ArchitectureDescription__is(CALLER this)) return (art_ArchitectureDescription) this;
  fprintf(stderr, "Invalid case from %s to art.ArchitectureDescription.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void art_ArchitectureDescription_apply(STACK_FRAME art_ArchitectureDescription this, MS_852149 components, IS_08117A connections);

#endif