#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(){
    int cnt = 0;
    printf("Parent here. PID: %d\n", getpid());
    while (cnt < 4){
        pid_t pid = fork();
        if (pid < 0){
            printf("Fork failed.\n");
            exit(1);
        }else if (pid == 0){
            // child process
            // print child process and increment cnt
            printf("Child here. PID: %d, PPID: %d\n", getpid(), getppid());
            cnt++;
        }else{
            // parent process
            // wait for child to finish to ensure the order of processes
            wait(NULL);
            break;
        }
    }
}