#include <stdio.h>
#include <stdlib.h>
#define ERROR -1
typedef int Elementype;

// Sequential List Structure
typedef struct SeqList
{
    Elementype *element;
    int capacity;
    int size;
} SeqList;

// Function Prototypes
SeqList *Create();
void IniList(SeqList *L);
void Destroy(SeqList *L);
SeqList *Expansion(SeqList *L);
int ListLength(SeqList *L);
void DispList(SeqList *L);
Elementype GetElem(SeqList *L, int i);
int LocateElem(SeqList *L, Elementype e);
int SeqInsert(SeqList *L, int i, Elementype e);
int SeqDelete(SeqList *L, int i);

int main()
{
    SeqList *L = NULL;
    int choice, i, e, ret;
    //menu loop
    while (1)
    {
        printf("\n===== Sequential List Operation Menu =====\n");
        printf("1. Create Sequential List (Init Capacity: 10)\n");
        printf("2. Initialize List (Input Elements from Keyboard)\n");
        printf("3. Insert Element (0-based Position)\n");
        printf("4. Delete Element (0-based Position)\n");
        printf("5. Get Element by Position (0-based)\n");
        printf("6. Locate Element by Value\n");
        printf("7. Display All Elements\n");
        printf("8. Get List Length\n");
        printf("9. Destroy Sequential List\n");
        printf("0. Exit Program\n");
        printf("==========================================\n");
        printf("Please enter your choice (0-9): ");
        scanf("%d", &choice);
        while (getchar() != '\n')
            ;//clear the buffer
        switch (choice)
        {
        case 1://create list
            if (L != NULL)
            {
                Destroy(L);
                L = NULL;
            }
            L = Create();
            break;
        case 2://initialize list
            if (L == NULL)
            {
                printf("Error: Create the list first (Choice 1)!\n");
                break;
            }
            IniList(L);
            break;
        case 3://insert element
            if (L == NULL)
            {
                printf("Error: Create the list first (Choice 1)!\n");
                break;
            }
            printf("Enter insert position (0-based, 0~%d): ", L->size);
            scanf("%d", &i);
            printf("Enter element to insert: ");
            scanf("%d", &e);
            ret = SeqInsert(L, i, e);
            printf(ret ? "Insert success!\n" : "Insert failed!\n");
            break;
        case 4://delete element
            if (L == NULL)
            {
                printf("Error: Create the list first (Choice 1)!\n");
                break;
            }
            if (L->size == 0)
            {
                printf("Error: List is empty, cannot delete!\n");
                break;
            }
            printf("Enter delete position (0-based, 0~%d): ", L->size - 1);
            scanf("%d", &i);
            ret = SeqDelete(L, i);
            printf((ret == ERROR) ? "Delete failed!\n" : "Delete success! Deleted element: %d\n", ret);
            break;
        case 5://get element by position
            if (L == NULL)
            {
                printf("Error: Create the list first (Choice 1)!\n");
                break;
            }
            if (L->size == 0)
            {
                printf("Error: List is empty!\n");
                break;
            }
            printf("Enter position to get (0-based, 0~%d): ", L->size - 1);
            scanf("%d", &i);
            e = GetElem(L, i);
            if (e != ERROR)
            {
                printf("Element at position %d: %d\n", i, e);
            }
            else
            {
                printf("Get element failed!\n");
            }
            break;
        case 6://locate element by value
            if (L == NULL)
            {
                printf("Error: Create the list first (Choice 1)!\n");
                break;
            }
            if (L->size == 0)
            {
                printf("Error: List is empty!\n");
                break;
            }
            printf("Enter element to locate: ");
            scanf("%d", &e);
            i = LocateElem(L, e);
            if (i != -1)
            {
                printf("Element %d is at position %d (0-based)\n", e, i);
            }
            break;
        case 7://display all elements
            if (L == NULL)
            {
                printf("Error: Create the list first (Choice 1)!\n");
                break;
            }
            DispList(L);
            break;
        case 8://get list length
            if (L == NULL)
            {
                printf("Error: Create the list first (Choice 1)!\n");
                break;
            }
            ret = ListLength(L);
            if (ret != -1)
            {
                printf("Current list length: %d\n", ret);
            }
            break;
        case 9://destroy list
            if (L == NULL)
            {
                printf("Error: List has not been created!\n");
                break;
            }
            Destroy(L);
            L = NULL;
            break;
        case 0://exit program
            printf("Exiting program...\n");
            if (L != NULL)
            {
                Destroy(L);
            }
            return 0;
        default:
            printf("Invalid choice! Please enter 0~9.\n");
        }
    }
    return 0;
}
// Function Implementations

SeqList *Create()//create sequential list
{
    SeqList *ret = (SeqList *)malloc(sizeof(struct SeqList));
    if (!ret)
    {
        printf("Fail to create the sequential list.\n");
        free(ret);//modified
        return NULL;
    }
    ret->capacity = 10;
    ret->element = (Elementype *)malloc(ret->capacity * sizeof(Elementype));
    if (!(ret->element))
    {
        printf("Fail to create the sequential list.\n");
        return NULL;
    }
    ret->size = 0;
    printf("The list has been created.\n");
    return ret;
}

void IniList(SeqList *L)//initialize list
{
    if (!L)
    {
        printf("The sequential list has not been created.\n");
        return;
    }
    printf("Please enter the number you want to input.(less than or equivalent to %d)\n", L->capacity);
    scanf("%d", &L->size);
    if (L->size > L->capacity || L->size < 0)
    {
        L->size = 0;
        printf("It is greater than the capacity.\n");
        return;
    }
    printf("Please enter the element one by one.\n");
    for (int i = 0; i < L->size; i++)
    {
        scanf("%d", &L->element[i]);
    }
    printf("The list has been initialized.\n");
}

void Destroy(SeqList *L)//destroy list
{
    if (!L)
    {
        printf("The Sequential list has not been created.\n");
        return;
    }
    free(L->element);
    free(L);
    printf("The list has been destroyed.\n");
}

SeqList *Expansion(SeqList *L)//expand list
{
    if (!L)
    {
        printf("The Sequential list has not been created.\n");
        return NULL;
    }
    int newcapacity = 2 * (L->capacity);
    Elementype *newelement = (Elementype *)realloc(L->element, newcapacity * sizeof(Elementype));
    if (!newelement)
    {
        printf("Fail to expand the list.\n");
        return NULL;
    }
    L->element = newelement;
    L->capacity = newcapacity;
    printf("The list has been expanded.\n");
    return L;
}

int ListLength(SeqList *L)//get list length
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return -1;
    }
    return (L->size);
}

void DispList(SeqList *L)//display list
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return;
    }
    printf("The elements in the list are: \n");
    for (int i = 0; i < L->size; i++)
    {
        printf("%d\n", L->element[i]);
    }
    return;
}

Elementype GetElem(SeqList *L, int i)//get element by position
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return ERROR;
    }
    if (i < 0 || i >= L->size)
    {
        printf("Wrong location.\n");
        return ERROR;
    }
    return (L->element[i]);
}

int LocateElem(SeqList *L, Elementype e)//locate element by value
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return -1;
    }
    int i;
    for (i = 0; i < L->size; i++)
    {
        if (L->element[i] == e)
        {
            return i;
        }
    }
    printf("The element is not in the list.\n");
    return -1;
}

int SeqInsert(SeqList *L, int i, Elementype e)//insert element
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return 0;
    }
    if (i < 0 || i > L->size)
    {
        printf("Wrong position.\n");
        return 0;
    }
    if (L->size == L->capacity)
    {
        if (!Expansion(L))
        {
            return 0;
        }
    }
    int j;
    for (j = (L->size) - 1; j >= i; j--)
    {
        L->element[j + 1] = L->element[j];
    }
    L->element[i] = e;
    L->size++;
    return 1;
}

Elementype SeqDelete(SeqList *L, int i)//delete element
{
    if (!L)
    {
        printf("The list has not been created.\n");
        return ERROR;
    }
    if (L->size == 0)
    {
        printf("The list is empty.\n");
        return ERROR;
    }
    if (i < 0 || i > L->size - 1)
    {
        printf("Wrong position.\n");
        return ERROR;
    }
    Elementype ret = L->element[i];
    int j;
    for (j = i; j < L->size - 1; j++)
    {
        L->element[j] = L->element[j + 1];
    }
    L->size--;
    return ret;
}       