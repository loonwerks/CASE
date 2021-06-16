#include <all.h>

// Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]

B Option_96FA67__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_88F02A: return T;
    case TNone_E08F39: return T;
    default: return F;
  }
}

Option_96FA67 Option_96FA67__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_88F02A: break;
    case TNone_E08F39: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.AttestationManager_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_96FA67) this;
}

void Option_96FA67_string_(STACK_FRAME String result, Option_96FA67 this);

void Option_96FA67_get_(STACK_FRAME HAMR_SW_AttestationManager_Impl_Initialization_Api result, Option_96FA67 this) {
  switch (this->type) {
    case TSome_88F02A: Some_88F02A_get_(CALLER (HAMR_SW_AttestationManager_Impl_Initialization_Api) result, (Some_88F02A) this); return;
    case TNone_E08F39: None_E08F39_get_(CALLER (HAMR_SW_AttestationManager_Impl_Initialization_Api) result, (None_E08F39) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}