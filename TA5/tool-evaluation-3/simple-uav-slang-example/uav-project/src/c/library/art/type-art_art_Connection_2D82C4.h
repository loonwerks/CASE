#ifndef SIREUM_TYPE_H_art_art_Connection_2D82C4
#define SIREUM_TYPE_H_art_art_Connection_2D82C4
#include <misc.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]
#include <type-art_art_Port_695448.h>
#include <type-art_art_Port_695448.h>

typedef struct art_Connection_2D82C4 *art_Connection_2D82C4;
struct art_Connection_2D82C4 {
  TYPE type;
  struct art_Port_695448 from;
  struct art_Port_695448 to;
};

#define DeclNewart_Connection_2D82C4(x) struct art_Connection_2D82C4 x = { .type = Tart_Connection_2D82C4 }


#endif