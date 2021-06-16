#ifndef SIREUM_TYPE_H_org_sireum_Option_642C2E
#define SIREUM_TYPE_H_org_sireum_Option_642C2E

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.FlightController_Impl_Operational_Api]

#include <type-org_sireum_Some_9535B2.h>
#include <type-org_sireum_None_F62B67.h>

typedef union Option_642C2E *Option_642C2E;
union Option_642C2E {
  TYPE type;
  struct Some_9535B2 Some_9535B2;
  struct None_F62B67 None_F62B67;
};

#define DeclNewOption_642C2E(x) union Option_642C2E x = { 0 }

#ifdef __cplusplus
}
#endif

#endif