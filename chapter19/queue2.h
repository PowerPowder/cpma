#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define QUEUE_SIZE 5

typedef struct {
    int contents[QUEUE_SIZE];
    int first_empty;
    int next_to_remove;
    int items;
} Queue;

void insert(Queue *q, int i);
int remove_item(Queue *q);
int get_first(Queue *q);
int get_last(Queue *q);
bool is_empty(Queue *q);

void display(Queue *q);

#endif