#include "queue.h"
#include <stdlib.h>

// Implementación de las funciones de la cola
Queue* queue_create() {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    if (q == NULL) {
        return NULL;
    }
    q->front = q->rear = NULL;
    return q;
}

void queue_enqueue(Queue* q, Data d) {
    if (q == NULL) return;
    Node *node = new_node(d);
    if (node == NULL) return;
    if (q->rear == NULL) {
        q->front = q->rear = node;
    } else {
        q->rear->next = node;
        q->rear = node;
    }
}

Data queue_dequeue(Queue* q) {
    if (q == NULL || q->front == NULL) return -1; // Valor especial para indicar error
    Node *temp = q->front;
    Data value = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    delete_node(temp);
    return value;
}

bool queue_is_empty(Queue* q) {
    return q == NULL || q->front == NULL;
}

Data queue_front(Queue* q) {
    if (q == NULL || q->front == NULL) return -1; // Valor especial para indicar error
    return q->front->data;
}

void queue_empty(Queue* q) {
    while (!queue_is_empty(q)) {
        queue_dequeue(q);
    }
}

void queue_delete(Queue* q) {
    if (q == NULL) return;
    queue_empty(q);
    free(q);
}
