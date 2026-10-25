typedef struct {
    char pad[0x18];
    int a;
    int b;
    unsigned int fl;
} T;
typedef struct {
    char pad[0x18];
    int a;
    int b;
    int x;
    unsigned int fl;
} U;
extern unsigned int data_021a6d80;
extern U data_021a6f08[];
void func_02040080(int);
int func_02040240(int);
void func_02040094(int);
void func_02040124(int *arg0) {
    U *cur = &data_021a6f08[data_021a6d80 & 0xFF];
    int i;
    U *e = data_021a6f08;
    switch (*arg0) {
        case 0:
            cur->fl |= 8;
            for (i = 0; i < 0x10; i++, e++) {
                if (((e->fl << 0x1D) >> 0x1F) != 0 && cur->a == e->b) {
                    func_02040080(e->a);
                }
            }
            break;
        case 1:
            cur->fl |= 2;
            break;
        case 3:
            break;
    }
    if (((cur->fl << 0x1C) >> 0x1F) == 0) {
        return;
    }
    if (func_02040240(cur->a) != 0) {
        return;
    }
    func_02040094(cur->a);
}
