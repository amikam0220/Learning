#include <stdio.h>
#include <stdlib.h>
#include <limits.h>//for INT_MIN
typedef int Elementype;

typedef struct Tnode{
    Elementype data;
    struct Tnode *left;
    struct Tnode *right;
} Tnode;
typedef Tnode *BSTree;//define binary search tree ADT

BSTree CreateBST(Elementype *a, int start, int end);
int CheckBSTree(Tnode* T);
BSTree Insert1(Elementype x, BSTree root);
BSTree Insert2(Elementype x, BSTree root);
BSTree Delete1(Elementype x, BSTree root);
BSTree Delete2(Elementype x, BSTree root);
void InOrderTraverse(Tnode *T);
void DestroyBST(BSTree* root);
//functions prototypes

int main()
{
    BSTree root = NULL;
    Elementype arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Test 1: Create BST from sorted array
    printf("=== Test 1: Create BST ===\n");
    root = CreateBST(arr, 0, n - 1);
    printf("In-order traversal: ");
    InOrderTraverse(root);
    printf("The tree has been created.\n");

    // Test 2: Iterative Insert (2)
    printf("=== Test 2: Insert1(2) ===\n");
    root = Insert1(2, root);
    printf("In-order traversal: ");
    InOrderTraverse(root); 
    printf("\n");

    // Test 3: Recursive Insert (duplicate 5)
    printf("=== Test 3: Insert2(5) ===\n");
    root = Insert2(5, root);
    printf("In-order traversal: ");
    InOrderTraverse(root);
    printf("\n");

    // Test 4: Iterative Delete (5, 2 children)
    printf("=== Test 4: Delete1(5) ===\n");
    root = Delete1(5, root);
    printf("In-order traversal: ");
    InOrderTraverse(root);
    printf("\n");

    // Test 5: Recursive Delete (3, 1 child)
    printf("=== Test 5: Delete2(3) ===\n");
    root = Delete2(3, root);
    printf("In-order traversal: ");
    InOrderTraverse(root);
    printf("\n");

    // Test 6: Delete non-existent element (10)
    printf("=== Test 6: Delete1(10) ===\n");
    root = Delete1(10, root);
    printf("In-order traversal: ");
    InOrderTraverse(root);
    printf("\n");

    //Test 7: Delete root node (1)
    printf("=== Test 7: Delete1(1) ===\n");
    root = Delete1(1, root);
    printf("In-order traversal: ");
    InOrderTraverse(root);
    printf("\n");

    // Test 8: Check invalid BST
    printf("=== Test 8: Check Invalid BST ===\n");
    Tnode *invalidRoot = (Tnode *)malloc(sizeof(Tnode));
    invalidRoot->data = 5;
    invalidRoot->left = (Tnode *)malloc(sizeof(Tnode));
    invalidRoot->left->data = 6; // Left > root (invalid)
    invalidRoot->left->left = invalidRoot->left->right = NULL;
    invalidRoot->right = NULL;
    if (CheckBSTree(invalidRoot)){
        printf("The tree is a valid BST.\n");
    }else{
        printf("The tree is not a valid BST.\n");
    }

    // Cleanup
    DestroyBST(&root);
    DestroyBST(&invalidRoot);
    return 0;
}

BSTree CreateBST(Elementype *a, int start, int end){
    if (end < start){
        return NULL;
    }
    int mid = (end - start) / 2 + start;
    Tnode *root = (Tnode *)malloc(sizeof(struct Tnode));
    root->data = a[mid];//take the mid as root
    root->left = CreateBST(a, start, mid - 1);//create the left subtree
    root->right = CreateBST(a, mid + 1, end);//create the right subtree
    return root;
}

// int CheckBSTree(Tnode* T){
//     if (!T){
//         return 1;//empty tree
//     }
//     if (T->left && T->left->data >= T->data){
//         return 0;
//     }//check the left node
//     if (T->right && T->right->data <= T->data){
//         return 0;
//     }//check the right node
//     return (CheckBSTree(T->left) && CheckBSTree(T->right));//check two subtree recursively
// }//Wrong because it noly check the direct parent and children rather than total tree 

int CheckBSTreeInorder(Tnode* T, int* prev){
    if (!T){
        return 1;
    }//empty tree
    if (!CheckBSTreeInorder(T->left, prev)){
        return 0;
    }//check the left subtree
    if (T->data <= *prev){
        return 0;
    }
    *prev = T->data;//current node
    return CheckBSTreeInorder(T->right, prev);//check the right subtree
}
int CheckBSTree(Tnode* T){
    int prev = INT_MIN;
    return CheckBSTreeInorder(T, &prev);
}//verify by inorder traversal

BSTree Insert1(Elementype x, BSTree root){
    Tnode *newnode = (Tnode *)malloc(sizeof(struct Tnode));
    newnode->left = newnode->right = NULL;
    newnode->data = x;
    if (!root){
        return newnode; // create root for empty tree
    }
    Tnode *itr = root;
    Tnode *parent = NULL;
    while(itr){
        parent = itr;
        if (x < itr->data){
            itr = itr->left;
        }else if (x > itr->data){
            itr = itr->right;
        }else {
            printf("The data %d has been in the tree.\n", x);
            free(newnode);
            return root;
        }
    }//find the position to insert
    if (x < parent->data){
        parent->left = newnode;
    }else{
        parent->right = newnode;
    }//insert the node
    return root;
}//performed by iteration

BSTree Insert2(Elementype x, BSTree root){
    if (!root){
        Tnode *newnode = (Tnode *)malloc(sizeof(struct Tnode));
        newnode->left = newnode->right = NULL;
        newnode->data = x;
        return newnode;//create root for empty tree
    }
    if (x < root->data){
        root->left = Insert2(x, root->left);//insert in the left subtree if less than root
    }else if (x > root->data){
        root->right = Insert2(x, root->right);//insert in the right subtree if greater than root
    }else {
        printf("The data %d has been in the tree.\n", x);//prompt if it is in the tree
    }
    return root;
}//performed by recursion

BSTree Delete1(Elementype x, BSTree root){
    if (!root){
        printf("The tree is empty.\n");
        return NULL;
    }
    Tnode *itr = root;
    Tnode *parent = NULL;
    while(itr && itr->data != x){
        parent = itr;
        if (x < itr->data)
            itr = itr->left;
        else
            itr = itr->right;
    }//find the position of x in the tree
    if (!itr){
        printf("The element %d is not in the tree.\n", x);
        return root;
    }//prompt if x is not in the tree
    if (!itr->left && !itr->right){
        if (!parent){
            free(itr);
            return NULL;
        }//delete the root node
        if (parent->right == itr){
            parent->right = NULL;
        }else{
            parent->left = NULL;
        }
        free(itr);
    }//delete if it is leave node
    else if (itr->left && itr->right){
        Tnode *tmp = itr->right;
        Tnode *tmpparent = itr;
        while (tmp->left){
            tmpparent = tmp;
            tmp = tmp->left;
        }
        itr->data = tmp->data;
        if (tmpparent == itr){
            tmpparent->right = tmp->right;
        }else {
            tmpparent->left = tmp->right;
        }
        free(tmp);
    }else{//delete if it has two child
        if (itr->left){
            if (!parent){
                free(itr);
                return itr->left;
            }
            if (parent->left == itr){
                parent->left = itr->left;
                free(itr);
            }else{
                parent->right = itr->left;
                free(itr);
            }
        }else{
            if (!parent){
                free(itr);
                return itr->right;
            }
            if (parent->left == itr){
                parent->left = itr->right;
                free(itr);
            }else{
                parent->right = itr->right;
                free(itr);
            }
        }//delete if it has one child
    }   
    return root;
}//performed by iteration

BSTree Delete2(Elementype x, BSTree root){
    if (!root)
    {
        printf("The element %d is not in the tree.\n", x);
        return NULL;
    }
    if (x < root->data){
        root->left = Delete2(x, root->left);//delete in the left subtree if x less than the root
    }else if (x > root->data){
        root->right = Delete2(x, root->right);//delete in the right subtree if x greater than the root
    }else {
        if (root->right && root->left)//delete if two child
        {
            Tnode *itr = root->right;
            while (itr->left)
            {
                itr = itr->left;
            }//find the min node in right subtree
            root->data = itr->data;//assign to the root
            root->right = Delete2(itr->data, root->right);//delete min node in the right subtree
        }else{
            if (root->left){
                Tnode* tmp = root->left;
                free(root);
                return tmp;
            }else if (root->right){
                Tnode* tmp = root->right;
                free(root);
                return tmp;//origin bug: return root->left after free(root)
            }else{
                free(root);
                return NULL;
            }//delete if one child or no children
        }
    }
    return root;
}//performed by recursion

void InOrderTraverse(Tnode *T)
{
    if (!T)
        return;
    InOrderTraverse(T->left);
    printf("%d ", T->data);
    InOrderTraverse(T->right);
}//auxiliary function to print the tree in inorder traversal

void DestroyBST(BSTree *root)
{
    if (!*root)
        return;
    DestroyBST(&((*root)->left));
    DestroyBST(&((*root)->right));
    free(*root);
    *root = NULL;
}//auxiliary function to destroy the tree