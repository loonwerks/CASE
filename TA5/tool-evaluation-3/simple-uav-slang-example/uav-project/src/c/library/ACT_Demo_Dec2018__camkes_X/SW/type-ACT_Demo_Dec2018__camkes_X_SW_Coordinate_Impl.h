#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl
#include <type-org_sireum_Z32.h>
#include <type-org_sireum_Z32.h>
#include <type-org_sireum_Z32.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl *ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl;
struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl {
  TYPE type;
  Z32 lat;
  Z32 longitude;
  Z32 alt;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(x) struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl x = { .type = TACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl }


#endif