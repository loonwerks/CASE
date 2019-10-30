#ifndef SIREUM_TYPE_H_art_art_Connection_B6057D
#define SIREUM_TYPE_H_art_art_Connection_B6057D
#include <misc.h>

// art.Connection[uav_project_extern.SW.MissionWindow]
#include <type-art_art_Port_65F60A.h>
#include <type-art_art_Port_65F60A.h>

typedef struct art_Connection_B6057D *art_Connection_B6057D;
struct art_Connection_B6057D {
  TYPE type;
  struct art_Port_65F60A from;
  struct art_Port_65F60A to;
};

#define DeclNewart_Connection_B6057D(x) struct art_Connection_B6057D x = { .type = Tart_Connection_B6057D }

#endif