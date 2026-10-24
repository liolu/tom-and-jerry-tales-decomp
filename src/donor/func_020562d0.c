/* compiler: 2.0/sp1p5  */
/* PM_SendUtilityCommandAsync from projets/heroes-of-mana/src/auto/PM_SendUtilityCommandAsync.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    u8 pad[0x1c];
    u32 a;
    u32 b;
} PmData;
extern PmData data_021b248c;
extern s32 func_0205600c(void);
extern void func_02056614(u32 d);
u32 func_020562d0(u32 p1, u32 p2, u32 p3) {
    if (func_0205600c() == 0) {
        return 1;
    }
    data_021b248c.a = p2;
    data_021b248c.b = p3;
    func_02056614(((p1 >> 16) & 0xff) | 0x2006300);
    func_02056614(0x1010000 | (p1 & 0xffff));
    return 0;
}
