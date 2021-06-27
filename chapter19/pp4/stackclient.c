#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stackADT.h"

#define BUF_SIZE 100

int main(void)
{
    Stack s1, s2;
    char *s;

    s1 = create();
    s2 = create();

    push(s1, "one");
    push(s1, "two");

    s = malloc(strlen((char *) peek(s1)) * sizeof(char));
    strcpy(s, pop(s1));
    printf("Popped '%s' from s1\n", s);
    push(s2, s);
    s = malloc(strlen((char *) peek(s1)) * sizeof(char));
    strcpy(s, pop(s1));
    printf("Popped '%s' from s1\n", s);
    push(s2, s);

    destroy(s1);

    while (!is_empty(s2))
        printf("Popped '%s' from s2\n", (char *) pop(s2));

    push(s2, "three");
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");

    destroy(s2);

    return 0;
}