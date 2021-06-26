#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
    Stack *s1 = malloc(sizeof(Stack));
    Stack *s2 = malloc(sizeof(Stack));

    push(s1, 1);
    push(s1, 3);
    push(s1, 5);
    pop(s1);
    pop(s1);
    display(s1);

    push(s2, 2);
    push(s2, 4);
    push(s2, 6);
    pop(s2);
    display(s2);
    return 0;
}