#include <all.h>

// Option[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api]

B Option_9DEC86__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_9DE0EF: return T;
    case TNone_B594B8: return T;
    default: return F;
  }
}

Option_9DEC86 Option_9DEC86__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_9DE0EF: break;
    case TNone_B594B8: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_9DEC86) this;
}

void Option_9DEC86_string_(STACK_FRAME String result, Option_9DEC86 this);

void Option_9DEC86_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api result, Option_9DEC86 this) {
  switch (this->type) {
    case TSome_9DE0EF: Some_9DE0EF_get_(CALLER (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) result, (Some_9DE0EF) this); return;
    case TNone_B594B8: None_B594B8_get_(CALLER (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) result, (None_B594B8) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}