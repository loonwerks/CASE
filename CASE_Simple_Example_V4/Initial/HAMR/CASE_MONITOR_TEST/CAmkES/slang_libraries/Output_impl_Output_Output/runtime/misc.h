#ifndef SIREUM_MISC_H
#define SIREUM_MISC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <type-composite.h>

inline B _T(STACK_FRAME_ONLY) {
  return T;
}

inline B _F(STACK_FRAME_ONLY) {
    return F;
}

inline void String_assign(String dest, String src) {
  dest->type = src->type;
  Z srcSize = src->size;
  dest->size = srcSize;
  memcpy(dest->value, src->value, srcSize + 1);
}

inline B String__eq(String this, String other) {
  Z thisSize = this->size;
  if (thisSize != other->size) return F;
  return memcmp(this->value, other->value, (size_t) thisSize) == 0;
}

inline B String__ne(String this, String other) {
  return !String__eq(this, other);
}

inline Z String_size_(STACK_FRAME_SF String this) {
  return this->size;
}

void String__append(STACK_FRAME_SF String dest, String src);

#ifdef SIREUM_NO_PRINT

#define cprint(isOut, s)

#define cprintln(isOut)

#define cflush(isOut)

#define B_cprint(this, isOut)

#define C_cprint(this, isOut)

#define Z_cprint(this, isOut)

#define F32_cprint(this, isOut)

#define F64_cprint(this, isOut)

#define R_cprint(this, isOut)

#define String_cprint(this, isOut)

#else

#define cprint(isOut, s) { if (isOut) printf("%s", s); else fprintf(stderr, "%s", s); }

#define cprintln(isOut) { if (isOut) printf("\n"); else fprintf(stderr, "\n"); }

#define cflush(isOut) { if (isOut) fflush(stdout); else fflush(stderr); }

#define B_cprint(this, isOut) cprint(isOut, (this)? "T" : "F")

#define C_cprint(this, isOut) { if (isOut) printf("%c", this); else fprintf(stderr, "%c", this); }

#define Z_cprint(this, isOut) { if (isOut) printf(Z_F, this); else fprintf(stderr, Z_F, this); }

#define F32_cprint(this, isOut) { if (isOut) printf(F32_F, this); else fprintf(stderr, F32_F, this); }

#define F64_cprint(this, isOut) { if (isOut) printf(F64_F, this); else fprintf(stderr, F64_F, this); }

#define R_cprint(this, isOut) { if (isOut) printf(R_F, this); else fprintf(stderr, R_F, this); }

#define String_cprint(this, isOut) cprint(isOut, (this)->value)

#endif

void B_string_(STACK_FRAME String result, B this);
void C_string_(STACK_FRAME String result, C this);
void Z_string_(STACK_FRAME String result, Z this);
void F32_string_(STACK_FRAME String result, F32 this);
void F64_string_(STACK_FRAME String result, F64 this);
void R_string_(STACK_FRAME String result, R this);
void String_string_(STACK_FRAME String result, String this);
void Type_string_(STACK_FRAME String result, void* this);
void Type_cprint(void *this, B isOut);
B Type__eq(void *t1, void *t2);

#ifdef __cplusplus
}
#endif

#endif