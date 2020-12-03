#include <stdio.h>

int main(void)
{
    // exercise 1
    /*
        a) 077 = 7 * 8^1 + 7 * 8^0 = 56 + 7 = 63
        b) 0x77 = 7 * 16^1 + 7 * 16^0 = 112 + 7 = 119
        c) 0xABC = 10 * 16^2 + 11 * 16^1 + 12 * 16^0 = 2560 + 176 + 12 = 2748
    */

    // exercise 2
    /*
        a) 010E2    - legal,  integer
        b) 32.1E+5  - legal,  floating-point
        c) 0790     - illegal (number beyond 7)
        d) 100_000  - illegal (underscore in num)
        e) 3.978e-2 - legal,  floating-point
    */

    // exercise 3
    // (b) is not a legal constant (short float);

    return 0;
}