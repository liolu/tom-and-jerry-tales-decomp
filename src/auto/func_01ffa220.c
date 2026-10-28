extern void func_01ffa0d8(void *, void *, int);
extern void func_01ffa154(void *, void *);
extern int func_0204b7b8(void);
extern int FX_Sqrt(void);

int func_01ffa220(void *a, void *b) {
    int t;
    func_01ffa154(a, a);
    t = FX_Sqrt();
    func_01ffa0d8(a, b, func_0204b7b8());
    return t;
}
