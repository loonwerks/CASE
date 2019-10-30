#include <all.h>

// art.UPort

B art_UPort__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_9D6F5D: return T;
    case Tart_Port_446859: return T;
    case Tart_Port_2C63FD: return T;
    case Tart_Port_695448: return T;
    case Tart_Port_D7D05E: return T;
    case Tart_Port_FD6239: return T;
    case Tart_Port_2D3735: return T;
    default: return F;
  }
}

art_UPort art_UPort__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_9D6F5D: break;
    case Tart_Port_446859: break;
    case Tart_Port_2C63FD: break;
    case Tart_Port_695448: break;
    case Tart_Port_D7D05E: break;
    case Tart_Port_FD6239: break;
    case Tart_Port_2D3735: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UPort.", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UPort) this;
}

Z art_UPort_id_(STACK_FRAME art_UPort this) {
  switch (this->type) {
    case Tart_Port_9D6F5D: return art_Port_9D6F5D_id_((art_Port_9D6F5D) this);
    case Tart_Port_446859: return art_Port_446859_id_((art_Port_446859) this);
    case Tart_Port_2C63FD: return art_Port_2C63FD_id_((art_Port_2C63FD) this);
    case Tart_Port_695448: return art_Port_695448_id_((art_Port_695448) this);
    case Tart_Port_D7D05E: return art_Port_D7D05E_id_((art_Port_D7D05E) this);
    case Tart_Port_FD6239: return art_Port_FD6239_id_((art_Port_FD6239) this);
    case Tart_Port_2D3735: return art_Port_2D3735_id_((art_Port_2D3735) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

art_PortMode art_UPort_mode_(STACK_FRAME art_UPort this) {
  switch (this->type) {
    case Tart_Port_9D6F5D: return art_Port_9D6F5D_mode_((art_Port_9D6F5D) this);
    case Tart_Port_446859: return art_Port_446859_mode_((art_Port_446859) this);
    case Tart_Port_2C63FD: return art_Port_2C63FD_mode_((art_Port_2C63FD) this);
    case Tart_Port_695448: return art_Port_695448_mode_((art_Port_695448) this);
    case Tart_Port_D7D05E: return art_Port_D7D05E_mode_((art_Port_D7D05E) this);
    case Tart_Port_FD6239: return art_Port_FD6239_mode_((art_Port_FD6239) this);
    case Tart_Port_2D3735: return art_Port_2D3735_mode_((art_Port_2D3735) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

void art_UPort_name_(STACK_FRAME String result, art_UPort this) {
  switch (this->type) {
    case Tart_Port_9D6F5D: Type_assign(result, art_Port_9D6F5D_name_((art_Port_9D6F5D) this), sizeof(struct StaticString)); return;
    case Tart_Port_446859: Type_assign(result, art_Port_446859_name_((art_Port_446859) this), sizeof(struct StaticString)); return;
    case Tart_Port_2C63FD: Type_assign(result, art_Port_2C63FD_name_((art_Port_2C63FD) this), sizeof(struct StaticString)); return;
    case Tart_Port_695448: Type_assign(result, art_Port_695448_name_((art_Port_695448) this), sizeof(struct StaticString)); return;
    case Tart_Port_D7D05E: Type_assign(result, art_Port_D7D05E_name_((art_Port_D7D05E) this), sizeof(struct StaticString)); return;
    case Tart_Port_FD6239: Type_assign(result, art_Port_FD6239_name_((art_Port_FD6239) this), sizeof(struct StaticString)); return;
    case Tart_Port_2D3735: Type_assign(result, art_Port_2D3735_name_((art_Port_2D3735) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}