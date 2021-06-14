#include <all.h>

// Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]

B Option_680CAA__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_CFA8D1: return T;
    case TNone_600AAD: return T;
    default: return F;
  }
}

Option_680CAA Option_680CAA__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_CFA8D1: break;
    case TNone_600AAD: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_680CAA) this;
}

void Option_680CAA_string_(STACK_FRAME String result, Option_680CAA this);

void Option_680CAA_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api result, Option_680CAA this) {
  switch (this->type) {
    case TSome_CFA8D1: Some_CFA8D1_get_(CALLER (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) result, (Some_CFA8D1) this); return;
    case TNone_600AAD: None_600AAD_get_(CALLER (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) result, (None_600AAD) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}