#ifndef SIREUM_TYPE_H_art_DispatchPropertyProtocol_Periodic
#define SIREUM_TYPE_H_art_DispatchPropertyProtocol_Periodic

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.DispatchPropertyProtocol.Periodic

typedef struct art_DispatchPropertyProtocol_Periodic *art_DispatchPropertyProtocol_Periodic;
struct art_DispatchPropertyProtocol_Periodic {
  TYPE type;
  Z period;
};

#define DeclNewart_DispatchPropertyProtocol_Periodic(x) struct art_DispatchPropertyProtocol_Periodic x = { .type = Tart_DispatchPropertyProtocol_Periodic }

#ifdef __cplusplus
}
#endif

#endif