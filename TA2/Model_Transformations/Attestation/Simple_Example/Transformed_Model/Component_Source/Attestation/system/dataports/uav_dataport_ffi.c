#include <assert.h>
#include <string.h>
#include <stdint.h>

#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <am_queue.h>

#define FFI_SUCCESS 0
#define FFI_FAILURE 1
#define ffi_assert(cond) {if (!(cond)) { a[0] = FFI_FAILURE; return; }}

void ffiwriteDataport(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    assert(clen >= 2);
    assert(alen >= 1);

    const char * name = (const char *)c;
    size_t nameSize = strlen(name) + 1;
    void * msg = (void *)(name + nameSize);
    size_t length = (size_t)clen - nameSize;

    int fd = open((const char *)c, O_RDWR);
    ffi_assert(fd >= 0);

    queue_t * dataport = (queue_t *)mmap(NULL, sizeof(queue_t), PROT_READ | PROT_WRITE, MAP_SHARED, fd, getpagesize());
    ffi_assert(dataport != (queue_t *)(-1));

    uint8_t * emit = (uint8_t *)mmap(NULL, 0x1000, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    ffi_assert(emit != (uint8_t *)(-1));

    queue_init(dataport);

    static data_t data;
    ffi_assert(length <= DATA_T_MAX_PAYLOAD);
    memcpy((void *)data.payload, (const void *)msg, length);

    queue_enqueue(dataport, &data);
    emit[0] = 1;

    munmap(dataport, sizeof(queue_t));
    munmap(emit, 0x1000);
    close(fd);

    a[0] = FFI_SUCCESS;
}