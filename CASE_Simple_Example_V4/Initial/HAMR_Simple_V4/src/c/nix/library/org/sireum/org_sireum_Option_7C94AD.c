#include <all.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]

B Option_7C94AD__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_9E368A: return T;
    case TNone_3F37D3: return T;
    default: return F;
  }
}

Option_7C94AD Option_7C94AD__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_9E368A: break;
    case TNone_3F37D3: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_7C94AD) this;
}

void Option_7C94AD_string_(STACK_FRAME String result, Option_7C94AD this);

void Option_7C94AD_get_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api result, Option_7C94AD this) {
  switch (this->type) {
    case TSome_9E368A: Some_9E368A_get_(CALLER (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) result, (Some_9E368A) this); return;
    case TNone_3F37D3: None_3F37D3_get_(CALLER (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) result, (None_3F37D3) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}