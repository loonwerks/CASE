#include <all.h>

// Option[art.DataContent]

B Option_8E9F45__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_D29615: return T;
    case TNone_964667: return T;
    default: return F;
  }
}

Option_8E9F45 Option_8E9F45__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_D29615: break;
    case TNone_964667: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.DataContent].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_8E9F45) this;
}

void Option_8E9F45_string_(STACK_FRAME String result, Option_8E9F45 this);

B Option_8E9F45_nonEmpty_(STACK_FRAME Option_8E9F45 this) {
  switch (this->type) {
    case TSome_D29615: return Some_D29615_nonEmpty_(CALLER (Some_D29615) this);
    case TNone_964667: return None_964667_nonEmpty_(CALLER (None_964667) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void Option_8E9F45_get_(STACK_FRAME art_DataContent result, Option_8E9F45 this) {
  switch (this->type) {
    case TSome_D29615: Some_D29615_get_(CALLER (art_DataContent) result, (Some_D29615) this); return;
    case TNone_964667: None_964667_get_(CALLER (art_DataContent) result, (None_964667) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}