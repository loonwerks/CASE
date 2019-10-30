#ifndef SIREUM_TYPE_H_art_art_Connection_112F4D
#define SIREUM_TYPE_H_art_art_Connection_112F4D
#include <misc.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]
#include <type-art_art_Port_2D3735.h>
#include <type-art_art_Port_2D3735.h>

typedef struct art_Connection_112F4D *art_Connection_112F4D;
struct art_Connection_112F4D {
  TYPE type;
  struct art_Port_2D3735 from;
  struct art_Port_2D3735 to;
};

#define DeclNewart_Connection_112F4D(x) struct art_Connection_112F4D x = { .type = Tart_Connection_112F4D }


#endif