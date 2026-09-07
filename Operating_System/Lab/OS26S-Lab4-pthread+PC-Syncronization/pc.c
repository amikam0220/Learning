#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
 
#define PRO_NUM 3   //Number of producer thread
#define CON_NUM 2   //Number of consumer thread
pthread_cond_t n_full;
pthread_cond_t n_empty;
pthread_mutex_t mutex;
 
int g_num = 0;      //Number of products
int empty_num = 3;  //Size of buffer
 
// producer
void* pro_route(void* arg) {
    // get the id of thread
    int id = *(int *)arg;

    
    while (1){
        // lock
        pthread_mutex_lock(&mutex);
        // check whether the buffer is full.
        while (empty_num == 0){
            // unlock if so and block until the buffer is not full.
            printf("Producer thread %d must wait.\n", id);
            pthread_cond_wait(&n_empty, &mutex);
        }

        printf("Producer thread %d now produce.\n", id);
        // produce the product
        g_num++;
        empty_num--;
        printf("The number of products produced %d.\n", g_num);

        // set the signal to consumer and unlock
        pthread_cond_signal(&n_full);
        pthread_mutex_unlock(&mutex);

        // sleep to switch the thread clearly
        sleep(rand() % 3);
    }

    return NULL;
}


// consumer
void *con_route(void* arg) {
    // get the id of thread
    int id = *(int *)arg;

    
    while(1){
        // lock 
        pthread_mutex_lock(&mutex);
        // chech whether the buffer is empty
        while (g_num == 0){
            // unlock if so and block until the buffer is not empty
            pthread_cond_wait(&n_full, &mutex);
        }

        printf("The consumer thread %d consumes product %d.\n", id, g_num);
        // consume the product
        g_num--;
        empty_num++;
        printf("The consumer thread %d has finished consuming product\n", id);
        printf("Now there exist empty buffer, the number of empty buffer is %d\n", empty_num);

        // set the signal to producer and unlock
        pthread_cond_signal(&n_empty);
        pthread_mutex_unlock(&mutex);

        // sleep to switch the thread clearly
        sleep(rand() % 3);
    }

    return NULL;
}

int main( ) {
    srand( getpid() );   
    // set the seed for random number generator with current pid
    // or you may use time(NULL) as the seed
    // you might use rand() in pro_route() :-)
 
    pthread_t tids[ PRO_NUM + CON_NUM ];
    
	// Initialize mutex and condition variables
    pthread_mutex_init( &mutex, NULL );
    pthread_cond_init( &n_full, NULL );   // Condition varible n_full
    pthread_cond_init( &n_empty, NULL );  // Condition variable n_empty
 
    // Create producer thread
    for (int i = 0; i< PRO_NUM; ++i) {
        int* p = (int*)malloc( sizeof(int) );  // pass i as thread no
        *p = i;
        pthread_create( &tids[i], NULL, pro_route, p );
    }

    // Create consumer thread
    for (int i = 0; i< CON_NUM; ++i) {
        int* p = (int*)malloc(sizeof(int)); 
        *p = i;
        pthread_create( &tids[i], NULL, con_route, p );
    }

    for (int i = 0; i< PRO_NUM + CON_NUM; ++i) {
        pthread_join( tids[i], NULL );
    }
    	
    pthread_mutex_destroy( &mutex );
    pthread_cond_destroy( &n_full );
    pthread_cond_destroy( &n_empty );
 
    return 0;
}