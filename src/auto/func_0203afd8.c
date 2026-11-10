/* compiler: 2.0/sp1p5 -pragma "opt_propagation off" */
#include "m2c.h"
typedef struct {
    u16 id;
    u16 pad02;
    u32 a : 8;
    u32 b : 8;
    u32 c : 8;
    u32 d : 8;
    u32 used : 1;
    u32 rest : 31;
    char name[0x10];
    s32 v1c;
    u8 pad20[0x68 - 0x20];
    s32 v68;
    s32 v6c;
    u8 pad70[4];
} Ent;
typedef struct {
    u16 pad;
    u16 count;
} Hdr;
extern Hdr data_020ac15c;
extern Ent data_020ac17c[];
s32 STD_GetStringLength(const char *);
s32 func_02039e28(const char *);
char *STD_CopyString(char *, const char *);
void func_02009720(Ent *, s32);

s32 func_0203afd8(const char *name, s32 arg) {
    s32 r;
    Ent *e;
    s32 n1;
    if (STD_GetStringLength(name) == 0) {
        return -1;
    }
    r = func_02039e28(name);
    if (r < 0) {
        STD_CopyString(data_020ac17c[data_020ac15c.count].name, name);
        r                   = data_020ac15c.count;
        e                   = &data_020ac17c[r];
        e->used             = 1;
        n1                  = r + 1;
        e->id               = 0;
        e->a                = 0;
        e->b                = 0;
        e->c                = 0;
        e->d                = 0;
        e->v1c              = 0;
        e->v68              = 0;
        data_020ac15c.count = n1;
        e->v6c              = 0;
        func_02009720(e, arg);
    }
    return r;
}
