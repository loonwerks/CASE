#ifndef SIREUM_TYPE_H_org_sireum_IS_83A978
#define SIREUM_TYPE_H_org_sireum_IS_83A978
#include <misc.h>

// IS[Z, uav_project_extern.SW.Coordinate_Impl]
#include <type-uav_project_extern_SW_Coordinate_Impl.h>

#define MaxIS_83A978 16
#define IS_83A978SizeT int8_t

typedef struct IS_83A978 *IS_83A978;
struct IS_83A978 {
  TYPE type;
  IS_83A978SizeT size;
  struct uav_project_extern_SW_Coordinate_Impl value[MaxIS_83A978];
};

#define DeclNewIS_83A978(x) struct IS_83A978 x = { .type = TIS_83A978 }

#endif