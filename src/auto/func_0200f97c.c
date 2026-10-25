#include "m2c.h"

typedef struct {
    u16 a, b, c;
} T;
extern char *func_0205918c(char *, const char *);
extern void func_0204f490(int, const char *, ...);
extern char data_0206ac58[], data_0206ac5c[], data_0206ac6c[];

void func_0200f97c(int arg0, T *arg1, int arg2) {
    char x[2];
    char y[2];
    char z[2];
    func_0205918c(x, data_0206ac58);
    func_0205918c(y, data_0206ac58);
    func_0205918c(z, data_0206ac58);
    if (arg1->a > 9) {
        z[0] = 0;
    }
    if (arg1->b > 9) {
        x[0] = 0;
    }
    if (arg2 != 0) {
        func_0204f490(arg0, data_0206ac5c, z, arg1->a, x, arg1->b, arg1->c / 10);
    } else {
        func_0204f490(arg0, data_0206ac6c, z, arg1->a, x, arg1->b);
    }
}
