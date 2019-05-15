/* testsubprogram/components/receiver/src/receiver */

#include <camkes.h>
#include <sb_proc_types.h>
#include "../includes/sb_receiver.h"

void operation_add(uint32_t A, uint32_t B, uint32_t *result) {
	*result = A + B;
}

void operation_subtract(uint32_t A, uint32_t B, uint32_t *result) {
	*result = A - B;
}
