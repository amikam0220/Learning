#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the data type of the element and the node of the linked list.
typedef int Elementype;
typedef struct Lnode
{
    Elementype data;// The data of the node.
    struct Lnode *next;// The pointer to the next node.
} Lnode;
typedef Lnode *List;
typedef Lnode *position;

// Define the functions of the linked list.
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

int main()
{
    List L = NULL;
    int choice, e, ret;
    position p;
    // menu loop
    while (1)
    {
        printf("\n===== Linked List Menu =====\n");
        printf("1.Create List\n");
        printf("2.Initialize List\n");
        printf("3.Insert Element\n");
        printf("4.Delete Element\n");
        printf("5.Find Element\n");
        printf("6.Display List\n");
        printf("7.Check Empty\n");
        printf("8.Get Length\n");
        printf("9.Destroy List\n");
        printf("0.Exit\n");
        printf("==========================================\n");
        printf("Please enter your choice (0-9): ");
        scanf("%d", &choice);
        while (getchar() != '\n')
            ;// clear the input buffer
        switch (choice)
        {
        case 1:// create list
            if (L)
            {
                Destroy(L);
                L = NULL;
            }
            L = Create();
            break;
        case 2:// initialize list
            if (!L)
            {
                printf("Create first (Choice 1)!\n");
                break;
            }
            IniList(L);
            break;
        case 3:// insert element
            if (!L)
            {
                printf("Create first (Choice 1)!\n");
                break;
            }
            printf("Enter element to find (insert after it): ");
            scanf("%d", &e);
            p = Find(L, e);
            if (!p)
            {
                break;
            }
            printf("Enter element to insert: ");
            scanf("%d", &e);
            ret = Insert(L, p, e);
            printf(ret ? "Insert success!\n" : "Insert failed!\n");
            break;
        case 4:// delete element
            if (!L)
            {
                printf("Create first (Choice 1)!\n");
                break;
            }
            printf("Enter element to delete: ");
            scanf("%d", &e);
            ret = DeleteElem(L, e);
            printf(ret ? "Delete success!\n" : "Delete failed!\n");
            break;
        case 5:// find element
            if (!L)
            {
                printf("Create first (Choice 1)!\n");
                break;
            }
            printf("Enter element to find: ");
            scanf("%d", &e);
            p = Find(L, e);
            if (p)
            {
                printf("Element %d found.\n", e);
            }
            break;
        case 6:// display list
            if (!L)
            {
                printf("Create first (Choice 1)!\n");
                break;
            }
            DispList(L);
            break;
        case 7:// check empty
            if (!L)
            {
                printf("Create first (Choice 1)!\n");
                break;
            }
            printf(isEmpty(L) ? "List is empty.\n" : "List is not empty.\n");
            break;
        case 8:// get length
            if (!L)
            {
                printf("Create first (Choice 1)!\n");
                break;
            }
            printf("List length: %d\n", ListLength(L));
            break;
        case 9:// destroy list
            if (!L)
            {
                printf("List not created!\n");
                break;
            }
            Destroy(L);
            L = NULL;
            printf("The list has been destroyed.\n");
            break;
        case 0:// exit
            printf("Exiting...\n");
            if (L)
                Destroy(L);
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
// Define the functions of the linked list.
List Create()// Create a new empty linked list.
{
    List L = (List)malloc(sizeof(struct Lnode));
    if (!L)
    {
        printf("Fail to create the list.\n");
        return NULL;
    }
    L->next = NULL;
    printf("The list has been created.\n");
    return L;
}

void IniList(List L)// Initialize the linked list.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return;
    }
    Elementype tmpdata;
    List tmpnode = NULL;
    printf("Please enter the element one by one and enter -1 to exit.\n");
    while (1)
    {
        scanf("%d", &tmpdata);
        if (tmpdata == -1)
            break;
        tmpnode = (List)malloc(sizeof(struct Lnode));
        if (!tmpnode)
        {
            printf("Fail to create new node for the list.\n");
            break;
        }
        tmpnode->data = tmpdata;
        tmpnode->next = NULL; // modified
        L->next = tmpnode;
        L = L->next;
    }
    printf("The list has been initialized.\n");
    return;
}

void Destroy(List L)// Destroy the linked list.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return;
    }
    List tmpnode = NULL;
    while (L)
    {
        tmpnode = L;
        L = L->next;
        free(tmpnode);
    }
    return;
}

bool isEmpty(List L)// Check if the linked list is empty.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return false;
    }
    return (!L->next) ? true : false;
}

int ListLength(List L)// Get the length of the linked list.
{
    int cnt = -1;
    while (L)
    {
        L = L->next;
        cnt++;
    }
    return cnt;
}

void DispList(List L)// Display the elements of the linked list.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return;
    }
    L = L->next;
    printf("The elements in the list are:\n");
    while (L)
    {
        printf("%d\n", L->data);
        L = L->next;
    }
    return;
}

position Find(List L, Elementype e)// Find the position of the element in the linked list.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return NULL;
    }
    L = L->next;
    while (L)
    {
        if (L->data == e)
        {
            return L;
        }
        L = L->next;
    }
    printf("The element is not in the list.\n");
    return NULL;
}

position Findpre(List L, Elementype e)// Find the position before the element in the linked list.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return NULL;
    }
    while (L->next)
    {
        if (L->next->data == e)
        {
            return L;
        }
        L = L->next;
    }
    printf("The element is not in the list.\n");
    return NULL;
}

int Insert(List L, position p, Elementype e)// Insert the element after the position p in the linked list.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return 0;
    }
    if (!p)
    {
        printf("Wrong position.\n");
        return 0;
    }
    List newnode = (List)malloc(sizeof(struct Lnode));
    if (!newnode)
    {
        printf("Fail to create new node for the list.\n");
        return 0;
    }
    newnode->data = e;
    newnode->next = p->next;
    p->next = newnode;
    return 1;
}

int Delete(List L, position p)// Delete the node after the position p in the linked list.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return 0;
    }
    if (isEmpty(L)){
        printf("The list is empty.\n");
        return 0;
    }
    if (!p)
    {
        printf("Wrong position.\n");
        return 0;
    }
    List tmp = p->next;
    p->next = tmp->next;
    free(tmp);
    return 1;
}

int DeleteElem(List L, Elementype e)// Delete the element e in the linked list.
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return 0;
    }
    position p = Findpre(L, e);
    if (!p)
    {
        return 0;
    }
    int ret = Delete(L, p);
    return ret;
}