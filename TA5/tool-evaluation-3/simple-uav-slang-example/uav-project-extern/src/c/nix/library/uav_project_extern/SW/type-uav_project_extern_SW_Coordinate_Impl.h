#ifndef SIREUM_TYPE_H_uav_project_extern_SW_Coordinate_Impl
#define SIREUM_TYPE_H_uav_project_extern_SW_Coordinate_Impl
#include <misc.h>

// uav_project_extern.SW.Coordinate_Impl
#include <type-org_sireum_S32.h>
#include <type-org_sireum_S32.h>
#include <type-org_sireum_S32.h>

typedef struct uav_project_extern_SW_Coordinate_Impl *uav_project_extern_SW_Coordinate_Impl;
struct uav_project_extern_SW_Coordinate_Impl {
  TYPE type;
  S32 lat;
  S32 longitude;
  S32 alt;
};

#define DeclNewuav_project_extern_SW_Coordinate_Impl(x) struct uav_project_extern_SW_Coordinate_Impl x = { .type = Tuav_project_extern_SW_Coordinate_Impl }

#endif