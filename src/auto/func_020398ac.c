typedef struct {
    int a, b, c;
} V3;
void func_02039d0c(V3 *, V3 *, int);
void VEC_Add(char *, V3 *, char *);
void VEC_Subtract(int, char *, V3 *);
int VEC_DotProduct(V3 *, V3 *);
void VEC_CrossProduct(V3 *, V3 *, V3 *);
void VEC_Normalize(V3 *, V3 *);
void func_020398ac(char *arg0, int arg1, V3 *arg2) {
    V3 sp18;
    V3 spC;
    V3 sp0;
    VEC_Subtract(arg1, arg0 + 0x2C, &sp18);
    VEC_CrossProduct(&sp18, arg2, &sp0);
    if (VEC_DotProduct(&sp0, &sp0) > 0) {
        VEC_Add(arg0 + 0x94, &sp0, arg0 + 0x94);
        VEC_Normalize(&sp18, &sp18);
        func_02039d0c(&sp18, &spC, VEC_DotProduct(&sp18, arg2));
    } else {
        spC = *arg2;
    }
    VEC_Add(arg0 + 0x88, &spC, arg0 + 0x88);
}
