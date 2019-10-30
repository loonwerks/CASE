#ifndef SIREUM_TYPE_H_art_art_Connection_F3A765
#define SIREUM_TYPE_H_art_art_Connection_F3A765
#include <misc.h>

// art.Connection[B]
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_C0524D.h>

typedef struct art_Connection_F3A765 *art_Connection_F3A765;
struct art_Connection_F3A765 {
  TYPE type;
  struct art_Port_C0524D from;
  struct art_Port_C0524D to;
};

#define DeclNewart_Connection_F3A765(x) struct art_Connection_F3A765 x = { .type = Tart_Connection_F3A765 }

#endif