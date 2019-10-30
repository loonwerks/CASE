#ifndef SIREUM_TYPE_H_art_art_Port_97EF76
#define SIREUM_TYPE_H_art_art_Port_97EF76
#include <misc.h>

// art.Port[uav_project_extern.SW.Mission]
#include <type-art_PortMode.h>

typedef struct art_Port_97EF76 *art_Port_97EF76;
struct art_Port_97EF76 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_97EF76(x) struct art_Port_97EF76 x = { .type = Tart_Port_97EF76 }

#endif