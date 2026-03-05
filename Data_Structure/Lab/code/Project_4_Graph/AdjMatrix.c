#include "AdjMatrix.h"

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
    int **new_adj = (int **)realloc(g->adj, new_capacity * sizeof(int *));
    if (!new_adj)
    {
        printf("Failed to expand adjacency matrix pointer array.\n");
        return NULL;
    }
    g->adj = new_adj;

    // handle old rows
    for (int i = 0; i < old_capacity; i++)
    {
        int *new_row = (int *)realloc(g->adj[i], new_capacity * sizeof(int));
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
        g->adj[i] = (int *)malloc(new_capacity * sizeof(int));
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

// Create a empty queue
Queue CreateQueue()
{
    Queue q = (Queue)malloc(sizeof(struct Qnode));
    if (!q)
    {
        printf("Failed to create queue.\n");
        return NULL;
    }

    q->front = q->rear = NULL;

    return q;
}

// return true if queue is empty and return false if not
bool IsEmptyQueue(Queue q)
{
    if (!q)
    {
        return 1;
    }
    if (q->rear == NULL)
    {
        return 1;
    }
    return 0;
}

// enqueue
void Enqueue(Queue q, Ldata item)
{
    if (!q)
    {
        printf("The queue has not been created.\n");
        return;
    }

    Lnode *newnode = (Lnode *)malloc(sizeof(Lnode));
    if (!newnode)
    {
        printf("Failed to enqueue.\n");
        return;
    }
    newnode->data = item;
    newnode->next = NULL;

    if (IsEmptyQueue(q))
    {
        q->front = q->rear = newnode;
    }
    else
    {
        q->rear->next = newnode;
        q->rear = newnode;
    }
    return;
}

// dequeue
Ldata Dequeue(Queue q)
{
    if (!q)
    {
        printf("The queue has not been created.\n");
        return ERRORDEQUEUE;
    }
    if (IsEmptyQueue(q))
    {
        printf("The queue is empty.\n");
        return ERRORDEQUEUE;
    }

    Lnode *tmpnode = q->front;
    Ldata retdata = tmpnode->data;

    if (q->rear == q->front)
    {
        q->rear = q->front = NULL;
    }
    else
    {
        q->front = q->front->next;
    }
    free(tmpnode);

    return retdata;
}

// Destroy the queue
Queue DestroyQueue(Queue q)
{
    if (!q)
    {
        return NULL;
    }

    while (q->front)
    {
        Lnode *tmpnode = q->front;
        q->front = tmpnode->next;
        free(tmpnode);
    }

    free(q);
    return NULL;
}

// Create empty graph
Graph *Create()
{
    // Create pointer to emtpy graph
    Graph *g = (Graph *)malloc(sizeof(struct Graph));

    if (!g)
    {
        printf("Failed to create graph.\n");
        return NULL;
    }

    int Gtype;

    // Initialize the graph
    printf("Please enter the type of the graph. (1 for directed, 0 for undirected)\n");
    scanf("%d", &Gtype);
    while (getchar() != '\n')
        ;

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

    g->adj = (int **)malloc(g->vexcapacity * sizeof(int *));
    if (!g->adj)
    {
        printf("Failed to create graph.\n");
        free(g->vex);
        free(g);
        return NULL;
    }

    for (int i = 0; i < g->vexcapacity; i++)
    {
        g->adj[i] = (int *)malloc(g->vexcapacity * sizeof(int));
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
void InitializeGraph(Graph *g)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return;
    }

    // prompt
    printf("Please enter two lines.\n");
    printf("The first line contains the vertex set V.(Separated by comma)\n");
    printf("The second line contains edge set E.(Separated by comma)\n");
    printf("A single 0 indicate the end of the input.\n");

    // create buffer to read input in stdin
    const int size = 1000;
    char line[size];

    if (fgets(line, size, stdin) == NULL)
    {
        printf("Failed to get the input.\n");
        return;
    }
    char *token = strtok(line, ",\n");

    // receive the vertices
    while (token)
    {
        if (g->vexnum == g->vexcapacity)
        {
            g = ExpandGraph(g);
            if (!g)
            {
                return;
            }
        }

        for (int j = 0; j <= g->vexnum; j++)
        {
            g->adj[j][g->vexnum] = g->adj[g->vexnum][j] = 0;
        }
        g->vex[g->vexnum++] = token[0];

        token = strtok(NULL, ",\n");
    }

    if (g->vexnum == 0)
    {
        printf("Warning: The graph is empty.\n");
        return;
    }

    // receive the edges
    if (fgets(line, size, stdin) == NULL)
    {
        printf("Failed to get the input.\n");
        return;
    }
    token = strtok(line, ",");

    VexType a, b;
    while (1)
    {
        a = token[0];
        if (a == '0')
        {
            break;
        }

        token = strtok(NULL, ",");
        if (!token)
        {
            printf("Invalid input of edge without second vertex.\n");
            return;
        }
        b = token[0];

        int j = LocateVertex(g, a);
        int k = LocateVertex(g, b);

        if (j == -1 || k == -1)
        {
            printf("The vertices of the edge are not in the graph.\n");
            return;
        }

        if (g->type == 0)
        {
            g->adj[j][k] = g->adj[k][j] = 1;
        }
        else
        {
            g->adj[j][k] = 1;
        }
        g->arcnum++;
        token = strtok(NULL, ",");
    }
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
    for (int j = 0; j <= i; j++)
    {
        g->adj[i][j] = g->adj[j][i] = 0;
    }

    return g;
}

// Insert a new edge between v1 and v2
Graph *InsertEdge(Graph *g, VexType v1, VexType v2)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return NULL;
    }

    if (IsEmpty(g)){
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

    if (g->adj[i][j] == 1)
    {
        printf("The edge has been in the graph");
        return g;
    }

    // set the corresponding position as 1
    if (g->type == 0)
    {
        g->adj[i][j] = g->adj[j][i] = 1;
    }
    else
    {
        g->adj[i][j] = 1;
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
        if (g->adj[i][j] == 1)
        {
            g->arcnum--;
        }
        if (g->type == 1 && g->adj[j][i] == 1)
        {
            g->arcnum--;
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

    if (g->adj[i][j] == 0)
    {
        printf("The edge is not in the graph.\n");
        return g;
    }

    // delete the edge
    if (g->type == 1)
    {
        g->adj[i][j] = 0;
    }
    else
    {
        g->adj[i][j] = g->adj[j][i] = 0;
    }

    g->arcnum--;

    return g;
}

// BFS for undirected graph and return the number of connected component
int BFS(Graph *g)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return 0;
    }

    if (IsEmpty(g))
    {
        printf("The graph is empty.\n");
        return 0;
    }

    // create and initialize an array to record visited or not
    int *Isvisited = (int *)malloc(g->vexnum * sizeof(int));
    if (!Isvisited)
    {
        printf("Failed to create array for recording visit.\n");
        return 0;
    }
    for (int i = 0; i < g->vexnum; i++)
    {
        Isvisited[i] = 0;
    }

    Queue q = CreateQueue();
    int ret = 0;

    // BFS for all connected components by queue
    for (int i = 0; i < g->vexnum; i++)
    {
        if (!Isvisited[i])
        {
            Isvisited[i] = 1;
            printf("%c", g->vex[i]);
            Enqueue(q, g->vex[i]);
            ret++;

            while (!IsEmptyQueue(q))
            {
                VexType v = Dequeue(q);
                int k = LocateVertex(g, v);

                // traverse all adjacent vertices
                for (int j = 0; j < g->vexnum; j++)
                {
                    if (g->adj[k][j] == 1 && Isvisited[j] == 0)
                    {
                        Isvisited[j] = 1;
                        printf("%c", g->vex[j]);
                        Enqueue(q, g->vex[j]);
                    }
                }
            }
            printf("|");
        }
    }

    free(Isvisited);
    q = DestroyQueue(q);
    printf("\n");
    return ret;
}

// auxiliary function for recursive dfs
void Auxi_dfs(Graph *g, int i, int *Isvisited)
{

    // visited current vertex
    Isvisited[i] = 1;
    printf("%c", g->vex[i]);

    // recursively traverse the graph
    for (int j = 0; j < g->vexnum; j++)
    {
        if (g->adj[i][j] == 1 && Isvisited[j] == 0)
        {
            Auxi_dfs(g, j, Isvisited);
        }
    }
}

// DFS for undirected graph and return the number of connected component
int DFS(Graph *g)
{
    // handle the situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return 0;
    }
    if (IsEmpty(g))
    {
        printf("The graph is empty.\n");
        return 0;
    }

    // create and initialize an array to record visited or not
    int *Isvisited = (int *)malloc(g->vexnum * sizeof(int));
    if (!Isvisited)
    {
        printf("Failed to create array for recording visit.\n");
        return 0;
    }
    for (int i = 0; i < g->vexnum; i++)
    {
        Isvisited[i] = 0;
    }

    int ret = 0;

    // dfs for all connected component
    for (int i = 0; i < g->vexnum; i++)
    {
        if (!Isvisited[i])
        {
            ret++;
            Auxi_dfs(g, i, Isvisited);
            printf("|");
        }
    }

    free(Isvisited);
    printf("\n");

    return ret;
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