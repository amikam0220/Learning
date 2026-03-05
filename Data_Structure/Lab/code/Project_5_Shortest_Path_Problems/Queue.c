#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>

#define ERRORDEQUEUE -1

// Create a empty queue
Queue CreateQueue()
{
    Queue q = (Queue)malloc(sizeof(struct Qnode));
    if (!q)
    {
        printf("Failed to create queue.\n");
        return NULL;
    }

    q->front = q->rear = NULL;

    return q;
}

// return true if queue is empty and return false if not
bool IsEmptyQueue(Queue q)
{
    if (!q)
    {
        return 1;
    }
    if (q->rear == NULL)
    {
        return 1;
    }
    return 0;
}

// enqueue
void Enqueue(Queue q, Ldata item)
{
    if (!q)
    {
        printf("The queue has not been created.\n");
        return;
    }

    Lnode *newnode = (Lnode *)malloc(sizeof(Lnode));
    if (!newnode)
    {
        printf("Failed to enqueue.\n");
        return;
    }
    newnode->data = item;
    newnode->next = NULL;

    if (IsEmptyQueue(q))
    {
        q->front = q->rear = newnode;
    }
    else
    {
        q->rear->next = newnode;
        q->rear = newnode;
    }
    return;
}

// dequeue
Ldata Dequeue(Queue q)
{
    if (!q)
    {
        printf("The queue has not been created.\n");
        return ERRORDEQUEUE;
    }
    if (IsEmptyQueue(q))
    {
        printf("The queue is empty.\n");
        return ERRORDEQUEUE;
    }

    Lnode *tmpnode = q->front;
    Ldata retdata = tmpnode->data;

    if (q->rear == q->front)
    {
        q->rear = q->front = NULL;
    }
    else
    {
        q->front = q->front->next;
    }
    free(tmpnode);

    return retdata;
}

// Destroy the queue
Queue DestroyQueue(Queue q)
{
    if (!q)
    {
        return NULL;
    }

    while (q->front)
    {
        Lnode *tmpnode = q->front;
        q->front = tmpnode->next;
        free(tmpnode);
    }

    free(q);
    return NULL;
}