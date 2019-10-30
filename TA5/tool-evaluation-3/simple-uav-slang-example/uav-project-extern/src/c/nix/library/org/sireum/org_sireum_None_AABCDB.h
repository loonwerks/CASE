#ifndef SIREUM_H_org_sireum_None_AABCDB
#define SIREUM_H_org_sireum_None_AABCDB
#include <types.h>

// None[uav_project_extern.SW.Mission]


B None_AABCDB__eq(None_AABCDB this, None_AABCDB other);
inline B None_AABCDB__ne(None_AABCDB this, None_AABCDB other) {
  return !None_AABCDB__eq(this, other);
};
void None_AABCDB_string_(STACK_FRAME String result, None_AABCDB this);
void None_AABCDB_cprint(None_AABCDB this, B isOut);

inline B None_AABCDB__is(STACK_FRAME void* this) {
  return ((None_AABCDB) this)->type == TNone_AABCDB;
}

inline None_AABCDB None_AABCDB__as(STACK_FRAME void *this) {
  if (None_AABCDB__is(CALLER this)) return (None_AABCDB) this;
  fprintf(stderr, "Invalid case from %s to None[uav_project_extern.SW.Mission].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void None_AABCDB_apply(STACK_FRAME None_AABCDB this);

#endif