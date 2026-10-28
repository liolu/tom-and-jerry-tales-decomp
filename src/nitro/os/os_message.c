/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(int state);
extern void OS_SleepThread(void *queue);
extern void OS_WakeupThread(void *queue);
extern long long _s32_div_f(int a, int b);

/* OS_SendMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SendMessage.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
int OS_SendMessage(char *q, void *msg, int flags) {
    int enabled = OS_DisableInterrupts();
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            OS_RestoreInterrupts(enabled);
            return 0;
        }
        OS_SleepThread(q);
    }
    (*(void ***) (q + 0x10))[(int) (_s32_div_f(*(int *) (q + 0x18) + *(int *) (q + 0x1c), *(int *) (q + 0x14)) >> 32)] = msg;
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) + 1;
    OS_WakeupThread(q + 8);
    OS_RestoreInterrupts(enabled);
    return 1;
}

/* OS_ReceiveMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_ReceiveMessage.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int OS_ReceiveMessage(char *q, void **out, int flags) {
    int enabled = OS_DisableInterrupts();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            OS_RestoreInterrupts(enabled);
            return 0;
        }
        OS_SleepThread(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (_s32_div_f(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    OS_WakeupThread(q);
    OS_RestoreInterrupts(enabled);
    return 1;
}

/* OS_JamMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_JamMessage.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
int OS_JamMessage(char *q, void *msg, int flags) {
    int enabled = OS_DisableInterrupts();
    void **slots;
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            OS_RestoreInterrupts(enabled);
            return 0;
        }
        OS_SleepThread(q);
    }
    *(int *) (q + 0x18)        = (int) (_s32_div_f(*(int *) (q + 0x18) + *(int *) (q + 0x14) - 1, *(int *) (q + 0x14)) >> 32);
    slots                      = *(void ***) (q + 0x10);
    slots[*(int *) (q + 0x18)] = msg;
    *(int *) (q + 0x1c)        = *(int *) (q + 0x1c) + 1;
    OS_WakeupThread(q + 8);
    OS_RestoreInterrupts(enabled);
    return 1;
}
