#include "m2c.h"

typedef struct {
    void (*cb)(void);
    s32 f4;
    s32 f8;
} Ctl;

void func_02030eec(void *, ...);
void func_02051a48(void);
s32 func_020585b8(void);
void func_02054c5c(void *);
s32 func_02054f3c(void *, void *);
s32 func_02054f84(void *);
void *func_01ff8000(s32, s32);
s32 func_020550c8(void *, void *, s32);
void func_02050b24(void *, s32);
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
        func_02051a48();
    }
    if (heap != 0 && *out != 0) {
        func_02030eec(data_0206d040, name);
        *out = 0;
    }
    if (func_020585b8() != 0 && data_02088720.cb != 0) {
        data_02088720.cb();
    }
    func_02054c5c(fs);
    ok = func_02054f3c(fs, name);
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
                func_02051a48();
            }
        }
        n = func_020550c8(fs, *out, size);
        if (n != size) {
            func_02051a48();
        }
        func_02030eec(data_0206d0b0, name, func_02054f84(fs) != 0 ? data_0206d07c : data_0206d080);
        func_02030eec(data_0206d0d8, n, name, *out);
        func_02050b24(*out, size);
        return size;
    }
    func_02030eec(data_0206d110, name);
    *out = 0;
    return -1;
}
