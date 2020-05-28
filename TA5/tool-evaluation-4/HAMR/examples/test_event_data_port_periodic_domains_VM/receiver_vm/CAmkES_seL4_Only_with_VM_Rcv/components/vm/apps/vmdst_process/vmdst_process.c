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
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <errno.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sb_queue_int8_t_1.h>

//------------------------------------------------------------------------------
// Implementation of AADL Input Event Data Port (in) named "p1_in"
// Three styles: poll, wait and callback.
//
// Callback would typically be avoid for safety critical systems. It is harder
// to analyze since the callback handler is run on some arbitrary thread.
//
// NOTE: If we only need polling style receivers, we can get rid of SendEvent

sb_queue_int8_t_1_Recv_t sb_read_port_queue;
sb_queue_int8_t_1_Recv_t sb_pacer_period_queue;

int sb_read_port_queue_fd;
int sb_pacer_period_queue_fd;

//------------------------------------------------------------------------------
// User specified input data receive handler for AADL Input Event Data Port (in) named
// "p1_in".

void sb_read_port_in_aadl_event_data_receive(sb_event_counter_t *numDropped, int8_t *data) {
    printf("Receiver: received: %d  numDropped: %d\n", *data, *numDropped);
}

// Assumption: only one thread is calling this and/or reading p1_in_recv_counter.
bool sb_read_port_in_aadl_event_data_poll(sb_event_counter_t *numDropped, int8_t *data) {
    return sb_queue_int8_t_1_dequeue(&sb_read_port_queue, numDropped, data);
}

void sb_read_port_in_aadl_event_data_wait(sb_event_counter_t *numDropped, int8_t *data) {
    while (!sb_read_port_in_aadl_event_data_poll(numDropped, data)) {
    	int val;
    	/* Blocking read */
    	int result = read(sb_read_port_queue_fd, &val, sizeof(val));
		if (result < 0) {
		    printf("Error: %s\n", strerror(errno));
		    //return -1;
		}
    }
}


//------------------------------------------------------------------------------
// Testing - Three tests for the different styles: poll, wait and callback.
//
// NOTE: The constants in the tests were chosen to cause a variety of
// situations at runtime including dropped packets and no data
// available. These numbers may not cause the same variety of behaviour in
// different test environments.

void sb_pacer_period_wait(int port_fd, sb_queue_int8_t_1_Recv_t *q, sb_event_counter_t *numDropped) {
    int8_t data;
    while (!sb_queue_int8_t_1_dequeue(q, numDropped, &data)) {
    	//int8_t val;
    	struct sb_queue_int8_t_1 val;
    	
    	/* Blocking read */

    	int result = read(port_fd, &val, sizeof(struct sb_queue_int8_t_1));

		if (result < 0) {
		    //printf("Error reading period. %i\n", result);
		    //return -1;
		}
    }
    
    //printf("Leaving period wait %i\n", data);
}	

void run_poll(void) {
    sb_event_counter_t numDropped = 0;
    int8_t data = 0;
    int notfound = 1;

    while (true) {
        sb_pacer_period_wait(sb_pacer_period_queue_fd, &sb_pacer_period_queue, &numDropped);
        
        notfound = 1;
        while (notfound) {
            bool dataReceived = sb_read_port_in_aadl_event_data_poll(&numDropped, &data);
            if (dataReceived) {
                sb_read_port_in_aadl_event_data_receive(&numDropped, &data);
                notfound = 0;
                
            } else {
                printf("%s: received nothing\n", "Receiver");
            }
        }
    }

}

void run_wait(void) {
    sb_event_counter_t numDropped = 0;
    int8_t data = 0;

    while (true) {
        sb_pacer_period_wait(sb_pacer_period_queue_fd, &sb_pacer_period_queue, &numDropped);

        sb_read_port_in_aadl_event_data_wait(&numDropped, &data);
        sb_read_port_in_aadl_event_data_receive(&numDropped, &data);
    }
}


int main(int argc, char *argv[])
{

    if (argc != 5) {
        printf("Usage: %s <fd of sb_read_port_queue> <size of sb_read_port_queue> <fd of sb_pacer_period_queue> <size of sb_pacer_period_queue> \n\n"
               "Reads the c string contents of a specified dataport file to stdout",
               argv[0]);
        return 1;
    }

    char *sb_read_port_queue_name = argv[1];

    int sb_read_port_queue_length = atoi(argv[2]);
    assert(sb_read_port_queue_length > 0);
    
    sb_read_port_queue_fd = open(sb_read_port_queue_name, O_RDWR);
    assert(sb_read_port_queue_fd >= 0);

    char *sb_read_port_queue_char;
    if ((sb_read_port_queue_char = mmap(NULL, 
                                        sb_read_port_queue_length, 
                                        PROT_READ | PROT_WRITE, 
                                        MAP_SHARED, 
                                        sb_read_port_queue_fd, 
                                        1 * getpagesize())) == (void *) -1) {
        printf("mmap sb_read_port_queue_char failed\n");
        close(sb_read_port_queue_fd);
        return 1;
    }
    
    sb_queue_int8_t_1_Recv_init(&sb_read_port_queue, (sb_queue_int8_t_1_t *)sb_read_port_queue_char);
    
            
    char *sb_pacer_period_queue_name = argv[3];
    
    int sb_pacer_period_queue_length = atoi(argv[4]);
    assert(sb_pacer_period_queue_length > 0);
    
    sb_pacer_period_queue_fd = open(sb_pacer_period_queue_name, O_RDWR);
    assert(sb_pacer_period_queue_fd >= 0);


    char *sb_pacer_period_queue_char;
    if ((sb_pacer_period_queue_char = mmap(NULL, 
                                           sb_pacer_period_queue_length, 
                                           PROT_READ | PROT_WRITE, MAP_SHARED, 
                                           sb_pacer_period_queue_fd, 
                                           1 * getpagesize())) == (void *) -1) {
        printf("mmap sb_pacer_period_queue_char failed\n");
        close(sb_pacer_period_queue_fd);
        return 1;
    }

    sb_queue_int8_t_1_Recv_init(&sb_pacer_period_queue, (sb_queue_int8_t_1_t *)sb_pacer_period_queue_char);


    run_poll();
    //run_wait();

    munmap(sb_read_port_queue_char, sb_read_port_queue_length);
    close(sb_read_port_queue_fd);
    
    munmap(sb_pacer_period_queue_char, sb_pacer_period_queue_length);
    close(sb_pacer_period_queue_fd);

    return 0;
}
