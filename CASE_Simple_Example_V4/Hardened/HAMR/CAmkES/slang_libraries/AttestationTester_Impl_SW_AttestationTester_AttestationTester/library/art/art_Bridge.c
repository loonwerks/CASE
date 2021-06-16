#include <all.h>

// art.Bridge

B art_Bridge__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case THAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge: return T;
    default: return F;
  }
}

art_Bridge art_Bridge__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case THAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_Bridge) this;
}

void art_Bridge_string_(STACK_FRAME String result, art_Bridge this);

Z art_Bridge_id_(STACK_FRAME art_Bridge this) {
  switch (this->type) {
    case THAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge: return HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_id_((HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_dispatchProtocol_(STACK_FRAME art_DispatchPropertyProtocol result, art_Bridge this) {
  switch (this->type) {
    case THAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge: Type_assign(result, HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_dispatchProtocol_((HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_name_(STACK_FRAME String result, art_Bridge this) {
  switch (this->type) {
    case THAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge: Type_assign(result, HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_name_((HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_ports_(STACK_FRAME art_Bridge_Ports result, art_Bridge this) {
  switch (this->type) {
    case THAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge: Type_assign(result, HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_ports_((HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}