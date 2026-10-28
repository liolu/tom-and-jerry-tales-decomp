typedef struct {
    short a;
    short b;
    char pad[0x54];
    unsigned int flags;
} E;
extern int data_0206ba68[];
int func_0201d10c(unsigned char);
int func_0203a58c(void);
E *func_0203a95c(short);
unsigned int func_0203adac(void);
int STD_CompareString(int, int);
void func_02026a58(void) {
    unsigned short i = 0;
    unsigned char j;
    E *e;
    unsigned int n;
    n = func_0203adac();
    if (n == 0) {
        return;
    }
    do {
        e = func_0203a95c(i);
        if (e->a != -1) {
            int t = func_0203a58c();
            for (j = 0; j < 0x1B; j++) {
                if (data_0206ba68[j] != 0 && STD_CompareString(t + 0xC, data_0206ba68[j]) == 0) {
                    if (func_0201d10c(j) == 0) {
                        e->flags &= ~0x40;
                    }
                    break;
                }
            }
        }
        i++;
    } while (n > (unsigned short) i);
}
