#ifndef SIREUM_TYPE_H_art_art_Port_D7D05E
#define SIREUM_TYPE_H_art_art_Port_D7D05E
#include <misc.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.SW.Mission]
#include <type-art_PortMode.h>

typedef struct art_Port_D7D05E *art_Port_D7D05E;
struct art_Port_D7D05E {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_D7D05E(x) struct art_Port_D7D05E x = { .type = Tart_Port_D7D05E }


#endif