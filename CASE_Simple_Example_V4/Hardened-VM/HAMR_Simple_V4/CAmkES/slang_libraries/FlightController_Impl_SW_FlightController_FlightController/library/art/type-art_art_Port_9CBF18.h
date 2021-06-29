#ifndef SIREUM_TYPE_H_art_art_Port_9CBF18
#define SIREUM_TYPE_H_art_art_Port_9CBF18

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[art.Empty]
#include <type-art_PortMode_Type.h>

typedef struct art_Port_9CBF18 *art_Port_9CBF18;
struct art_Port_9CBF18 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_9CBF18(x) struct art_Port_9CBF18 x = { .type = Tart_Port_9CBF18 }

#ifdef __cplusplus
}
#endif

#endif