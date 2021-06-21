#include <stdint.h>
#include <assert.h>
#include <endian.h>

#ifdef __BYTE_ORDER
    #if __BYTE_ORDER == __BIG_ENDIAN
const uint8_t endianness = 0;
    #elif __BYTE_ORDER == __LITTLE_ENDIAN
const uint8_t endianness = 1;
    #else
const uint8_t endianness = 2;
    #endif
#endif

void ffiget_endianness(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    assert(alen >= 1);
    a[0] = endianness;
}