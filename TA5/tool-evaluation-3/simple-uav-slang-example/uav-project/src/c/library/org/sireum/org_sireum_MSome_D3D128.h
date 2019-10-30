#ifndef SIREUM_H_org_sireum_MSome_D3D128
#define SIREUM_H_org_sireum_MSome_D3D128
#include <types.h>

// MSome[art.Bridge]

#define MSome_D3D128_value_(this) ((art_Bridge) &(this)->value)

B MSome_D3D128__eq(MSome_D3D128 this, MSome_D3D128 other);
static inline B MSome_D3D128__ne(MSome_D3D128 this, MSome_D3D128 other) {
  return !MSome_D3D128__eq(this, other);
};
void MSome_D3D128_cprint(MSome_D3D128 this, B isOut);
void MSome_D3D128_string(STACK_FRAME String result, MSome_D3D128 this);

static inline B MSome_D3D128__is(STACK_FRAME void* this) {
  return ((MSome_D3D128) this)->type == TMSome_D3D128;
}

static inline MSome_D3D128 MSome_D3D128__as(STACK_FRAME void *this) {
  if (MSome_D3D128__is(CALLER this)) return (MSome_D3D128) this;
  fprintf(stderr, "Invalid case from %s to MSome[art.Bridge].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void MSome_D3D128_apply(STACK_FRAME MSome_D3D128 this, art_Bridge value);

#endif