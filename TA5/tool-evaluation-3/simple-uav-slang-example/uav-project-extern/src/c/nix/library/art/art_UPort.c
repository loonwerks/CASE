#include <all.h>

// art.UPort

B art_UPort__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_97EF76: return T;
    case Tart_Port_CBF210: return T;
    case Tart_Port_C0524D: return T;
    case Tart_Port_65F60A: return T;
    case Tart_Port_311EA2: return T;
    default: return F;
  }
}

art_UPort art_UPort__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_97EF76: break;
    case Tart_Port_CBF210: break;
    case Tart_Port_C0524D: break;
    case Tart_Port_65F60A: break;
    case Tart_Port_311EA2: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UPort.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UPort) this;
}

void art_UPort_string_(STACK_FRAME String result, art_UPort this);

Z art_UPort_id_(STACK_FRAME art_UPort this) {
  switch (this->type) {
    case Tart_Port_97EF76: return art_Port_97EF76_id_((art_Port_97EF76) this);
    case Tart_Port_CBF210: return art_Port_CBF210_id_((art_Port_CBF210) this);
    case Tart_Port_C0524D: return art_Port_C0524D_id_((art_Port_C0524D) this);
    case Tart_Port_65F60A: return art_Port_65F60A_id_((art_Port_65F60A) this);
    case Tart_Port_311EA2: return art_Port_311EA2_id_((art_Port_311EA2) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

art_PortMode art_UPort_mode_(STACK_FRAME art_UPort this) {
  switch (this->type) {
    case Tart_Port_97EF76: return art_Port_97EF76_mode_((art_Port_97EF76) this);
    case Tart_Port_CBF210: return art_Port_CBF210_mode_((art_Port_CBF210) this);
    case Tart_Port_C0524D: return art_Port_C0524D_mode_((art_Port_C0524D) this);
    case Tart_Port_65F60A: return art_Port_65F60A_mode_((art_Port_65F60A) this);
    case Tart_Port_311EA2: return art_Port_311EA2_mode_((art_Port_311EA2) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_UPort_name_(STACK_FRAME String result, art_UPort this) {
  switch (this->type) {
    case Tart_Port_97EF76: Type_assign(result, art_Port_97EF76_name_((art_Port_97EF76) this), sizeof(struct StaticString)); return;
    case Tart_Port_CBF210: Type_assign(result, art_Port_CBF210_name_((art_Port_CBF210) this), sizeof(struct StaticString)); return;
    case Tart_Port_C0524D: Type_assign(result, art_Port_C0524D_name_((art_Port_C0524D) this), sizeof(struct StaticString)); return;
    case Tart_Port_65F60A: Type_assign(result, art_Port_65F60A_name_((art_Port_65F60A) this), sizeof(struct StaticString)); return;
    case Tart_Port_311EA2: Type_assign(result, art_Port_311EA2_name_((art_Port_311EA2) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}