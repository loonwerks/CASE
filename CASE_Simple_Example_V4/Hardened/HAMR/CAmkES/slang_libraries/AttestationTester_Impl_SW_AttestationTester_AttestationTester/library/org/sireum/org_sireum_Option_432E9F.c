#include <all.h>

// Option[HAMR.SW.AttestationTester_Impl_Initialization_Api]

B Option_432E9F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_4F9B23: return T;
    case TNone_570D44: return T;
    default: return F;
  }
}

Option_432E9F Option_432E9F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_4F9B23: break;
    case TNone_570D44: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.AttestationTester_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_432E9F) this;
}

void Option_432E9F_string_(STACK_FRAME String result, Option_432E9F this);

void Option_432E9F_get_(STACK_FRAME HAMR_SW_AttestationTester_Impl_Initialization_Api result, Option_432E9F this) {
  switch (this->type) {
    case TSome_4F9B23: Some_4F9B23_get_(CALLER (HAMR_SW_AttestationTester_Impl_Initialization_Api) result, (Some_4F9B23) this); return;
    case TNone_570D44: None_570D44_get_(CALLER (HAMR_SW_AttestationTester_Impl_Initialization_Api) result, (None_570D44) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}