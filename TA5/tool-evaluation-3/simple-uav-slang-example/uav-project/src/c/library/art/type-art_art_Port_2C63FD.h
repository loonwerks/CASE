#ifndef SIREUM_TYPE_H_art_art_Port_2C63FD
#define SIREUM_TYPE_H_art_art_Port_2C63FD
#include <misc.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl]
#include <type-art_PortMode.h>

typedef struct art_Port_2C63FD *art_Port_2C63FD;
struct art_Port_2C63FD {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_2C63FD(x) struct art_Port_2C63FD x = { .type = Tart_Port_2C63FD }


#endif