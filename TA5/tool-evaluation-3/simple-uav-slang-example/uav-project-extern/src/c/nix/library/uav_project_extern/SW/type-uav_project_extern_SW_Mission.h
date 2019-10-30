#ifndef SIREUM_TYPE_H_uav_project_extern_SW_Mission
#define SIREUM_TYPE_H_uav_project_extern_SW_Mission
#include <misc.h>

// uav_project_extern.SW.Mission
#include <type-org_sireum_IS_83A978.h>

typedef struct uav_project_extern_SW_Mission *uav_project_extern_SW_Mission;
struct uav_project_extern_SW_Mission {
  TYPE type;
  struct IS_83A978 value;
};

#define DeclNewuav_project_extern_SW_Mission(x) struct uav_project_extern_SW_Mission x = { .type = Tuav_project_extern_SW_Mission }

#endif