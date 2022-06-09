#include <stdlib.h>
#include "../headers/queue.h"
#include "../../lista_encadeada/implementations/singly_linked_list.c"

struct queue {
    int size;
    Node* start;
    Node* end;
};

Queue* queue_create() {
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    if (!queue) {
        return NULL;
    }

    queue->size = 0;
    queue->start = NULL;
    queue->end = NULL;

    return queue;
}

int queue_is_empty(Queue* queue) {
    return queue->size == 0;
}

int queue_size(Queue* queue) {
    return queue->size;
}

int queue_insert(Queue* queue, int info) {
    if (queue_is_full(queue)) {
        return 0;
    }

    Node* newNode = ll_create_node(info);
    if (!newNode) {
        return 0;
    }

    if (queue->start == NULL) {
        queue->start = newNode;
        queue->end = newNode;
    }

    return 1;
}

int queue_remove(Queue* queue, int *info) {
    return 0;
}

void queue_destroy(Queue** queue) {}
