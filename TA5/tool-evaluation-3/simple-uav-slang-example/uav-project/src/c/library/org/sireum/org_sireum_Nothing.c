#include <all.h>

// Nothing

B Nothing__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    default: return F;
  }
}

Nothing Nothing__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    default:
      fprintf(stderr, "Invalid cast from %s to Nothing.", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (Nothing) this;
}