#include "queueADT.h"
#include <stdio.h>

int main(void)
{
    Queue q1 = create(3);
    Queue q2 = create(4);

    printf("Inserted 1, 3, 5, 7\n");
    insert(q1, 1);
    insert(q1, 3);
    insert(q1, 5);
    insert(q1, 7);

    printf("Inserted 2, 4, 6, 8, 10\n");
    insert(q2, 2);
    insert(q2, 4);
    insert(q2, 6);
    insert(q2, 8);
    insert(q2, 10);

    display(q1);
    display(q2);

    while (!is_empty(q1))
        printf("Removed %d from q1\n", remove_item(q1));
    while (!is_empty(q2))
        printf("Removed %d from q2\n", remove_item(q2));

    printf("Inserted 3, 4, 5\n");
    insert(q1, 3);
    insert(q1, 4);
    insert(q1, 5);
    display(q1);

    destroy(q1);
    destroy(q2);

    return 0;
}