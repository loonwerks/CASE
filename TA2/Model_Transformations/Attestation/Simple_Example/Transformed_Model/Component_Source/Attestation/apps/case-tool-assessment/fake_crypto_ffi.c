#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

long max(long a, long b) {
    return a > b ? a : b;
}

void ffifakeRand(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    static bool initDone = false;
    if (!initDone) {
        srandom((unsigned int)999);    
        initDone = true;
    } 
    for (int i = 0; i < alen; i += 4) {
        uint32_t r = (uint32_t)random();
        memcpy((void *)(a + i), (const void *)&r, max(4, alen - i));
    }
}
