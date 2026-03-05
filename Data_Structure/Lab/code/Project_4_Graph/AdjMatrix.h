#ifndef __ADJMATRIX__
#define __ADJAMTRIX__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define ERRORDEQUEUE '\0'
#define MAXSIZE 50

// ADT of Graph
typedef char VexType;

typedef struct Graph
{
    int type;     // 0 for undirected, 1 for directed
    VexType *vex; // store the vertices
    int vexnum;
    int arcnum;      // the number of vertices, edges
    int vexcapacity; // the capacity of vextices
    int **adj;       // the adjacent matrix
} Graph;

// ADT of Queue
typedef VexType Ldata;

typedef struct Lnode
{
    Ldata data;
    struct Lnode *next;
} Lnode;

typedef struct Qnode
{
    Lnode *front;
    Lnode *rear;
} Qnode;
typedef Qnode *Queue;

// function prototypes
Graph *Create();
Graph *InsertVertex(Graph *g, VexType v);
Graph *InsertEdge(Graph *g, VexType v1, VexType v2);
Graph *DeleteVertex(Graph *g, VexType v);
Graph *DeleteEdge(Graph *g, VexType v1, VexType v2);
bool IsEmpty(Graph *g);
int BFS(Graph *g);
int DFS(Graph *g);

// auxiliary functions
Graph *ExpandGraph(Graph *g);
int LocateVertex(Graph *g, VexType v);
void InitializeGraph(Graph *g);
Graph *DestroyGraph(Graph *g);
Queue CreateQueue();
bool IsEmptyQueue(Queue q);
void Enqueue(Queue q, Ldata item);
Ldata Dequeue(Queue q);
void Auxi_dfs(Graph *g, int i, int *Isvisited);
Queue DestroyQueue(Queue q);

#endif