#ifndef SIREUM_H_org_sireum_Z64
#define SIREUM_H_org_sireum_Z64
#include <types.h>

#ifdef SIREUM_NO_PRINT
#define Z64_cprint(this, isOut)
#else
#define Z64_cprint(this, isOut) { if (isOut) printf(Z64_F, this); else fprintf(stderr, Z64_F, this); }
#endif
void Z64_string(STACK_FRAME String result, Z64 this);

#endif