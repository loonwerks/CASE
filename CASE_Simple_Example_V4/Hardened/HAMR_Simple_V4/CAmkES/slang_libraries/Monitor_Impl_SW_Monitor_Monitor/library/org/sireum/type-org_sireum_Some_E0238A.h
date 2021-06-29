#ifndef SIREUM_TYPE_H_org_sireum_Some_E0238A
#define SIREUM_TYPE_H_org_sireum_Some_E0238A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api.h>

typedef struct Some_E0238A *Some_E0238A;
struct Some_E0238A {
  TYPE type;
  struct HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api value;
};

#define DeclNewSome_E0238A(x) struct Some_E0238A x = { .type = TSome_E0238A }

#ifdef __cplusplus
}
#endif

#endif