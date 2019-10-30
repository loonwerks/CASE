#ifndef SIREUM_TYPE_H_art_art_Port_695448
#define SIREUM_TYPE_H_art_art_Port_695448
#include <misc.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]
#include <type-art_PortMode.h>

typedef struct art_Port_695448 *art_Port_695448;
struct art_Port_695448 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_695448(x) struct art_Port_695448 x = { .type = Tart_Port_695448 }


#endif