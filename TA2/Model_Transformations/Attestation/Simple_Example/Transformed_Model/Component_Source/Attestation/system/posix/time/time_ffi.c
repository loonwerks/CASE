#include <time.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>

// Returns epoch time in microseconds
void ffitimestamp(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    (void)c;
    (void)clen;
    assert (alen >= 4);

    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    const uint64_t microsec = ((uint64_t)ts.tv_sec  * 1e6)
                            + ((uint64_t)ts.tv_nsec / 1e3);

    // We can't write a `uint64_t` directly to `uint8_t *` since it may not be
    // 64-bit aligned. Thus we have to copy the data.
    memcpy((void *)a, (const void *)(&microsec), 8);
}