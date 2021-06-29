#ifndef SIREUM_TYPE_H_org_sireum_Option_3A1F68
#define SIREUM_TYPE_H_org_sireum_Option_3A1F68

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]

#include <type-org_sireum_Some_FCFE69.h>
#include <type-org_sireum_None_2849BF.h>

typedef union Option_3A1F68 *Option_3A1F68;
union Option_3A1F68 {
  TYPE type;
  struct Some_FCFE69 Some_FCFE69;
  struct None_2849BF None_2849BF;
};

#define DeclNewOption_3A1F68(x) union Option_3A1F68 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif