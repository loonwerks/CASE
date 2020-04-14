/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <inttypes.h>
#include <queue.h>


#include <counter.h>
#include <data.h>
#include <queue.h>

//------------------------------------------------------------------------------
// Implementation of AADL Input Event Data Port (out) named "p1_out"
//
// NOTE: If we only need polling style receivers, we can get rid of the SendEvent

// Assumption: only one thread is calling this and/or reading p1_in_recv_counter.
void p1_out_aadl_event_data_send(queue_t *q, data_t *data, int *emit) {
    queue_enqueue(q, data);
    emit[0] = 1;
}

//------------------------------------------------------------------------------
// Testing



int main(int argc, char *argv[])
{

    if (argc != 3) {
        printf("Usage: %s file dataport_size\n\n"
               "Reads the c string contents of a specified dataport file to stdout",
               argv[0]);
        return 1;
    }

    char *dataport_name = argv[1];
    int length = atoi(argv[2]);
    assert(length > 0);

    int fd = open(dataport_name, O_RDWR);
    assert(fd >= 0);

    char *dataport;
    if ((dataport = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 1 * getpagesize())) == (void *) -1) {
        printf("mmap failed\n");
        close(fd);
    }

    char *emit;
    if ((emit = mmap(NULL, 0x1000, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0 * getpagesize())) == (void *) -1) {
        printf("mmap failed\n");
        close(fd);
    }

    queue_init(dataport);
    int i = 0;
    int err = 0;
    data_t data;

    while (1) {

        // wait a bit and slow things down
        usleep(500 * 1000);

        // Send a random number of data elements
        int n = (random() % 10);
        for(unsigned int j = 0; j < n; ++j){
            ++i;
            // Stage data
            data.x = i;
            // if (i%100 ==0)
            printf("%s: sending: %d\n", "sender", data.x);
            // Send the data
            p1_out_aadl_event_data_send(dataport, &data, emit);          
        }
    }

    munmap(dataport, length);
    close(fd);

    return 0;
}
