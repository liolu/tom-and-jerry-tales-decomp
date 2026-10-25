#include "m2c.h"
typedef struct {
    u8 b[0x74];
} S74;
extern S74 data_020ac17c[];
void *func_0203a58c(s16 arg0) {
    return &data_020ac17c[arg0];
}
