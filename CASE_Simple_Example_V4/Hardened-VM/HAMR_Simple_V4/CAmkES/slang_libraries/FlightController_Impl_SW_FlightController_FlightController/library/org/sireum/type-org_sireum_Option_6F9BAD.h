#ifndef SIREUM_TYPE_H_org_sireum_Option_6F9BAD
#define SIREUM_TYPE_H_org_sireum_Option_6F9BAD

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]

#include <type-org_sireum_Some_0FF3DD.h>
#include <type-org_sireum_None_4E54E3.h>

typedef union Option_6F9BAD *Option_6F9BAD;
union Option_6F9BAD {
  TYPE type;
  struct Some_0FF3DD Some_0FF3DD;
  struct None_4E54E3 None_4E54E3;
};

#define DeclNewOption_6F9BAD(x) union Option_6F9BAD x = { 0 }

#ifdef __cplusplus
}
#endif

#endif