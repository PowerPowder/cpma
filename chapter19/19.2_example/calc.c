#include <stdio.h>
#include "stack.h"

int main(void)
{
    push(1);
    push(2);
    push(3);
    while (!is_empty())
        printf("%d ", pop());
    return 0;
}