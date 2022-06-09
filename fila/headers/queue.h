#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue Queue;

Queue* queue_create();
int queue_is_empty(Queue* queue);
int queue_is_full(Queue* queue);
int queue_size(Queue* queue);
int queue_insert(Queue* queue, int info);
int queue_remove(Queue* queue, int *info);
void queue_destroy(Queue** queue);

#endif
