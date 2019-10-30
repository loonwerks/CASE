#include <all.h>

// Option[ACT_Demo_Dec2018__camkes_X.SW.Mission]

B Option_6B846D__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_0CCA05: return T;
    case TSome_3B09D7: return T;
    default: return F;
  }
}

Option_6B846D Option_6B846D__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_0CCA05: break;
    case TSome_3B09D7: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[ACT_Demo_Dec2018__camkes_X.SW.Mission].", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_6B846D) this;
}

void Option_6B846D_get_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Mission result, Option_6B846D this) {
  switch (this->type) {
    case TNone_0CCA05: None_0CCA05_get_(CALLER result, (None_0CCA05) this); return;
    case TSome_3B09D7: Some_3B09D7_get_(CALLER result, (Some_3B09D7) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}