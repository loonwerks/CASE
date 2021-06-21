#ifndef SIREUM_TYPE_H_org_sireum_Some_06F7FC
#define SIREUM_TYPE_H_org_sireum_Some_06F7FC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api.h>

typedef struct Some_06F7FC *Some_06F7FC;
struct Some_06F7FC {
  TYPE type;
  struct HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api value;
};

#define DeclNewSome_06F7FC(x) struct Some_06F7FC x = { .type = TSome_06F7FC }

#ifdef __cplusplus
}
#endif

#endif