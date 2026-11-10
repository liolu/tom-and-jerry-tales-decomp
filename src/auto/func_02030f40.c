#include "m2c.h"
typedef struct {
    void (*err)(void);
    s32 f4;
    s32 busy;
} State;
extern u8 data_02088720[];
extern u8 data_0206cf28[];
extern u8 data_0206cf5c[];
extern u8 data_0206cf80[];
extern u8 data_0206cf9c[];
extern u8 data_0206cfbc[];
extern u8 data_0206cfd8[];
extern u8 data_0206d018[];
void func_0203111c(s32, u8 **, s32, s32);
void func_02030eec(u8 *, ...);
void *func_01ff8000(s32, s32);
void OS_Terminate(void);
void func_02030ed4(s32 *, s32);
void func_020312cc(s32, u8 **, s32);
void memcpy(void *, u8 *, s32);
void MI_UncompressLZ8(u8 *, void *);
void MI_UncompressHuffman(u8 *, void *);
void MI_UncompressRL8(u8 *, void *);
void func_02030ee0(s32 *, s32);
void DC_FlushRange(void *, s32);
s32 func_02030f40(s32 name, void **outp, s32 heap, s32 lock) {
    u8 *buf;
    s32 tmp;
    u8 hdr[4];
    u8 *p;
    u8 type;
    s32 size;
    buf                             = 0;
    p                               = hdr;
    ((State *) data_02088720)->busy = 1;
    func_0203111c(name, &p, 4, 0);
    type = hdr[0] >> 4;
    size = hdr[1] + (hdr[2] << 8) + (hdr[3] << 16);
    func_02030eec(data_0206cf28, name, type, size);
    if (heap != 0) {
        *outp = func_01ff8000(heap, size);
        if (*outp == 0) {
            if (((State *) data_02088720)->err != 0) {
                ((State *) data_02088720)->err();
            }
            OS_Terminate();
        }
    }
    func_02030ed4(&tmp, lock);
    func_020312cc(name, &buf, lock);
    switch (type) {
        case 0:
            func_02030eec(data_0206cf5c, name);
            memcpy(*outp, buf + 4, size);
            break;
        case 1:
            func_02030eec(data_0206cf80, name);
            MI_UncompressLZ8(buf, *outp);
            break;
        case 2:
            func_02030eec(data_0206cf9c, name);
            MI_UncompressHuffman(buf, *outp);
            break;
        case 3:
            func_02030eec(data_0206cfbc, name);
            MI_UncompressRL8(buf, *outp);
            break;
        default:
            func_02030eec(data_0206cfd8, name);
            *outp = 0;
            return -1;
    }
    func_02030eec(data_0206d018, size, *outp);
    func_02030ee0(&tmp, lock);
    DC_FlushRange(*outp, size);
    ((State *) data_02088720)->busy = 0;
    return size;
}
