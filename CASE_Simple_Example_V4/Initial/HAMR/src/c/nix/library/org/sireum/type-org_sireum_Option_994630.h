#ifndef SIREUM_TYPE_H_org_sireum_Option_994630
#define SIREUM_TYPE_H_org_sireum_Option_994630

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]

#include <type-org_sireum_None_C64652.h>
#include <type-org_sireum_Some_DDE9FD.h>

typedef union Option_994630 *Option_994630;
union Option_994630 {
  TYPE type;
  struct None_C64652 None_C64652;
  struct Some_DDE9FD Some_DDE9FD;
};

#define DeclNewOption_994630(x) union Option_994630 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif