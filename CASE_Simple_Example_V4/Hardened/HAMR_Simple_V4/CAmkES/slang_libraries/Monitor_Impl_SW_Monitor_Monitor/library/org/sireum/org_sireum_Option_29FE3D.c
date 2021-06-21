#include <all.h>

// Option[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]

B Option_29FE3D__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D81833: return T;
    case TSome_E0238A: return T;
    default: return F;
  }
}

Option_29FE3D Option_29FE3D__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D81833: break;
    case TSome_E0238A: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_29FE3D) this;
}

void Option_29FE3D_string_(STACK_FRAME String result, Option_29FE3D this);

void Option_29FE3D_get_(STACK_FRAME HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api result, Option_29FE3D this) {
  switch (this->type) {
    case TNone_D81833: None_D81833_get_(CALLER (HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api) result, (None_D81833) this); return;
    case TSome_E0238A: Some_E0238A_get_(CALLER (HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api) result, (Some_E0238A) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}