#ifndef SIREUM_TYPE_H_art_art_Connection_A24F1E
#define SIREUM_TYPE_H_art_art_Connection_A24F1E
#include <misc.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]
#include <type-art_art_Port_9D6F5D.h>
#include <type-art_art_Port_9D6F5D.h>

typedef struct art_Connection_A24F1E *art_Connection_A24F1E;
struct art_Connection_A24F1E {
  TYPE type;
  struct art_Port_9D6F5D from;
  struct art_Port_9D6F5D to;
};

#define DeclNewart_Connection_A24F1E(x) struct art_Connection_A24F1E x = { .type = Tart_Connection_A24F1E }


#endif