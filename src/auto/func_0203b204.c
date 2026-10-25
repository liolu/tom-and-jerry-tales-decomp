#include "m2c.h"
typedef struct {
    u16 a, cnt;
} H8;
typedef struct {
    u8 pad[0x1c];
    char s[16];
} E;
extern H8 data_020b8140;
extern E data_020b8144[];
extern char data_0206d4c8[];
s32 func_0203b178(void);
s32 func_020312e0(void *, void *);
void func_02051a48(void);
char *func_0205918c(char *, const char *);
char *func_0205928c(char *, const char *);

s32 func_0203b204(char *name) {
    char buf[0x40];
    s32 id = func_0203b178();
    if (id < 0) {
        E *e;
        s32 r;
        id                = data_020b8140.cnt;
        data_020b8140.cnt = id + 1;
        func_0205918c(buf, data_0206d4c8);
        func_0205928c(buf, name);
        e = &data_020b8144[id];
        r = func_020312e0(buf, e);
        func_0205918c(e->s, name);
        if (r < 0) {
            func_02051a48();
        }
    }
    return id;
}
