#include "m2c.h"
typedef struct {
    u16 count;
    u16 a;
    s32 f4;
    s32 total;
    s32 fc;
} H;
typedef struct {
    s32 start;
    s32 cur;
    s32 end;
} B;
typedef struct {
    s32 v;
    u8 pad[8];
} T;
extern H data_0208872c;
extern B data_0208873c[];
extern T data_02088744[];
s32 func_02031cf0(s32 size, s32 *out) {
    s16 i;
    s32 n;
    s32 save;
    s16 j;
    s32 addr;
    s32 free;
    u32 avail;
    B *b;
    s32 ok;
    n = size;
    for (i = data_0208872c.count - 1; i >= 0; i--) {
        b    = &data_0208873c[i];
        free = b->end - b->cur;
        if (free >= n) {
            data_02088744[i].v -= n;
            data_02088744[i].v &= ~7;
            *out = data_02088744[i].v;
            data_0208872c.total += size;
            return 1;
        }
        if (free > 0 && i > 0) {
            if (b->cur == b->start) {
                j    = i - 1;
                save = n;
                n -= free;
                ok = 1;
                while (j >= 0 && ok != 0) {
                    if (data_0208873c[j].end == data_0208873c[j + 1].start &&
                        data_0208873c[j + 1].cur == data_0208873c[j + 1].start) {
                        avail = data_0208873c[j].end - data_0208873c[j].cur;
                        if (avail >= n) {
                            addr               = (data_02088744[j].v - n) & ~7;
                            data_02088744[j].v = addr;
                            *out               = addr;
                            data_0208872c.total += size;
                            for (j = j + 1; j <= i; j++) {
                                data_0208873c[j].end = data_0208873c[i].cur;
                            }
                            return 1;
                        }
                        if (avail < 0x20000) {
                            break;
                        }
                        n -= avail;
                    } else {
                        ok = 0;
                    }
                    j--;
                }
                n = save;
            }
        }
    }
    return 0;
}
