#include <all.h>

// Option[(Z, art.DataContent)]

B Option_02FA6D__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_E9D1E5: return T;
    case TNone_93AA2B: return T;
    default: return F;
  }
}

Option_02FA6D Option_02FA6D__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_E9D1E5: break;
    case TNone_93AA2B: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[(Z, art.DataContent)].", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_02FA6D) this;
}

B Option_02FA6D_isEmpty_(STACK_FRAME Option_02FA6D this) {
  switch (this->type) {
    case TSome_E9D1E5: return Some_E9D1E5_isEmpty_(CALLER (Some_E9D1E5) this);
    case TNone_93AA2B: return None_93AA2B_isEmpty_(CALLER (None_93AA2B) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}