#include <assert.h>
#include <string.h>
#include <stdint.h>

#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>

#define FFI_SUCCESS 0
#define FFI_FAILURE 1
#define ffi_assert(cond) {if (!(cond)) { a[0] = FFI_FAILURE; return; }}

// TODO: replace strlen with a safe (bounded) alternative
void ffiwriteDataport(const uint8_t * c, const long clen, uint8_t * a, const long alen) {
    assert(clen >= 2);
    assert(alen >= 1);

    const char * name = (const char *)c;
    size_t nameSize = strlen(name) + 1;
    void * msg = (void *)(name + nameSize);
    size_t length = (size_t)clen - nameSize;

    int fd = open((const char *)c, O_RDWR);
    ffi_assert(fd >= 0);

    void * dataport = mmap(NULL, length, PROT_WRITE, MAP_SHARED, fd, getpagesize());
    ffi_assert(dataport != (void *)(-1));

    memcpy(dataport, msg, length);

    munmap(dataport, length);
    close(fd);

    a[0] = FFI_SUCCESS;
}

// write the contents of c to the dataport
void ffidataport_write( unsigned char* c, long clen, unsigned char* a, long alen )
{
    char *dataport_name = "/dev/uio0";
    int length = strlen( c );
    assert(length > 0);

    int fd = open(dataport_name, O_RDWR);
    assert(fd >= 0);

    char *dataport;
    if ((dataport = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 1 * getpagesize())) == (void *) -1) {
        printf("mmap failed\n");
        close(fd);
    }

    for( int i=0; i<length; i++ )
    {
        dataport[i] = c[i];
    }
    dataport[length] = '\0';

    munmap(dataport, length);
    close(fd);
}

// input a byte array of size 4096 as c
// length is always understood to be the size of the dataport buffer
// c is then filled up with the contents of the dataport
void ffidataport_read( unsigned char* c, long clen, unsigned char* a, long alen )
{
    char* name = "/dev/uio0";
    int length = (size_t)4096;

    int fd = open(name, O_RDWR);
    ffi_assert(fd >= 0);

    char* dataport = mmap(NULL, length, PROT_WRITE, MAP_SHARED, fd, getpagesize());
    ffi_assert(dataport != (void *)(-1));

    void* msg = (const char *)c;
    memcpy(msg, dataport, length);

    munmap(dataport, length);
    close(fd);

    a[0] = FFI_SUCCESS;
}

// let the other end of the dataport know we're done writing
void ffiemit_event( unsigned char* a, long alen, unsigned char* b, long blen)
{
    char* connection_name = "/dev/uio0";

    int fd = open(connection_name, O_RDWR);
    assert(fd >= 0);

    char *connection;
    if ((connection = mmap(NULL, 0x1000, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0 * getpagesize())) == (void *) -1) {
        printf("mmap failed\n");
        close(fd);
    }

    /* Write at register address 0 to trigger an emit signal */
    connection[0] = 1;

    munmap(connection, 0x1000);
    close(fd);

    return 0;
}
