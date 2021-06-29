#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

#include <unistd.h> // write
#include <sys/types.h> // getaddrinfo
#include <sys/socket.h> // getaddrinfo
#include <netdb.h> // getaddrinfo

// The Heli will be the server here, since it sends the request to initiate

// Globals
bool useram_connected = false;
int useram_fd;

int try_connect(const char * ip, const char * port) {
    struct addrinfo hints;
    memset(&hints, 0, sizeof(struct addrinfo));

    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;

    struct addrinfo * result;
    if (getaddrinfo(ip, port, &hints, &result)) {
        freeaddrinfo(result);
        return -1;
    }

    int fd;
    struct addrinfo * r;
    for (r = result; r; r = r->ai_next) {
        fd = socket(r->ai_family, r->ai_socktype, r->ai_protocol);
        if (fd == -1)
            continue;

        if (!connect(fd, r->ai_addr, r->ai_addrlen))
            break;

        close(fd);
    }
    freeaddrinfo(result);
    if (!r) return -1;

    return fd;
}

void try_connect_useram(){
    useram_fd = try_connect("127.0.0.1", "5000");
    useram_connected = useram_fd >= 0;
}

void ffiapi_send_AttestationRequest(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
    assert(parameterSizeBytes == 16);

    while(!useram_connected)
        try_connect_useram();

    write(useram_fd, (const void*)parameter, 16);
}

void ffiapi_get_AttestationResponse(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
    assert(outputSizeBytes == 2049);
    assert(useram_connected);

    ssize_t n_read = read(useram_fd, ((void *)output)+1, 2048);
    output[0] = n_read > 0;
}

void ffiapi_send_TrustedIds(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  printf("Sending trusted id list:");
  for (int i = 0; i < parameterSizeBytes; i+=4) {
      printf("%i, ", (int32_t)parameter[i]);
  }
  printf("\n");
}