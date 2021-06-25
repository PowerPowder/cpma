#include <stdio.h>
#include "queue.h"

int main(void)
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();

    printf("\ninsert 60:\n");
    insert(60);
    display();

    printf("\nremove first 3:\n");
    remove_item();
    remove_item();
    remove_item();
    display();

    printf("\nadd 70 and 80:\n");
    insert(70);
    insert(80);
    display();

    printf("\nremove the rest until empty\n");
    while (!is_empty())
    {
        display();
        printf("\n(removed %d)\n", remove_item());
    }
    return 0;
}