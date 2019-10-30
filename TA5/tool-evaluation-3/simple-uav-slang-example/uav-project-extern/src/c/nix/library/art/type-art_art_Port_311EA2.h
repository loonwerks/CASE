#ifndef SIREUM_TYPE_H_art_art_Port_311EA2
#define SIREUM_TYPE_H_art_art_Port_311EA2
#include <misc.h>

// art.Port[uav_project_extern.SW.Command_Impl]
#include <type-art_PortMode.h>

typedef struct art_Port_311EA2 *art_Port_311EA2;
struct art_Port_311EA2 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_311EA2(x) struct art_Port_311EA2 x = { .type = Tart_Port_311EA2 }

#endif