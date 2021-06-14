#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif