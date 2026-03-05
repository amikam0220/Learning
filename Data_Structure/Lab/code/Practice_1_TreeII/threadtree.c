#include <stdio.h>

typedef int Elementype;

//ADT of in-order thread tree
typedef struct Tnode{
    Elementype data;
    struct Tnode *left;
    struct Tnode *right;
    int leftthread;
    int rightthread;
} Tnode;
typedef Tnode *Ttree;

void VisitThreadTree(Ttree t){
    
    if (!t){
        return;
    }

    Tnode *itr = t;

    //find the first node
    while (itr->leftthread == 0){
        itr = itr->left;
    }

    while (itr != t)//the end of traverse
    {
        printf("%d", itr->data);
        if (itr->rightthread == 1)//visit successor
        {
            itr = itr->right;
        }else// visit right subtree 
        {
            itr = itr->right;
            while (itr->leftthread == 0){
                itr = itr->left;
            }
        }
    }

}