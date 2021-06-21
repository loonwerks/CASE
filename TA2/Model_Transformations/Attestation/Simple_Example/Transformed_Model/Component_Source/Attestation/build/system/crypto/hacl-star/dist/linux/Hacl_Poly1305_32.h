/* MIT License
 *
 * Copyright (c) 2016-2020 INRIA, CMU and Microsoft Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "libintvector.h"
#include "kremlin/internal/types.h"
#include "kremlin/lowstar_endianness.h"
#include <string.h>
#include "kremlin/internal/target.h"

#ifndef __Hacl_Poly1305_32_H
#define __Hacl_Poly1305_32_H

#include "Hacl_Kremlib.h"


extern u32 Hacl_Poly1305_32_blocklen;

typedef u64 *Hacl_Poly1305_32_poly1305_ctx;

void Hacl_Poly1305_32_poly1305_init(u64 *ctx, u8 *key);

void Hacl_Poly1305_32_poly1305_update1(u64 *ctx, u8 *text);

void Hacl_Poly1305_32_poly1305_update(u64 *ctx, u32 len, u8 *text);

void Hacl_Poly1305_32_poly1305_finish(u8 *tag, u8 *key, u64 *ctx);

void Hacl_Poly1305_32_poly1305_mac(u8 *tag, u32 len, u8 *text, u8 *key);

#define __Hacl_Poly1305_32_H_DEFINED
#endif
