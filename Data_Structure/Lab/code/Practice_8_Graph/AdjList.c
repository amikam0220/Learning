#include <stdio.h>
#define MAX_VEX 50

typedef enum
{
    AG,
    DG,
    WAG,
    WDG
} GraphKind;

typedef int VexType;

typedef struct node *node_ptr;
typedef struct node{
    VexType vertex;
    int arcnum;
    struct node *next;
} node;

typedef struct{
    GraphKind kind;
    int vexnum, arcnum;
    node AdjList[MAX_VEX];
} Lgraph;