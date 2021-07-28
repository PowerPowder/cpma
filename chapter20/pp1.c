#include <stdio.h>

union {
    float f_type;
    struct {
        unsigned int fraction: 23;
        unsigned int exponent: 8;
        unsigned int sign: 1;
    } f_full;
} f;

int main(void)
{
    f.f_full.sign = 1;
    f.f_full.exponent = 0x80;
    f.f_full.fraction = 0;
    printf("%f", f.f_type);
    return 0;
}