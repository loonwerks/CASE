#include <all.h>

// MOption[art.Bridge]

B MOption_EA1D29__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TMSome_D3D128: return T;
    case TMNone_2A2E1D: return T;
    default: return F;
  }
}

MOption_EA1D29 MOption_EA1D29__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TMSome_D3D128: break;
    case TMNone_2A2E1D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to MOption[art.Bridge].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (MOption_EA1D29) this;
}

void MOption_EA1D29_string_(STACK_FRAME String result, MOption_EA1D29 this);