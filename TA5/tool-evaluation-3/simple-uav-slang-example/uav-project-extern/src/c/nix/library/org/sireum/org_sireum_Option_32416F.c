#include <all.h>

// Option[uav_project_extern.SW.Mission]

B Option_32416F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_AABCDB: return T;
    case TSome_C19C7E: return T;
    default: return F;
  }
}

Option_32416F Option_32416F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_AABCDB: break;
    case TSome_C19C7E: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[uav_project_extern.SW.Mission].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_32416F) this;
}

void Option_32416F_string_(STACK_FRAME String result, Option_32416F this);

void Option_32416F_get_(STACK_FRAME uav_project_extern_SW_Mission result, Option_32416F this) {
  switch (this->type) {
    case TNone_AABCDB: None_AABCDB_get_(CALLER (uav_project_extern_SW_Mission) result, (None_AABCDB) this); return;
    case TSome_C19C7E: Some_C19C7E_get_(CALLER (uav_project_extern_SW_Mission) result, (Some_C19C7E) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}