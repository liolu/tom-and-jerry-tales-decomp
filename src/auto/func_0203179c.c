#include "m2c.h"
typedef struct {
    s32 type;
    u8 pad0[0x14 - 4];
    u32 loaded : 1;
    u32 keep : 1;
    u32 rest : 30;
    s32 f18;
    char name[0x2C - 0x1C];
} E;
typedef struct {
    u16 a;
    u16 count;
} H;
extern u16 data_0208872c[];
extern E data_0208876c[];
extern char data_0206d1e8[];
extern char data_0206d1f0[];
void func_0204f490(char *, char *, char *, char *);
void func_02030ed4(s32 *, s32);
s32 func_02030f40(char *, void **, s32, s32);
void OS_Terminate(void);
void func_02030ee0(s32 *, s32);
s32 func_02031a14(void *, s32, s32, s32);
s32 func_0203179c(s32 lock) {
    u16 done;
    u16 cnt5;
    u16 cnt;
    u16 i;
    s32 r;
    void *res;
    done = 0;
    cnt5 = 0;
    cnt  = 0;
    res  = 0;
    {
        char buf[0x40];
        s32 tmp;
        for (i = 0; i < data_0208872c[1]; i++) {
            E *e = &data_0208876c[i];
            if (e->loaded && !e->keep) {
                func_0204f490(buf, data_0206d1e8, data_0206d1f0, e->name);
                func_02030ed4(&tmp, lock);
                if (func_02030f40(buf, &res, lock, lock) < 0 || res == 0) {
                    OS_Terminate();
                }
                if ((s8) * (s32 *) res == 5) {
                    cnt5++;
                }
                cnt++;
                func_02030ee0(&tmp, lock);
            }
        }
    }
    do {
        char buf2[0x40];
        void *res2;
        s32 tmp2;
        for (i = 0; i < data_0208872c[1]; i++) {
            E *e = &data_0208876c[i];
            if (e->loaded) {
                res2 = 0;
                func_0204f490(buf2, data_0206d1e8, data_0206d1f0, e->name);
                func_02030ed4(&tmp2, lock);
                if (func_02030f40(buf2, &res2, lock, lock) < 0 || res2 == 0) {
                    OS_Terminate();
                }
                if (e->keep) {
                    r = func_02031a14(res2, i, 1, 0);
                } else {
                    if ((s8) * (s32 *) res2 != 5 && cnt5 != 0) {
                        continue;
                    }
                    r = func_02031a14(res2, i, 0, e->f18);
                    cnt--;
                }
                if (r != 0) {
                    e->loaded = 0;
                    if ((s8) e->type == 5) {
                        cnt5--;
                    }
                    done++;
                } else {
                    OS_Terminate();
                }
                func_02030ee0(&tmp2, lock);
            }
        }
    } while (cnt5 != 0 || cnt != 0);
    return done;
}
