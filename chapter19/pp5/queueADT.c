#include <stdlib.h>
#include <stdio.h>
#include "queueADT.h"

struct queue_type {
    int contents[QUEUE_SIZE];
    int first_empty;
    int next_to_remove;
    int items;
};

void terminate(char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create()
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error in create: Queue could not be created.");

    q->first_empty = 0;
    q->next_to_remove = 0;
    q->items = 0;

    return q;
}

void destroy(Queue q)
{
    free(q);
}

void insert(Queue q, int i)
{
    if (q->first_empty == QUEUE_SIZE)
    {
        q->first_empty = 0;
        q->next_to_remove++;
    }

    if (q->items < 5)
        q->items++;

    q->contents[q->first_empty++] = i;
}

int remove_item(Queue q)
{
    if (q->next_to_remove == QUEUE_SIZE)
        q->next_to_remove = 0;

    q->items--;
    int item = q->contents[q->next_to_remove];
    q->contents[q->next_to_remove++] = 0;
    return item;
}

int get_first(Queue q)
{
    return q->contents[q->next_to_remove];
}

int get_last(Queue q)
{
    return q->contents[q->first_empty-1];
}

bool is_empty(Queue q)
{
    return q->items == 0;
}

void display(Queue q)
{
    for (int i = 0; i < QUEUE_SIZE; i++)
    {
        printf("%d%s", q->contents[i], i < QUEUE_SIZE-1 ? ", " : " ");
    }
    printf("\tfirst=%d, last=%d\n", get_first(q), get_last(q));
}