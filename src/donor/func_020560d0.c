/* compiler: 2.0/sp1p5  */
/* PM_Init from projets/heroes-of-mana/src/auto/PM_Init.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern u8 data_021b248c;
typedef struct {
    u16 a;
    u16 b;
    u32 c;
} E8;
extern E8 data_021b24cc[5];
extern u8 data_021b24b4;
extern void func_02056174(void);
extern void PXI_Init(void);
extern s32 func_02053650(s32 a, s32 b);
extern void func_02053604(s32 a, void *cb);
extern void OS_InitMutex(void *);
void func_020560d0(void) {
    s32 i;
    if (*(u16 *) &data_021b248c != 0) {
        return;
    }
    *(u16 *) &data_021b248c          = 1;
    *(s32 *) (&data_021b248c + 0x18) = 0;
    *(s32 *) (&data_021b248c + 0x1C) = 0;
    PXI_Init();
    while (!func_02053650(8, 1)) {
    }
    func_02053604(8, func_02056174);
    for (i = 0; i < 5; i++) {
        data_021b24cc[i].a = 0;
    }
    OS_InitMutex(&data_021b24b4);
    *(s32 *) (&data_021b248c + 0x10) = *(s32 *) 0x027FFC3C;
}
