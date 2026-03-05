#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Graph.h"

// Create empty graph
Graph *CreateGraph(GraphKind Gtype)
{
    // Create pointer to emtpy graph
    Graph *g = (Graph *)malloc(sizeof(struct Graph));

    if (!g)
    {
        printf("Failed to create graph.\n");
        return NULL;
    }

    g->type = Gtype;
    g->vexnum = g->arcnum = 0;
    g->vexcapacity = MAXSIZE;
    g->vex = (VexType *)malloc(g->vexcapacity * sizeof(VexType));

    if (!g->vex)
    {
        printf("Failed to create graph.\n");
        free(g);
        return NULL;
    }

    g->adj = (AdjType **)malloc(g->vexcapacity * sizeof(AdjType *));
    if (!g->adj)
    {
        printf("Failed to create graph.\n");
        free(g->vex);
        free(g);
        return NULL;
    }

    for (int i = 0; i < g->vexcapacity; i++)
    {
        g->adj[i] = (AdjType *)malloc(g->vexcapacity * sizeof(AdjType));
        if (!g->adj[i])
        {
            for (int j = 0; j < i; j++)
            {
                free(g->adj[j]);
            }
            free(g->adj);
            free(g->vex);
            free(g);
            return NULL;
        }
    }

    return g;
}

// receive the input and initialize the graph
void InitializeGraph(Graph *g, int n)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return;
    }

    while (n > g->vexcapacity)
    {
        g = ExpandGraph(g);
        if (!g)
        {
            return;
        }
    }

    // initialize the graph
    g->vexnum = n;
    int vex_num = g->vexnum;
    if (g->type == DG || g->type == UG)
    {
        for (int i = 0; i < vex_num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                g->adj[i][j] = g->adj[j][i] = 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < vex_num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                g->adj[i][j] = g->adj[j][i] = GRAPH_INF;
            }
        }
    }
}

// expand the graph
Graph *ExpandGraph(Graph *g)
{
    if (!g)
        return NULL;

    int old_capacity = g->vexcapacity;
    int new_capacity = old_capacity + MAXSIZE;

    // expand the array of vertices
    VexType *new_vex = (VexType *)realloc(g->vex, new_capacity * sizeof(VexType));
    if (!new_vex)
    {
        printf("Failed to expand vertex array.\n");
        return NULL;
    }
    g->vex = new_vex;

    // expand adjacent matrix
    AdjType **new_adj = (AdjType **)realloc(g->adj, new_capacity * sizeof(AdjType *));
    if (!new_adj)
    {
        printf("Failed to expand adjacency matrix pointer array.\n");
        return NULL;
    }
    g->adj = new_adj;

    // handle old rows
    for (int i = 0; i < old_capacity; i++)
    {
        AdjType *new_row = (AdjType *)realloc(g->adj[i], new_capacity * sizeof(AdjType));
        if (!new_row)
        {
            printf("Failed to expand row %d.\n", i);
            return NULL;
        }
        g->adj[i] = new_row;

    }

    // handle new rows
    for (int i = old_capacity; i < new_capacity; i++)
    {
        g->adj[i] = (AdjType *)malloc(new_capacity * sizeof(AdjType));
        if (!g->adj[i])
        {
            printf("Failed to allocate new row %d.\n", i);
            // free previous old rows
            for (int j = old_capacity; j < i; j++)
                free(g->adj[j]);
            return NULL;
        }

    }

    g->vexcapacity = new_capacity;
    printf("The graph has been expanded. (New Capacity: %d)\n", g->vexcapacity);
    return g;
}

// locate the vertex in the graph
int LocateVertex(Graph *g, VexType v)
{
    if (!g)
    {
        return -1;
    }

    for (int i = 0; i < g->vexnum; i++)
    {
        if (g->vex[i] == v)
        {
            return i;
        }
    }
    return -1;
}

// Insert a new vertex without incident edge
Graph *InsertVertex(Graph *g, VexType v)
{
    // Cope with the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return NULL;
    }

    int j = LocateVertex(g, v);
    if (j != -1)
    {
        printf("The vertex has been in the graph.\n");
        return g;
    }

    if (g->vexnum == g->vexcapacity)
    {
        g = ExpandGraph(g);
        if (!g)
        {
            return NULL;
        }
    }

    // initialize the row and column in the matrix
    int i = g->vexnum;
    g->vex[g->vexnum++] = v;
    if (g->type == DG || g->type == UG)
    {
        for (int j = 0; j <= i; j++)
        {
            g->adj[i][j] = g->adj[j][i] = 0;
        }
    }
    else
    {
        for (int j = 0; j <= i; j++)
        {
            g->adj[i][j] = g->adj[j][i] = GRAPH_INF;
        }
    }
    return g;
}

// Insert a new edge between v1 and v2
Graph *InsertEdge(Graph *g, VexType v1, VexType v2, double weight)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return NULL;
    }

    if (IsEmpty(g))
    {
        printf("The graph is empty.\n");
        return NULL;
    }

    // find the position of the vertices in the array
    int i = LocateVertex(g, v1);
    int j = LocateVertex(g, v2);

    // handle error situation
    if (i == -1 || j == -1)
    {
        printf("The vertex is not in the graph.\n");
        return g;
    }

    bool is_exist = false;
    if (g->type == UG || g->type == DG)
    {
        is_exist = (g->adj[i][j] - 1 < 1e-9);
    }
    else
    {
        is_exist = (g->adj[i][j] - GRAPH_INF > 1e-9);
    }
    if (is_exist)
    {
        printf("The edge has been in the graph");
        return g;
    }

    // set the corresponding position as 1
    if (g->type == UG)
    {
        g->adj[i][j] = g->adj[j][i] = 1;
    }
    else if (g->type == DG)
    {
        g->adj[i][j] = 1;
    }
    else if (g->type == WUG)
    {
        g->adj[i][j] = g->adj[j][i] = weight;
    }
    else
    {
        g->adj[i][j] = weight;
    }

    g->arcnum++;
    return g;
}

// return TRUE if it is empty and FALSE if not
bool IsEmpty(Graph *g)
{
    return (g->vexnum == 0) ? true : false;
}

// delete the vertex v and all incident edges to v
Graph *DeleteVertex(Graph *g, VexType v)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return NULL;
    }

    if (IsEmpty(g))
    {
        printf("The graph is empty.\n");
        return NULL;
    }

    // find the location to be deleted
    int i = LocateVertex(g, v);
    if (i == -1)
    {
        printf("The vertex is not in the graph.\n");
        return g;
    }

    // move the last element and corresponding matrix to the location
    g->vex[i] = g->vex[g->vexnum - 1];
    for (int j = 0; j < g->vexnum; j++)
    {
        if (g->type == WUG || g->type == WDG){
            if (g->adj[i][j] - GRAPH_INF > 1e-9){
                g->arcnum--;
            }

        }else{
            if (g->adj[i][j] - 1 < 1e-9){
                g->arcnum--;
            }
        }
        g->adj[i][j] = g->adj[i][g->vexnum - 1];
        g->adj[j][i] = g->adj[g->vexnum - 1][i];
    }

    g->vexnum--;

    return g;
}

// delete the edge with the vertices v1 and v2
Graph *DeleteEdge(Graph *g, VexType v1, VexType v2)
{
    // handle error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return NULL;
    }

    if (IsEmpty(g))
    {
        printf("The graph is empty.\n");
        return NULL;
    }

    // locate the two vertices in the graph
    int i = LocateVertex(g, v1);
    int j = LocateVertex(g, v2);

    if (i == -1 || j == -1)
    {
        printf("The vertex is not in the graph.\n");
        return g;
    }

    if (g->adj[i][j] - 0 < 1e-9)
    {
        printf("The edge is not in the graph.\n");
        return g;
    }

    // delete the edge
    if (g->type == DG)
    {
        g->adj[i][j] = 0;
    }
    else if (g->type == UG)
    {
        g->adj[i][j] = g->adj[j][i] = 0;
    }
    else if (g->type == WDG){
        g->adj[i][j] = GRAPH_INF;
    }else{
        g->adj[i][j] = g->adj[j][i] = GRAPH_INF;
    }

    g->arcnum--;

    return g;
}

// destroy the graph
Graph *DestroyGraph(Graph *g)
{
    if (!g)
    {
        return NULL;
    }

    // free each row of adjacent matrix
    if (g->adj)
    {
        for (int i = 0; i < g->vexcapacity; i++)
        {
            if (g->adj[i])
            {
                free(g->adj[i]);
            }
        }
        free(g->adj);
    }

    // free the array of vertices
    if (g->vex)
    {
        free(g->vex);
    }

    // free the struct of graph
    free(g);

    return NULL;
}