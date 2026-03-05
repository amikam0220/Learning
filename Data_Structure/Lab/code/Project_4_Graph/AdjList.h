#ifndef __ADJLIST__
#define __ADJLIST__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXSIZE 50
#define ERROR '\0'

// ADT of graph
typedef char VexType;

typedef VexType Ldata;

typedef struct Lnode
{
    Ldata data;
    int arcnum;
    struct Lnode *next;
} Lnode;
typedef Lnode *position;

typedef struct Graph
{
    int type;           // 1 for directed, 0 for undirected
    int vexnum, arcnum; // the number of vertices and edges
    int vexcapacity;    // the capacity of vextices
    Lnode *adj;         // adjecent list, default for undirected and out-degree for directed
    Lnode *in_adj;      // reverse adjacent list, in-degree
} Graph;

// ADT of queue
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
void InitializeGraph(Graph *g);
int LocateVertex(Graph *g, VexType v);
void Auxi_dfs(Graph *g, int i, int *Isvisited);
Graph *DestroyGraph(Graph *g);
Queue CreateQueue();
bool IsEmptyQueue(Queue q);
void Enqueue(Queue q, Ldata item);
Ldata Dequeue(Queue q);
Queue DestroyQueue(Queue q);
position LocateLnode(Lnode *list, Ldata e);
void InsertLnode(Lnode *list, Ldata e);
Ldata DeleteLnode(Lnode *list, position p);
Lnode *DestroyList(Lnode *list);

#endif