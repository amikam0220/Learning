#include "AdjList.h"

int main()
{
    Graph *g = NULL;
    int choice = 0;

    printf("=== Test for Operations of Graph (Adjacent Matrix) ===\n");
    do
    {
        printf("\n=========================================\n");
        printf("Please select an operation (enter the number):\n");

        printf("1. Create Graph         2. Initialize Graph\n");
        printf("3. Insert Vertex        4. Insert Edge\n");
        printf("5. Delete Vertex        6. Delete Edge\n");
        printf("7. BFS (for undirected) 8. DFS(for undirected)\n");
        printf("0. Exit Program\n");
        printf("=========================================\n");

        printf("Your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n')
            ;

        switch (choice)
        {
        // 1. Create the graph
        case 1:
        {
            g = Create();
            if (!g)
            {
                break;
            }
            printf("Test 1: Success to create the graph. (Capacity : %d)\n", g->vexcapacity);
            break;
        }

        // 2. Initialize the graph
        case 2:
        {
            InitializeGraph(g);
            if (IsEmpty(g))
            {
                break;
            }

            printf("Test 2: Success to initialize the graph. (Vertex number: %d; Edge number: %d)\n", g->vexnum, g->arcnum);
            break;
        }

        // 3. Insert Vertex
        case 3:
        {
            printf("Test 3: Insert new Vertex.\n");
            VexType newvertex;

            printf("Please enter the new vertex. (upper letter)\n");
            scanf("%c", &newvertex);
            while (getchar() != '\n')
                ;
            InsertVertex(g, newvertex);

            if (!g)
            {
                break;
            }

            // Verify the vertex existing in the graph
            int i = LocateVertex(g, newvertex);
            if (i == -1)
            {
                break;
            }

            printf("The Vertex '%c' is at index: %d.\n", newvertex, i);
            printf("Updated Vertex number: %d.\n", g->vexnum);
            break;
        }

        case 4:
        {
            // 4. Insert Edge
            printf("Test 4: Insert new Edge (Undirected or directed).\n");
            VexType v1, v2;

            printf("Please enter the two vertices of the edge sequentially. (two upper letter, without seperator)\n");
            scanf("%c%c", &v1, &v2);
            while (getchar() != '\n')
                ;
            InsertEdge(g, v1, v2);

            if (!g)
            {
                break;
            }

            // Verify the edge existing in the graph
            int j = LocateVertex(g, v1);
            int k = LocateVertex(g, v2);

            if (j == -1 || k == -1)
            {
                break;
            }

            Lnode *itr = LocateLnode(&g->adj[j], v2);
            if (!itr)
            {
                break;
            }

            if (g->type == 1)
            {
                printf("The edge <%c,%c> is in the graph at adj[%d] and in_adj[%d].\n", v1, v2, j, k);
            }
            else
            {
                printf("The edge (%c,%c) is in the graph at adj[%d] and adj[%d].\n", v1, v2, j, k);
            }
            printf("Updated Edge number: %d.\n", g->arcnum);
            break;
        }
        // 5. Delete vertex
        case 5:
        {
            printf("Test 5: Delete vertex.\n");
            VexType v;

            printf("Please enter the vertex to be deleted. (upper letter)\n");
            scanf("%c", &v);
            while (getchar() != '\n')
                ;
            DeleteVertex(g, v);

            if (!g)
            {
                break;
            }

            // verify the vertex has been deleted
            int i = LocateVertex(g, v);
            if (i != -1)
            {
                break;
            }

            printf("Updated vertex number: %d.\n", g->vexnum);

            break;
        }
        // 6. Delete edge
        case 6:
        {
            VexType v1, v2;
            printf("Test 6: Delete edge.\n");

            printf("Please enter the two vertices of the edge sequentially. (two upper letter without seperator)\n");
            scanf("%c%c", &v1, &v2);
            while (getchar() != '\n')
                ;
            DeleteEdge(g, v1, v2);

            if (!g)
            {
                break;
            }

            // Verify the edge be deleted
            int i = LocateVertex(g, v1);
            if (i == -1)
            {
                break;
            }

            Lnode *itr = LocateLnode(&g->adj[i], v2);
            if (itr)
            {
                break;
            }

            printf("Updatad edge number: %d.\n", g->arcnum);
            break;
        }

        // 7. BFS Traverse
        case 7:
        {
            printf("Test 7: BFS traverse.\n");
            int components = BFS(g);
            if (IsEmpty(g))
            {
                break;
            }
            printf("Connected Components (BFS): %d\n", components);
            break;
        }
        // 8. DFS Traverse
        case 8:
        {
            printf("Test 8: DFS traverse.\n");
            int components = DFS(g);
            if (IsEmpty(g))
            {
                break;
            }
            printf("Connnected Components (DFS): %d\n", components);
            break;
        }
        case 0:
        {
            g = DestroyGraph(g);
            printf("Exiting...");
            break;
        }
        default:
            printf("Invalid input. Please enter a correct number\n");
        }

    } while (choice != 0);

    return 0;
}