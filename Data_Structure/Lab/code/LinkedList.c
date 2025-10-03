#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Elementype;
typedef struct Lnode{
    Elementype data;
    struct Lnode *next;
} Lnode;
typedef Lnode *List;
typedef Lnode *position;

List Create();
void IniList(List L);
void Destroy(List L);
bool isEmpty(List L);
int ListLength(List L);
void DispList(List L);
position Find(List L, Elementype e);
position Findpre(List L, Elementype e);
int Insert(List L, position p, Elementype e);
int Delete(List L, position p);
int DeleteElem(List L, Elementype e);

int main(){
    return 0;
}

List Create(){
    List L = (List)malloc(sizeof(struct Lnode));
    if (!L){
        printf("Fail to create the list.\n");
        return NULL;
    }
    L->next = NULL;
    printf("The list has been created.\n");
    return L;
}

void InitList(List L){
    if (!L){
        printf("The list has not been created.\n");
        return;
    }
    Elementype tmpdata;
    List tmpnode = NULL;
    printf("Please enter the element one by one and enter -1 to exit.\n");
    while (1){
        scanf("%d", &tmpdata);
        if (tmpdata == -1)
            break;
        tmpnode = (List)malloc(sizeof(struct Lnode));
        if (!tmpnode){
            printf("Fail to create new node for the list.\n");
            break;
        }
        tmpnode->data = tmpdata;
        L->next = tmpnode;
        L = L->next;
    }
    printf("The list has been initialized.\n");
    return;
}

void Destroy(List L){
    if (!L){
        printf("The list has not been created.\n");
        return;
    }
    List tmpnode = L->next;
    while (L){
        free(L);
        L = tmpnode;
        tmpnode = tmpnode->next;
    }
    return;
}

bool isEmpty(List L){
    if (!L){
        printf("The list has not been created.\n");
        return false;
    }
    return (!L->next) ? true : false;
}

int ListLength(List L){
    int cnt = -1;
    while (L){
        L = L->next;
        cnt++;
    }
    return cnt;
}

void DispList(List L){
    if (!L){
        printf("The list has not been created.\n");
        return;
    }
    L = L->next;
    printf("The elements in the list are:\n");
    while (L){
        printf("%d\n", L->data);
        L = L->next;
    }
    return;
}

position Find(List L, Elementype e){
    if (!L){
        printf("The list has not been created.\n");
        return NULL;
    }
    L = L->next;
    while (L){
        if (L->data == e){
            return L;
        }
        L = L->next;
    }
    printf("The element is not in the list.\n");
    return NULL;
}

position Findpre(List L, Elementype e){
    if (!L){
        printf("The list has not been created.\n");
        return NULL;
    }
    while (L->next){
        if (L->next->data == e){
            return L;
        }
        L = L->next;
    }
    printf("The element is not in the list.\n");
    return NULL;
}

int Insert(List L, position p, Elementype e){
    if (!L){
        printf("The list has not been created.\n");
        return 0;
    }
    if (!p){
        printf("Wrong position.\n");
        return 0;
    }
    List newnode = (List)malloc(sizeof(struct Lnode));
    if (!newnode){
        printf("Fail to create new node for the list.\n");
        return 0;
    }
    newnode->data = e;
    newnode->next = p->next;
    p->next = newnode;
    return 1;
}

int Delete(List L, position p){
    if (!L){
        printf("The list has not been created.\n");
        return 0;
    }
    if (!p){
        printf("Wrong position.\n");
        return 0;
    }
    List tmp = p->next;
    p->next = tmp->next;
    free(tmp);
    return 1;
}

int DeleteElem(List L, Elementype e){
    if (!L){
        printf("The list has not been created.\n");
        return 0;
    }
    position p = Find(L, e);
    if (!p){
        return 0;
    }
    int ret = Delete(L, p);
    return ret;
}