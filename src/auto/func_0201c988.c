#include "m2c.h"
typedef struct {
    s8 id;
    u8 type;
    u8 pad02[0x20 - 2];
    s32 x;
    s32 y;
    s32 ax;
    s32 ay;
    u8 pad30[0x36 - 0x30];
    u8 dir;
    u8 pad37[0x44 - 0x37];
} Obj;
extern Obj data_02087454[];
void func_0203b96c(s32);
void func_0203c24c(u16, u16, u16);
void func_0201c988(void) {
    u8 i;
    func_0203b96c(0);
    for (i = 0; i < 5; i++) {
        if (data_02087454[i].id == -1) {
            continue;
        }
        switch (data_02087454[i].type) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
                func_0203c24c(i * 4, data_02087454[i].x - 0x20, data_02087454[i].y - 0x20);
                break;
            case 5:
                func_0203c24c(i * 4, 0x40, 0x20);
                func_0203c24c(i * 4 + 1, 0x80, 0x20);
                func_0203c24c(i * 4 + 2, 0x40, 0x60);
                func_0203c24c(i * 4 + 3, 0x80, 0x60);
                break;
            case 7:
                switch (data_02087454[i].dir) {
                    case 0:
                        func_0203c24c(i * 4 + 2, data_02087454[i].ax - 0x20, data_02087454[i].ay - 0x12);
                        func_0203c24c(i * 4 + 1, data_02087454[i].ax - 0x20, data_02087454[i].ay + 0x2E);
                        func_0203c24c(i * 4, data_02087454[i].x - 0x10, data_02087454[i].y - 0x10);
                        break;
                    case 1:
                        func_0203c24c(i * 4 + 2, data_02087454[i].ax - 0x2E, data_02087454[i].ay - 0x12);
                        func_0203c24c(i * 4 + 1, data_02087454[i].ax - 0x56, data_02087454[i].ay + 0x16);
                        func_0203c24c(i * 4, data_02087454[i].x - 0x10, data_02087454[i].y - 0x10);
                        break;
                    case 2:
                        func_0203c24c(i * 4 + 2, data_02087454[i].ax - 0x6F, data_02087454[i].ay - 0x20);
                        func_0203c24c(i * 4 + 1, data_02087454[i].ax - 0x2F, data_02087454[i].ay - 0x20);
                        func_0203c24c(i * 4, data_02087454[i].x - 0x10, data_02087454[i].y - 0x10);
                        break;
                    case 3:
                        func_0203c24c(i * 4 + 2, data_02087454[i].ax - 0x2E, data_02087454[i].ay - 0x2E);
                        func_0203c24c(i * 4 + 1, data_02087454[i].ax - 0x56, data_02087454[i].ay - 0x56);
                        func_0203c24c(i * 4, data_02087454[i].x - 0x10, data_02087454[i].y - 0x10);
                        break;
                    case 4:
                        func_0203c24c(i * 4 + 2, data_02087454[i].ax - 0x7D, data_02087454[i].ay + 0x2F);
                        func_0203c24c(i * 4 + 1, data_02087454[i].ax - 0x7D, data_02087454[i].ay - 0x11);
                        func_0203c24c(i * 4, data_02087454[i].x - 0x10, data_02087454[i].y - 0x10);
                        break;
                    case 5:
                        func_0203c24c(i * 4 + 2, data_02087454[i].ax - 0x12, data_02087454[i].ay - 0x2E);
                        func_0203c24c(i * 4 + 1, data_02087454[i].ax + 0x16, data_02087454[i].ay - 0x56);
                        func_0203c24c(i * 4, data_02087454[i].x - 0x10, data_02087454[i].y - 0x10);
                        break;
                    case 6:
                        func_0203c24c(i * 4 + 2, data_02087454[i].ax + 0x2F, data_02087454[i].ay - 0x20);
                        func_0203c24c(i * 4 + 1, data_02087454[i].ax - 0x11, data_02087454[i].ay - 0x20);
                        func_0203c24c(i * 4, data_02087454[i].x - 0x10, data_02087454[i].y - 0x10);
                        break;
                    case 7:
                        func_0203c24c(i * 4 + 2, data_02087454[i].ax - 0x12, data_02087454[i].ay - 0x12);
                        func_0203c24c(i * 4 + 1, data_02087454[i].ax + 0x16, data_02087454[i].ay + 0x16);
                        func_0203c24c(i * 4, data_02087454[i].x - 0x10, data_02087454[i].y - 0x10);
                        break;
                }
                break;
        }
    }
}
