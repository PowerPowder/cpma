#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

void insert(int i);
int remove_item(void);
int get_first(void);
int get_last(void);
bool is_empty(void);

void display(void);

#endif