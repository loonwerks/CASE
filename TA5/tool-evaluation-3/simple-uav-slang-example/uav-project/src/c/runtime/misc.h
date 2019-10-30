/*
 Copyright (c) 2019, Robby, Kansas State University
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef SIREUM_MISC_H
#define SIREUM_MISC_H

#include <memory.h>
#include <stdio.h>
#include <type-composite.h>

static inline void String_assign(String dest, String src) {
  dest->type = src->type;
  Z srcSize = src->size;
  dest->size = srcSize;
  memcpy(dest->value, src->value, srcSize + 1);
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

void B_string(STACK_FRAME String result, B this);
void C_string(STACK_FRAME String result, C this);
void Z_string(STACK_FRAME String result, Z this);
void F32_string(STACK_FRAME String result, F32 this);
void F64_string(STACK_FRAME String result, F64 this);
void R_string(STACK_FRAME String result, R this);
void String_string(STACK_FRAME String result, String this);
void Type_string(STACK_FRAME String result, void* this);
void Type_cprint(void *this, B isOut);
B Type__eq(void *t1, void *t2);
#endif