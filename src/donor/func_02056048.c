/* compiler: 2.0/sp1p5  */
/* PMi_WaitBusy from projets/heroes-of-mana/src/auto/PMi_WaitBusy.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern s32 func_02051850();
extern void func_020536fc();
extern struct {
    u32 pad[6];
    s32 busy;
} data_021b248c;
extern s32 data_021b24a4;
void func_02056048(void) {
    s32 *p = &data_021b24a4;
    if (data_021b248c.busy == 0) {
        return;
    }
    do {
        if (func_02051850() == 0x12) {
            func_020536fc();
        }
    } while (*p != 0);
}
