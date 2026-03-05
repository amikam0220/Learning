#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "Graph.h" /* int for VexType as index*/
#include "Queue.h"

void Initialize_Input(Graph *g, int *k);
int Strange_Lift(Graph *g, int a, int b);
void Lift_Graph_to_dot(Graph *g, const char *dot_filename);

int main(int argc, char *argv[])
{
    int a, b, n;
    scanf("%d %d %d", &n, &a, &b);

    int *k = (int *)malloc(n * sizeof(int));
    if (!k)
    {
        printf("Failed to allocate memory for k.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }

    Graph *g = CreateGraph(DG);
    InitializeGraph(g, n);
    Initialize_Input(g, k);
    int ans = Strange_Lift(g, a, b);
    printf("%d\n", ans);

    const char *dot_filename = (argc > 1) ? (argv[1]) : ("Lift_Graph.dot");
    Lift_Graph_to_dot(g, dot_filename);

    free(k);
    DestroyGraph(g);
    return 0;
}

// initialize the input into the graph
void Initialize_Input(Graph *g, int *k)
{
    int n = g->vexnum;
    int i = 0;
    int upend, downend;

    while (i < n)
    {
        // the end of UP and DOWN
        upend = k[i] + i;
        downend = i - k[i];

        // check whether the end is legal
        if (upend < n)
        {
            g->adj[i][upend] = 1;
            g->arcnum++;
        }
        if (downend >= 0)
        {
            g->adj[i][downend] = 1;
            g->arcnum++;
        }
        i++;
    }

    // store index for vex array
    for (int j = 0; j < n; j++)
    {
        g->vex[j] = j;
    }
}

// return the least times to press the button
int Strange_Lift(Graph *g, int a, int b)
{
    // handle error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return -1;
    }

    if (IsEmpty(g))
    {
        printf("The graph is empty.\n");
        return -1;
    }

    if (a == b)
    {
        printf("The start and the end are the same.\n");
        return 0;
    }

    // settle the start and end
    int start = a - 1;
    int end = b - 1;
    int vex_num = g->vexnum;

    if (start < 0 || start >= vex_num || end < 0 || end >= vex_num)
    {
        printf("Invalid start and end floor.\n");
        return -1;
    }

    // create array to store the situation fo visit
    int *Isvisited = (int *)calloc(vex_num, sizeof(int));
    if (!Isvisited)
    {
        printf("Failed to create an array storing the situation of visit.\n");
        return -1;
    }

    // create array to store the shortest distance from start to i
    int *dist = (int *)calloc(vex_num, sizeof(int));
    if (!dist)
    {
        printf("Failed to create an array storing the distance.\n");
        free(Isvisited);
        return -1;
    }

    int ret = -1;
    int is_found = 0;

    // enqueue the start node
    Queue q = CreateQueue();
    Enqueue(q, g->vex[start]);
    Isvisited[start] = 1;
    dist[start] = 0;

    Ldata curr;
    int pos;

    // BFS and renew the shortest distance for each node until the end node
    while (!IsEmptyQueue(q))
    {
        curr = Dequeue(q);
        pos = LocateVertex(g, curr);

        if (pos == end)
        {
            is_found = 1;
            ret = dist[pos];
            break;
        }

        for (int i = 0; i < vex_num; i++)
        {
            if (Isvisited[i] == 0 && g->adj[pos][i] == 1)
            {
                Enqueue(q, g->vex[i]);
                Isvisited[i] = 1;
                dist[i] = dist[pos] + 1;
            }
        }
    }

    DestroyQueue(q);
    free(Isvisited);
    free(dist);

    if (is_found)
    {
        return ret;
    }
    else
    {
        printf("No path from floor %d to %d.\n", a, b);
        return -1;
    }
}

// Output DOT file of graph
void Lift_Graph_to_dot(Graph *g, const char *dot_filename)
{
    if (!g)
    {
        printf("The graph has not been created.\n");
        return;
    }

    if (IsEmpty(g))
    {
        printf("The graph is empty.\n");
        return;
    }

    // open DOT file
    FILE *fp = fopen(dot_filename, "w");
    if (!fp)
    {
        printf("Failed to create DOT file.\n");
        return;
    }

    // write the head of DOT
    fprintf(fp, "digraph Lift_Graph{\n");
    fprintf(fp, "   rankdir = LR;\n");
    fprintf(fp, "   node [shape = circle, style = filled, color = lightblue]; // style of vertices\n");
    fprintf(fp, "   edge [color = black]; // style of edges\n");

    int vex_num = g->vexnum;

    // write all vertices
    for (int i = 0; i < vex_num; i++)
    {
        fprintf(fp, "   %d [label = \"FLOOR %d\"];\n", i, i + 1);
    }

    fprintf(fp, "\n");

    // write all edges
    for (int i = 0; i < vex_num; i++)
    {
        for (int j = 0; j < vex_num; j++)
        {
            if (fabs(g->adj[i][j] - 0) > 1e-9)
            {
                fprintf(fp, "   %d -> %d;\n", i, j);
            }
        }
    }

    fprintf(fp, "\n");

    // write the tail of DOT
    fprintf(fp, "}\n");
    fclose(fp);
}
