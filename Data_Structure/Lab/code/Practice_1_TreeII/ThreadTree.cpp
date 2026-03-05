#include <bits/stdc++.h>
using namespace std;
typedef int Elementype;
typedef struct threadedBTnode{
    Elementype data;
    TTnode *left;
    TTnode *right;
    int leftthread;
    int rightthread;
} TTnode;
typedef TTnode *TBT;
void Inorder_Threaded_BT(TBT t){
    if (!t){
        printf("Error tree.\n");
        return;
    }
    TBT itr = t;
    while (itr->leftthread == 0){
        itr = itr->left;
    }
    while (itr != t){
        cout << itr->data;
        if (itr->rightthread == 1){
            itr = itr->right;
        }else{
            itr = itr->right;
            while (itr->leftthread == 0){
                itr = itr->left;
            }
        }
    }
}