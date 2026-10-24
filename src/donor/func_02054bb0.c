/* compiler: 2.0/sp1p5  */
/* FS_NotifyArchiveAsyncEnd from projets/blue-dragon-awakened-shadow/src/auto/FS_NotifyArchiveAsyncEnd.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02050308(void *);
extern s32 func_020517f8();
extern M2C_UNK func_0205180c(s32);
extern M2C_UNK func_02053814(void *, s32);
extern s32 func_0205444c(void *);
extern M2C_UNK func_02054660();
void func_02054bb0(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r5;

    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x1C))) & 0x100) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        void *p;

        p                                            = (*(void **) ((s8 *) (arg0) + (0x24)));
        (*(volatile s32 *) ((s8 *) (arg0) + (0x1C))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x1C))) & ~0x100);
        func_02053814(p, arg1);
        if (func_0205444c(arg0) == 0) {
            return;
        }
        func_02054660();
        return;
    }
    temp_r5                                         = (*(void **) ((s8 *) (arg0) + (0x24)));
    temp_r0                                         = func_020517f8();
    (*(volatile s32 *) ((s8 *) (temp_r5) + (0x14))) = arg1;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x1C)))    = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x1C))) & ~0x200);
    func_02050308(arg0 + 0xC);
    func_0205180c(temp_r0);
}
