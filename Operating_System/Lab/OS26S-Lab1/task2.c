#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(){
    int cnt = 0;
    while (cnt < 5){
        pid_t pid = fork();
        if (pid == 0){
            // create child process, exit immediately after printing
            printf("Child here. PID: %d, PPID: %d\n", getpid(), getppid());
            exit(0);
        }else if (pid > 0){
            // parent process, wait for child to finish
            wait(NULL);
        }else{
            printf("Fork failed.\n");
            exit(1);
        }
        cnt++;
    }
}