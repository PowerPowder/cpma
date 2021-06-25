#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

#define QUEUE_SIZE 5 

static int contents[QUEUE_SIZE];
static int first_empty = 0;
static int next_to_remove = 0;
static int items = 0;

void insert(int i)
{
    if (first_empty == QUEUE_SIZE)
    {
        first_empty = 0;
        next_to_remove++;
    }

    contents[first_empty++] = i;
    items++;
}

int remove_item(void)
{
    if (next_to_remove == QUEUE_SIZE)
        next_to_remove = 0;

    items--;
    int item = contents[next_to_remove];
    contents[next_to_remove++] = 0;
    return item;
}

int get_first(void)
{
    return contents[next_to_remove];
}

int get_last(void)
{
    return contents[first_empty-1];
}

bool is_empty(void)
{
    return items == 0;
}

void display(void)
{
    for (int i = 0; i < QUEUE_SIZE; i++)
    {
        printf("%d%s", contents[i], i < QUEUE_SIZE-1 ? ", " : " ");
    }
    printf("\tfirst=%d, last=%d\n", get_first(), get_last());
}