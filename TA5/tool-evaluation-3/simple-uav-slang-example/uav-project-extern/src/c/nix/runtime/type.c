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
#include "type.h"

B B__eq(B b1, B b2);
B B__ne(B b1, B b2);
B B__complement(B b);
B B__and(B b1, B b2);
B B__or(B b1, B b2);
B B__xor(B b1, B b2);
C C__complement(C c);
C C__add(C c1, C c2);
C C__sub(C c1, C c2);
C C__mul(C c1, C c2);
C C__div(C c1, C c2);
C C__rem(C c1, C c2);
B C__eq(C c1, C c2);
B C__ne(C c1, C c2);
B C__lt(C c1, C c2);
B C__le(C c1, C c2);
B C__gt(C c1, C c2);
B C__ge(C c1, C c2);
Z Z__plus(Z n);
Z Z__minus(Z n);
Z Z__add(Z n1, Z n2);
Z Z__sub(Z n1, Z n2);
Z Z__mul(Z n1, Z n2);
Z Z__div(Z n1, Z n2);
Z Z__rem(Z n1, Z n2);
B Z__eq(Z n1, Z n2);
B Z__ne(Z n1, Z n2);
B Z__lt(Z n1, Z n2);
B Z__le(Z n1, Z n2);
B Z__gt(Z n1, Z n2);
B Z__ge(Z n1, Z n2);
C C__shl(C c1, C c2);
C C__shr(C c1, C c2);
C C__ushr(C c1, C c2);
C C__and(C c1, C c2);
C C__or(C c1, C c2);
C C__xor(C c1, C c2);
F32 F32__add(F32 n1, F32 n2);
F32 F32__sub(F32 n1, F32 n2);
F32 F32__mul(F32 n1, F32 n2);
F32 F32__div(F32 n1, F32 n2);
F32 F32__rem(F32 n1, F32 n2);
B F32__eq(F32 n1, F32 n2);
B F32__ne(F32 n1, F32 n2);
B F32__lt(F32 n1, F32 n2);
B F32__le(F32 n1, F32 n2);
B F32__gt(F32 n1, F32 n2);
B F32__ge(F32 n1, F32 n2);
F64 F64__add(F64 n1, F64 n2);
F64 F64__sub(F64 n1, F64 n2);
F64 F64__mul(F64 n1, F64 n2);
F64 F64__div(F64 n1, F64 n2);
F64 F64__rem(F64 n1, F64 n2);
B F64__eq(F64 n1, F64 n2);
B F64__ne(F64 n1, F64 n2);
B F64__lt(F64 n1, F64 n2);
B F64__le(F64 n1, F64 n2);
B F64__gt(F64 n1, F64 n2);
B F64__ge(F64 n1, F64 n2);
R R__add(R n1, R n2);
R R__sub(R n1, R n2);
R R__mul(R n1, R n2);
R R__div(R n1, R n2);
R R__rem(R n1, R n2);
B R__eq(R n1, R n2);
B R__ne(R n1, R n2);
B R__lt(R n1, R n2);
B R__le(R n1, R n2);
B R__gt(R n1, R n2);
B R__ge(R n1, R n2);