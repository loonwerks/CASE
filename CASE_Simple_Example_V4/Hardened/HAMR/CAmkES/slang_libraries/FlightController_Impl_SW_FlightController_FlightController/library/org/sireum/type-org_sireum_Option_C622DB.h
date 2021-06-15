#ifndef SIREUM_TYPE_H_org_sireum_Option_C622DB
#define SIREUM_TYPE_H_org_sireum_Option_C622DB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[art.Empty]

#include <type-org_sireum_Some_4782C6.h>
#include <type-org_sireum_None_ED72E1.h>

typedef union Option_C622DB *Option_C622DB;
union Option_C622DB {
  TYPE type;
  struct Some_4782C6 Some_4782C6;
  struct None_ED72E1 None_ED72E1;
};

#define DeclNewOption_C622DB(x) union Option_C622DB x = { 0 }

#ifdef __cplusplus
}
#endif

#endif