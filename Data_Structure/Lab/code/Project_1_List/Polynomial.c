#include <stdio.h>
#include <stdlib.h>

// Polynomial node structure
typedef struct polynode
{
    int coef;
    int expo;
    struct polynode *next;
} Polynode;
typedef Polynode *Polynomial;

// Function prototypes
Polynomial AddPoly(Polynomial p1, Polynomial p2);
Polynomial MultiPoly(Polynomial p1, Polynomial p2);
void createPoly(Polynomial *p, int n, int *coef, int *expo);
void PrintPoly(Polynomial p);
void DestroyPoly(Polynomial *p);


int main()
{
    Polynomial p1, p2, p3;

    // Test 1: Addition (3x^2+2x+1) + (2x^2-5x)
    int coef1[] = {3, 2, 1}, expo1[] = {2, 1, 0};
    createPoly(&p1, 3, coef1, expo1);
    int coef2[] = {2, -5}, expo2[] = {2, 1};
    createPoly(&p2, 3, coef2, expo2);
    printf("Test 1: Addition\np1: ");
    PrintPoly(p1);
    printf("p2: ");
    PrintPoly(p2);
    p3 = AddPoly(p1, p2);
    printf("p1 plus p2: ");
    PrintPoly(p3);
    DestroyPoly(&p1);
    DestroyPoly(&p2);
    DestroyPoly(&p3);

    // Test 2: Addition (x^2) - (x^2)
    int coef3[] = {1}, expo3[] = {2};
    createPoly(&p1, 1, coef3, expo3);
    int coef4[] = {-1}, expo4[] = {2};
    createPoly(&p2, 1, coef4, expo4);
    printf("Test 2: Addition\np1: ");
    PrintPoly(p1);
    printf("p2: ");
    PrintPoly(p2);
    p3 = AddPoly(p1, p2);
    printf("p1 plus p2: ");
    PrintPoly(p3);
    DestroyPoly(&p1);
    DestroyPoly(&p2);
    DestroyPoly(&p3);

    // Test 3: Multiplication (x+1)*(x-1)
    int coef5[] = {1, 1}, expo5[] = {1, 0};
    createPoly(&p1, 2, coef5, expo5);
    int coef6[] = {1, -1}, expo6[] = {1, 0};
    createPoly(&p2, 2, coef6, expo6);
    printf("Test 3: Multiplication\np1: ");
    PrintPoly(p1);
    printf("p2: ");
    PrintPoly(p2);
    p3 = MultiPoly(p1, p2);
    printf("p1 times p2: ");
    PrintPoly(p3);
    DestroyPoly(&p1);
    DestroyPoly(&p2);
    DestroyPoly(&p3);

    //Test 4: Multiplication (x^3)* 0
    int coef7[] = {1}, expo7[] = {3};
    createPoly(&p1, 1, coef7, expo7);
    int coef8[] = {0}, expo8[] = {0};
    createPoly(&p2, 1, coef8, expo8);
    printf("Test 4: Multiplication\np1: ");
    PrintPoly(p1);
    printf("p2: ");
    PrintPoly(p2);
    p3 = MultiPoly(p1, p2);
    printf("p1 times p2: ");
    PrintPoly(p3);
    DestroyPoly(&p1);
    DestroyPoly(&p2);

    // Test 5: Multiplication (x^2+1) * (x^3)
    int coef9[] = {1, 1}, expo9[] = {2, 1};
    createPoly(&p1, 2, coef9, expo9);
    int coef10[] = {1}, expo10[] = {3};
    createPoly(&p2, 1, coef10, expo10);
    printf("Test 5: Multiplication\np1: ");
    PrintPoly(p1);
    printf("p2: ");
    PrintPoly(p2);
    p3 = MultiPoly(p1, p2);
    printf("p1 times p2: ");
    PrintPoly(p3);
    DestroyPoly(&p1);
    DestroyPoly(&p2);
    DestroyPoly(&p3);

    return 0;
}

// Function to add two polynomials
Polynomial AddPoly(Polynomial p1, Polynomial p2)
{
    if (!p1 || !p2 ||!p1->next ||!p2->next)
    {
        printf("Invalid polynomial.\n");
        return NULL;
    }
    Polynomial p3 = (Polynomial)malloc(sizeof(Polynode));
    if (!p3)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    p3->coef = 0;
    p3->expo = -1;
    p3->next = NULL;
    Polynomial p3_tail = p3; 
    Polynomial p1_tail = p1->next;
    Polynomial p2_tail = p2->next;

    while (p1_tail && p2_tail)
    {
        if (p1_tail->expo == p2_tail->expo)// Merge like terms
        {
            int sumcoef = p1_tail->coef + p2_tail->coef;
            if (sumcoef)
            {
                Polynomial tmpnode = (Polynomial)malloc(sizeof(Polynode));
                if (!tmpnode)
                {
                    printf("Memory allocation failed.\n");
                    // avoid leak
                    free(p3);
                    return NULL;
                }
                tmpnode->coef = sumcoef;
                tmpnode->expo = p1_tail->expo; 
                tmpnode->next = NULL;
                p3_tail->next = tmpnode;
                p3_tail = tmpnode; 
            }
            p1_tail = p1_tail->next;
            p2_tail = p2_tail->next;
        }
        else if (p1_tail->expo > p2_tail->expo)// p1_tail is larger
        {
            Polynomial tmpnode = (Polynomial)malloc(sizeof(Polynode));
            if (!tmpnode)
            {
                free(p3);
                printf("Memory failed.\n");
                return NULL;
            }
            tmpnode->coef = p1_tail->coef;
            tmpnode->expo = p1_tail->expo;
            tmpnode->next = NULL;
            p3_tail->next = tmpnode;
            p3_tail = tmpnode;
            p1_tail = p1_tail->next;
        }
        else// p2_tail is larger
        {
            Polynomial tmpnode = (Polynomial)malloc(sizeof(Polynode));
            if (!tmpnode)
            {
                free(p3);
                printf("Memory failed.\n");
                return NULL;
            }
            tmpnode->coef = p2_tail->coef;
            tmpnode->expo = p2_tail->expo;
            tmpnode->next = NULL;
            p3_tail->next = tmpnode;
            p3_tail = tmpnode;
            p2_tail = p2_tail->next;
        }
    }

    // Append remaining terms of p1
    while (p1_tail)
    {
        Polynomial tmpnode = (Polynomial)malloc(sizeof(Polynode));
        if (!tmpnode)
        {
            free(p3);
            printf("Memory failed.\n");
            return NULL;
        }
        tmpnode->coef = p1_tail->coef;
        tmpnode->expo = p1_tail->expo;
        tmpnode->next = NULL;
        p3_tail->next = tmpnode;
        p3_tail = tmpnode;
        p1_tail = p1_tail->next;
    }

    // Append remaining terms of p2
    while (p2_tail)
    {
        Polynomial tmpnode = (Polynomial)malloc(sizeof(Polynode));
        if (!tmpnode)
        {
            free(p3);
            printf("Memory failed.\n");
            return NULL;
        }
        tmpnode->coef = p2_tail->coef;
        tmpnode->expo = p2_tail->expo;
        tmpnode->next = NULL;
        p3_tail->next = tmpnode;
        p3_tail = tmpnode;
        p2_tail = p2_tail->next;
    }
    return p3; 
}

// Function to multiply two polynomials
Polynomial MultiPoly(Polynomial p1, Polynomial p2)
{
    if (!p1 || !p2 || !p1->next || !p2->next)
    {
        printf("Invalid polynomial.\n");
        return NULL;
    }
    Polynomial p3 = (Polynomial)malloc(sizeof(Polynode));
    if (!p3)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    p3->coef = 0;
    p3->expo = -1;
    p3->next = NULL;

    Polynomial p1_tail = p1->next;  
    Polynomial p2_tail = p2->next; 

    while (p1_tail)
    {
        Polynomial p2_tail = p2->next; 
        while (p2_tail)
        {
            
            int prodcoef = p1_tail->coef * p2_tail->coef;
            int prodexpo = p1_tail->expo + p2_tail->expo;

            // Find insert position
            Polynomial p3_tail = p3;
            while (p3_tail->next && p3_tail->next->expo > prodexpo)
            {
                p3_tail = p3_tail->next;
            }
            if (p3_tail->next && p3_tail->next->expo == prodexpo)
            {
                // Merge like terms
                p3_tail->next->coef += prodcoef;
                if (p3_tail->next->coef == 0)
                {
                    Polynomial tmpnode = p3_tail->next;
                    p3_tail->next = tmpnode->next;
                    free(tmpnode);
                }
            }
            else
            {
                // Insert new product term
                Polynomial tmpnode = (Polynomial)malloc(sizeof(Polynode));
                if (!tmpnode)
                {
                    free(p3);
                    printf("Memory failed.\n");
                    return NULL;
                }
                tmpnode->coef = prodcoef;
                tmpnode->expo = prodexpo;
                tmpnode->next = p3_tail->next;
                p3_tail->next = tmpnode;
            }

            p2_tail = p2_tail->next;
        }
        p1_tail = p1_tail->next;
    }
    return p3; 
}

// Function to create a polynomial
void createPoly(Polynomial *p, int len, int* coef, int* expo)
{
    *p = (Polynomial)malloc(sizeof(Polynode));
    (*p)->coef = 0;
    (*p)->expo = -1;
    (*p)->next = NULL;
    Polynomial p_tail = *p;
    for (int i = 0; i < len; i++)
    {
        if (coef[i] == 0)
            continue; 
        Polynomial tmpnode = (Polynomial)malloc(sizeof(Polynode));
        tmpnode->coef = coef[i];
        tmpnode->expo = expo[i];
        tmpnode->next = NULL;
        p_tail->next = tmpnode;
        p_tail = tmpnode;
    }
}

// Function to print a polynomial
void PrintPoly(Polynomial p)
{
    if (!p || !p->next)
    {
        printf("0\n");
        return;
    }
    Polynomial p_tail = p->next;
    int isFirst = 1;
    while (p_tail) 
    {
        // Sign handling
        if (p_tail->coef > 0 && !isFirst)
            printf("+");
        // Coefficient handling
        if ((p_tail->coef != 1 && p_tail->coef != -1) || p_tail->expo == 0)
        {
            printf("%d", p_tail->coef);
        }
        else if (p_tail->coef < 0)
        {
            printf("-");
        }
        if (p_tail->expo > 0)
        {
            printf("x");
            if (p_tail->expo > 1)
                printf("^%d", p_tail->expo);
        }
        p_tail = p_tail->next;
        isFirst = 0;
    }
    printf("\n");
}

// Function to destroy a polynomial
void DestroyPoly(Polynomial *p)
{
    if (!*p)
        return;
    Polynomial tmp = NULL;
    while (*p)
    {
        tmp = (*p)->next;
        free(*p);
        *p = tmp;
    }
    *p = NULL;// Set to NULL to avoid garbage collection
}