#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <time.h>
#include <signal.h>
#include <semaphore.h>

#define N 5

sem_t chopsticks[N];
sem_t limit;
FILE *fp;

void* philosopher(void * num){
    int id = *(int *)num;

    while (1){
        // thinking
        fprintf(fp, "[%ld] Philosopher %d is thinking\n", time(NULL), id);
        fflush(fp);
        sleep(rand() % 2);

        // hungry
        fprintf(fp, "[%ld] Philosopher %d is hungry\n", time(NULL), id);
        fflush(fp);

        // limit the number of philosophers to avoid deadlock
        sem_wait(&limit);

        // eating
        sem_wait(&chopsticks[id]);
        sem_wait(&chopsticks[(id + 1) % N]);
        fprintf(fp, "[%ld] Philosopher %d is eating\n", time(NULL), id);
        fflush(fp);
        sleep(rand() % 2);

        // release the resource
        sem_post(&chopsticks[id]);
        sem_post(&chopsticks[(id + 1) % N]);
        sem_post(&limit);
        fprintf(fp, "[%ld] Philosopher %d finished eating, puts down chopsticks\n", time(NULL), id);
        fflush(fp);
    }

    return NULL;
}

// signal handler for SIGINT
void sigint_handler(int signum) {
    time_t time_p;
    time(&time_p);
    printf("%s CST 2024103975\n", ctime(&time_p));
    fprintf(fp, "Received SIGINT, terminating the program...\n");
    fprintf(fp, "%s CST 2024103975\n", ctime(&time_p));
    fflush(fp);
    
    // destroy resources
    for (int i = 0; i < N; i++) {
        sem_destroy(&chopsticks[i]);
    }
    sem_destroy(&limit);

    fclose(fp);
    exit(0);
}

int main() {
    pthread_t tid[N];
    int id[N];
    srand(time(NULL));

    // open the output file
    fp = fopen("test_result.txt", "w");
    if (fp == NULL) {
        perror("Failed to open file");
        exit(1);
    }
    
    // set up signal handler for SIGINT
    signal(SIGINT, sigint_handler);
    
    fprintf(fp, "========== Dining Philosophers Test Results ==========\n");
    fflush(fp);


    // initialize the semaphores
    for (int i = 0; i < N; i++) {
        sem_init(&chopsticks[i], 0, 1);
        id[i] = i;
    }
    sem_init(&limit, 0, N - 1);

    // create philosopher threads
    for (int i = 0; i < N; i++) {
        pthread_create(&tid[i], NULL, philosopher, &id[i]);
    }

    // wait for threads
    for (int i = 0; i < N; i++) {
        pthread_join(tid[i], NULL);
    }

    return 0;
}