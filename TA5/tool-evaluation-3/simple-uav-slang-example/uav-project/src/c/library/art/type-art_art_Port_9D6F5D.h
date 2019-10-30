#ifndef SIREUM_TYPE_H_art_art_Port_9D6F5D
#define SIREUM_TYPE_H_art_art_Port_9D6F5D
#include <misc.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]
#include <type-art_PortMode.h>

typedef struct art_Port_9D6F5D *art_Port_9D6F5D;
struct art_Port_9D6F5D {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_9D6F5D(x) struct art_Port_9D6F5D x = { .type = Tart_Port_9D6F5D }


#endif