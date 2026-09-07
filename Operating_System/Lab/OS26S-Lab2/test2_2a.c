/**
 * test2_2a.c
 * Parent process displays "How are you!" for 3 times, then sends signal and parameter to child process, wait and exit.
 * Child process displays "I am child" until receives signal from parent process
 * Child process displays the parameter and its square.
 */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int goOnFlag = 1, x = 0;
void MyFunc(int sig){
    x = 15;
    goOnFlag = 0;
}

int main(){
    int p1;
    while ((p1=fork()) == -1) /*!*/ ;
    if (p1 > 0){ // parent process
        for (int i=1; i <= 3; i++){
            printf("How are you!\n");
            sleep(1);
        }
        kill(p1, 12); // send signal 12 to child process
        wait(0);
        printf("Parent process exited!\n");
        exit(0);
    } else{ // child process
        signal(12, MyFunc);
        printf("Child: Parameter before signal 12: %d\n", x);
        goOnFlag = 1;

        while (goOnFlag == 1){
            printf("I am child!\n");
            sleep(1);
        }
        
        printf("Child: Parameter after signal 12: %d\n", x);
        printf("Child exited!\n");
        printf("%d\n", x * x);
        exit(0);
    }
}