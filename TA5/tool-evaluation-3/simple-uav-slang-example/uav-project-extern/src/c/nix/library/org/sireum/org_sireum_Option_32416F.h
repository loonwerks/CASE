#ifndef SIREUM_H_org_sireum_Option_32416F
#define SIREUM_H_org_sireum_Option_32416F
#include <types.h>

// Option[uav_project_extern.SW.Mission]

#define Option_32416F__eq(this, other) Type__eq(this, other)
#define Option_32416F__ne(this, other) (!Type__eq(this, other))
#define Option_32416F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_32416F__is(STACK_FRAME void *this);
Option_32416F Option_32416F__as(STACK_FRAME void *this);
inline void Option_32416F_string_(STACK_FRAME String result, Option_32416F this) {
  Type_string_(CALLER result, this);
}

void Option_32416F_get_(STACK_FRAME uav_project_extern_SW_Mission result, Option_32416F this);

#endif