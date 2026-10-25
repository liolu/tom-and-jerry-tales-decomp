typedef struct {
    short a, b, c, d;
} V4S;
typedef struct {
    int a, b, c, d;
} V4I;
V4I *func_01ffa410(V4S *s, V4I *d) {
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    d->d = s->d;
    return d;
}
