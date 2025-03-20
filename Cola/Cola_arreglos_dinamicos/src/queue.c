#include "queue.h"
#include <stdlib.h>

// Función para crear una cola con un tamaño específico
Queue queue_create(int len) {
    Queue q;
    q.data = (Data*)malloc(len * sizeof(Data));
    if (q.data == NULL) {
        return q; 
    }
    q.head = 0;
    q.tail = 0;
    q.len = len;
    return q;
}

// Función para agregar un elemento a la cola
void queue_enqueue(Queue* q, Data value) {
    if ((q->tail + 1) % q->len == q->head) {
        return; 
    }
    q->data[q->tail] = value; 
    q->tail = (q->tail + 1) % q->len; 
}

// Función para retirar un elemento de la cola
Data queue_dequeue(Queue* q) {
    if (queue_is_empty(q)) { 
        return -1; 
    }
    Data value = q->data[q->head]; 
    q->head = (q->head + 1) % q->len; 
    return value;
}

// Función para verificar si la cola está vacía
bool queue_is_empty(Queue* q) {
    return q->head == q->tail;
}

// Función para obtener el primer elemento de la cola sin retirarlo
Data queue_front(Queue* q) {
    if (queue_is_empty(q)) { 
        return -1;
    }
    return q->data[q->head]; 
}

// Función para vaciar la cola
void queue_empty(Queue* q) {
    q->head = q->tail;
}

// Función para eliminar la cola y liberar memoria
void queue_delete(Queue* q) {
    free(q->data);
    q->data = NULL;
    q->head = 0;
    q->tail = 0;
    q->len = 0;
}
