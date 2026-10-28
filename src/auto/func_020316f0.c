#include "m2c.h"
typedef struct {
    u8 pad[0x14];
    u32 used : 1;
    u32 flag : 1;
    u32 rest : 30;
    s32 val;
    char name[0x10];
} E;
typedef struct {
    u16 a;
    u16 count;
} H;
extern H data_0208872c;
extern E data_0208876c[];
s32 func_02032190(char *);
void OS_Terminate(void);
void STD_CopyString(char *, char *);

s32 func_020316f0(char *name, s32 flag, s32 val) {
    s32 i = func_02032190(name);
    if (name == NULL) {
        OS_Terminate();
    }
    if (i < 0) {
        STD_CopyString(data_0208876c[data_0208872c.count].name, name);
        i                     = data_0208872c.count;
        data_0208876c[i].flag = flag;
        data_0208876c[i].val  = val;
        data_0208876c[i].used = 1;
        data_0208872c.count   = i + 1;
    }
    return i;
}
