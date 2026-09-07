/**
 * test2_1a.c
 * exit after receiving 3 Ctrl-C signals
 */
#include <stdio.h>    // printf 
#include <stdlib.h>   // exiI
#include <signal.h>   // signal, #define SIGINT 2
#include <unistd.h>   // sleep

int goOnFlag = 1, cnt = 0; // global varaible

void MyExit(int sig) {
    if (cnt < 3){
        cnt++;
    }
    printf("%d in MyExit\n", cnt);
    if (cnt == 3){
        printf("OK!\n");
        goOnFlag = 0;
    }
}

int main(){
    signal( SIGINT, MyExit );  

    while (goOnFlag){
        printf("Hello...\n");
        sleep(1);
    }

    exit(0);
}