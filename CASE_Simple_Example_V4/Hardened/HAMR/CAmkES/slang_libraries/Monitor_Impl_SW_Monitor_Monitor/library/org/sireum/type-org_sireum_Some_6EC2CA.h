#ifndef SIREUM_TYPE_H_org_sireum_Some_6EC2CA
#define SIREUM_TYPE_H_org_sireum_Some_6EC2CA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.Monitor_Impl_Initialization_Api]
#include <type-HAMR_SW_Monitor_Impl_Initialization_Api.h>

typedef struct Some_6EC2CA *Some_6EC2CA;
struct Some_6EC2CA {
  TYPE type;
  struct HAMR_SW_Monitor_Impl_Initialization_Api value;
};

#define DeclNewSome_6EC2CA(x) struct Some_6EC2CA x = { .type = TSome_6EC2CA }

#ifdef __cplusplus
}
#endif

#endif