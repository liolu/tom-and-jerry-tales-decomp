/* compiler: 2.0/sp1p5  */
/* OS_SetIrqFunction from projets/heroes-of-mana/src/auto/OS_SetIrqFunction.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef struct {
    int fn;
    int a;
    int b;
} CB;
extern CB data_021b03fc[];
extern int data_027e0000[];
void func_0204ee24(u32 mask, int fn) {
    int i;
    for (i = 0; i < 22; i++, mask >>= 1) {
        if (mask & 1) {
            CB *p = 0;
            if (i >= 8 && i <= 11) {
                p = &data_021b03fc[i - 8];
            } else if (i >= 3 && i <= 6) {
                p = &data_021b03fc[i + 1];
            } else {
                data_027e0000[i] = fn;
            }
            if (p != 0) {
                p->fn = fn;
                p->b  = 0;
                p->a  = 1;
            }
        }
    }
}
