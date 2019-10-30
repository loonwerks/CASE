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
#ifndef SIREUM_ZN_TYPE_H
#define SIREUM_ZN_TYPE_H

#include <inttypes.h>
#include <type.h>

typedef int32_t Z;

#define Z_C(n) INT32_C(n)

#define Z_Min Z_C(INT32_MIN)
#define Z_Max Z_C(INT32_MAX)

#define Z_F "%" PRId32 ""

#define Z__plus(n) n

static inline Z Z__minus(Z n) {
  return (Z) -n;
}

static inline Z Z__add(Z n1, Z n2) {
  return (Z) (n1 + n2);
}

static inline Z Z__sub(Z n1, Z n2) {
  return (Z) (n1 - n2);
}

static inline Z Z__mul(Z n1, Z n2) {
  return (Z) (n1 * n2);
}

static inline Z Z__div(Z n1, Z n2) {
  return (Z) (n1 / n2);
}

static inline Z Z__rem(Z n1, Z n2) {
  return (Z) (n1 % n2);
}

static inline B Z__eq(Z n1, Z n2) {
  return (B) (n1 == n2);
}

static inline B Z__ne(Z n1, Z n2) {
  return (B) (n1 != n2);
}

static inline B Z__lt(Z n1, Z n2) {
  return (B) (n1 < n2);
}

static inline B Z__le(Z n1, Z n2) {
  return (B) (n1 <= n2);
}

static inline B Z__gt(Z n1, Z n2) {
  return (B) (n1 > n2);
}

static inline B Z__ge(Z n1, Z n2) {
  return (B) (n1 >= n2);
}

#endif