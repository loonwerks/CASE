#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif