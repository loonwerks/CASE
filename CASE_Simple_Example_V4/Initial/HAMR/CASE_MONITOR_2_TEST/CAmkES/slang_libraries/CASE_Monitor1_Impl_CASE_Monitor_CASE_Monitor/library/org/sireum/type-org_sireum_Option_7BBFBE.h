#ifndef SIREUM_TYPE_H_org_sireum_Option_7BBFBE
#define SIREUM_TYPE_H_org_sireum_Option_7BBFBE

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[art.Bridge]

#include <type-org_sireum_None_734370.h>
#include <type-org_sireum_Some_482E57.h>

typedef union Option_7BBFBE *Option_7BBFBE;
union Option_7BBFBE {
  TYPE type;
  struct None_734370 None_734370;
  struct Some_482E57 Some_482E57;
};

#define DeclNewOption_7BBFBE(x) union Option_7BBFBE x = { 0 }

#ifdef __cplusplus
}
#endif

#endif