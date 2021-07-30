#include <stdio.h>
#include <stddef.h>

int main(void)
{
    struct s {
        char a;
        int b[2];
        float c;
    } s1;

    printf("Size of s.a: %ld, offset of s.a: %ld\n", sizeof(s1.a), offsetof(struct s, a));
    printf("Size of s.b: %ld, offset of s.b: %ld\n", sizeof(s1.b), offsetof(struct s, b));
    printf("Size of s.c: %ld, offset of s.c: %ld\n", sizeof(s1.c), offsetof(struct s, c));
    printf("Total size of s: %ld\n", sizeof(struct s));

    /*
        The total size of s is 16 bytes, even though the members take up 13 bytes.  The location of
        the extra bytes are between s.a and s.b. This is because there is a 3 byte hole after s.a.
    */
    return 0;
}