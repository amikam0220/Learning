#include <stdio.h>
#include <stdlib.h>
#define ERROR __INT32_MAX__
typedef int Elementype;

typedef struct Snode{
    Elementype data;
    struct Snode *next;
} Snode;
typedef struct Snode *stack;

stack CreateStack(){
    Snode *top = (Snode *)malloc(sizeof(struct Snode));
    top->data = 0;
    top->next = NULL;
    return top;
}

int IsEmpty(stack top){
    if (!top || !top->next){
        return 1;
    }
    return 0;
}

stack PushNode(stack top, Elementype item){
    if (!top){
        printf("The stack has not been created.\n");
        return NULL;
    }
    Snode *newnode = (Snode *)malloc(sizeof(struct Snode));
    newnode->data = item;
    newnode->next = top->next;
    top->next = newnode;
    return top;
}

Elementype PopNode(stack top){
    if (!top){
        printf("The stack has not been created.\n");
        return ERROR;
    }
    if (IsEmpty(top)){
        printf("The stack is empty.\n");
        return ERROR;
    }
    Elementype retdata = top->next->data;
    Snode *tmpnode = top->next;
    top->next = tmpnode->next;
    free(tmpnode);
    return retdata;
}