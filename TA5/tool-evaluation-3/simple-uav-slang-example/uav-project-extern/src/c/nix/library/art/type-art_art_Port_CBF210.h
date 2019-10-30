#ifndef SIREUM_TYPE_H_art_art_Port_CBF210
#define SIREUM_TYPE_H_art_art_Port_CBF210
#include <misc.h>

// art.Port[S64]
#include <type-art_PortMode.h>

typedef struct art_Port_CBF210 *art_Port_CBF210;
struct art_Port_CBF210 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_CBF210(x) struct art_Port_CBF210 x = { .type = Tart_Port_CBF210 }

#endif