#include <all.h>

// art.DispatchStatus

B art_DispatchStatus__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_EventTriggered: return T;
    case Tart_TimeTriggered: return T;
    default: return F;
  }
}

art_DispatchStatus art_DispatchStatus__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_EventTriggered: break;
    case Tart_TimeTriggered: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DispatchStatus.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_DispatchStatus) this;
}

void art_DispatchStatus_string_(STACK_FRAME String result, art_DispatchStatus this);