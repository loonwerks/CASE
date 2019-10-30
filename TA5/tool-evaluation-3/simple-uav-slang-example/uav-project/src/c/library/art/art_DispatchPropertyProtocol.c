#include <all.h>

// art.DispatchPropertyProtocol

B art_DispatchPropertyProtocol__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_DispatchPropertyProtocol_Sporadic: return T;
    case Tart_DispatchPropertyProtocol_Periodic: return T;
    default: return F;
  }
}

art_DispatchPropertyProtocol art_DispatchPropertyProtocol__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_DispatchPropertyProtocol_Sporadic: break;
    case Tart_DispatchPropertyProtocol_Periodic: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DispatchPropertyProtocol.", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (art_DispatchPropertyProtocol) this;
}