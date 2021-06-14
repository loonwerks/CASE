#include <all.h>

// Option[Z]

B Option_882048__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_488F47: return T;
    case TNone_76463B: return T;
    default: return F;
  }
}

Option_882048 Option_882048__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_488F47: break;
    case TNone_76463B: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[Z].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_882048) this;
}

void Option_882048_string_(STACK_FRAME String result, Option_882048 this);

Z Option_882048_get_(STACK_FRAME Option_882048 this) {
  switch (this->type) {
    case TSome_488F47: return Some_488F47_get_(CALLER (Some_488F47) this);
    case TNone_76463B: return None_76463B_get_(CALLER (None_76463B) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}