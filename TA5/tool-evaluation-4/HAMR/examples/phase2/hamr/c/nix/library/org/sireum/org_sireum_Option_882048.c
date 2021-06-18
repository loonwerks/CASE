#include <all.h>

// Option[Z]

B Option_882048__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_76463B: return T;
    case TSome_488F47: return T;
    default: return F;
  }
}

Option_882048 Option_882048__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_76463B: break;
    case TSome_488F47: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[Z].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_882048) this;
}

void Option_882048_string_(STACK_FRAME String result, Option_882048 this);

Z Option_882048_get_(STACK_FRAME Option_882048 this) {
  switch (this->type) {
    case TNone_76463B: return None_76463B_get_(CALLER (None_76463B) this);
    case TSome_488F47: return Some_488F47_get_(CALLER (Some_488F47) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}