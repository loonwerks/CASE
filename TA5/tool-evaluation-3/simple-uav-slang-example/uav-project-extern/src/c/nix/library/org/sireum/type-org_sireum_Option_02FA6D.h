#ifndef SIREUM_TYPE_H_org_sireum_Option_02FA6D
#define SIREUM_TYPE_H_org_sireum_Option_02FA6D
#include <misc.h>

// Option[(Z, art.DataContent)]

#include <type-org_sireum_None_93AA2B.h>
#include <type-org_sireum_Some_E9D1E5.h>

typedef union Option_02FA6D *Option_02FA6D;
union Option_02FA6D {
  TYPE type;
  struct None_93AA2B None_93AA2B;
  struct Some_E9D1E5 Some_E9D1E5;
};

#define DeclNewOption_02FA6D(x) union Option_02FA6D x = { 0 }

#endif