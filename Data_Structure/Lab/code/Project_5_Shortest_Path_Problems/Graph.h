#ifndef __GRAPH_ADT__
#define __GRAPH_ADT__

#define VEX_TYPE int
#define ADJ_TYPE double

#include <stdbool.h>
#define GRAPH_INF 100000000
#define MAXSIZE 50

// ADT of Graph
typedef VEX_TYPE VexType;
typedef ADJ_TYPE AdjType;

typedef enum
{
    UG,
    DG,
    WUG,
    WDG
} GraphKind;

typedef struct Graph
{
    GraphKind type;
    VexType *vex; // store the vertices
    int vexnum;
    int arcnum;      // the number of vertices, edges
    int vexcapacity; // the capacity of vextices
    AdjType **adj;   // the adjacent matrix
} Graph;

// ADT of Queue
typedef VexType Ldata;

Graph *CreateGraph(GraphKind Gtype);
void InitializeGraph(Graph *g, int n);
Graph *InsertVertex(Graph *g, VexType v);
Graph *InsertEdge(Graph *g, VexType v1, VexType v2, double weight);
Graph *DeleteVertex(Graph *g, VexType v);
Graph *DeleteEdge(Graph *g, VexType v1, VexType v2);
bool IsEmpty(Graph *g);
Graph *ExpandGraph(Graph *g);
int LocateVertex(Graph *g, VexType v);
Graph *DestroyGraph(Graph *g);

#endif