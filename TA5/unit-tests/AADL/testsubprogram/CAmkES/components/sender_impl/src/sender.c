/* testsubprogram/components/sender/src/sender */

#include <camkes.h>
#include <sb_proc_types.h>
#include "../includes/sb_sender.h"

void sender_init(const int64_t *arg){
   printf("Initializer method for sender invoked\n");
}

void run_sender(int64_t * arg) {
   uint32_t result;

   operation_add(10, 5, &result);
   printf("Result of 'add' call to receiver with arguments 10, 5 : (%d) \n", result);
   
   operation_subtract(10, 5, &result);  
   printf("Result of 'subtract' call to receiver with arguments 10, 5 : (%d) \n", result);
}
