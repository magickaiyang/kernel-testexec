#ifndef TFORK_CONTROL_STRUCT
#define TFORK_CONTROL_STRUCT

#include <asm/pgtable_types.h>
#include <linux/atomic.h>

#define TFORK_IN_ROOT 0
#define TFORK_COPIED 1

struct tfork_control {
    p4d_t *p4d;  //pgd level omitted
    atomic_t counter;
    unsigned int flag;
};

#endif
