#include "m2c.h"
typedef struct {
    u8 b[0xBC];
} E;
extern E data_020aecfc[];
E *func_0203a95c(s16 a) {
    return &data_020aecfc[a];
}
