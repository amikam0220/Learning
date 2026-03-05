#include <bits/stdc++.h>
#define ERROR -1
using namespace std;
typedef int Elementype;

typedef struct heap
{
    Elementype *element;//array to store elements
    int size;//current amount in the heap
    int capacity;//max size of the heap
} heap;
typedef struct heap *maxheap;

maxheap Create(int maxsize){
    maxheap ret = (maxheap)malloc(sizeof(heap));
    if (!ret){
        cout << "Fail to create the heap.\n";
        return NULL;
    }
    ret->element = (Elementype *)malloc((maxsize + 1) * sizeof(Elementype));
    if (!ret->element){
        free(ret);
        cout << "Fail to create the heap.\n";
        return NULL;
    }
    ret->element[0] = __INT32_MAX__;//set a sentinal as a max value than the elements
    ret->size = 0;
}


bool IsFull(maxheap h){
    return (h->size == h->capacity);
}

maxheap Insert(maxheap h, Elementype data){
    if (IsFull(h)){
        cout << "The heap has been full.\n";
        return h;
    }
    int i = ++(h->size);
    while (h->element[i / 2] < data){
        h->element[i] = h->element[i / 2];
        i /= 2;
    }//find correct position from the parent to the root node
    h->element[i] = data;
    return h;
}

Elementype Deletemax(maxheap h){
    if (!h){
        cout << "The heap is not created.\n";
        return ERROR;
    }
    Elementype ret = h->element[1];
    h->element[1] = h->element[(h->size)--];
    Elementype tmp = h->element[1];
    int parent = 1, maxchild = 2 * parent;
    while (maxchild <= h->size){
        maxchild = 2 * parent;
        if (maxchild + 1 <= h->size && h->element[maxchild] < h->element[maxchild + 1]){
            maxchild++;
        }
        if (tmp < h->element[maxchild]){
            h->element[parent] = h->element[maxchild];
            parent = maxchild;
        }else{
            break;
        }
    }
    h->element[parent] = tmp;
    return ret;
}

void buildheap(maxheap h){
    int i, parent, maxchild;
    Elementype tmp;
    for (i = h->size / 2; i > 0; i--){//from the first non leave node
        parent = i;
        tmp = h->element[parent];
        maxchild = 2 * parent;
        while (maxchild <= h->size){
            maxchild = 2 * parent;
            if (maxchild + 1 <= h->size && h->element[maxchild] < h->element[maxchild + 1]){
                maxchild++;
            }
            if (tmp < h->element[maxchild]){
                h->element[parent] = h->element[maxchild];
                parent = maxchild;
            }else{
                break;
            }
        }
        h->element[parent] = tmp;
    }
}

int main()
{
    return 0;
}