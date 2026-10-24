/* compiler: 2.0/sp1p5  */
/* OS_WaitIrq from projets/lego-star-wars-ii-the-original-trilogy/src/auto/OS_WaitIrq.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
extern char data_027e0000[];
extern u8 data_027e0084[];
extern s32 func_020517f8(void);
extern void func_0205180c(s32 state);
extern void func_020502b8(void *queue);
void func_0204ec8c(s32 clear, u32 mask) {
    s32 state;
    u32 *flags;
    u8 *base;

    state = func_020517f8();
    if (clear != 0) {
        base = data_027e0000;
        *(u32 *) (base + 0x3ff8) &= ~mask;
    }
    func_0205180c(state);
    base = data_027e0000;
    if ((mask & *(u32 *) (base + 0x3ff8)) == 0) {
        flags = (u32 *) (base + 0x3ff8);
        do {
            func_020502b8(data_027e0084);
        } while ((mask & *flags) == 0);
    }
}
