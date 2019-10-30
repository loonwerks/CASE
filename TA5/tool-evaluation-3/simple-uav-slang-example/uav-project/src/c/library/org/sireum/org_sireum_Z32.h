#ifndef SIREUM_H_org_sireum_Z32
#define SIREUM_H_org_sireum_Z32
#include <types.h>

#ifdef SIREUM_NO_PRINT
#define Z32_cprint(this, isOut)
#else
#define Z32_cprint(this, isOut) { if (isOut) printf(Z32_F, this); else fprintf(stderr, Z32_F, this); }
#endif
void Z32_string(STACK_FRAME String result, Z32 this);

#endif