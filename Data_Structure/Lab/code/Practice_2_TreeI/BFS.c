#include <stdio.h>

typedef struct Tnode{
    int data;
    struct Tnode *left;
    struct Tnode *right;
} Tnode;
typedef Tnode *Tree;

typedef struct Lnode{
    Tnode* data;
    struct Lnode *next;
} Lnode;

typedef struct Qnode{
    Lnode *front;
    Lnode *rear;
} Qnode;
typedef Qnode *Queue;

Queue CreateQueue();
void AddQ(Queue q, int element);
Tnode* DeleteQ(Queue q);
int IsEmpty(Queue q);

void BFS(Tree root);

Queue CreateQueue(){
    Qnode *que = (Qnode *)malloc(sizeof(struct Qnode));
    if (!que){
        return NULL;
    }
    que->front = que->rear = NULL;
    return que;
}

int IsEmpty(Queue que){
    if (!que->front && !que->rear)
        return 1;
    if (!que)
        return 1;
    return 0;
}

void AddQ(Queue que, int element){
    if (!que){
        return;
    }

    Lnode *newnode = (Lnode *)malloc(sizeof(struct Lnode));
    if (!newnode){
        return;
    }
    newnode->data = element;
    newnode->next = NULL;

    if (IsEmpty(que)){
        que->front = que->rear = newnode;
    }
    else{
        que->rear->next = newnode;
        que->rear = newnode;
    }

}

Tnode* DeleteQ(Queue que){
    if (IsEmpty(que)){
        return NULL;
    }

    
}