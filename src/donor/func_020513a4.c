/* compiler: 2.0/sp1p5  */
/* OS_InitException from projets/heroes-of-mana/src/auto/OS_InitException.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
extern s32 func_020506dc();
extern struct {
    u32 a;
    u32 b;
    u32 c;
} data_021b0708;
extern u8 func_02051424[];
void func_020513a4(void) {
    u32 h = *(u32 *) 0x027FFD9C;
    u8 *p = (u8 *) 0x027E3000;
    if (h >= 0x02600000U && h < 0x02800000U) {
        data_021b0708.c = h;
    } else {
        data_021b0708.c = 0;
    }
    if (data_021b0708.c == 0 && !(func_020506dc() & 0x40000000)) {
        *(u32 *) 0x027FFD9C  = (u32) func_02051424;
        *(u32 *) (p + 0xFDC) = (u32) func_02051424;
    }
    data_021b0708.a = 0;
}
