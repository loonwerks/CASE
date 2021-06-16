#include <all.h>

// Option[HAMR.SW.AttestationManager_Impl_Operational_Api]

B Option_75F258__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_6D831B: return T;
    case TNone_AAA378: return T;
    default: return F;
  }
}

Option_75F258 Option_75F258__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_6D831B: break;
    case TNone_AAA378: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.AttestationManager_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_75F258) this;
}

void Option_75F258_string_(STACK_FRAME String result, Option_75F258 this);

void Option_75F258_get_(STACK_FRAME HAMR_SW_AttestationManager_Impl_Operational_Api result, Option_75F258 this) {
  switch (this->type) {
    case TSome_6D831B: Some_6D831B_get_(CALLER (HAMR_SW_AttestationManager_Impl_Operational_Api) result, (Some_6D831B) this); return;
    case TNone_AAA378: None_AAA378_get_(CALLER (HAMR_SW_AttestationManager_Impl_Operational_Api) result, (None_AAA378) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}