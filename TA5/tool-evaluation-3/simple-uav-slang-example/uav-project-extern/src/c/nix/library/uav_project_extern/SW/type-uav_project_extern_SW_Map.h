#ifndef SIREUM_TYPE_H_uav_project_extern_SW_Map
#define SIREUM_TYPE_H_uav_project_extern_SW_Map
#include <misc.h>

// uav_project_extern.SW.Map
#include <type-org_sireum_IS_83A978.h>

typedef struct uav_project_extern_SW_Map *uav_project_extern_SW_Map;
struct uav_project_extern_SW_Map {
  TYPE type;
  struct IS_83A978 value;
};

#define DeclNewuav_project_extern_SW_Map(x) struct uav_project_extern_SW_Map x = { .type = Tuav_project_extern_SW_Map }

#endif