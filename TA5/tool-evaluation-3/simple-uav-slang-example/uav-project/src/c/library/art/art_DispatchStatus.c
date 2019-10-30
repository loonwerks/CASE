#include <all.h>

// art.DispatchStatus

B art_DispatchStatus__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_TimeTriggered: return T;
    case Tart_EventTriggered: return T;
    default: return F;
  }
}

art_DispatchStatus art_DispatchStatus__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_TimeTriggered: break;
    case Tart_EventTriggered: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DispatchStatus.", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (art_DispatchStatus) this;
}