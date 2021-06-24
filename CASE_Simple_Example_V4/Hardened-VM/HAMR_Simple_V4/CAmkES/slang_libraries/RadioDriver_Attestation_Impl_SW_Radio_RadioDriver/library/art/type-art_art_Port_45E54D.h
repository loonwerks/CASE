#ifndef SIREUM_TYPE_H_art_art_Port_45E54D
#define SIREUM_TYPE_H_art_art_Port_45E54D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[IS[Z, B]]
#include <type-art_PortMode_Type.h>

typedef struct art_Port_45E54D *art_Port_45E54D;
struct art_Port_45E54D {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_45E54D(x) struct art_Port_45E54D x = { .type = Tart_Port_45E54D }

#ifdef __cplusplus
}
#endif

#endif