#ifndef QUEUEADT_H
#define QUEUEADT_H

#include <stdbool.h>

#define QUEUE_SIZE 5

typedef struct queue_type *Queue;

Queue create();
void destroy(Queue);
void insert(Queue, int);
int remove_item(Queue);
int get_first(Queue);
int get_last(Queue);
bool is_empty(Queue);
void display(Queue);

#endif