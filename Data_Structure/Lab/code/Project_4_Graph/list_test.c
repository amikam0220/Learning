#include "AdjList.h"
#include <time.h>
#include <windows.h>

long long start_timer();
long long calc_time(long long start, long long end);
void test_insert_edge_time(Graph *g, int n, int m);
void test_traversal_time(Graph *g, const char *traversal_type);
void test_space_occupation(Graph *g, int n, int m);

int main()
{
    Graph *mat_graph = Create();
    printf("=== Adjacency List Performance ===\n");

    // sparse graph: n = 100, m = 200
    test_insert_edge_time(mat_graph, 100, 200);
    test_traversal_time(mat_graph, "BFS");
    test_traversal_time(mat_graph, "DFS");
    test_space_occupation(mat_graph, 100, 200);

    DestroyGraph(mat_graph);
    mat_graph = Create();

    // dense graph：n = 100, m = 4000
    test_insert_edge_time(mat_graph, 100, 4000);
    test_traversal_time(mat_graph, "BFS");
    test_traversal_time(mat_graph, "DFS");
    test_space_occupation(mat_graph, 100, 4000);
    DestroyGraph(mat_graph);
}

// return current time cycle
long long start_timer()
{
    // Windows high-precision：QueryPerformanceCounter
    LARGE_INTEGER freq, cnt;
    QueryPerformanceFrequency(&freq); // obtain CPU frequency（cycle per second）
    QueryPerformanceCounter(&cnt);    // obtain current cycles
    // transform into ms（cnt.QuadPart / freq.QuadPart * 1000）
    return (long long)((double)cnt.QuadPart / freq.QuadPart * 1000);
}

// calculate time difference end - start（ms）
long long calc_time(long long start, long long end)
{
    return end - start;
}

// generate unique edge
bool generate_unique_edges(Graph *g, int n, int m, int *edges)
{
    // calculate max edges to avoid too many edges
    int max_edges;
    if (g->type == 0)
    {
        max_edges = n * (n - 1) / 2;
    }
    else
    {
        max_edges = n * (n - 1);
    }

    if (m > max_edges)
    {
        printf("Error: m=%d exceeds max possible edges=%d (n=%d, %s graph)\n",
               m, max_edges, n, (g->type == 0 ? "undirected" : "directed"));
        return false;
    }

    // initialize the tag matrix
    int **is_edge_exist = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        is_edge_exist[i] = (int *)calloc(n, sizeof(int));
    }

    // generate m edges
    int edge_count = 0;
    while (edge_count < m)
    {
        // randomly generate start and end, avoid self-loop
        int v1 = rand() % n;
        int v2 = rand() % n;
        while (v1 == v2)
        {
            v2 = rand() % n;
        }

        // check whether the edge exists
        if (g->type == 0)
        {
            if (is_edge_exist[v1][v2] == 0 && is_edge_exist[v2][v1] == 0)
            {

                is_edge_exist[v1][v2] = 1;
                is_edge_exist[v2][v1] = 1;

                edges[2 * edge_count] = v1;
                edges[2 * edge_count + 1] = v2;
                edge_count++;
            }
        }
        else
        {
            if (is_edge_exist[v1][v2] == 0)
            {

                is_edge_exist[v1][v2] = 1;

                edges[2 * edge_count] = v1;
                edges[2 * edge_count + 1] = v2;
                edge_count++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        free(is_edge_exist[i]);
    }
    free(is_edge_exist);
    return true;
}

// test insert edge time
void test_insert_edge_time(Graph *g, int n, int m)
{
    // insert n vertices
    long long insert_vex_start = start_timer();
    for (int i = 0; i < n; i++)
    {
        InsertVertex(g, 'A' + i);
    }
    long long insert_vex_end = start_timer();
    printf("Insert %d vertices | Time: %lld ms\n",
           n, calc_time(insert_vex_start, insert_vex_end));

    // generate m edges
    int *edges = (int *)malloc(2 * m * sizeof(int));
    if (!generate_unique_edges(g, n, m, edges))
    {
        free(edges);
        DestroyGraph(g);
        return;
    }

    // obtain time of insert n edges
    long long start = start_timer();
    for (int i = 0; i < m; i++)
    {
        VexType v1 = 'A' + edges[2 * i];
        VexType v2 = 'A' + edges[2 * i + 1];
        InsertEdge(g, v1, v2);
    }
    long long end = start_timer();

    printf("Insert %d edges | Time: %lld ms | Structure: Adjacent List.\n",
           m, calc_time(start, end));

    free(edges);
}

// test traversal time
void test_traversal_time(Graph *g, const char *traversal_type)
{
    long long start = start_timer();
    if (strcmp(traversal_type, "BFS") == 0)
    {
        BFS(g);
    }
    else
    {
        DFS(g);
    }
    long long end = start_timer();

    printf("%s | n=%d, m=%d | Time: %lld ms\n",
           traversal_type, g->vexnum, g->arcnum, calc_time(start, end));
}

// calcualte graph space
size_t calc_graph_space(Graph *g)
{
    size_t space = 0;

    // basic structure
    space += sizeof(Graph);

    space += g->vexcapacity * sizeof(Lnode); 
    int total_nodes = 0;
    for (int i = 0; i < g->vexnum; i++)
    {
        Lnode *p = g->adj[i].next;
        while (p)
        {
            total_nodes++;
            p = p->next;
        }
    }
    space += total_nodes * sizeof(Lnode);

    // calculate in_adj for directed
    if (g->type == 1)
    {
        space += g->vexcapacity * sizeof(Lnode);
        total_nodes = 0;
        for (int i = 0; i < g->vexnum; i++)
        {
            Lnode *p = g->in_adj[i].next;
            while (p)
            {
                total_nodes++;
                p = p->next;
            }
        }
        space += total_nodes * sizeof(Lnode);
    }

    return space;
}

// test space occupation
void test_space_occupation(Graph *g, int n, int m)
{
    printf("n=%d, m=%d | List Space: %zu KB\n\n",
           n, m, calc_graph_space(g) / 1024); 
}