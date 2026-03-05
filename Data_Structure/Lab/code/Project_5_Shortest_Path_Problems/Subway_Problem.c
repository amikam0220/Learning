#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct Coordinate
{
    double x;
    double y;
} Coordinate;

#include "Graph.h"
/* int for VexType as index, double for AdjType as weight*/

#define MAX_VERTICES 300

static Coordinate coord_data[MAX_VERTICES]; // store actual data of coordinates
static int coord_cnt = 0; // the number of coordinates
static int stops[MAX_VERTICES]; // store corresponding index of actual coordinates
static int stop_cnt = 0;  // the number of stops

int Stops_LocateVertex(Coordinate coord);
int Stops_InsertVertex(Graph *g, Coordinate coord);
void Initialize_Line(Graph *g, int *lines_start, int line_num);
void Stops_InsertEdge(Graph *g, int idx1, int idx2, double weight);
double Distance(Coordinate v1, Coordinate v2);
double Walking_Time(double dist);
double Subway_Time(double dist);
double Subway_Problem(int home_idx, int school_idx, Graph *g);
void Subway_Graph_to_dot(Graph *g, const char *dot_filename, int *lines_start, int line_num);

int main(int argc, char *argv[])
{
    double x, y;
    Coordinate home, school;
    int lines_start[300]; // store start stops' index of each line
    int line_idx = 0;     // iterator of lines_start
    Graph *g = CreateGraph(WUG);
    if (!g)
    {
        printf("Failed to create the graph.\n");
        return 1;
    }
    

    // receive the vertice home and school
    if (scanf("%lf %lf", &x, &y) != 2)
    {
        printf("Invalid home coordinate.\n");
        return 1;
    }
    
    home.x = x, home.y = y;
    Stops_InsertVertex(g, home);
    
    if (scanf("%lf %lf", &x, &y) != 2)
    {
        printf("Invalid school coordinate.\n");
        return 1;
    }
    
    school.x = x, school.y = y;
    Stops_InsertVertex(g, school);
    
    // insert edge between school and home by walking
    int home_idx = 0, school_idx = 1;
    double dist = Distance(home, school);
    double t = Walking_Time(dist) * 60; // transfer to minute
    Stops_InsertEdge(g, home_idx, school_idx, t);
    
    int Is_Start = 1;
    
    // receive the lines
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        if (x == -1 && y == -1)
        {
            Is_Start = 1;
            continue;
        }
        
        Coordinate stop = {x, y};
        
        if (Is_Start)
        {
            Is_Start = 0;
            lines_start[line_idx++] = stop_cnt;
        }
        
        Stops_InsertVertex(g, stop);
    }
    
    // to calculate the number of stops of the last line
    lines_start[line_idx] = stop_cnt;
    
    // initialize the line
    Initialize_Line(g, lines_start, line_idx);
    
    // output the DOT file of the graph
    const char *dot_filename = (argc > 1) ? argv[1] : "Subway_Graph.dot";
    Subway_Graph_to_dot(g, dot_filename, lines_start, line_idx);
    
    int ans = (int)round(Subway_Problem(home_idx, school_idx, g));
    
    if (ans < 0)
    {
        DestroyGraph(g);
        return 1;
    }
    
    printf("%d\n", ans);
    DestroyGraph(g);
    return 0;
}

// return the distance between two vertices (m)
double Distance(Coordinate v1, Coordinate v2)
{
    double dx = v1.x - v2.x;
    double dy = v1.y - v2.y;
    return sqrt(dx * dx + dy * dy);
}

// return the time of walking dist (h)
double Walking_Time(double dist)
{
    double walking_speed = 10 * 1000;
    return dist / walking_speed;
}

// return the time of subway the dist (h)
double Subway_Time(double dist)
{
    double subway_speed = 40 * 1000;
    return dist / subway_speed;
}

// Get the index of stop in coord_data
int Stops_LocateVertex(Coordinate coord)
{
    for (int i = 0; i < coord_cnt; i++){
        double dist = Distance(coord_data[i], coord);
        if (dist < 1e-3)
        {
            return i;
        }
    }

    return -1;
}

// Insert the stop index in the graph and return its position in coord
int Stops_InsertVertex(Graph *g, Coordinate coord)
{
    // transfer stop, return index
    int v = Stops_LocateVertex(coord);
    if (v != -1)
    {
        stops[stop_cnt] = v;
        InsertVertex(g, stop_cnt);
        stop_cnt++;
        return v;
    }

    // insert the coord into coord_data
    if (coord_cnt >= MAX_VERTICES){
        printf("Too many coordinates.\n");
        return -1;
    }

    coord_data[coord_cnt].x = coord.x;
    coord_data[coord_cnt].y = coord.y;
    stops[stop_cnt] = coord_cnt++;

    // insert the corresponding index into graph
    InsertVertex(g, stop_cnt);
    if (!g){
        return -1;
    }

    stop_cnt++;

    return coord_cnt;
}

// Insert edge by index in the graph
void Stops_InsertEdge(Graph *g, int idx1, int idx2, double weight)
{
    if (idx1 == -1 || idx2 == -1){
        printf("The coordinate is not in the graph.\n");
        return;
    }

    InsertEdge(g, idx1, idx2, weight);
    if (!g){
        return;
    }
}


// initialize the line into graph
void Initialize_Line(Graph *g, int *lines_start, int line_num)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return;
    }

    int home_idx = 0, school_idx = 1;

    // connect all stops to home and school by walking
    for (int i = 2; i < stop_cnt; i++)
    {
        Coordinate home = coord_data[home_idx], curr = coord_data[stops[i]], school = coord_data[school_idx];
        double dist_to_home = Distance(home, curr);
        double dist_to_school = Distance(curr, school);

        double time_to_home = Walking_Time(dist_to_home) * 60;
        double time_to_school = Walking_Time(dist_to_school) * 60;

        Stops_InsertEdge(g, home_idx, i, time_to_home);
        Stops_InsertEdge(g, school_idx, i, time_to_school);
    }

    // connect all stops on different lines by walking
    for (int i = 2; i < stop_cnt; i++)
    {
        for (int j = i + 1; j < stop_cnt; j++)
        {
            // check whether is on the same line
            bool same_line = false;
            for (int k = 0; k < line_num; k++)
            {
                if (i >= lines_start[k] && i < lines_start[k + 1] &&
                    j >= lines_start[k] && j < lines_start[k + 1])
                {
                    same_line = true;
                    break;
                }
            }

            if (!same_line)
            {
                Coordinate coord1 = coord_data[stops[i]], coord2 = coord_data[stops[j]];
                // for different line with same stops, not renew the edge
                double dist = Distance(coord1, coord2);
                double time = Walking_Time(dist) * 60; // transfer to minute     
                             
                Stops_InsertEdge(g, i, j, time);
            }
        }
    }

    // connect all stops on the same line by subway
    for (int j = 0; j < line_num; j++)
    {
        int start_idx = lines_start[j];
        int end_idx = lines_start[j + 1];

        for (int i = start_idx; i < end_idx - 1; i++)
        {
            Coordinate coord1 = coord_data[stops[i]], coord2 = coord_data[stops[i + 1]];
            double dist = Distance(coord1, coord2);
            double time = Subway_Time(dist) * 60; // transfer to minute

            Stops_InsertEdge(g, i, i + 1, time);
        }
    }

    return;
}



// solve the problem and return the shortest time from home to school
double Subway_Problem(int home_idx, int school_idx, Graph *g)
{
    // handle the error situation
    if (!g)
    {
        printf("The graph has not been created.\n");
        return -1;
    }

    double tmp_dist = Distance(coord_data[stops[home_idx]], coord_data[stops[school_idx]]);
    if (tmp_dist < 1e-3)
    {
        printf("The position of home and the school are the same.\n");
        return 0;
    }

    int vex_num = g->vexnum;

    if (home_idx < 0 || home_idx >= vex_num ||
        school_idx < 0 || school_idx >= vex_num)
    {
        printf("Invalid home_idx/school_idx index (out of range).\n");
        return -1;
    }

    // create an array to store shortest distance from the home to the point
    double *dist = (double *)calloc(vex_num, sizeof(double));
    if (!dist)
    {
        printf("Failed to create an array to store shortest distance.\n");
        return -1;
    }

    // create an array to store the situation of visit
    int *Isvisited = (int *)calloc(vex_num, sizeof(int));
    if (!Isvisited)
    {
        printf("Failed to create an array to store the situation of visit.\n");
        free(dist);
        return -1;
    }

    // initialize the dist
    int min_dist_idx;
    double min_dist;
    
    for (int i = 0; i < vex_num; i++)
    {
        dist[i] = g->adj[home_idx][i];
    }

    dist[home_idx] = 0;
    Isvisited[home_idx] = 1;

    while (1)
    {
        // find the minimum in dist
        min_dist = GRAPH_INF;
        min_dist_idx = -1;

        for (int j = 0; j < vex_num; j++)
        {
            if (!Isvisited[j] && min_dist > dist[j])
            {
                min_dist = dist[j];
                min_dist_idx = j;
            }
        }

        // break if traverse all vertices
        if (min_dist_idx == -1)
        {
            break;
        }

        Isvisited[min_dist_idx] = 1;

        // break if find the shortest path to school
        if (min_dist_idx == school_idx)
        {
            break;
        }

        // Dijkstra algorithm to renew the dist
        for (int j = 0; j < vex_num; j++)
        {
            if (!Isvisited[j] && g->adj[min_dist_idx][j] != GRAPH_INF && min_dist + g->adj[min_dist_idx][j] < dist[j])
            {
                dist[j] = min_dist + g->adj[min_dist_idx][j];
            }
        }
    }

    // judge whether find the position of school
    double ret = -1;
    if (min_dist_idx == school_idx)
    {
        ret = dist[school_idx];
    }
    else
    {
        printf("No path from home to school.\n");
    }

    free(Isvisited);
    free(dist);

    return ret;
}

// Output DOT file of graph
void Subway_Graph_to_dot(Graph *g, const char *dot_filename, int *lines_start, int line_num)
{
    if (!g){
        printf("The graph has not been created.\n");
        return;
    }

    if (IsEmpty(g)){
        printf("The graph is empty.\n");
        return;
    }

    // open DOT file
    FILE *fp = fopen(dot_filename, "w");
    if (!fp){
        printf("Failed to create DOT file.\n");
        return;
    }

    // write the head of DOT
    fprintf(fp, "graph Subway_Graph{\n");
    fprintf(fp, "   rankdir = LR;\n");
    fprintf(fp, "   node [shape = circle, style = filled, color = lightblue]; // style of vertices\n");
    fprintf(fp, "   edge [color = black]; // style of edges\n");

    fprintf(fp, "   0 [label = \"home(%.1f, %.1f)\", shape = house, color = yellow];\n", coord_data[stops[0]].x, coord_data[stops[0]].y);
    fprintf(fp, "   1 [label = \"school(%.1f, %.1f)\", shape = house, color = yellow];\n", coord_data[stops[1]].x, coord_data[stops[1]].y);

    // create subgraph for each line
    const char *colors[] = {"red", "blue", "green", "purple", "orange"};

    for (int i = 0; i < line_num; i++)
    {
        int start = lines_start[i];
        int end = lines_start[i + 1];

        const char *color = colors[i % 5];

        // create subgraph head
        fprintf(fp, "   subgraph cluster_line%d {\n", i);
        fprintf(fp, "       style = dashed;\n");
        fprintf(fp, "       color = %s;\n", color);
        fprintf(fp, "       lable = \"Line %d\";\n", i + 1);

        // write stops in a line
        for (int j = start; j < end; j++)
        {
            fprintf(fp, "       %d [label = \"STOP %d\\n(%.1f, %.1f)\", color = %s, fontsize = 10];\n", j, j - 1, coord_data[stops[j]].x, coord_data[stops[j]].y, color);
        }

        // highlight edges in a line
        for (int j = start; j < end - 1; j++){
            fprintf(fp, "   %d -- %d [color = %s, penwidth = 2, weight = 100, label = \"%.1f min\"];\n", j, j + 1, color, g->adj[j][j + 1]); // high weight to ensure straight line
        }

        fprintf(fp, "       }\n");
    }

    fprintf(fp, "\n");

    // create walking edges 
    int vex_num = g->vexnum;
    for (int i = 0; i < vex_num; i++){
        for (int j = i + 1; j < vex_num; j++){
            if (fabs(g->adj[i][j] - GRAPH_INF) > 1e-9){
                bool adjacent_in_line = false;
                for (int k = 0; k < line_num; k++){
                    int start = lines_start[k];
                    int end = lines_start[k + 1];

                    if (i >= start && i < end
                        && j >= start && j < end && j == i + 1){
                        adjacent_in_line = true;
                        break;
                        }
                }

                if (!adjacent_in_line){
                    fprintf(fp, "   %d -- %d[style = dotted, color = black, weight = 1, len = 2.0, label = \"%.1f min\", fontsize = 8];\n", i, j, g->adj[i][j]);
                }
            }
        }
    }

    fprintf(fp, "\n");

    // write the tail of DOT    
    fprintf(fp, "}\n");
    fclose(fp);
}
