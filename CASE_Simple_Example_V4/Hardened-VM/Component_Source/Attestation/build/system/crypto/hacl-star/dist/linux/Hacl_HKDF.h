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

#ifndef __Hacl_HKDF_H
#define __Hacl_HKDF_H

#include "Hacl_HMAC.h"


void Hacl_HKDF_expand_sha2_256(u8 *okm, u8 *prk, u32 prklen, u8 *info, u32 infolen, u32 len);

void Hacl_HKDF_extract_sha2_256(u8 *prk, u8 *salt, u32 saltlen, u8 *ikm, u32 ikmlen);

void Hacl_HKDF_expand_sha2_512(u8 *okm, u8 *prk, u32 prklen, u8 *info, u32 infolen, u32 len);

void Hacl_HKDF_extract_sha2_512(u8 *prk, u8 *salt, u32 saltlen, u8 *ikm, u32 ikmlen);

#define __Hacl_HKDF_H_DEFINED
#endif
