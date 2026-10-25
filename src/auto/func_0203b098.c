#include "m2c.h"

typedef struct N {
    u16 v;
    u16 pad;
    struct N *next;
} N;
typedef struct {
    u16 n;
    u8 pad[0x66];
    u16 *arr;
    N *list;
} S;
extern u32 data_020ac15c[];
extern u16 *func_01ff8000(int, int);

void func_0203b098(S *arg0, int arg1) {
    int i;
    N **ip;
    u16 n;
    if (arg0->arr != 0) {
        return;
    }
    n = arg0->n;
    if (n == 0) {
        return;
    }
    arg0->arr = func_01ff8000(arg1, n * 2);
    i         = 0;
    ip        = &arg0->list;
    if ((int) arg0->n > 0) {
        do {
            arg0->arr[i] = (*ip)->v;
            i++;
            ip = &(*ip)->next;
        } while (i < arg0->n);
    }
    *ip              = (N *) data_020ac15c[2];
    data_020ac15c[2] = (u32) arg0->list;
    arg0->list       = 0;
}
