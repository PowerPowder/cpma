#include <stdio.h>

int main(void)
{
    int a, b, c;
    float d, e, f;

    a = b = c = d = e = f = 0;

    // a) - yes they are equal
    //scanf("%d", &a);
    //scanf(" %d", &b);

    // b) - yes they are equal
    // scanf("%d-%d-%d", &a, &b, &c);
    // printf("a=%d b=%d c=%d", a, b, c);

    // scanf("%d -%d -%d", &a, &b, &c);
    // printf("a=%d b=%d c=%d", a, b, c);

    // c) - not equal, the first one is only required once, the second requires two
    // scanf("%f", &d);
    // scanf("%f ", &e);
    // printf("d=%f e=%f", d, e);

    // d) - yes they are equal
    scanf("%f,%f", &d, &e);
    printf("d=%f e=%f", d, e);

    a = b = c = d = e = f = 0;

    scanf("%f, %f", &d, &e);
    printf("d=%f e=%f", d, e);

    return 0;
}