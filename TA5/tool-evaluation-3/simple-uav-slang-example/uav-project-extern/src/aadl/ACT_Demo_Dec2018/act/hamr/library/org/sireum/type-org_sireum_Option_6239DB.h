#ifndef SIREUM_TYPE_H_org_sireum_Option_6239DB
#define SIREUM_TYPE_H_org_sireum_Option_6239DB
#include <misc.h>

// Option[art.UPort]

#include <type-org_sireum_None_39BC5F.h>
#include <type-org_sireum_Some_3E197E.h>

typedef union Option_6239DB *Option_6239DB;
union Option_6239DB {
  TYPE type;
  struct None_39BC5F None_39BC5F;
  struct Some_3E197E Some_3E197E;
};

#define DeclNewOption_6239DB(x) union Option_6239DB x = { 0 }

#endif