#ifndef SIREUM_TYPE_H_art_art_Port_C0524D
#define SIREUM_TYPE_H_art_art_Port_C0524D
#include <misc.h>

// art.Port[B]
#include <type-art_PortMode.h>

typedef struct art_Port_C0524D *art_Port_C0524D;
struct art_Port_C0524D {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_C0524D(x) struct art_Port_C0524D x = { .type = Tart_Port_C0524D }

#endif