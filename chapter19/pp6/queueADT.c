#include <stdlib.h>
#include <stdio.h>
#include "queueADT.h"

struct queue_type {
    int *contents;
    int first_empty;
    int next_to_remove;
    int items;
    int max_size;
};

void terminate(char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(int size)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error in create: Queue could not be created.");

    q->contents = malloc(size * sizeof(int));
    if (q->contents == NULL)
    {
        free(q);
        terminate("Error in create: stack could not be created.");
    }

    q->first_empty = 0;
    q->next_to_remove = 0;
    q->items = 0;
    q->max_size = size;

    return q;
}

void destroy(Queue q)
{
    free(q);
}

void insert(Queue q, int i)
{
    if (is_empty(q))
    {
        q->first_empty = 0;
        q->next_to_remove = 0;
        q->items = 0;
    }

    if (q->first_empty == q->max_size)
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
    if (is_empty(q))
    {
        q->first_empty = 0;
        q->next_to_remove = 0;
        q->items = 0;
    }

    if (q->next_to_remove == q->max_size)
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
    for (int i = 0; i < q->max_size; i++)
    {
        printf("%d%s", q->contents[i], i < q->max_size-1 ? ", " : " ");
    }
    printf(" first=%d, last=%d\n", get_first(q), get_last(q));
}