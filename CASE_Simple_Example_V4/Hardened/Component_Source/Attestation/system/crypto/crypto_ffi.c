// FFI interface to our verified crypto algorithms.

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#include "Hacl_Hash.h"
#include "Hacl_Ed25519.h"
#include "Hacl_Chacha20_Vec32.h"

#define FFI_SUCCESS 0
#define FFI_FAILURE 1
#define ffi_assert(cond) {if (!(cond)) { a[0] = FFI_FAILURE; return; }}

#define PRIV_LEN 32
#define PUB_LEN  64
#define SIG_LEN  64

// Arguments: message to be hashed in c
// Returns: hash in a
void ffisha512(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    assert(alen >= 64);
    Hacl_Hash_SHA2_hash_512(c, clen, a);
}

// Argument `c` should be the private key followed by the message (no delimiter)
// Returns signature
void ffisignMsg(const uint8_t * c, const long clen, uint8_t * sig, const long sigLen) {
    assert(clen >= PRIV_LEN);
    assert(sigLen >= SIG_LEN);
    uint8_t * priv = c;
    uint8_t * msg  = c + PRIV_LEN;
    Hacl_Ed25519_sign(sig, priv, (uint32_t)(clen - PRIV_LEN), msg);
}

// Argument `c` should be the public key, then signature, then message (no delimiters)
// Returns success if the signature is valid
void ffisigCheck(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    assert(clen >= PUB_LEN + SIG_LEN);
    assert(alen >= 1);

    // TODO: public key will be included in the payload, requiring parsing
    uint8_t * pub = c;
    uint8_t * sig = pub + PUB_LEN;
    uint8_t * msg = sig + SIG_LEN;
    uint32_t msgLen = (uint32_t)(clen - (PUB_LEN + SIG_LEN));

    a[0] = Hacl_Ed25519_verify(pub, msgLen, msg, sig) ? FFI_SUCCESS : FFI_FAILURE;
}

// Arguments: key in c
// Returns: xkey in a
// void ffiaes256_expand_key(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    // assert(clen >= 32);
    // assert(alen >= 240);
    //
    // uint32_t key[8];
    // cpyBytesToWords(c, key, 8);
    //
    // uint32_t xkey[60];
    // aes256_expand_key(key, xkey);
    // cpyWordsToBytes(xkey, a, 60);
// }

// Arguments: message block in first 16 blocks of c, xkey in the next 240
// Returns: ciphertext in a
// void ffiaes256(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    // assert(clen >= 255);
    // assert(alen >= 16);
    //
    // uint32_t pt[4];
    // cpyBytesToWords(c, pt, 4);
    //
    // uint32_t xkey[60];
    // cpyBytesToWords(c+16, xkey, 60);
    //
    // uint32_t ct[4];
    // aes256_block_enc(pt, xkey, ct);
    // cpyWordsToBytes(ct, a, 4);
// }

// c is [key (32 bytes), nonce (12 bytes), count (4 bytes), text ...]
void ffichacha20_encrypt(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    uint32_t len = (uint32_t)(clen - 48);

    assert(clen > 48);
    assert(alen >= len);

    uint8_t * key = c;
    uint8_t * nonce = c + 32;
    uint32_t ctr;
    memcpy((void *)(&ctr), (const void *)(c + 44), 4);
    uint8_t * text = c + 48;

    Hacl_Chacha20_Vec32_chacha20_encrypt_32(len, a, text, key, nonce, ctr);
}

// c is [key (32 bytes), nonce (12 bytes), count (4 bytes), text ...]
void ffichacha20_decrypt(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    uint32_t len = (uint32_t)(clen - 48);

    assert(clen > 48);
    assert(alen >= len);

    uint8_t * key = c;
    uint8_t * nonce = c + 32;
    uint32_t ctr;
    memcpy((void *)(&ctr), (const void *)(c + 44), 4);
    uint8_t * cipher = c + 48;

    Hacl_Chacha20_Vec32_chacha20_decrypt_32(len, a, cipher, key, nonce, ctr);
}