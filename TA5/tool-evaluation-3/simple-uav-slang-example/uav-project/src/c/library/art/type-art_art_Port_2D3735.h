#ifndef SIREUM_TYPE_H_art_art_Port_2D3735
#define SIREUM_TYPE_H_art_art_Port_2D3735
#include <misc.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]
#include <type-art_PortMode.h>

typedef struct art_Port_2D3735 *art_Port_2D3735;
struct art_Port_2D3735 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_2D3735(x) struct art_Port_2D3735 x = { .type = Tart_Port_2D3735 }


#endif