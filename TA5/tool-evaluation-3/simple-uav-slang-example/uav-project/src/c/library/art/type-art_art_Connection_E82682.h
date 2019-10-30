#ifndef SIREUM_TYPE_H_art_art_Connection_E82682
#define SIREUM_TYPE_H_art_art_Connection_E82682
#include <misc.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Mission]
#include <type-art_art_Port_D7D05E.h>
#include <type-art_art_Port_D7D05E.h>

typedef struct art_Connection_E82682 *art_Connection_E82682;
struct art_Connection_E82682 {
  TYPE type;
  struct art_Port_D7D05E from;
  struct art_Port_D7D05E to;
};

#define DeclNewart_Connection_E82682(x) struct art_Connection_E82682 x = { .type = Tart_Connection_E82682 }


#endif