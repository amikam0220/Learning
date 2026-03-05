#include <stdio.h>
#include <stdlib.h>
#define ERROR __INT32_MAX__
typedef int Elementype;

typedef struct lnode{
    Elementype data;
    struct lnode *next;
} lnode;//ADT of linked list

typedef struct qnode{
    lnode *front;
    lnode *rear;
} qnode;
typedef qnode *queue;//ADT of queue

queue CreateQueue(){
    qnode *que = (qnode *)malloc(sizeof(struct qnode));
    que->front = que->rear = NULL;
    return que;
}

int IsEmpty(queue que){
    if (!que->front && !que->rear){
        return 1;
    }
    return 0;
}

queue AddQ(queue que, Elementype item){
    lnode *newnode = (lnode *)malloc(sizeof(struct lnode));
    newnode->data = item;
    newnode->next = NULL;
    if (IsEmpty(que)){
        que->front = que->rear = newnode;
    }else{
        que->rear->next = newnode;
        que->rear = newnode;
    }
    return que;
}

Elementype DeleteQ(queue que){
    if (!que){
        printf("The queue has not been created.\n");
        return ERROR;
    }
    if (IsEmpty(que)){
        printf("The queue is empty.\n");
        return ERROR;
    }
    Elementype retdata = que->front->data;
    if (que->rear == que->front){
        lnode *tmpnode = que->front;
        que->front = que->rear = NULL;
        free(tmpnode);
    }else{
        lnode *tmpnode = que->front;
        que->front = tmpnode->next;
        free(tmpnode);
    }
    return retdata;
}