#include <bits/stdc++.h>
#define ERROR -1
#define MAXSIZE 100000
using namespace std;

typedef struct Hnode{
    int weight;
    struct Hnode *left;
    struct Hnode *right;
} Hnode;
typedef Hnode *Huffman;
typedef Hnode *Elementype;

typedef struct heap{
    Elementype *element; // array to store elements
    int size;            // current amount in the heap
    int capacity;        // max size of the heap
} heap;
typedef struct heap *minheap;

minheap Create(int maxsize)
{
    minheap ret = (minheap)malloc(sizeof(heap));
    if (!ret)
    {
        cout << "Fail to create the heap.\n";
        return NULL;
    }
    ret->element = (Elementype *)malloc((maxsize + 1) * sizeof(Elementype));
    if (!ret->element)
    {
        free(ret);
        cout << "Fail to create the heap.\n";
        return NULL;
    }

    ret->element[0]->left = ret->element[0]->right = NULL;
    ret->element[0]->weight = __WINT_MIN__; // set a sentinal as a max value than the elements

    ret->size = 0;
    ret->capacity = MAXSIZE;
}

bool IsFull(minheap h)
{
    return (h->size == h->capacity);
}

minheap Insert(minheap h, Elementype data)
{
    if (IsFull(h))
    {
        cout << "The heap has been full.\n";
        return h;
    }
    int i = ++(h->size);
    while (h->element[i / 2]->weight > data->weight)
    {
        h->element[i]->weight = h->element[i / 2]->weight;
        i /= 2;
    } // find correct position from the parent to the root node
    h->element[i]->weight = data->weight;
    return h;
}

Elementype Deletemin(minheap h)
{
    if (!h)
    {
        cout << "The heap is not created.\n";
        return;
    }
    Elementype ret = h->element[1];
    h->element[1] = h->element[(h->size)--];
    Elementype tmp = h->element[1];
    int parent = 1, minchild = 2 * parent;
    while (minchild <= h->size)
    {
        minchild = 2 * parent;
        if (minchild + 1 <= h->size && h->element[minchild]->weight > h->element[minchild + 1]->weight)
        {
            minchild++;
        }
        if (tmp->weight > h->element[minchild]->weight)
        {
            h->element[parent]->weight = h->element[minchild]->weight;
            parent = minchild;
        }
        else
        {
            break;
        }
    }
    h->element[parent] = tmp;
    return ret;
}

void buildheap(struct heap *h)
{
    int i, parent, minchild;
    Elementype tmp;
    for (i = h->size / 2; i > 0; i--)
    { // from the first non leave node
        parent = i;
        tmp = h->element[parent];
        minchild = 2 * parent;
        while (minchild <= h->size)
        {
            minchild = 2 * parent;
            if (minchild + 1 <= h->size && h->element[minchild]->weight > h->element[minchild + 1]->weight)
            {
                minchild++;
            }
            if (tmp->weight > h->element[minchild]->weight)
            {
                h->element[parent]->weight = h->element[minchild]->weight;
                parent = minchild;
            }
            else
            {
                break;
            }
        }
        h->element[parent] = tmp;
    }
}


Huffman Create(minheap h)//assume the weight has been stored in heap
{
    if (!h){
        return NULL;
    }

    buildheap(h);//let h become min heap

    int i;
    Huffman T = NULL;

    for (i = 1; i < h->size; i++)//merge size-1 times
    {
        T = (Huffman)malloc(sizeof(Hnode));//construct new node
        T->left = Deletemin(h);
        T->right = Deletemin(h); // delete two min node as the subtrees as the root node
        T->weight = T->left->weight + T->right->weight; // calculate new weight

        Insert(h, T); // insert T to min heap
    }
    T = Deletemin(h);
    return T;
}

int main(){
    return 0;
}