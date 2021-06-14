#ifndef SIREUM_TYPE_H_art_DispatchPropertyProtocol_Sporadic
#define SIREUM_TYPE_H_art_DispatchPropertyProtocol_Sporadic

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.DispatchPropertyProtocol.Sporadic

typedef struct art_DispatchPropertyProtocol_Sporadic *art_DispatchPropertyProtocol_Sporadic;
struct art_DispatchPropertyProtocol_Sporadic {
  TYPE type;
  Z min;
};

#define DeclNewart_DispatchPropertyProtocol_Sporadic(x) struct art_DispatchPropertyProtocol_Sporadic x = { .type = Tart_DispatchPropertyProtocol_Sporadic }

#ifdef __cplusplus
}
#endif

#endif