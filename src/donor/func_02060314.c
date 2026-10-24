/* compiler: 2.0/sp1p5  */
/* func_0202a784 from projets/heroes-of-mana/src/auto/func_0202a784.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    u16 a[19];
} Buf;
extern u8 data_0206e25c;
extern u8 data_0206e28c;
extern u8 data_0206e2b4;
extern u8 data_0206e2cc;
extern u8 data_0206e2dc;
extern u8 data_0206e2e4;
extern u8 data_0206e2ec;
extern u8 data_0206e2f4;
extern u8 data_0206e2fc;
extern u8 data_0206e300;
extern u8 data_0206e304;
extern u8 data_0206e308;
extern u8 data_0206e30c;
extern u8 data_0206e310;
extern u8 data_0206e314;
extern u8 data_0206e318;
extern u8 data_0206e31c;
extern u8 data_0206e320;
extern u8 data_0206e324;
extern u8 data_0206e328;
extern u8 data_0206e32c;
extern void func_02060278(Buf *, void *, s32);
extern void func_020600f4(Buf *, Buf *, Buf *);
void func_02060314(Buf *dst, s32 n) {
    Buf tmp2;
    Buf tmp;

    switch (n) {
        case -64:
            func_02060278(dst, &data_0206e25c, -20);
            return;
        case -53:
            func_02060278(dst, &data_0206e28c, -16);
            return;
        case -32:
            func_02060278(dst, &data_0206e2b4, -10);
            return;
        case -16:
            func_02060278(dst, &data_0206e2cc, -5);
            return;
        case -8:
            func_02060278(dst, &data_0206e2dc, -3);
            return;
        case -7:
            func_02060278(dst, &data_0206e2e4, -3);
            return;
        case -6:
            func_02060278(dst, &data_0206e2ec, -2);
            return;
        case -5:
            func_02060278(dst, &data_0206e2f4, -2);
            return;
        case -4:
            func_02060278(dst, &data_0206e2fc, -2);
            return;
        case -3:
            func_02060278(dst, &data_0206e300, -1);
            return;
        case -2:
            func_02060278(dst, &data_0206e304, -1);
            return;
        case -1:
            func_02060278(dst, &data_0206e308, -1);
            return;
        case 0:
            func_02060278(dst, &data_0206e30c, 0);
            return;
        case 1:
            func_02060278(dst, &data_0206e310, 0);
            return;
        case 2:
            func_02060278(dst, &data_0206e314, 0);
            return;
        case 3:
            func_02060278(dst, &data_0206e318, 0);
            return;
        case 4:
            func_02060278(dst, &data_0206e31c, 1);
            return;
        case 5:
            func_02060278(dst, &data_0206e320, 1);
            return;
        case 6:
            func_02060278(dst, &data_0206e324, 1);
            return;
        case 7:
            func_02060278(dst, &data_0206e328, 2);
            return;
        case 8:
            func_02060278(dst, &data_0206e32c, 2);
            return;
        default:
            func_02060314(&tmp2, ((s32) (n + ((u32) (n & 0x80000000) >> 31)) >> 1));
            func_020600f4(dst, &tmp2, &tmp2);
            if (n & 1) {
                tmp = *dst;
                if (n > 0) {
                    func_02060278(&tmp2, &data_0206e310, 0);
                } else {
                    func_02060278(&tmp2, &data_0206e308, -1);
                }
                func_020600f4(dst, &tmp, &tmp2);
            }
            return;
    }
}
