#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "Hacl_Ed25519.h"

#define PRIV_LEN 32
#define PUB_LEN  64

bool urand(uint8_t * buf, const long len) {
    int fd = open("/dev/urandom", O_RDONLY);
    if(fd == -1)
        return false;

    size_t want = (size_t)len;
    size_t got = (size_t)read(fd, (void *)buf, want);
    close(fd);
    
    return got == want;
}

void print_bytes(uint8_t * bytes, int len) {
    // printf("0x");
    for (int i = 0; i < len; i++)
        printf("%02X", bytes[i]);
}

// Uses /dev/urandom to get private key.
// The public key is then generated from the private key.
int main(void) {
    uint8_t priv[PRIV_LEN];
    if (!urand((uint8_t *)priv, PRIV_LEN)) {
        printf("Failed to generate public key.\n");
        return 1;
    }

    printf("Private key (hexadecimal):\n");
    print_bytes(priv, PRIV_LEN);
    printf("\n\n");

    uint8_t pub[PUB_LEN];
    Hacl_Ed25519_secret_to_public((uint8_t *)pub, priv);

    printf("Public key (hexadecimal):\n");
    print_bytes(pub, PUB_LEN);
    printf("\n");

    return 0;
}
