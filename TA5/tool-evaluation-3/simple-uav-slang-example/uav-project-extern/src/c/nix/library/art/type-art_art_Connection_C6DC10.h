#ifndef SIREUM_TYPE_H_art_art_Connection_C6DC10
#define SIREUM_TYPE_H_art_art_Connection_C6DC10
#include <misc.h>

// art.Connection[uav_project_extern.SW.Mission]
#include <type-art_art_Port_97EF76.h>
#include <type-art_art_Port_97EF76.h>

typedef struct art_Connection_C6DC10 *art_Connection_C6DC10;
struct art_Connection_C6DC10 {
  TYPE type;
  struct art_Port_97EF76 from;
  struct art_Port_97EF76 to;
};

#define DeclNewart_Connection_C6DC10(x) struct art_Connection_C6DC10 x = { .type = Tart_Connection_C6DC10 }

#endif