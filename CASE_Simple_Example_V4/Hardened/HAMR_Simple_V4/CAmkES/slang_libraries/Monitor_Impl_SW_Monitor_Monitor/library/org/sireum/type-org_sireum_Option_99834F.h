#ifndef SIREUM_TYPE_H_org_sireum_Option_99834F
#define SIREUM_TYPE_H_org_sireum_Option_99834F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]

#include <type-org_sireum_None_556BC5.h>
#include <type-org_sireum_Some_CF7B75.h>

typedef union Option_99834F *Option_99834F;
union Option_99834F {
  TYPE type;
  struct None_556BC5 None_556BC5;
  struct Some_CF7B75 Some_CF7B75;
};

#define DeclNewOption_99834F(x) union Option_99834F x = { 0 }

#ifdef __cplusplus
}
#endif

#endif