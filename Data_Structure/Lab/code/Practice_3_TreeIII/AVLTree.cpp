#include <bits/stdc++.h>
using namespace std;
typedef int Elementype;
typedef struct AVLnode
{
    Elementype Data;
    AVLnode *left;
    AVLnode *right;
    int height;
} AVLnode;
typedef AVLnode *AVLtree;

int balancefactor(AVLnode *node)
{
    return (node == NULL) ? (0) : (getHeight(node->left) - getHeight(node->right));
}

int getHeight(AVLnode* node){
    return (node == NULL) ? 0 : node->height;
}

void updateheight(AVLnode *node)
{
    if (!node)
        return;
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    return;
}

AVLnode *LLrotation(AVLnode *node)
{
    AVLnode *retnode = node->left;
    AVLnode *tmpnode = retnode->right;
    retnode->right = node;
    node->left = tmpnode;
    updateheight(node);
    updateheight(retnode);
    return retnode;
}

AVLnode *RRrotation(AVLnode *node)
{
    AVLnode *retnode = node->right;
    AVLnode *tmpnode = retnode->left;
    retnode->left = node;
    node->right = tmpnode;
    updateheight(node);
    updateheight(retnode);
    return retnode;
}

AVLnode *LRrotation(AVLnode *node)
{
    node->left = RRrotation(node->left);
    return LLrotation(node);
}

AVLnode *RLrotation(AVLnode *node)
{
    node->right = LLrotation(node->right);
    return RRrotation(node);
}

AVLtree Insert(AVLnode* t, Elementype x){
    if (!t){
        AVLnode *newnode = (AVLnode *)malloc(sizeof(AVLnode));
        newnode->Data = x;
        newnode->left = newnode->right = NULL;
        newnode->height = 1;
        return newnode;
    }

    stack<AVLnode*> tmpstack;
    AVLnode *itr = t;
    AVLnode *parent = NULL;
    while (itr){
        parent = itr;
        tmpstack.push(itr);
        if (itr->Data > x){
            itr = itr->left;
        }else if (itr->Data < x){
            itr = itr->right;
        }else{
            printf("The element has been in the tree.\n");
            return t;
        }
    }

    AVLnode *newnode = (AVLnode *)malloc(sizeof(struct AVLnode));
    newnode->Data = x;
    newnode->left = newnode->right = NULL;
    newnode->height = 1;

    if (parent->Data > x){
        parent->left = newnode;
    }else{
        parent->right = newnode;
    }

    AVLnode *newroot = t;
    while(tmpstack.size()){
        AVLnode *tmpnode = tmpstack.top();
        AVLnode *origin = tmpnode;
        tmpstack.pop();
        updateheight(tmpnode);
        int balance = balancefactor(tmpnode);
        if (balance > 1 && x < tmpnode->left->Data){//condition to check the type of LLrotation
            tmpnode = LLrotation(tmpnode);
        }else if (balance < -1 && x > tmpnode->right->Data){//RRrotation
            tmpnode = RRrotation(tmpnode);
        }else if (balance > 1 && x > tmpnode->left->Data){// LRrotation
            tmpnode = LRrotation(tmpnode);
        }else if (balance < -1 && x < tmpnode->right->Data){//RLrotation
            tmpnode = RLrotation(tmpnode);
        }

        if (tmpstack.size()){
            AVLnode *parent = tmpstack.top();
            if (parent->left == origin){
                parent->left = tmpnode;
            }else{
                parent->right = tmpnode;
            }
        }else{
            newroot = tmpnode;
        }
    }

    return newroot;
}

int main()
{
    return 0;
}