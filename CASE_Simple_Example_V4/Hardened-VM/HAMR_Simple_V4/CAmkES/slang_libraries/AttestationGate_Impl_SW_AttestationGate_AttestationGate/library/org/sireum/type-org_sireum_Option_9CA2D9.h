#ifndef SIREUM_TYPE_H_org_sireum_Option_9CA2D9
#define SIREUM_TYPE_H_org_sireum_Option_9CA2D9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api]

#include <type-org_sireum_Some_06F7FC.h>
#include <type-org_sireum_None_3F8D24.h>

typedef union Option_9CA2D9 *Option_9CA2D9;
union Option_9CA2D9 {
  TYPE type;
  struct Some_06F7FC Some_06F7FC;
  struct None_3F8D24 None_3F8D24;
};

#define DeclNewOption_9CA2D9(x) union Option_9CA2D9 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif