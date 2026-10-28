/* compiler: 2.0/sp1p5  */
/* raise from projets/lego-star-wars-ii-the-original-trilogy/src/auto/raise.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 M2C_UNK;
extern s32 func_020509fc(void *);
extern void OS_LockMutex(void *);
extern void func_02050964(void *);
extern void exit(s32);
extern M2C_UNK data_021b40d0;
extern M2C_UNK OSi_ThreadInfo;
extern M2C_UNK __cs_id;
typedef struct {
    u32 pad[7];
    s32 f1c;
} Cs;
extern Cs __cs_ref;
extern void (*signal_funcs[])(s32);
s32 func_0205bea4(s32 sig) {
    void (*handler)(s32);
    s32 idx;

    if (sig < 1 || sig > 7) {
        return -1;
    }
    if (func_020509fc(&data_021b40d0) == 0) {
        (*(s32 *) ((s8 *) (&__cs_id) + (0x1c))) =
            (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&OSi_ThreadInfo) + (0x4)))) + (0x6c)));
        __cs_ref.f1c = 1;
    } else {
        if ((*(s32 *) ((s8 *) (&__cs_id) + (0x1c))) ==
            (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&OSi_ThreadInfo) + (0x4)))) + (0x6c)))) {
            __cs_ref.f1c = __cs_ref.f1c + 1;
        } else {
            OS_LockMutex(&data_021b40d0);
            (*(s32 *) ((s8 *) (&__cs_id) + (0x1c))) =
                (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&OSi_ThreadInfo) + (0x4)))) + (0x6c)));
            __cs_ref.f1c = 1;
        }
    }
    idx     = sig - 1;
    handler = signal_funcs[idx];
    if (handler != (void (*)(s32)) 1) {
        signal_funcs[idx] = 0;
    }
    if (--__cs_ref.f1c == 0) {
        func_02050964(&data_021b40d0);
    }
    if (handler == (void (*)(s32)) 1 || (handler == 0 && sig == 1)) {
        return 0;
    }
    if (handler == 0) {
        exit(0);
    }
    handler(sig);
    return 0;
}
