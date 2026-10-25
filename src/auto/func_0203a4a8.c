#include "m2c.h"

typedef struct {
    u8 p[8];
    u32 fl : 1;
    u8 q[0x74 - 0xc];
} E;
typedef struct {
    s16 id;
    u8 p[0x56];
    u32 pad : 10;
    u32 fl : 1;
    u32 pad2 : 21;
    u8 q[0xbc - 0x5c];
} F;
typedef struct {
    u16 a, cnt;
} H;
extern H data_020ac15c;
extern E data_020ac17c[];
extern F data_020aecfc[];
extern void func_02051a48(void);
extern void func_02039e84(u16, u16, int);

int func_0203a4a8(int arg0, int arg1) {
    u16 i;
    u16 j;
    s16 id;
    for (i = 0; i < data_020ac15c.cnt; i++) {
        if (data_020ac17c[i].fl) {
            func_02051a48();
        }
    }
    for (j = 0; j < data_020ac15c.a; j++) {
        if (data_020aecfc[j].fl) {
            id = data_020aecfc[j].id;
            if (!data_020ac17c[id].fl) {
                func_02039e84(j, id, arg1);
            }
        }
    }
    return 0;
}
