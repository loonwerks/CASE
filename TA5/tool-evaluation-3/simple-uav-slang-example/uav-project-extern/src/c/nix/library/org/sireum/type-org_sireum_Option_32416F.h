#ifndef SIREUM_TYPE_H_org_sireum_Option_32416F
#define SIREUM_TYPE_H_org_sireum_Option_32416F
#include <misc.h>

// Option[uav_project_extern.SW.Mission]

#include <type-org_sireum_None_AABCDB.h>
#include <type-org_sireum_Some_C19C7E.h>

typedef union Option_32416F *Option_32416F;
union Option_32416F {
  TYPE type;
  struct None_AABCDB None_AABCDB;
  struct Some_C19C7E Some_C19C7E;
};

#define DeclNewOption_32416F(x) union Option_32416F x = { 0 }

#endif