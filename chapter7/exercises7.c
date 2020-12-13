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

    // exercise 4
    /*
        char c;

        a) i += c           legal
        b) c = 2 * c - 1    legal
        c) putchar(c)       legal
        d) printf(c)        illegal
    */

    // exercise 5
    /*
        a) 'A'          legal
        b) 0b1000001    illegal - gcc gives binary constants warning from gcc
        c) 0101         legal
        d) 0x41         legal
    */

    // exercise 6
    /*
        a) char
        b) short
        c) short
        d) int
    */

    // exercise 7
    /*
        a) \b  \10 
        b) \n  \12
        c) \r  \15 
        d) \t  \11
    */

    // exercise 8
    /*
        a) \b  \x08
        b) \n  \x0a
        c) \r  \x0d
        d) \t  \x09
    */

    // exercise 9
    /*
        int i, j;
        i / j + 'a';
        Expression is type int despite the division
    */

    // exercise 10
    /*
        int i; long j; unsigned int k;
        i + (int) j * k
        Expression is type unsigned int
    */

    // exercise 11
    /*
        int i; float f; double d;
        i * f / d;
        Expression is type double
    */

    // exercise 12
    /*
        int i; float f; double d;
        d = i + f;
        The expression 'i + f' is converted to float.
        Then the epxression is converted to double because that is the type of the variable.
    */

    // exercise 13
    /*
        char c = '\1';
        short s = 2;
        int i = -3;
        long m = 5;
        float f = 6.5f;
        double d = 7.5;

        a) c * i   ->  -3    (short int)
        b) s + m   ->   7    (long int)
        c) f / c   ->   6.5  (float)
        d) d / s   ->   3.75 (double)
        e) f - d   ->  -1.5  (double)
        f) (int) f ->   6    (int)
    */

    // exercise 14
    /*
        float frac_part, f;
        frac_part = f - (int) f;

        No, there is no problem, it is all in the correct presidence;
    */

    return 0;
}