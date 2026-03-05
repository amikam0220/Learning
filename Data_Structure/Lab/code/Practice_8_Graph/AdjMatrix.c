#include <stdio.h>
#define MAX_VEX 50
#define INFINITY __INT_MAX__
typedef enum
{
    AG,
    DG,
    WAG,
    WDG

} GraphKind;

typedef int VexType;
typedef int ArcValType;

typedef struct
{
    VexType vex1;
    VexType vex2;
    ArcValType Arcval; // set 1 for undirected graph, weight for weighted graph;
} ArcType;

typedef struct
{
    GraphKind kind; // type of graph
    int vexnum, arcnum;
    VexType vex[MAX_VEX];      // array saving vertices
    int adj[MAX_VEX][MAX_VEX]; // adjacent matrix
} Mgraph;

Mgraph *CreateGraph();
int LocateVex(Mgraph *G, VexType *vp);
int AddVertex(Mgraph *G, VexType *vp);
int AddArc(Mgraph *G, ArcType *arc);

// create a empty graph
Mgraph *CreateGraph(GraphKind Type)
{
    Mgraph *graph = (Mgraph *)malloc(sizeof(Mgraph));
    graph->kind = Type;
    graph->vexnum = graph->arcnum = 0;
    return graph;
}

// find the vertex *vp in the graph
int LocateVex(Mgraph *G, VexType *vp)
{
    int i;
    for (i = 0; i < G->vexnum; i++)
    {
        if (G->vex[i] == *vp)
        {
            return i;
        }
    }

    return -1;
}

// insert vertex in the graph
int AddVertex(Mgraph *G, VexType *vp)
{
    if (G->vexnum == MAX_VEX)
    {
        printf("The vertex is full.\n");
        return -1;
    }

    if (LocateVex(G, vp) != -1)
    {
        printf("The vextex has existed.\n");
        return -1;
    }

    int i, j;
    i = G->vexnum;
    G->vex[G->vexnum++] = *vp;

    if (G->kind == WAG || G->kind == WDG)
    {
        for (j = 0; j <= i; j++)
        {
            G->adj[i][j] = Graph_INF;
            G->adj[j][i] = Graph_INF;
        }
    }
    else
    {
        for (j = 0; j <= i; j++)
        {
            G->adj[i][j] = 0;
            G->adj[j][i] = 0;
        }
    }

    return 1;
}

// insert edge in the graph (the vertices are in the graph)
int AddArc(Mgraph *G, ArcType *arc)
{

    // find the location of the two vertex in the graph
    int i, j;
    i = LocateVex(G, arc->vex1);
    j = LocateVex(G, arc->vex2);

    if (i == -1 || j == -1)
    {
        printf("Arc's Vertex do not existed.\n");
        return -1;
    }

    // handle by directed and undirected
    if (G->kind == DG || G->kind == WDG)
    {
        G->adj[i][j] = arc->Arcval;
    }
    else
    {
        G->adj[i][j] = arc->Arcval;
        G->adj[j][i] = arc->Arcval;
    }

    G->arcnum++;
    return 1;
}
