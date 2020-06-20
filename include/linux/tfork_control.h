#ifndef TFORK_CONTROL_STRUCT
#define TFORK_CONTROL_STRUCT

#include <asm/pgtable_types.h>
#include <linux/atomic.h>

#define TFORK_IN_ROOT 0
#define TFORK_COPIED 1

//used in copy_page_range_tfork()
#define TFORK_GO_INTO 4
#define TFORK_DECREASE_COUNTER 2
#define TFORK_INCREASE_COUNTER 1

struct tfork_control {
    p4d_t *p4d;  //pgd level omitted
    atomic_t counter;
    unsigned int flag;
};

#endif
