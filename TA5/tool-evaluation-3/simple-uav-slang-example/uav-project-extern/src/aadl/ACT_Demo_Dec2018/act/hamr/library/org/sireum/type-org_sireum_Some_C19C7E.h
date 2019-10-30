#ifndef SIREUM_TYPE_H_org_sireum_Some_C19C7E
#define SIREUM_TYPE_H_org_sireum_Some_C19C7E
#include <misc.h>

// Some[uav_project_extern.SW.Mission]
#include <type-uav_project_extern_SW_Mission.h>

typedef struct Some_C19C7E *Some_C19C7E;
struct Some_C19C7E {
  TYPE type;
  struct uav_project_extern_SW_Mission value;
};

#define DeclNewSome_C19C7E(x) struct Some_C19C7E x = { .type = TSome_C19C7E }

#endif