#ifndef SIREUM_TYPE_H_art_art_Port_65F60A
#define SIREUM_TYPE_H_art_art_Port_65F60A
#include <misc.h>

// art.Port[uav_project_extern.SW.MissionWindow]
#include <type-art_PortMode.h>

typedef struct art_Port_65F60A *art_Port_65F60A;
struct art_Port_65F60A {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_65F60A(x) struct art_Port_65F60A x = { .type = Tart_Port_65F60A }

#endif