#ifndef SIREUM_TYPE_H_art_art_Port_446859
#define SIREUM_TYPE_H_art_art_Port_446859
#include <misc.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]
#include <type-art_PortMode.h>

typedef struct art_Port_446859 *art_Port_446859;
struct art_Port_446859 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode mode;
};

#define DeclNewart_Port_446859(x) struct art_Port_446859 x = { .type = Tart_Port_446859 }


#endif