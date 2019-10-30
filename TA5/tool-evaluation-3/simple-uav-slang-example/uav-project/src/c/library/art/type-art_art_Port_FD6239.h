#ifndef SIREUM_TYPE_H_art_art_Port_FD6239
#define SIREUM_TYPE_H_art_art_Port_FD6239
#include <misc.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]
#include <type-art_PortMode.h>

typedef struct art_Port_FD6239 *art_Port_FD6239;
struct art_Port_FD6239 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_FD6239(x) struct art_Port_FD6239 x = { .type = Tart_Port_FD6239 }


#endif