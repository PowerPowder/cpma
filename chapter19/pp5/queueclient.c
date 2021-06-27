#include "queueADT.h"
#include <stdio.h>

int main(void)
{
    Queue q1 = create();
    Queue q2 = create();

    insert(q1, 1);
    insert(q1, 3);
    insert(q1, 5);
    insert(q2, 2);
    insert(q2, 4);
    insert(q2, 6);

    display(q1);
    display(q2);

    while (!is_empty(q1))
        printf("Removed %d from q1\n", remove_item(q1));
    while (!is_empty(q2))
        printf("Removed %d from q1\n", remove_item(q2));

    insert(q1, 3);
    display(q1);

    destroy(q1);
    destroy(q2);

    return 0;
}