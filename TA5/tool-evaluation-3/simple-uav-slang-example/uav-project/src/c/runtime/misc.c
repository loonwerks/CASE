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
#include "misc.h"

void String__append(STACK_FRAME_SF String dest, String src) {
  Z srcSize = src->size;
  Z destSize = dest->size;
  Z size = srcSize + destSize;
  sfAssert(size <= MaxString, "Insufficient maximum for String characters.");
  for (Z i = Z_C(0); i < srcSize; i++) {
    dest->value[destSize + i] = src->value[i];
  }
  dest->value[size] = '\0';
  dest->size = size;
}

void B_string(STACK_FRAME String result, B this) {
  DeclNewStackFrame(caller, "B.scala", "org.sireum.B", "string", 0);
  Z size = result->size;
  Z newSize = size + 1;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  result->value[size] = this? (char) 'T' : (char) 'F';
  result->value[newSize] = '\0';
  result->size = newSize;
}

void C_string(STACK_FRAME String result, C this) {
  DeclNewStackFrame(caller, "C.scala", "org.sireum.C", "string", 0);
  Z size = result->size;
  Z newSize = size + 1;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  result->value[size] = this;
  result->value[newSize] = '\0';
  result->size = newSize;
}

void Z_string(STACK_FRAME String result, Z this) {
  DeclNewStackFrame(caller, "Z.scala", "org.sireum.Z", "string", 0);
  int nSize = snprintf(NULL, 0, Z_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, Z_F, this);
  result->size = newSize;
}

void F32_string(STACK_FRAME String result, F32 this) {
  DeclNewStackFrame(caller, "FloatingPoint.scala", "org.sireum.F32", "string", 0);
  int nSize = snprintf(NULL, 0, F32_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, F32_F, this);
  result->size = newSize;
}

void F64_string(STACK_FRAME String result, F64 this) {
  DeclNewStackFrame(caller, "FloatingPoint.scala", "org.sireum.F64", "string", 0);
  int nSize = snprintf(NULL, 0, F64_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, F64_F, this);
  result->size = newSize;
}

void R_string(STACK_FRAME String result, R this) {
  DeclNewStackFrame(caller, "R.scala", "org.sireum.R", "string", 0);
  int nSize = snprintf(NULL, 0, R_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, R_F, this);
  result->size = newSize;
}

void String_string(STACK_FRAME String result, String this) {
  DeclNewStackFrame(caller, "String.scala", "org.sireum.String", "string", 0);
  String__append(SF result, this);
}
