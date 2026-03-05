#ifndef __QUEUE_ADT__
#define __QUEUE_ADT__

#include <stdbool.h>
#include "Graph.h"

// ADT of Queue
typedef VexType Ldata;

typedef struct Lnode
{
    Ldata data;
    struct Lnode *next;
} Lnode;

typedef struct Qnode
{
    Lnode *front;
    Lnode *rear;
} Qnode;
typedef Qnode *Queue;

Queue CreateQueue();
bool IsEmptyQueue(Queue q);
void Enqueue(Queue q, Ldata item);
Ldata Dequeue(Queue q);
Queue DestroyQueue(Queue q);

#endif