#ifndef SIREUM_TYPE_H_org_sireum_Option_27551F
#define SIREUM_TYPE_H_org_sireum_Option_27551F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.Monitor_Impl_Initialization_Api]

#include <type-org_sireum_Some_6EC2CA.h>
#include <type-org_sireum_None_2A8B4A.h>

typedef union Option_27551F *Option_27551F;
union Option_27551F {
  TYPE type;
  struct Some_6EC2CA Some_6EC2CA;
  struct None_2A8B4A None_2A8B4A;
};

#define DeclNewOption_27551F(x) union Option_27551F x = { 0 }

#ifdef __cplusplus
}
#endif

#endif