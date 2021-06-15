#ifndef SIREUM_TYPE_H_art_DispatchPropertyProtocol
#define SIREUM_TYPE_H_art_DispatchPropertyProtocol

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.DispatchPropertyProtocol

#include <type-art_DispatchPropertyProtocol_Periodic.h>
#include <type-art_DispatchPropertyProtocol_Sporadic.h>

typedef union art_DispatchPropertyProtocol *art_DispatchPropertyProtocol;
union art_DispatchPropertyProtocol {
  TYPE type;
  struct art_DispatchPropertyProtocol_Periodic art_DispatchPropertyProtocol_Periodic;
  struct art_DispatchPropertyProtocol_Sporadic art_DispatchPropertyProtocol_Sporadic;
};

#define DeclNewart_DispatchPropertyProtocol(x) union art_DispatchPropertyProtocol x = { 0 }

#ifdef __cplusplus
}
#endif

#endif