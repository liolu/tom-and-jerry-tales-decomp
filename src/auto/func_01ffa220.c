extern void func_01ffa0d8(void *, void *, int);
extern void func_01ffa154(void *, void *);
extern int func_0204b7b8(void);
extern int func_0204b7c8(void);

int func_01ffa220(void *a, void *b) {
    int t;
    func_01ffa154(a, a);
    t = func_0204b7c8();
    func_01ffa0d8(a, b, func_0204b7b8());
    return t;
}
