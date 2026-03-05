#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node *lchild, *rchild;
} BinTNode; //define the data type of the node
typedef BinTNode *BinTree;

typedef struct Snode
{
    BinTNode* data;
    struct Snode *next;
} Snode;

typedef Snode *Stack;

int IsEmpty(Stack top);
Stack CreateStack();
void PushNode(Stack *top, BinTNode* item);
BinTNode* PopNode(Stack *top);//function prototypes of stack

BinTree CreateBinTree(void);
void PreorderTraverse(BinTree T);
void InorderTraverse(BinTree T);
void PostorderTraverse(BinTree T);
int CountNodes(BinTree T);
int CountLeaves(BinTree T);
void DispBinTree(BinTree T);
BinTree DeleteBinTree(BinTree T);//function prototypes of binary tree

int main(){
    BinTree T = NULL;
    int choice;

    printf("===== Binary Tree Operation System =====\n");
    printf("Note: Use '*' to represent empty nodes when inputting preorder sequence.\n");
    printf("Example: Input 'ABD***CE**F**' for a typical binary tree.\n");
    printf("========================================\n\n");

    while (1)
    {
        // Print operation menu
        printf("\n===== Operation Menu =====\n");
        printf("1. Create Binary Tree (from preorder sequence)\n");
        printf("2. Preorder Traversal \n");
        printf("3. Inorder Traversal \n");
        printf("4. Postorder Traversal \n");
        printf("5. Count Total Nodes\n");
        printf("6. Count Leaf Nodes\n");
        printf("7. Display Tree Structure\n");
        printf("8. Delete Binary Tree\n");
        printf("0. Exit Program\n");
        printf("==========================\n");
        printf("Please enter your choice (0-8): ");

        // Read user choice
        while (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n')
                ; // Clear invalid input
            printf("Invalid input! Please enter a number (0-8): ");
        }
        while (getchar() != '\n')
            ; // Clear newline

    
        switch (choice)
        {
        case 1:
            // Delete existing tree before creating a new one
            if (T != NULL)
            {
                DeleteBinTree(T);
                printf("Binary tree deleted before creating a new one.\n");
            }
            // prompt to input preorder sequence
            printf("Please enter the preorder sequence (empty node = *):\n");
            T = CreateBinTree();
            if (T != NULL)
            {
                printf("Binary tree created successfully!\n");
            }
            else
            {
                printf("Failed to create binary tree (empty input or memory error).\n");
            }
            break;

        case 2:// Preorder Traversal
            PreorderTraverse(T);
            break;

        case 3:// Inorder Traversal
            InorderTraverse(T);
            break;

        case 4:// Postorder Traversal
            PostorderTraverse(T);
            break;

        case 5:// Count Total Nodes
            if (!T)
            {
                printf("The tree is not created or is empty. Total nodes: 0\n");
            }
            else
            {
                printf("Total nodes of the tree: %d\n", CountNodes(T));
            }
            break;

        case 6:// Count Leaf Nodes
            if (!T)
            {
                printf("The tree is not created or is empty. Leaf nodes: 0\n");
            }
            else
            {
                printf("Leaf nodes of the tree: %d\n", CountLeaves(T));
            }
            break;

        case 7://Display Tree Structure
            DispBinTree(T);
            break;

        case 8:// Delete Binary Tree
            if (!T)
            {
                printf("The tree is not created or is already empty.\n");
                break;
            }
            T = DeleteBinTree(T);
            if (!T){
                printf("Binary tree deleted successfully.\n");
            }else{
                printf("Failed to delete binary tree.\n");
            }
            break;

        case 0:
            // Delete tree before exiting to avoid memory leak
            if (T != NULL)
            {
                DeleteBinTree(T);
                printf("Binary tree deleted before exit.\n");
            }
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please enter a number between 0 and 8.\n");
        }
    }
}

int IsEmpty(Stack top)
{
    return (top == NULL);
}

Stack CreateStack()
{
    return NULL;
}
void PushNode(Stack *top, BinTNode* item)
{
    Stack newNode = (Stack)malloc(sizeof(Snode));
    if (newNode == NULL)
    {
        printf("Fail to allocate the memory.\n");
        return;
    }
    newNode->data = item;
    newNode->next = *top;
    *top = newNode;
    return;
}

BinTNode* PopNode(Stack *top)
{
    if (IsEmpty(*top))
    {
        printf("The stack is empty.\n");
        return NULL;
    }
    Stack tmp = *top;
    *top = (*top)->next;
    BinTNode* tmpnode = tmp->data;
    free(tmp);
    return tmpnode;
}//define stack and relative functions

BinTree CreateBinTree(void){
    BinTree T = NULL;
    char ch;
    if ((ch = getchar()) == '*')
    {
        return NULL; //empty tree
    }
    T = (BinTNode *)malloc(sizeof(BinTNode));
    if (!T){
        printf("Fail to create the binary tree.\n");
        return NULL;
    }
    T->data = ch;
    T->lchild = CreateBinTree();
    T->rchild = CreateBinTree();//recursively create the left and right subtree
    return T;
}

void PreorderTraverse(BinTree T){
    if (!T){
        printf("The tree is not created.\n");
        return;
    }
    Stack stk = CreateStack();
    BinTNode *itr = T;
    PushNode(&stk, T);//push the root to stack
    while (!IsEmpty(stk)){
        itr = PopNode(&stk);
        printf("%c\n", itr->data);//visit current node
        if (itr->rchild){
            PushNode(&stk, itr->rchild);//first push the right child to stack
        }
        if (itr->lchild){
            PushNode(&stk, itr->lchild);//push the left child to stack
        }
    }
}

void InorderTraverse(BinTree T){
    if (!T){
        printf("The tree is not created.\n");
        return;
    }
    Stack stk = CreateStack();
    BinTNode *itr = T;
    while (!IsEmpty(stk) || itr){
        while(itr){
            PushNode(&stk, itr);//store current node
            itr = itr->lchild;//traverse the left node
        }
        itr = PopNode(&stk);
        printf("%c\n", itr->data); // print the node
        itr = itr->rchild;//traverse the right node
    }
}

void PostorderTraverse(BinTree T){
    if (!T){
        printf("The tree is not created.\n");
        return;
    }
    Stack stk1 = CreateStack();
    Stack stk2 = CreateStack();
    BinTNode *itr = T;
    PushNode(&stk1, T);
    while (!IsEmpty(stk1)){
        itr = PopNode(&stk1);
        PushNode(&stk2, itr);
        if (itr->lchild){
            PushNode(&stk1, itr->lchild);
        }
        if (itr->rchild) {
            PushNode(&stk1, itr->rchild);
        }
    }//reverse to the sequence of post-order(like pre-order)
    while(!IsEmpty(stk2)){
        itr = PopNode(&stk2);
        printf("%c\n", itr->data);
    }//output reverse again
}

int CountNodes(BinTree T){
    if (!T){
        return 0;//empty tree
    }
    if (!(T->lchild) && !(T->rchild)){
        return 1;//leaf node
    }
    return 1 + CountNodes(T->lchild) + CountNodes(T->rchild);//count the sum of nodes of left subtree and right subtree recursively
}

int CountLeaves(BinTree T){
    if (!T){
        return 0;//empty tree
    }
    if (!(T->rchild) && !(T->lchild)){
        return 1; // condition of leave node
    }
    return CountLeaves(T->lchild) + CountLeaves(T->rchild);//count the sum of leaves of left subtree and right subtree recursively
}

void DispBinTree(BinTree T){
    if (T){
        printf("%c", T->data);//display current node
        if (T->rchild || T->lchild){
            printf("(");
            DispBinTree(T->lchild);//display the left subtree
            if (T->rchild){
                printf(",");
            }
            DispBinTree(T->rchild);//display the right subtree
            printf(")");
        }
    }
}

BinTree DeleteBinTree(BinTree T){
    if (!T){
        return NULL;//empty tree
    }
    DeleteBinTree(T->lchild);//delete the left subtree
    DeleteBinTree(T->rchild);//delete the right subtree
    free(T);//free the root node
    T = NULL;
    return T;//origin bug: no return value, makes the pointer T a dangling pointer
}