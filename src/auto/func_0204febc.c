#include "m2c.h"

typedef unsigned char u8;

typedef unsigned long u32;

typedef struct OSThread {
    u8 reserved_00[0x68];
    struct OSThread *next;
    u32 id;
    u32 priority;
} OSThread;

typedef struct OSThreadInfo {
    u8 reserved_00[0x2c];
    OSThread *list;
} OSThreadInfo;

extern OSThreadInfo data_021b0460;

/* OSi_InsertThreadByPriority from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nitro/os/calls/OSi_InsertThreadByPriority.c (license: CC0-1.0), reused by tools/donor_match.py */
void func_0204febc(OSThread *thread) {
    OSThread *current  = data_021b0460.list;
    OSThread *previous = 0;

    while (current != 0 && current->priority < thread->priority) {
        previous = current;
        current  = current->next;
    }

    if (previous == 0) {
        thread->next       = data_021b0460.list;
        data_021b0460.list = thread;
    } else {
        thread->next   = previous->next;
        previous->next = thread;
    }
}
