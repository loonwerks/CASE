#ifndef SIREUM_TYPE_H_org_sireum_Option_6B846D
#define SIREUM_TYPE_H_org_sireum_Option_6B846D
#include <misc.h>

// Option[ACT_Demo_Dec2018__camkes_X.SW.Mission]

#include <type-org_sireum_None_0CCA05.h>
#include <type-org_sireum_Some_3B09D7.h>

typedef union Option_6B846D *Option_6B846D;
union Option_6B846D {
  TYPE type;
  struct None_0CCA05 None_0CCA05;
  struct Some_3B09D7 Some_3B09D7;
};

#define DeclNewOption_6B846D(x) union Option_6B846D x = { 0 }

#endif