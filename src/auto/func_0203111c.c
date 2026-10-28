#include "m2c.h"

typedef struct {
    void (*cb)(void);
    s32 f4;
    s32 f8;
} Ctl;

void func_02030eec(void *, ...);
void OS_Terminate(void);
s32 CARD_IsPulledOut(void);
void func_02054c5c(void *);
s32 FS_OpenFile(void *, void *);
s32 func_02054f84(void *);
void *func_01ff8000(s32, s32);
s32 func_020550c8(void *, void *, s32);
void DC_FlushRange(void *, s32);
extern Ctl data_02088720;
extern u8 data_0206d040[];
extern u8 data_0206d07c[];
extern u8 data_0206d080[];
extern u8 data_0206d088[];
extern u8 data_0206d0b0[];
extern u8 data_0206d0d8[];
extern u8 data_0206d110[];

s32 func_0203111c(void *name, void **out, s32 size, s32 heap) {
    u8 fs[0x48];
    s32 ok;
    s32 n;
    s32 len;

    data_02088720.f8 = 1;
    if (data_02088720.f4 == 0) {
        OS_Terminate();
    }
    if (heap != 0 && *out != 0) {
        func_02030eec(data_0206d040, name);
        *out = 0;
    }
    if (CARD_IsPulledOut() != 0 && data_02088720.cb != 0) {
        data_02088720.cb();
    }
    func_02054c5c(fs);
    ok = FS_OpenFile(fs, name);
    func_02030eec(data_0206d088, name, ok != 0 ? data_0206d07c : data_0206d080);
    if (ok != 0) {
        len = *(s32 *) (fs + 0x28) - *(s32 *) (fs + 0x24);
        if (len < size || size == -1) {
            size = len;
        }
        if (heap != 0) {
            *out = func_01ff8000(heap, size);
            if (*out == 0) {
                if (data_02088720.cb != 0) {
                    data_02088720.cb();
                }
                OS_Terminate();
            }
        }
        n = func_020550c8(fs, *out, size);
        if (n != size) {
            OS_Terminate();
        }
        func_02030eec(data_0206d0b0, name, func_02054f84(fs) != 0 ? data_0206d07c : data_0206d080);
        func_02030eec(data_0206d0d8, n, name, *out);
        DC_FlushRange(*out, size);
        return size;
    }
    func_02030eec(data_0206d110, name);
    *out = 0;
    return -1;
}
