#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif