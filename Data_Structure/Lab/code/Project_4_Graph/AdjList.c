#include "AdjList.h"

// Expand the graph
Graph *ExpandGraph(Graph *g)
{
    g->vexcapacity += MAXSIZE;

    // reallocate the array storing adjacent linked lists
    g->adj = (Lnode *)realloc(g->adj, g->vexcapacity * sizeof(Lnode));
    if (!g->adj)
    {
        printf("Failed to expand the graph.\n");
        free(g);
        return NULL;
    }

    for (int i = g->vexcapacity - MAXSIZE; i < g->vexcapacity; i++)
    {
        g->adj[i].next = NULL;
        g->adj[i].arcnum = 0;
    }

    if (g->type == 1)
    {
        g->in_adj = (Lnode *)realloc(g->in_adj, g->vexcapacity * sizeof(Lnode));
        if (!g->in_adj)
        {
            printf("Failed to expnad the graph.\n");
            free(g->adj);
            free(g);
            return NULL;
        }
        for (int i = g->vexcapacity - MAXSIZE; i < g->vexcapacity; i++)
        {
            g->in_adj[i].next = NULL;
            g->in_adj[i].arcnum = 0;
        }
    }

    return g;
}

// Find the position of vertex in the head array
int LocateVertex(Graph *g, VexType v)
{
    if (!g)
    {
        return -1;
    }

    for (int i = 0; i < g->vexnum; i++)
    {
        if (g->adj[i].data == v)
        {
            return i;
        }
    }

    return -1;
}

// Destroy the graph
Graph *DestroyGraph(Graph *g)
{
    if (!g)
    {
        return NULL;
    }

    for (int i = 0; i < g->vexcapacity; i++)
    {
        Lnode *itr = g->adj[i].next;
        while (itr)
        {
            Lnode *tmp = itr;
            itr = itr->next;
            free(tmp);
        }
    }

    if (g->type == 1)
    {
        for (int i = 0; i < g->vexcapacity; i++)
        {
            Lnode *itr = g->in_adj[i].next;
            while (itr)
            {
                Lnode *tmp = itr;
                itr = itr->next;
                free(tmp);
            }
        }
    }

    free(g->adj);
    if (g->type == 1)
    {
        free(g->in_adj);
    }
    free(g);
    return NULL;
}

// Create an empty queue
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
        return ERROR;
    }
    if (IsEmptyQueue(q))
    {
        printf("The queue is empty.\n");
        return ERROR;
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

// Find data in the list, return the former node
position LocateLnode(Lnode *list, Ldata e)
{
    if (!list)
    {
        return NULL;
    }

    Lnode *itr = list;
    while (itr->next && itr->next->data != e)
    {
        itr = itr->next;
    }
    if (itr->next && itr->next->data == e)
    {
        return itr;
    }
    else
    {
        return NULL;
    }
}

// Insert a new node and the end of list
void InsertLnode(Lnode *list, Ldata e)
{
    if (!list)
    {
        return;
    }

    Lnode *itr = list;
    while (itr->next)
    {
        itr = itr->next;
    }

    Lnode *newnode = (Lnode *)malloc(sizeof(Lnode));
    if (!newnode)
    {
        printf("Failed to insert the edge.\n");
        return;
    }
    newnode->data = e;
    newnode->next = NULL;
    itr->next = newnode;
    return;
}

// Delete a node after position p
Ldata DeleteLnode(Lnode *list, position p)
{
    if (!list)
    {
        return ERROR;
    }
    Lnode *tmp = p->next;
    Ldata ret = tmp->data;
    p->next = tmp->next;
    free(tmp);
    return ret;
}

// Destroy the list
Lnode *DestroyList(Lnode *list)
{
    Lnode *itr = list;
    while (itr)
    {
        Lnode *tmpnode = itr;
        itr = itr->next;
        free(tmpnode);
    }
    return NULL;
}

// Create an empty graph
Graph *Create()
{
    // Create the pointer to the graph struct
    Graph *g = (Graph *)malloc(sizeof(Graph));
    int gtype;
    if (!g)
    {
        printf("Failed to create the graph.\n");
        return NULL;
    }

    printf("Please enter the type of the graph. (0 for undirected, 1 for directed)\n");
    scanf("%d", &gtype);
    while (getchar() != '\n')
        ;

    // initialize the empty graph
    g->type = gtype;
    g->arcnum = g->vexnum = 0;
    g->vexcapacity = MAXSIZE;
    g->adj = (Lnode *)malloc(g->vexcapacity * sizeof(Lnode));
    if (!g->adj)
    {
        printf("Failed to create the graph.\n");
        free(g);
        return NULL;
    }
    for (int i = 0; i < g->vexcapacity; i++)
    {
        g->adj[i].next = NULL;
        g->adj[i].arcnum = 0;
    }

    if (g->type == 1)
    {
        g->in_adj = (Lnode *)malloc(g->vexcapacity * sizeof(Lnode));
        if (!g->in_adj)
        {
            printf("Failed to create the graph.\n");
            free(g->adj);
            free(g);
            return NULL;
        }
        for (int i = 0; i < g->vexcapacity; i++)
        {
            g->in_adj[i].next = NULL;
            g->in_adj[i].arcnum = 0;
        }
    }
    return g;
}

// Initialize the graph
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
    int i = 0;

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

        g->adj[i].data = token[0];
        if (g->type == 1)
        {
            g->in_adj[i].data = token[0];
        }
        i++;
        g->vexnum++;

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
        Lnode *itr = NULL;

        if (j == -1 || k == -1)
        {
            printf("The vertices of the edge are not in the graph.\n");
            return;
        }

        // insert the edge (j,k) for both directed and undirected in adj
        g->adj[j].arcnum++;
        InsertLnode(&g->adj[j], g->adj[k].data);

        // insert the edge <j,k> for directed in in_adj
        if (g->type == 1)
        {
            InsertLnode(&g->in_adj[k], g->in_adj[j].data);
        }

        // insert the edge (k,j) for undirected in adj
        if (g->type == 0)
        {
            InsertLnode(&g->adj[k], g->adj[j].data);
        }

        g->arcnum++;
        token = strtok(NULL, ",");
    }

    return;
}

// Insert a new vertex without incident edge
Graph *InsertVertex(Graph *g, VexType v)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return NULL;
    }

    int i = LocateVertex(g, v);
    if (i != -1)
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

    // insert the vertex in the adjacent list
    g->adj[g->vexnum].data = v;
    if (g->type == 1)
    {
        g->in_adj[g->vexnum].data = v;
    }
    g->vexnum++;
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

    int i = LocateVertex(g, v1);
    int j = LocateVertex(g, v2);
    if (i == -1 || j == -1)
    {
        printf("The vertex is not in the graph.\n");
        return g;
    }

    Lnode *itr = LocateLnode(&g->adj[i], v2);
    if (itr)
    {
        printf("The edge has been in the graph.\n");
        return g;
    }

    // insert for both directed and undirected in adj
    InsertLnode(&g->adj[i], g->adj[j].data);
    g->adj[i].arcnum++;
    g->arcnum++;

    // insert for undirected in adj
    if (g->type == 0)
    {
        InsertLnode(&g->adj[j], g->adj[i].data);
        g->adj[j].arcnum++;
    }

    // insert for directed in in_adj
    if (g->type == 1)
    {
        InsertLnode(&g->in_adj[j], g->adj[i].data);
        g->in_adj[j].arcnum++;
    }

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

    int i = LocateVertex(g, v);
    if (i == -1)
    {
        printf("The vertex is not in the graph.\n");
        return g;
    }

    // move the last list to deleted vertex
    g->arcnum -= g->adj[i].arcnum;
    if (g->type == 1)
    {
        g->arcnum -= g->in_adj[i].arcnum;
    }
    g->adj[i].arcnum = g->adj[g->vexnum - 1].arcnum;
    g->adj[i].data = g->adj[g->vexnum - 1].data;
    if (g->type == 1)
    {
        g->in_adj[i].arcnum = g->in_adj[g->vexnum - 1].arcnum;
        g->in_adj[i].data = g->in_adj[g->vexnum - 1].data;
    }

    Lnode *itr = g->adj[i].next;
    while (itr)
    {
        Lnode *tmpnode = itr;
        itr = itr->next;

        // for undirected graph, find corresponding list and delete the edge storing in that list
        if (g->type == 0)
        {
            int j = LocateVertex(g, tmpnode->data);
            Lnode *itr2 = LocateLnode(&g->adj[j], g->adj[i].data);
            DeleteLnode(&g->adj[j], itr2);
            g->adj[j].arcnum--;
        }

        free(tmpnode);
    }

    // for directed graph, delete the vertex in in_list
    if (g->type == 1)
    {
        g->in_adj[i].next = DestroyList(g->in_adj[i].next);
    }

    g->adj[i].next = g->adj[g->vexnum - 1].next;
    g->adj[g->vexnum - 1].next = NULL;
    if (g->type == 1)
    {
        g->in_adj[i].next = g->in_adj[g->vexnum - 1].next;
        g->in_adj[g->vexnum - 1].next = NULL;
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

    int i = LocateVertex(g, v1);
    int j = LocateVertex(g, v2);

    if (i == -1 || j == -1)
    {
        printf("The vertex is not in the graph.\n");
        return g;
    }

    Lnode *itr = LocateLnode(&g->adj[i], v2);
    if (!itr)
    {
        printf("The edge is not in the graph.\n");
        return g;
    }
    DeleteLnode(&g->adj[i], itr);

    if (g->type == 0)
    {
        itr = LocateLnode(&g->adj[j], v1);
        DeleteLnode(&g->adj[j], itr);
    }

    if (g->type == 1)
    {
        itr = LocateLnode(&g->in_adj[j], v1);
        DeleteLnode(&g->in_adj[j], itr);
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

    // create an array to store visited elements
    int *Isvisited = (int *)malloc(g->vexnum * sizeof(int));
    if (!Isvisited)
    {
        printf("Failed to create array for recording visit.\n");
        return 0;
    }

    // initialize the array
    for (int i = 0; i < g->vexnum; i++)
    {
        Isvisited[i] = 0;
    }

    int ret = 0;
    Queue q = CreateQueue();

    // BFS for all connected components by queue
    for (int i = 0; i < g->vexnum; i++)
    {
        if (!Isvisited[i])
        {
            Isvisited[i] = 1;
            printf("%c", g->adj[i].data);
            Enqueue(q, g->adj[i].data);
            ret++;

            while (!IsEmptyQueue(q))
            {
                Lnode *tmp = NULL;
                Ldata tmpdata = Dequeue(q);
                int j = LocateVertex(g, tmpdata);

                // traverse all adjacent vertices
                tmp = g->adj[j].next;
                while (tmp)
                {
                    int k = LocateVertex(g, tmp->data);
                    if (!Isvisited[k])
                    {
                        Isvisited[k] = 1;
                        printf("%c", tmp->data);
                        Enqueue(q, g->adj[k].data);
                    }
                    tmp = tmp->next;
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
    Isvisited[i] = 1;
    printf("%c", g->adj[i].data);

    Lnode *itr = g->adj[i].next;
    int p;
    while (itr)
    {
        p = LocateVertex(g, itr->data);
        if (!Isvisited[p])
        {
            Auxi_dfs(g, p, Isvisited);
        }
        itr = itr->next;
    }
}

// DFS for undirected graph and return the number of connected components
int DFS(Graph *g)
{
    // handle error situation
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

    int ret = 0;
    int *Isvisited = (int *)malloc(g->vexnum * sizeof(int));
    if (!Isvisited)
    {
        printf("Failed to create array to record visit.\n");
        return 0;
    }

    // initialize the array
    for (int i = 0; i < g->vexnum; i++)
    {
        Isvisited[i] = 0;
    }

    for (int i = 0; i < g->vexnum; i++)
    {
        if (!Isvisited[i])
        {
            Auxi_dfs(g, i, Isvisited);
            ret++;
            printf("|");
        }
    }

    free(Isvisited);
    printf("\n");
    return ret;
}