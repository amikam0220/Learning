#include <bits/stdc++.h>
using namespace std;
typedef int Elementype;
typedef struct BTnode{
    Elementype data;
    BTnode *left;
    BTnode *right;
} BTnode;
typedef BTnode *Bintree;
void PreorderVisit(Bintree bt){
    if (!bt){
        return;
    }
    cout << bt->data;
    PreorderVisit(bt->left);
    PreorderVisit(bt->right);
}
void InorderVisit(Bintree bt){
    if (!bt){
        return;
    }
    InorderVisit(bt->left);
    cout << bt->data;
    InorderVisit(bt->right);
}
