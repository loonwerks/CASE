#ifndef SIREUM_TYPE_H_org_sireum_None_AABCDB
#define SIREUM_TYPE_H_org_sireum_None_AABCDB
#include <misc.h>

// None[uav_project_extern.SW.Mission]

typedef struct None_AABCDB *None_AABCDB;
struct None_AABCDB {
  TYPE type;
};

#define DeclNewNone_AABCDB(x) struct None_AABCDB x = { .type = TNone_AABCDB }

#endif