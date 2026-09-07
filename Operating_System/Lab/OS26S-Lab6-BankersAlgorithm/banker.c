#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> // for strcmp

#define MAXN 10
#define MAXM 8

int is_safe(int n, int m, int *available, int **max, int **allocation, int **need, int *safeSeq);
int request_resources(int pid, int *request, int n, int m, int *available, int **max, int **allocation, int **need, int *safeSeq);
void print_state(int n, int m, int *available, int **max, int **allocation, int **need);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Failed to open file: %s\n", argv[1]);
        return 1;
    }

    int n, m;
    fscanf(file, "%d %d", &n, &m);

    int **allocation = (int **)malloc(n * sizeof(int *));
    int **max = (int **)malloc(n * sizeof(int *));
    int **need = (int **)malloc(n * sizeof(int *));
    int *available = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < n; i++){
        allocation[i] = (int *)malloc(m * sizeof(int));
        max[i] = (int *)malloc(m * sizeof(int));
        need[i] = (int *)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            fscanf(file, "%d", &allocation[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            fscanf(file, "%d", &max[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        fscanf(file, "%d", &available[i]);
    }

    fclose(file);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    char cmd[10];
    int pid;
    int *request = (int *)malloc(m * sizeof(int));
    int *safeSeq = (int *)malloc(n * sizeof(int));

    while (1){
        printf("> ");
        fflush(stdout);
        if (scanf("%s", cmd) == EOF){
            break;
        }

        if (strcmp(cmd, "quit") == 0){
            break;
        } else if (strcmp(cmd, "RQ") == 0){
            scanf("%d", &pid);
            for (int j = 0; j < m; j++){
                scanf("%d", &request[j]);

            }
            if (pid < 0 || pid >= n){
                printf("Invalid process ID -- request denied\n");
                continue;
            }

            if (request_resources(pid, request, n, m, available, max, allocation, need, safeSeq)){
                printf("State is safe. Grant request\n");
                printf("Safe sequence: ");
                for (int i = 0; i < n; i++){
                    printf(" P%d", safeSeq[i]);
                    if (i != n - 1){
                        printf(" ->");
                    }
                }
                printf("\n");
                print_state(n, m, available, max, allocation, need);
            } else {
                printf("State would be unsafe -- Request denied\n");
            }
        } else {
            printf("Unknown command -- Use RQ or quit try again\n");
            while (getchar() != '\n'); // consume the rest of the line
        }
    }

    // free the memory
    for (int i = 0; i < n; i++){
        free(allocation[i]);
        free(max[i]);
        free(need[i]);
    }

    free(available);
    free(max);
    free(allocation);
    free(need);
    free(request);
    free(safeSeq);

    return 0;
}

// auxiliary function to compute two vectors
bool is_less_equal(int a[], int b[], int m)
{
    for (int i = 0; i < m; i++)
    {
        if (a[i] > b[i])
            return false;
    }

    return true;
}

void add_vectors(int a[], int b[], int m, int res[])
{
    for (int i = 0; i < m; i++)
    {
        res[i] = a[i] + b[i];
    }
}

void sub_vectors(int a[], int b[], int m, int res[])
{
    for (int i = 0; i < m; i++)
    {
        res[i] = a[i] - b[i];
    }
}

// check if the system is in a safe state
// return 1 if safe, 0 if unsafe
int is_safe(int n, int m, int *available, int **max, int **allocation, int **need, int *safeSeq){
    int *work = (int *)malloc(m * sizeof(int));
    bool *finish = (bool *)calloc(n, sizeof(bool));
    int cnt = 0;

    // initialize work vector
    for (int i = 0; i < m; i++){
        work[i] = available[i];
    }

    // while there are unfinished processes
    while (cnt < n){
        bool found = false;
        for (int i = 0; i < n; i++){
            if (!finish[i] && is_less_equal(need[i], work, m)){
                // if the process i can be finished
                for (int j = 0; j < m; j++){
                    work[j] += allocation[i][j]; // update the work vector
                }
                finish[i] = true; // mark the process i as finished
                safeSeq[cnt++] = i; // add the process i to the safe sequence
                found = true;
            }
        }

        // if no process can be finished before cnt reaches n, return 0
        if (!found){
            free(work);
            free(finish);
            return 0;
        }
    }

    free(work);
    free(finish);
    return 1;
}

// handle a request from a process
// return 1 if the request can be granted, 0 if the request cannot be granted
int request_resources(int pid, int *request, int n, int m, int *available, int **max, int **allocation, int **need, int *safeSeq)
{
    // check if the request is valid
    if (!is_less_equal(request, need[pid], m)){
        printf("Request exceeds maximum claim -- request denied\n");
        return 0;
    }

    // check if the request can be granted
    if (!is_less_equal(request, available, m)){
        printf("Request cannot be granted -- request denied\n");
        return 0;
    }

    // try to grant the request
    for (int i = 0; i < m; i++){
        available[i] -= request[i];
        allocation[pid][i] += request[i];
        need[pid][i] -= request[i];
    }   

    // check if the system is still in a safe state
    int safe = is_safe(n, m, available, max, allocation, need, safeSeq);
    if (safe){
        return 1;
    } else{
        // roll back the changes
        for (int i = 0; i < m; i++){
            available[i] += request[i];
            allocation[pid][i] -= request[i];
            need[pid][i] += request[i];
        }

        return 0;
    }
}

// print the current state of the system
void print_state(int n, int m, int *available, int **max, int **allocation, int **need){
    printf("\nAvailable:\n");
    for (int j = 0; j < m; j++)
        printf("%4d", available[j]);
    printf("\n\nAllocation:\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d   ", i);
        for (int j = 0; j < m; j++)
            printf("%4d", allocation[i][j]);
        printf("\n");
    }
    printf("\nneed:\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d   ", i);
        for (int j = 0; j < m; j++)
            printf("%4d", need[i][j]);
        printf("\n");
    }
    printf("\n");
}
