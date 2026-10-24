/* compiler: 2.0/sp1p5  */
/* TP_GetCalibratedResult from projets/blue-dragon-awakened-shadow/src/auto/TP_GetCalibratedResult.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef struct {
    u16 a, b, c, d;
} Cal;
typedef struct {
    u8 pad[8];
    Cal cal;
    u8 pad2[0x28];
    u16 flags;
} TpWork;
extern TpWork data_021b2450;
extern void func_02055ebc(Cal *a, Cal *b);
s32 func_02055a24(Cal *out) {
    if (data_021b2450.flags & 1) {
        return 1;
    }
    *out = data_021b2450.cal;
    func_02055ebc(out, out);
    return 0;
}
